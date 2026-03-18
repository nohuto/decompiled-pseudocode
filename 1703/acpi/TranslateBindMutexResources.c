/*
 * XREFs of TranslateBindMutexResources @ 0x1C0048860
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0023590 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0050258 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateBindMutexResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  PVOID v6; // rsi
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  Object = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
  {
    return 0;
  }
  else
  {
    ACPIInternalGetDeviceFromNSOBJ(a2, &Object, a3, 0LL);
    v6 = Object;
    if ( Object )
      v5 = PnpBiosResourcesToNtResources(Object, a3, 4LL);
    else
      v5 = -1073741661;
    if ( v5 < 0 || MEMORY[0x24] == 1 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
        v5 = 0;
      v6 = Object;
    }
    else
    {
      v5 = -1073741637;
    }
    if ( v6 )
      ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
