/*
 * XREFs of SepValidOwnerSubjectContext @ 0x14057ED30
 * Callers:
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SepIdAssignableAsOwner @ 0x14057EE18 (SepIdAssignableAsOwner.c)
 */

BOOLEAN __fastcall SepValidOwnerSubjectContext(__int64 *a1, void *a2, char a3)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // esi
  char v7; // di
  unsigned int v8; // ebp
  __int64 v9; // r15
  char v10; // al
  struct _ERESOURCE *v11; // rcx

  if ( a2 )
  {
    if ( a3 || (v4 = *a1) == 0 )
      v4 = a1[2];
    if ( *(_DWORD *)(v4 + 192) != 2 || *(int *)(v4 + 196) >= 2 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = 0;
      --CurrentThread->KernelApcDisable;
      v7 = 1;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 48), 1u);
      v8 = *(_DWORD *)(v4 + 124);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v4 + 152);
        while ( !RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v6)) )
        {
          if ( ++v6 >= v8 )
            goto LABEL_16;
        }
        v10 = SepIdAssignableAsOwner(v4, v6);
        v11 = *(struct _ERESOURCE **)(v4 + 48);
        if ( v10 )
        {
          ExReleaseResourceLite(v11);
          KeLeaveCriticalRegion();
          return v7;
        }
      }
      else
      {
LABEL_16:
        v11 = *(struct _ERESOURCE **)(v4 + 48);
      }
      ExReleaseResourceLite(v11);
      KeLeaveCriticalRegion();
      return SeSinglePrivilegeCheck(SeRestorePrivilege, 1);
    }
  }
  return 0;
}
