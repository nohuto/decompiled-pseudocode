/*
 * XREFs of CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02CEFDC
 * Callers:
 *     itrp_ALIGNPTS @ 0x1C02CFD50 (itrp_ALIGNPTS.c)
 *     itrp_ALIGNRP @ 0x1C02CFFF0 (itrp_ALIGNRP.c)
 *     itrp_DeltaEngine @ 0x1C02D0D3C (itrp_DeltaEngine.c)
 *     itrp_FLIPPT @ 0x1C02D1D20 (itrp_FLIPPT.c)
 *     itrp_FLIPRGOFF @ 0x1C02D1ED0 (itrp_FLIPRGOFF.c)
 *     itrp_FLIPRGON @ 0x1C02D2110 (itrp_FLIPRGON.c)
 *     itrp_IP @ 0x1C02D2CC0 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C02D3690 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C02D3DF0 (itrp_IUP.c)
 *     itrp_MD @ 0x1C02D4EA0 (itrp_MD.c)
 *     itrp_MDAP @ 0x1C02D53B0 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02D5580 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02D5AA0 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02D5EC0 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D6800 (itrp_MSIRP.c)
 *     itrp_RC @ 0x1C02D7700 (itrp_RC.c)
 *     itrp_SDPVTL @ 0x1C02D8390 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02D8860 (itrp_SFVTL.c)
 *     itrp_SHC @ 0x1C02D8B20 (itrp_SHC.c)
 *     itrp_SHE @ 0x1C02D8F60 (itrp_SHE.c)
 *     itrp_SHP @ 0x1C02D9490 (itrp_SHP.c)
 *     itrp_SHP_Common @ 0x1C02D9794 (itrp_SHP_Common.c)
 *     itrp_SPVTL @ 0x1C02D9D40 (itrp_SPVTL.c)
 *     itrp_UTP @ 0x1C02DAA30 (itrp_UTP.c)
 *     itrp_WC @ 0x1C02DAD20 (itrp_WC.c)
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
