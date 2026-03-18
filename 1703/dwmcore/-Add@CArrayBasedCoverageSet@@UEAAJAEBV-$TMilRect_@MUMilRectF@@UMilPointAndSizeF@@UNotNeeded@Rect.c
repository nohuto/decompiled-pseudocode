/*
 * XREFs of ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18006FB10
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::Add(__int64 a1, __int128 *a2, int a3)
{
  __int128 v3; // xmm0
  __int64 *v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-20h]

  v3 = *a2;
  v15 = a3;
  v4 = (__int64 *)(a1 + 24);
  v5 = *(unsigned int *)(a1 + 48);
  v6 = v13;
  v14 = v3;
  v7 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    v6 = v5 + 1;
  v8 = v7 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v7 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v6 > *((_DWORD *)v4 + 5) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(v4, 20LL, 1LL, &v14);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
  }
  else
  {
    v9 = 5 * v5;
    v10 = *v4;
    *(_OWORD *)(v10 + 4 * v9) = v3;
    *(_DWORD *)(v10 + 4 * v9 + 16) = v15;
    *((_DWORD *)v4 + 6) = v6;
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x40u);
  return (unsigned int)v8;
}
