/*
 * XREFs of PopAssociateThermalRequest @ 0x1406F6D24
 * Callers:
 *     PoCreateThermalRequest @ 0x1406F69D0 (PoCreateThermalRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopGetDope @ 0x14012E384 (PopGetDope.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140243DD4 (PopThermalUpdateTelemetryClientCount.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopDiagTraceThermalRequest @ 0x1404518D8 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x140451B7C (PopDiagTraceCoolingExtension.c)
 *     PopAcquireCoolingInterface @ 0x1406F6C9C (PopAcquireCoolingInterface.c)
 *     PopCleanCoolingExtension @ 0x1406F6F14 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406F7354 (PopRegisterCoolingExtensionProtection.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  __int64 Dope; // rsi
  int v8; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rcx

  v6 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_12;
  PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6C6F4350u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x90uLL);
  v6[3] = v6 + 2;
  v6[2] = v6 + 2;
  v6[4] = 0LL;
  v6[5] = 0LL;
  v6[4] = 0LL;
  *((_BYTE *)v6 + 66) = 100;
  v6[6] = a2;
  v8 = PopAcquireCoolingInterface((__int64)v6);
  if ( v8 >= 0 )
  {
    *((_BYTE *)v6 + 64) = 1;
    if ( !a3 || (v8 = PopRegisterCoolingExtensionProtection(v6), v8 >= 0) )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
      if ( !*(_QWORD *)(Dope + 64) )
      {
        v10 = (_QWORD *)qword_140365618;
        if ( *(__int64 **)qword_140365618 != &PopCoolingExtensionList )
          __fastfail(3u);
        *v6 = &PopCoolingExtensionList;
        v6[1] = v10;
        *v10 = v6;
        qword_140365618 = (__int64)v6;
        *(_QWORD *)(Dope + 64) = v6;
        PopDiagTraceCoolingExtension((__int64)v6, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
        v6 = 0LL;
        a3 = 0;
      }
LABEL_12:
      if ( a3 && (v8 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64)), v8 < 0) )
      {
        PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
      }
      else
      {
        PopAcquireRwLockExclusive(*(_QWORD *)(Dope + 64) + 32LL);
        v11 = *(_QWORD *)(Dope + 64);
        *(_QWORD *)(a1 + 32) = v11;
        v12 = v11 + 16;
        v13 = *(__int64 **)(v12 + 8);
        if ( *v13 != v12 )
          __fastfail(3u);
        *(_QWORD *)(a1 + 8) = v13;
        *(_QWORD *)a1 = v12;
        *v13 = a1;
        *(_QWORD *)(v12 + 8) = a1;
        *(_BYTE *)(a1 + 18) = 1;
        PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_ADD);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
          PopThermalUpdateTelemetryClientCount(1);
        PopReleaseRwLock(*(_QWORD *)(Dope + 64) + 32LL);
        PopReleaseRwLock((ULONG_PTR)&PopCoolingExtensionLock);
        v8 = 0;
      }
    }
  }
  if ( v6 )
    PopCleanCoolingExtension(v6);
  return (unsigned int)v8;
}
