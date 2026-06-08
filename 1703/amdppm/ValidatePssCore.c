/*
 * XREFs of ValidatePssCore @ 0x1C00282BC
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C0027B04 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C0027BE8 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_sD @ 0x1C0002764 (WPP_RECORDER_SF_sD.c)
 *     Display_PSS @ 0x1C0003470 (Display_PSS.c)
 *     WPP_RECORDER_SF_sDD @ 0x1C000A67C (WPP_RECORDER_SF_sDD.c)
 */

__int64 __fastcall ValidatePssCore(unsigned int *a1, const char *a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // r10d
  unsigned int v6; // ecx
  __int64 v7; // r9
  _DWORD *i; // rdx
  int v10; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a1[2] )
  {
    v5 = *a1;
    v6 = 1;
    if ( v5 > 1 )
    {
      v7 = 0LL;
      for ( i = a1 + 14; *i < a1[12 * (unsigned int)v7 + 2] && i[1] <= a1[12 * (unsigned int)v7 + 3] && *i; i += 12 )
      {
        ++v6;
        v7 = (unsigned int)(v7 + 1);
        if ( v6 >= v5 )
          return v2;
      }
      WPP_RECORDER_SF_sDD((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)i, 0LL, v7, v10, a2);
      Display_PSS(a1);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    Number = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_sD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x29u,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      a2,
      Number);
    return (unsigned int)-1073741811;
  }
  return v2;
}
