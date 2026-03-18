/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x1406DECFC
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x1406DEEDC (PspDeleteSilo.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwDeleteSiloState @ 0x14070C6D8 (EtwDeleteSiloState.c)
 *     ExpWnfDeleteScopeInstances @ 0x1407230A8 (ExpWnfDeleteScopeInstances.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct _KEVENT *v9; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ObfDereferenceDeviceMap(v2);
  v3 = a1 + 784;
  if ( *((_QWORD *)a1 + 99) || *((_QWORD *)a1 + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6C6uLL, 0LL);
  if ( *((_QWORD *)a1 + 113) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*((_QWORD *)a1 + 113), 2LL);
    ExpWnfDeleteScopeInstances(*((_QWORD *)a1 + 113), 0LL);
    ExFreePoolWithTag(*((PVOID *)a1 + 113), 0x20666E57u);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( *((_QWORD *)a1 + 114) )
    ZwClose(*((HANDLE *)a1 + 114));
  if ( *((_QWORD *)a1 + 115) )
    ZwClose(*((HANDLE *)a1 + 115));
  if ( *((_QWORD *)a1 + 108) )
  {
    EtwDeleteSiloState();
    *((_QWORD *)a1 + 108) = 0LL;
  }
  if ( *((_QWORD *)a1 + 130) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1032));
    *((_QWORD *)a1 + 130) = 0LL;
  }
  v5 = (void *)*((_QWORD *)a1 + 124);
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    *((_QWORD *)a1 + 124) = 0LL;
  }
  v6 = (void *)*((_QWORD *)a1 + 125);
  if ( v6 )
  {
    MmUnmapViewInSystemSpace(v6);
    *((_QWORD *)a1 + 125) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a1 + 123);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x6C537350u);
    *((_QWORD *)a1 + 123) = 0LL;
  }
  if ( *((_QWORD *)a1 + 135) )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)a1 + 134));
    v8 = (void *)*((_QWORD *)a1 + 135);
    *((_QWORD *)a1 + 134) = 0LL;
    ObfDereferenceObject(v8);
    *((_QWORD *)a1 + 135) = 0LL;
  }
  v9 = (struct _KEVENT *)*((_QWORD *)a1 + 133);
  if ( v9 )
  {
    KeSetEvent(v9, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)a1 + 133), 0x65446953u);
    *((_QWORD *)a1 + 133) = 0LL;
  }
  ExFreePoolWithTag(a1, 0x476C6953u);
}
