/*
 * XREFs of NtOpenThreadTokenEx @ 0x1404C5CB0
 * Callers:
 *     NtOpenThreadToken @ 0x1404C5C90 (NtOpenThreadToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepSetTokenTrust @ 0x1404884A4 (SepSetTokenTrust.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404BB8F0 (SepCreateImpersonationTokenDacl.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     PsDisableImpersonation @ 0x1404C6170 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1404C62C0 (PsRestoreImpersonation.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     PsSwapImpersonationToken @ 0x14056D670 (PsSwapImpersonationToken.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // di
  void *v6; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  int v8; // ebx
  ULONG v9; // ebx
  __int64 v10; // rdx
  NTSTATUS result; // eax
  _DWORD *v12; // rsi
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v14; // r15
  _DWORD *v15; // rdi
  int v16; // esi
  int v17; // r13d
  char v18; // r15
  NTSTATUS inserted; // eax
  _QWORD *v20; // rbx
  PVOID v21; // rdi
  NTSTATUS ImpersonationTokenDacl; // r14d
  _QWORD *Token; // rax
  struct _KPROCESS *v24; // rsi
  PACCESS_TOKEN v25; // rdi
  char v26; // [rsp+40h] [rbp-D8h]
  BOOLEAN v27; // [rsp+41h] [rbp-D7h]
  char v28; // [rsp+42h] [rbp-D6h]
  bool v29; // [rsp+43h] [rbp-D5h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v31; // [rsp+50h] [rbp-C8h] BYREF
  int v32; // [rsp+58h] [rbp-C0h]
  PVOID P; // [rsp+60h] [rbp-B8h] BYREF
  void *v34; // [rsp+68h] [rbp-B0h]
  HANDLE Handle; // [rsp+70h] [rbp-A8h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+78h] [rbp-A0h] BYREF
  int v37; // [rsp+88h] [rbp-90h] BYREF
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  ULONG v40; // [rsp+A0h] [rbp-78h]
  _QWORD *v41; // [rsp+A8h] [rbp-70h]
  __int64 v42; // [rsp+B0h] [rbp-68h]
  _QWORD v43[7]; // [rsp+B8h] [rbp-60h] BYREF

  v5 = OpenAsSelf;
  v6 = 0LL;
  v31 = 0LL;
  ImpersonationState.Token = 0LL;
  *(_QWORD *)&ImpersonationState.CopyOnOpen = 0LL;
  v27 = 0;
  Handle = 0LL;
  P = 0LL;
  v34 = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 73714;
  if ( PreviousMode )
    v8 = 7666;
  v9 = HandleAttributes & v8;
  if ( PreviousMode )
  {
    v10 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
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
    v12 = Object;
    if ( (*((_DWORD *)Object + 436) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (signed __int64 *)((char *)Object + 1728);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1728, 0LL);
    if ( (v12[436] & 8) != 0 )
    {
      v15 = Object;
      v6 = (void *)(*((_QWORD *)Object + 205) & 0xFFFFFFFFFFFFFFF8uLL);
      v16 = v12[436];
      ObfReferenceObject(v6);
      v32 = v15[410] & 3;
      v29 = (v15[410] & 4) != 0;
      v28 = BYTE1(v16) & 1;
      v5 = OpenAsSelf;
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
    v17 = v32;
    if ( v32 <= 0 )
    {
      ObfDereferenceObject(v6);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( v5 )
    {
      v27 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v17 = v32;
    }
    v18 = v28;
    if ( !v28 )
    {
      inserted = ObOpenObjectByPointer(
                   v6,
                   v9,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v20 = v31;
      v21 = P;
      goto LABEL_21;
    }
    if ( v5 )
    {
      Token = ImpersonationState.Token;
      if ( !ImpersonationState.Token )
        goto LABEL_37;
    }
    else
    {
      Token = (_QWORD *)*((_QWORD *)Object + 239);
      if ( !Token )
      {
LABEL_37:
        v24 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
        v25 = PsReferencePrimaryToken(v24);
        ImpersonationTokenDacl = SepCreateImpersonationTokenDacl((__int64)v6, (__int64)v25, (ACL **)&P);
        ObFastDereferenceObject((signed __int64 *)&v24[1].Affinity.Bitmap[5], (unsigned __int64)v25);
        v21 = P;
        if ( ImpersonationTokenDacl < 0 )
          goto LABEL_52;
        if ( P )
        {
          memset(v43, 0, 0x28uLL);
          LOBYTE(v43[0]) = 1;
          if ( (v43[0] & 0x80000000LL) == 0 )
          {
            v43[4] = P;
            WORD1(v43[0]) = WORD1(v43[0]) & 0xFFF3 | 4;
          }
        }
        v37 = 48;
        v38 = 0LL;
        v40 = v9;
        v39 = 0LL;
        v41 = P ? v43 : 0LL;
        v42 = 0LL;
        ImpersonationTokenDacl = SepDuplicateToken((_DWORD)v6, (unsigned int)&v37, v29, 2, v17, 0, 0, (__int64)&v31);
        if ( ImpersonationTokenDacl < 0 )
        {
LABEL_52:
          v20 = v31;
          goto LABEL_22;
        }
        v20 = v31;
        if ( v26 )
          ImpersonationTokenDacl = SepSetTokenTrust((__int64)v31, v34);
        if ( ImpersonationTokenDacl < 0 )
          goto LABEL_22;
        ObfReferenceObject(v20);
        inserted = ObInsertObjectEx(v20, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&Handle);
LABEL_21:
        ImpersonationTokenDacl = inserted;
LABEL_22:
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        if ( v27 )
        {
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
          v20 = v31;
          v18 = v28;
        }
        if ( ImpersonationTokenDacl >= 0 && v18 )
          PsSwapImpersonationToken(Object, v6, v20);
        ObfDereferenceObject(v6);
        if ( v20 )
          ObfDereferenceObject(v20);
        ObfDereferenceObject(Object);
        if ( ImpersonationTokenDacl >= 0 )
          *TokenHandle = Handle;
        return ImpersonationTokenDacl;
      }
    }
    v26 = 1;
    v34 = (void *)Token[138];
    goto LABEL_37;
  }
  return result;
}
