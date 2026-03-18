/*
 * XREFs of SeRmInitPhase1 @ 0x140808D3C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreatePort @ 0x14017F540 (ZwCreatePort.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405A6C14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAdtInitializeAuditingOptions @ 0x140808DF4 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L" \"";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreatePort(&PortHandle, &ObjectAttributes, 4u, 0x200u, 0x4000u) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(&ThreadHandle, 0x38u, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SepRmCommandServerThread, 0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
  ZwClose(ThreadHandle);
  ThreadHandle = 0LL;
  return 1;
}
