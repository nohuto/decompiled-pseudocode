/*
 * XREFs of ?Optimize@?$ShrinkableReferenceArray@PEAVCHWCallbackRenderer@@@@QEAAXI@Z @ 0x1800BEA24
 * Callers:
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180045150 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

void __fastcall ShrinkableReferenceArray<CHWCallbackRenderer *>::Optimize(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  __int64 v9; // rbx
  void *v10; // rbx
  int v11; // ecx
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
        v8 = v3;
        v3 = v6;
        v7 = v8 - v6;
        if ( v7 )
        {
          v9 = v7;
          do
          {
            CMILRefCountBase::Release((CMILRefCountBase *)(*(_QWORD *)(v5 + *(_QWORD *)a1) + 8LL));
            v5 += 8LL;
            --v9;
          }
          while ( v9 );
        }
      }
      v10 = v12[0];
      memcpy_0(v12[0], (const void *)(*(_QWORD *)a1 + 8LL * v7), 8LL * v3);
      v11 = HIDWORD(v13);
      v12[0] = *(void **)a1;
      HIDWORD(v13) = *(_DWORD *)(a1 + 20);
      v14 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v10;
      *(_DWORD *)(a1 + 20) = v11;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v12);
  }
}
