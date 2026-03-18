/*
 * XREFs of MiClusterVadActive @ 0x14022ECAC
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiClusterVadActive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  int v7; // edi
  __int64 *v8; // r9
  __int64 v9; // rbx
  __int64 PteShadow; // rax
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  *a3 = -1LL;
  v5 = v3 << 25 >> 16;
  v6 = v5 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v5 & 0xFFFFFFFFFFFF0000uLL) >> 12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || (v6 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v7 = 0;
  v8 = (__int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 0LL;
  do
  {
    PteShadow = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v14 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v11 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v14);
      if ( (v11 & 0xF) != (unsigned int)v9 )
        return 0LL;
      if ( v12 != -1 )
      {
        if ( v11 != v9 + v12 )
          return 0LL;
        v7 = 1;
      }
    }
    v9 = (unsigned int)(v9 + 1);
    ++v8;
  }
  while ( (unsigned int)v9 < 0x10 );
  if ( !v7 )
  {
    *a3 = (unsigned __int16)v5 >> 12;
    return 0LL;
  }
  return 1LL;
}
