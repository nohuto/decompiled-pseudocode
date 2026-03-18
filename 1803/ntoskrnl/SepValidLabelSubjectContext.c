/*
 * XREFs of SepValidLabelSubjectContext @ 0x1404EBF4C
 * Callers:
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x14005CC30 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14006A264 (SepCopyTokenIntegrity.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     SeSinglePrivilegeCheckEx @ 0x1404D569C (SeSinglePrivilegeCheckEx.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(struct _SECURITY_SUBJECT_CONTEXT *a1, char *a2, char a3)
{
  char *SeMediumMandatorySid; // rdi
  __int64 ClientToken; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al
  char *Buf1; // [rsp+20h] [rbp-18h]
  BOOLEAN v10; // [rsp+40h] [rbp+8h] BYREF

  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  ClientToken = (__int64)a1->ClientToken;
  if ( !a1->ClientToken )
    ClientToken = (__int64)a1->PrimaryToken;
  if ( *(_DWORD *)(ClientToken + 192) == 2 && *(int *)(ClientToken + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(ClientToken + 48), 1u);
  SepCopyTokenIntegrity(ClientToken);
  ExReleaseResourceLite(*(PERESOURCE *)(ClientToken + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(SeMediumMandatorySid, (char *)SeExports->SeMediumMandatorySid, (char *)&v10) < 0 )
      return 0;
    if ( !v10 )
      SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  }
  if ( (int)RtlSidDominates(Buf1, SeMediumMandatorySid, (char *)&v10) < 0 )
    return 0;
  result = v10;
  if ( !v10 )
    return SeSinglePrivilegeCheckEx((LUID)SeRelabelPrivilege, a1, 1);
  return result;
}
