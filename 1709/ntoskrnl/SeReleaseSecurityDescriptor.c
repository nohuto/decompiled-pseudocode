/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14049CFE0
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     AlpcpConnectPort @ 0x14046378C (AlpcpConnectPort.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14046D680 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14046D7AC (NtOpenObjectAuditAlarm.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 *     ObpFreeObject @ 0x1404A3CE0 (ObpFreeObject.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404ACCF0 (ObpCaptureObjectCreateInformation.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404E38B0 (ObDeleteCapturedInsertInfo.c)
 *     NtCreateWnfStateName @ 0x140504994 (NtCreateWnfStateName.c)
 *     CmpCopySaclToVirtualKey @ 0x140693140 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
