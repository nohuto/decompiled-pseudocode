/*
 * XREFs of ACPIEcStartDevice @ 0x1C004BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcCreateEcData @ 0x1C004BB6C (ACPIEcCreateEcData.c)
 *     AMLIIsEqualHandle @ 0x1C005B7B8 (AMLIIsEqualHandle.c)
 */

__int64 __fastcall ACPIEcStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  ULONG_PTR *v7; // r8
  ULONG_PTR *EcData; // rax
  __int64 result; // rax
  ULONG_PTR v10; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = DeviceExtension;
  v7 = *(ULONG_PTR **)(DeviceExtension + 184);
  if ( !v7 )
  {
    if ( !gECDTContext
      || !(unsigned __int8)AMLIIsEqualHandle(*(_QWORD *)(DeviceExtension + 712), *(_QWORD *)(gECDTContext + 56)) )
    {
      EcData = (ULONG_PTR *)ACPIEcCreateEcData();
      v7 = EcData;
      if ( !EcData )
        return 3221225626LL;
      v10 = *(_QWORD *)(v6 + 712);
      EcData[7] = v10;
      dword_1C00797B8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    *(_QWORD *)(v6 + 184) = v7;
  }
  *v7 = a1;
  result = ACPIInitStartDevice(
             a1,
             v5,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))&ACPIEcStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
