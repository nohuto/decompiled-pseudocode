/*
 * XREFs of SepValidLabelSubjectContext @ 0x1405395EC
 * Callers:
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlSidDominates @ 0x140087AD0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1400E4A04 (SepCopyTokenIntegrity.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 */

BOOLEAN __fastcall SepValidLabelSubjectContext(__int64 *a1, char *a2, char a3)
{
  char *SeMediumMandatorySid; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al
  char *Buf1; // [rsp+20h] [rbp-18h]
  BOOLEAN v9; // [rsp+40h] [rbp+8h] BYREF

  SeMediumMandatorySid = a2;
  if ( !a2 )
    SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  v5 = *a1;
  if ( !*a1 )
    v5 = a1[2];
  if ( *(_DWORD *)(v5 + 192) == 2 && *(int *)(v5 + 196) < 2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v5 + 48), 1u);
  SepCopyTokenIntegrity(v5);
  ExReleaseResourceLite(*(PERESOURCE *)(v5 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (a3 & 8) != 0 )
  {
    if ( (int)RtlSidDominates(SeMediumMandatorySid, (char *)SeExports->SeMediumMandatorySid, (bool *)&v9) < 0 )
      return 0;
    if ( !v9 )
      SeMediumMandatorySid = (char *)SeExports->SeMediumMandatorySid;
  }
  if ( (int)RtlSidDominates(Buf1, SeMediumMandatorySid, (bool *)&v9) < 0 )
    return 0;
  result = v9;
  if ( !v9 )
    return SeSinglePrivilegeCheck(SeRelabelPrivilege, 1);
  return result;
}
