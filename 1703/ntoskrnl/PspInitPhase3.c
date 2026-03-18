/*
 * XREFs of PspInitPhase3 @ 0x1408269D4
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x140809E88 (PsInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x14049C0D0 (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x14049C278 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x1406BF1BC (MmGetSectionStrongImageReference.c)
 */

bool PspInitPhase3()
{
  void *v1; // rbx
  NTSTATUS SectionStrongImageReference; // edi
  int v3; // ebx
  __int64 v4; // [rsp+20h] [rbp-C8h] BYREF
  $5BC46E0569261879018906DEC3127961 v5; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v6[8]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v7; // [rsp+68h] [rbp-80h]

  if ( !VslVsmEnabled )
    return 1;
  v1 = (void *)PspReferenceSystemDll((signed __int64 *)PspSystemDlls);
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, 0, v1, &v4);
  if ( v1 )
    ObFastDereferenceObject((signed __int64 *)PspSystemDlls, (unsigned __int64)v1);
  if ( SectionStrongImageReference < 0 )
    return 0;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v5);
  v3 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (signed __int64 *)PspSystemDlls, 0, 0);
  if ( v3 >= 0 )
  {
    v7 = v4;
    v3 = VslpEnterIumSecureMode(1, 3LL, 0LL, (__int64)v6);
  }
  KiUnstackDetachProcess(&v5, 0LL);
  return v3 >= 0;
}
