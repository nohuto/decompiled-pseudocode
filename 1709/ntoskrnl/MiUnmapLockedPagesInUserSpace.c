/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x14000EC64
 * Callers:
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiCheckSecuredVad @ 0x140462914 (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 */

__int64 __fastcall MiUnmapLockedPagesInUserSpace(unsigned __int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // r14
  __int64 *v5; // rdi
  __int64 result; // rax
  void *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 PteShadow; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  __int16 v13; // r11
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = (((a2[8] + a2[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = MiObtainReferencedVad(a1, &v14);
  v7 = (void *)result;
  if ( result )
  {
    v8 = *(unsigned int *)(result + 24);
    if ( (*(_DWORD *)(result + 48) & 7) == 1
      && (a1 & 0xFFFFFFFFFFFFF000uLL) == (v8 | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32)) << 12
      && v2 == (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32))
             - (v8 | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
             + 1 )
    {
      v9 = (__int64)a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
      while ( 1 )
      {
        PteShadow = *v5;
        if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v5, *v5);
        v14 = PteShadow;
        if ( *(__int64 *)((char *)v5 + v9 + 48) != MI_GET_PAGE_FRAME_FROM_PTE(&v14) )
          break;
        ++v5;
        if ( !--v2 )
        {
          if ( (v13 & 0x4000) == 0 || (int)MiCheckSecuredVad(v7, v12, (v11 + 1) << 12, 85LL) >= 0 )
            return MiUnmapVad(v7, 0LL);
          return MiUnlockAndDereferenceVad(v7);
        }
      }
    }
    return MiUnlockAndDereferenceVad(v7);
  }
  return result;
}
