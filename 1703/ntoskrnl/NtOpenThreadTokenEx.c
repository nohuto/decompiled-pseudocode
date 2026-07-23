/*
 * XREFs of NtOpenThreadTokenEx @ 0x140510670
 * Callers:
 *     NtOpenThreadToken @ 0x140510650 (NtOpenThreadToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepCreateImpersonationTokenDacl @ 0x14050BEC0 (SepCreateImpersonationTokenDacl.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     PsDisableImpersonation @ 0x140510B50 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140510CB0 (PsRestoreImpersonation.c)
 *     PsSwapImpersonationToken @ 0x140510E40 (PsSwapImpersonationToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x140511010 (SepSetTokenTrust.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // bl
  void *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r15
  int v8; // r14d
  ULONG v9; // r14d
  PHANDLE v10; // rsi
  __int64 v11; // rax
  NTSTATUS result; // eax
  _DWORD *v13; // rdi
  signed __int64 *v14; // r12
  _DWORD *v15; // rbx
  bool v16; // zf
  char v17; // r12
  __int64 v18; // rax
  struct _KPROCESS *v19; // rdi
  PACCESS_TOKEN v20; // rbx
  NTSTATUS v21; // r15d
  PVOID v22; // rdi
  _QWORD *v23; // rbx
  NTSTATUS inserted; // eax
  __int64 v25; // rdx
  char v26; // [rsp+40h] [rbp-D8h]
  char v27; // [rsp+41h] [rbp-D7h]
  BOOLEAN v28; // [rsp+42h] [rbp-D6h]
  char v29; // [rsp+43h] [rbp-D5h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v31; // [rsp+50h] [rbp-C8h] BYREF
  signed int v32; // [rsp+58h] [rbp-C0h]
  PVOID P; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-B0h]
  HANDLE Handle; // [rsp+70h] [rbp-A8h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+78h] [rbp-A0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  int v39; // [rsp+98h] [rbp-80h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-78h]
  __int64 v41; // [rsp+A8h] [rbp-70h]
  ULONG v42; // [rsp+B0h] [rbp-68h]
  _QWORD *v43; // [rsp+B8h] [rbp-60h]
  __int64 v44; // [rsp+C0h] [rbp-58h]
  _QWORD v45[5]; // [rsp+C8h] [rbp-50h] BYREF

  v5 = OpenAsSelf;
  v6 = 0LL;
  v31 = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  v28 = 0;
  Handle = 0LL;
  P = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v8 = 7666;
  else
    v8 = 73714;
  v9 = HandleAttributes & v8;
  if ( PreviousMode )
  {
    v10 = TokenHandle;
    v11 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  else
  {
    v10 = TokenHandle;
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
    if ( (*((_DWORD *)Object + 434) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (signed __int64 *)((char *)Object + 1720);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1720, 0LL);
    if ( (v13[434] & 8) != 0 )
    {
      v15 = Object;
      v6 = (void *)(*((_QWORD *)Object + 205) & 0xFFFFFFFFFFFFFFF8uLL);
      v29 = BYTE1(v13[434]) & 1;
      ObfReferenceObject(v6);
      v32 = v15[410] & 3;
      v16 = (v15[410] & 4) == 0;
      v5 = OpenAsSelf;
      v27 = !v16;
    }
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v6 )
    {
LABEL_9:
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    if ( v32 <= 0 )
    {
      ObfDereferenceObject(v6);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( v5 )
      v28 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    v17 = v29;
    if ( !v29 )
    {
      inserted = ObOpenObjectByPointer(
                   v6,
                   v9,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v23 = v31;
      v22 = P;
      goto LABEL_36;
    }
    if ( v5 )
    {
      if ( !ImpersonationState.Token )
        goto LABEL_25;
      v18 = *((_QWORD *)ImpersonationState.Token + 138);
    }
    else
    {
      v25 = *((_QWORD *)Object + 238);
      if ( !v25 )
      {
LABEL_25:
        v19 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
        v20 = PsReferencePrimaryToken(v19);
        v21 = SepCreateImpersonationTokenDacl((__int64)v6, (__int64)v20, &P);
        ObFastDereferenceObject((signed __int64 *)&v19[1].Affinity.Bitmap[5], (unsigned __int64)v20);
        v22 = P;
        if ( v21 < 0 )
          goto LABEL_57;
        if ( P )
        {
          memset(v45, 0, sizeof(v45));
          LOBYTE(v45[0]) = 1;
          if ( (v45[0] & 0x80000000LL) == 0 )
          {
            v45[4] = P;
            WORD1(v45[0]) = WORD1(v45[0]) & 0xFFF3 | 4;
          }
        }
        v39 = 48;
        v40 = 0LL;
        v42 = v9;
        v41 = 0LL;
        v43 = P ? v45 : 0LL;
        v44 = 0LL;
        v21 = SepDuplicateToken((__int64)v6, (int)&v39, v27, 2, v32, 0, 0, (__int64 *)&v31);
        if ( v21 < 0 )
        {
LABEL_57:
          v23 = v31;
          goto LABEL_37;
        }
        v23 = v31;
        if ( v26 )
          v21 = SepSetTokenTrust(v31, v34);
        if ( v21 < 0 )
          goto LABEL_37;
        ObfReferenceObject(v23);
        inserted = ObInsertObjectEx(v23, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
LABEL_36:
        v21 = inserted;
LABEL_37:
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        if ( v28 )
        {
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
          v23 = v31;
          v17 = v29;
        }
        if ( v21 >= 0 && v17 )
          PsSwapImpersonationToken(Object, v6, v23);
        ObfDereferenceObject(v6);
        if ( v23 )
          ObfDereferenceObject(v23);
        ObfDereferenceObject(Object);
        if ( v21 >= 0 )
          *v10 = Handle;
        return v21;
      }
      v18 = *(_QWORD *)(v25 + 1104);
    }
    v26 = 1;
    v34 = v18;
    goto LABEL_25;
  }
  return result;
}
