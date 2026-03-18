/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x14071514C
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x14071534C (PspDeleteSilo.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x1404C7780 (ObfDereferenceDeviceMap.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwDeleteSiloState @ 0x140747D48 (EtwDeleteSiloState.c)
 *     ExpWnfDeleteScopeInstances @ 0x140762B58 (ExpWnfDeleteScopeInstances.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  struct _KEVENT *v10; // rcx

  v2 = (void *)*((_QWORD *)P + 123);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 123) = 0LL;
  }
  if ( *(_QWORD *)P )
    ObfDereferenceDeviceMap(*(PVOID *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D1uLL, 0LL);
  if ( *((_QWORD *)P + 113) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 113), 2LL);
    ExpWnfDeleteScopeInstances(*((_QWORD *)P + 113), 0LL);
    ExFreePoolWithTag(*((PVOID *)P + 113), 0x20666E57u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( *((_QWORD *)P + 114) )
    ZwClose(*((HANDLE *)P + 114));
  if ( *((_QWORD *)P + 115) )
    ZwClose(*((HANDLE *)P + 115));
  v5 = (void *)*((_QWORD *)P + 108);
  if ( v5 )
  {
    EtwDeleteSiloState(v5);
    *((_QWORD *)P + 108) = 0LL;
  }
  if ( *((_QWORD *)P + 134) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 1064));
    *((_QWORD *)P + 134) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 128);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)P + 128) = 0LL;
  }
  v7 = (void *)*((_QWORD *)P + 129);
  if ( v7 )
  {
    MmUnmapViewInSystemSpace(v7);
    *((_QWORD *)P + 129) = 0LL;
  }
  v8 = (void *)*((_QWORD *)P + 127);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x6C537350u);
    *((_QWORD *)P + 127) = 0LL;
  }
  if ( *((_QWORD *)P + 139) )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)P + 138));
    v9 = (void *)*((_QWORD *)P + 139);
    *((_QWORD *)P + 138) = 0LL;
    ObfDereferenceObject(v9);
    *((_QWORD *)P + 139) = 0LL;
  }
  v10 = (struct _KEVENT *)*((_QWORD *)P + 137);
  if ( v10 )
  {
    KeSetEvent(v10, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 137), 0x65446953u);
    *((_QWORD *)P + 137) = 0LL;
  }
  ExFreePoolWithTag(P, 0x476C6953u);
}
