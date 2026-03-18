/*
 * XREFs of TranslateBindMutexResources @ 0x1C0019828
 * Callers:
 *     AcpiHandleDeviceFirmwareLock @ 0x1C0018F00 (AcpiHandleDeviceFirmwareLock.c)
 * Callees:
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0029E0C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall TranslateBindMutexResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  PVOID v6; // rsi
  PVOID v7; // rbx
  signed __int64 v8; // rax
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  Object = 0LL;
  P[0] = 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), 0LL, 0LL) )
  {
    return 0;
  }
  else
  {
    ACPIInternalGetDeviceFromNSOBJ(a2, &Object, a3, 0LL);
    v6 = Object;
    if ( Object )
      v5 = PnpBiosResourcesToNtResources(Object, a3, 4LL, P);
    else
      v5 = -1073741661;
    v7 = P[0];
    if ( v5 < 0 || *((_DWORD *)P[0] + 9) == 1 )
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), (signed __int64)P[0], 0LL);
      v7 = P[0];
      if ( v8 )
      {
        if ( P[0] )
        {
          ExFreePoolWithTag(P[0], 0);
          v7 = 0LL;
        }
        v5 = 0;
      }
      v6 = Object;
    }
    else
    {
      v5 = -1073741637;
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v5 < 0 && v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)v5;
}
