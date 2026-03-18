/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C008CA30
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0020DA8 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C00281D0 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     AcpiGetD3ColdCapability @ 0x1C008C9D0 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rbp
  int v8; // edi
  _BYTE v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+22h] [rbp-46h]
  unsigned int v11; // [rsp+30h] [rbp-38h]

  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 712), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = 0;
  v7 = result;
  if ( result )
  {
    v8 = AMLIEvalNameSpaceObject((__int64 *)result, v9, 0, 0LL);
    AMLIDereferenceHandleEx(v7);
    if ( v8 >= 0 )
    {
      if ( v10 == 1 )
      {
        if ( v11 < 5 )
          v6 = v11 + 1;
        *a3 = v6;
        if ( v6 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 952) & 0x800LL) == 0 )
            v6 = 4;
          *a3 = v6;
        }
      }
      else
      {
        v8 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)v9);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) == 0 )
      return 3221226021LL;
    *a3 = 4;
  }
  return result;
}
