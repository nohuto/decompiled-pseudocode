/*
 * XREFs of MiValidateUserCallTarget @ 0x14041DF28
 * Callers:
 *     MiCfgMarkValidEntries @ 0x14049AE2C (MiCfgMarkValidEntries.c)
 *     MmValidateUserCallTarget @ 0x1406BD808 (MmValidateUserCallTarget.c)
 * Callees:
 *     CfgAddressToBitState @ 0x1400014A8 (CfgAddressToBitState.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x1400014EC (MiIsProcessCfgExportSuppressionEnabled.c)
 */

__int64 __fastcall MiValidateUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  char v2; // di
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v7; // edx
  bool v8; // zf

  v2 = a1;
  v3 = 0;
  v4 = CfgAddressToBitState(a1, *a2);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        v8 = v7 == 1;
      }
      else
      {
        if ( MiIsProcessCfgExportSuppressionEnabled() )
          return v3;
        v8 = (v2 & 0xF) == 0;
      }
      if ( v8 )
        return 1;
    }
    else
    {
      return (v2 & 0xF) == 0;
    }
  }
  return v3;
}
