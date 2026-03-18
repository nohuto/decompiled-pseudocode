/*
 * XREFs of CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C8D90
 * Callers:
 *     itrp_ALIGNPTS @ 0x1C02C9AD0 (itrp_ALIGNPTS.c)
 *     itrp_ALIGNRP @ 0x1C02C9D60 (itrp_ALIGNRP.c)
 *     itrp_DeltaEngine @ 0x1C02CAB5C (itrp_DeltaEngine.c)
 *     itrp_FLIPPT @ 0x1C02CBAF0 (itrp_FLIPPT.c)
 *     itrp_FLIPRGOFF @ 0x1C02CBC90 (itrp_FLIPRGOFF.c)
 *     itrp_FLIPRGON @ 0x1C02CBED0 (itrp_FLIPRGON.c)
 *     itrp_IP @ 0x1C02CCA70 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C02CD440 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C02CDBA0 (itrp_IUP.c)
 *     itrp_MD @ 0x1C02CEC40 (itrp_MD.c)
 *     itrp_MDAP @ 0x1C02CF180 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02CF860 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02CFC80 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D05B0 (itrp_MSIRP.c)
 *     itrp_RC @ 0x1C02D1430 (itrp_RC.c)
 *     itrp_SDPVTL @ 0x1C02D2080 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02D2560 (itrp_SFVTL.c)
 *     itrp_SHC @ 0x1C02D2810 (itrp_SHC.c)
 *     itrp_SHE @ 0x1C02D2C60 (itrp_SHE.c)
 *     itrp_SHP @ 0x1C02D3180 (itrp_SHP.c)
 *     itrp_SHP_Common @ 0x1C02D3484 (itrp_SHP_Common.c)
 *     itrp_SPVTL @ 0x1C02D3A10 (itrp_SPVTL.c)
 *     itrp_UTP @ 0x1C02D46F0 (itrp_UTP.c)
 *     itrp_WC @ 0x1C02D49E0 (itrp_WC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  _WORD *v4; // r10
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // ax
  unsigned int v8; // r8d
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  int v12; // r10d
  __int16 v13; // ax

  v3 = 1;
  if ( a2 == *(_QWORD *)(a1 + 56) + 112LL )
  {
    v4 = *(_WORD **)(*(_QWORD *)(a1 + 64) + 344LL);
    v5 = v4[4];
    v6 = v4[6];
    v7 = v6;
    if ( v5 > v6 )
      v7 = v4[4];
    if ( v7 <= 1u )
    {
      v8 = 1;
    }
    else
    {
      if ( v5 > v6 )
        v6 = v4[4];
      v8 = v6;
    }
    v9 = v4[3];
    v10 = v4[5];
    v11 = v10;
    if ( v9 > v10 )
      v11 = v4[3];
    if ( v11 <= 1u )
    {
      v12 = 1;
    }
    else
    {
      if ( v9 > v10 )
        v10 = v4[3];
      v12 = v10;
    }
    v13 = *(_WORD *)(a2 + 80);
    if ( v13 >= 1 )
    {
      if ( v13 > v8 )
        return (unsigned int)(*(_DWORD *)(a2 + 104) + 12 * (v12 + 8) - *(_DWORD *)(a2 + 64)) >= (unsigned __int64)(2LL * (v13 - 1));
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
