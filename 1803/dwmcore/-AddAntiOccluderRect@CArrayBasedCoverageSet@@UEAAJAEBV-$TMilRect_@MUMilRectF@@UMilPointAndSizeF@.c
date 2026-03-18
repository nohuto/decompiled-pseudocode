/*
 * XREFs of ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180064BF0
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800652C4 (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BE5FC (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::AddAntiOccluderRect(
        __int64 a1,
        __int128 *a2,
        int a3,
        const struct CMILMatrix *a4)
{
  __int128 v4; // xmm0
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+44h] [rbp-24h]

  v4 = *a2;
  v10 = a3;
  v11 = v4;
  CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)v9, a4);
  v6 = DynArray<CZOrderedRect,0>::AddMultipleAndSet(a1 + 416, v9);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x58u);
  return v7;
}
