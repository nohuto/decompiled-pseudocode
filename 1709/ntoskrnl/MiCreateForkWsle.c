/*
 * XREFs of MiCreateForkWsle @ 0x1401202B8
 * Callers:
 *     MiCreateForkWsles @ 0x1401201DC (MiCreateForkWsles.c)
 *     MiCreateForkWsle @ 0x1401202B8 (MiCreateForkWsle.c)
 * Callees:
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiCreateForkWsle @ 0x1401202B8 (MiCreateForkWsle.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiCreateForkWsle(__int64 a1, char a2, unsigned __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // rbx
  __int64 PteShadow; // rax
  _DWORD *v10; // r8
  char v11; // [rsp+58h] [rbp+10h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 <= a4 )
  {
    v11 = a2;
    v5 = a5;
    v7 = a3;
    do
    {
      PteShadow = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        PteShadow = MiReadPteShadow(v7, *(_QWORD *)v7);
        a2 = v11;
      }
      v12 = PteShadow;
      if ( (PteShadow & 1) != 0 && (PteShadow & 0x80u) == 0LL )
      {
        if ( v5 > 1 )
          MiCreateForkWsle(a1, a2, (__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, v5 - 1);
        v10 = (_DWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v12) - 0x58000000000LL);
        if ( (*v10 & 1) == 0 )
          MiAllocateWsle(a1, (__int64 *)v7, (__int64)v10, 0, ZeroPte, 0LL);
      }
      a2 = v11;
      v7 += 8LL;
    }
    while ( v7 <= a4 );
  }
}
