/*
 * XREFs of InvokeProject @ 0x1C02C9438
 * Callers:
 *     itrp_ALIGNPTS @ 0x1C02C9AD0 (itrp_ALIGNPTS.c)
 *     itrp_ALIGNRP @ 0x1C02C9D60 (itrp_ALIGNRP.c)
 *     itrp_IP @ 0x1C02CCA70 (itrp_IP.c)
 *     itrp_MD @ 0x1C02CEC40 (itrp_MD.c)
 *     itrp_MDAP @ 0x1C02CF180 (itrp_MDAP.c)
 *     itrp_MDRP @ 0x1C02CF350 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C02CF860 (itrp_MIAP.c)
 *     itrp_MIRP @ 0x1C02CFC80 (itrp_MIRP.c)
 *     itrp_MSIRP @ 0x1C02D05B0 (itrp_MSIRP.c)
 *     itrp_RC @ 0x1C02D1430 (itrp_RC.c)
 *     itrp_SH_Common @ 0x1C02D3718 (itrp_SH_Common.c)
 *     itrp_WC @ 0x1C02D49E0 (itrp_WC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvokeProject(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = (int)a2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    v8 = (__int16)dword_1C0327C68;
    v9 = SHIWORD(dword_1C0327C68);
    return (unsigned int)(((((unsigned int)(v3 * v8) >> 13) + 1) >> 1)
                        + ((((a3 * (unsigned int)v9) >> 13) + 1) >> 1)
                        + ((((unsigned __int64)((int)a3 * v9) >> 32) + ((unsigned __int64)(v3 * v8) >> 32)) << 18));
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = (__int16)dword_1C0327C70;
    v9 = SHIWORD(dword_1C0327C70);
    return (unsigned int)(((((unsigned int)(v3 * v8) >> 13) + 1) >> 1)
                        + ((((a3 * (unsigned int)v9) >> 13) + 1) >> 1)
                        + ((((unsigned __int64)((int)a3 * v9) >> 32) + ((unsigned __int64)(v3 * v8) >> 32)) << 18));
  }
  v6 = v5 - 1;
  if ( !v6 )
    return a2;
  if ( v6 == 1 )
    return a3;
  EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  return 0LL;
}
