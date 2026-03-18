/*
 * XREFs of ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z @ 0x1800C92FC
 * Callers:
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ShrinkableReferenceArray<CDrawListEntry *>::Optimize(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  __int64 v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // esi
  void *v8; // rbx
  int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rbx
  void *v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+48h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v2 > 0x10 && a2 < v2 / 3 )
  {
    v5 = 0LL;
    v6 = v2 >> 1;
    v13 = 0LL;
    v14 = 0;
    *(_OWORD *)v12 = 0LL;
    if ( (int)DynArrayImpl<0>::Grow((__int64)v12, 8u, v6, 1, 0LL) >= 0 )
    {
      v7 = 0;
      if ( v3 > v6 )
      {
        v10 = v3;
        v3 = v6;
        v7 = v10 - v6;
        if ( v7 )
        {
          v11 = v7;
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + *(_QWORD *)a1) + 8LL))(*(_QWORD *)(v5 + *(_QWORD *)a1));
            v5 += 8LL;
            --v11;
          }
          while ( v11 );
        }
      }
      v8 = v12[0];
      memcpy_0(v12[0], (const void *)(*(_QWORD *)a1 + 8LL * v7), 8LL * v3);
      v9 = HIDWORD(v13);
      v12[0] = *(void **)a1;
      HIDWORD(v13) = *(_DWORD *)(a1 + 20);
      v14 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v8;
      *(_DWORD *)(a1 + 20) = v9;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v12);
  }
}
