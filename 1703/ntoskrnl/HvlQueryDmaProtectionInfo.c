/*
 * XREFs of HvlQueryDmaProtectionInfo @ 0x1406874D4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpProcessIommu @ 0x1401E9CAC (HvlpProcessIommu.c)
 *     HviGetHardwareFeatures @ 0x1402618E0 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HvlQueryDmaProtectionInfo(_WORD *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  char v7; // al
  __int16 v9; // [rsp+20h] [rbp-38h]
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  if ( (unsigned int)a2 >= 2 )
  {
    LOBYTE(v9) = 0;
    if ( HvlHypervisorConnected )
    {
      if ( (((unsigned int)HvlpFlags >> 1) & 1) == 0 )
      {
        if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu() )
          LOBYTE(v9) = 1;
        HIBYTE(v9) = (HvlpFlags & 0x40) != 0;
        goto LABEL_12;
      }
      HviGetHardwareFeatures((__int64)v10, a2, (__int64)a3, a4);
      v7 = LOBYTE(v10[0]) >> 7;
      HIBYTE(v9) = LOBYTE(v10[0]) >> 7;
    }
    else
    {
      v7 = HvlpProcessIommu();
      HIBYTE(v9) = 0;
    }
    LOBYTE(v9) = v7;
LABEL_12:
    *a1 = v9;
    *a3 = 2;
    return v6;
  }
  v6 = -1073741584;
  *a3 = 0;
  return v6;
}
