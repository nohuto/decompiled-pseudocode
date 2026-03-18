/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C0079900
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C003A81C (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C003AB48 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     AcpiGetD3ColdCapability @ 0x1C00798A0 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  int v6; // ebx
  volatile signed __int32 *v7; // rbp
  int v8; // edi
  _BYTE v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+22h] [rbp-46h]
  unsigned int v11; // [rsp+30h] [rbp-38h]

  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(_QWORD **)(a1 + 712), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = 0;
  v7 = (volatile signed __int32 *)result;
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
