/*
 * XREFs of NtOpenThreadTokenEx @ 0x1404C0990
 * Callers:
 *     NtOpenThreadToken @ 0x1404C0970 (NtOpenThreadToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepSetTokenTrust @ 0x1404C0758 (SepSetTokenTrust.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     PsSwapImpersonationToken @ 0x1404C0840 (PsSwapImpersonationToken.c)
 *     PsDisableImpersonation @ 0x1404C0E30 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1404C0F60 (PsRestoreImpersonation.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C7454 (SepCreateImpersonationTokenDacl.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // di
  void *v7; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  int v9; // esi
  ULONG v10; // esi
  __int64 v11; // rcx
  NTSTATUS result; // eax
  _DWORD *v13; // rbx
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v15; // r15
  _DWORD *v16; // rdi
  int v17; // r13d
  char v18; // r15
  NTSTATUS inserted; // eax
  PVOID v20; // rbx
  PACL v21; // rdi
  NTSTATUS v22; // r14d
  struct _KPROCESS *v23; // rdi
  PACCESS_TOKEN v24; // rbx
  __int64 v25; // rax
  bool v26; // [rsp+40h] [rbp-D8h]
  BOOLEAN v27; // [rsp+41h] [rbp-D7h]
  char v28; // [rsp+42h] [rbp-D6h]
  bool v29; // [rsp+43h] [rbp-D5h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v31; // [rsp+50h] [rbp-C8h] BYREF
  int v32; // [rsp+58h] [rbp-C0h]
  PACL Dacl; // [rsp+60h] [rbp-B8h] BYREF
  void *v34; // [rsp+68h] [rbp-B0h]
  HANDLE Handle; // [rsp+70h] [rbp-A8h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+78h] [rbp-A0h] BYREF
  int v37; // [rsp+88h] [rbp-90h] BYREF
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  ULONG v40; // [rsp+A0h] [rbp-78h]
  _BYTE *v41; // [rsp+A8h] [rbp-70h]
  __int64 v42; // [rsp+B0h] [rbp-68h]
  _BYTE SecurityDescriptor[48]; // [rsp+C0h] [rbp-58h] BYREF

  v5 = OpenAsSelf;
  v7 = 0LL;
  v31 = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  v27 = 0;
  Handle = 0LL;
  Dacl = 0LL;
  v34 = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 73714;
  if ( PreviousMode )
    v9 = 7666;
  v10 = HandleAttributes & v9;
  if ( PreviousMode )
  {
    v11 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  result = ObReferenceObjectByHandle(
             ThreadHandle,
             0x800u,
             (POBJECT_TYPE)PsThreadType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v13 = Object;
    if ( (*((_DWORD *)Object + 436) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (signed __int64 *)((char *)Object + 1728);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1728, 0LL);
    if ( (v13[436] & 8) != 0 )
    {
      v16 = Object;
      v7 = (void *)(*((_QWORD *)Object + 205) & 0xFFFFFFFFFFFFFFF8uLL);
      v28 = BYTE1(v13[436]) & 1;
      ObfReferenceObject(v7);
      v32 = v16[410] & 3;
      v29 = (v16[410] & 4) != 0;
      v5 = OpenAsSelf;
    }
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v7 )
    {
LABEL_9:
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    v17 = v32;
    if ( v32 <= 0 )
    {
      ObfDereferenceObject(v7);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( v5 )
    {
      v27 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v17 = v32;
    }
    v18 = v28;
    if ( v28 )
    {
      if ( v5 )
      {
        if ( ImpersonationState.Token )
        {
          v34 = (void *)*((_QWORD *)ImpersonationState.Token + 138);
          v26 = 1;
        }
      }
      else
      {
        v25 = *((_QWORD *)Object + 239);
        if ( v25 )
          v34 = *(void **)(v25 + 1104);
        v26 = v25 != 0;
      }
      v23 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
      v24 = PsReferencePrimaryToken(v23);
      v22 = SepCreateImpersonationTokenDacl(v7, v24, &Dacl);
      ObFastDereferenceObject((signed __int64 *)&v23[1].Affinity.Bitmap[5], (unsigned __int64)v24);
      v21 = Dacl;
      if ( v22 < 0 )
        goto LABEL_52;
      if ( Dacl )
      {
        memset(SecurityDescriptor, 0, 0x28uLL);
        SecurityDescriptor[0] = 1;
        RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
      }
      v37 = 48;
      v38 = 0LL;
      v40 = v10;
      v39 = 0LL;
      v41 = v21 ? SecurityDescriptor : 0LL;
      v42 = 0LL;
      v22 = SepDuplicateToken((_DWORD)v7, (unsigned int)&v37, v29, 2, v17, 0, 0, (__int64)&v31);
      if ( v22 < 0 )
      {
LABEL_52:
        v20 = v31;
        goto LABEL_22;
      }
      v20 = v31;
      if ( v26 )
        v22 = SepSetTokenTrust((__int64)v31, v34);
      if ( v22 < 0 )
        goto LABEL_22;
      ObfReferenceObject(v20);
      inserted = ObInsertObjectEx(v20, 0, 0LL, (__int64)&Handle);
    }
    else
    {
      inserted = ObOpenObjectByPointer(
                   v7,
                   v10,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v20 = v31;
      v21 = Dacl;
    }
    v22 = inserted;
LABEL_22:
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v27 )
    {
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v20 = v31;
      v18 = v28;
    }
    if ( v22 >= 0 && v18 )
      PsSwapImpersonationToken((__int64)Object, v7, (unsigned __int64)v20);
    ObfDereferenceObject(v7);
    if ( v20 )
      ObfDereferenceObject(v20);
    ObfDereferenceObject(Object);
    if ( v22 >= 0 )
      *TokenHandle = Handle;
    return v22;
  }
  return result;
}
