/*
 * XREFs of ?Optimize@?$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z @ 0x1800C9100
 * Callers:
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800961C0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

int __fastcall ShrinkableReferenceArray<CWARPCallbackRenderer *>::Optimize(__int64 a1, unsigned int a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // r14d
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  __int64 v10; // rbx
  void *v11; // rbx
  int v12; // ecx
  void *v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+48h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 24);
  if ( v3 > 0x10 )
  {
    LODWORD(v2) = -1431655765 * v3;
    if ( a2 < v3 / 3 )
    {
      v6 = 0LL;
      v7 = v3 >> 1;
      v15 = 0LL;
      v16 = 0;
      *(_OWORD *)v14 = 0LL;
      if ( (int)DynArrayImpl<0>::Grow((__int64)v14, 8u, v7, 1, 0LL) >= 0 )
      {
        v8 = 0;
        if ( v4 > v7 )
        {
          v9 = v4;
          v4 = v7;
          v8 = v9 - v7;
          if ( v8 )
          {
            v10 = v8;
            do
            {
              CMILRefCountBase::Release((CMILRefCountBase *)(*(_QWORD *)(v6 + *(_QWORD *)a1) + 8LL));
              v6 += 8LL;
              --v10;
            }
            while ( v10 );
          }
        }
        v11 = v14[0];
        memcpy_0(v14[0], (const void *)(*(_QWORD *)a1 + 8LL * v8), 8LL * v4);
        v12 = HIDWORD(v15);
        v14[0] = *(void **)a1;
        HIDWORD(v15) = *(_DWORD *)(a1 + 20);
        v16 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 24) = v4;
        *(_QWORD *)a1 = v11;
        *(_DWORD *)(a1 + 20) = v12;
      }
      LODWORD(v2) = DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v14);
    }
  }
  return (int)v2;
}
