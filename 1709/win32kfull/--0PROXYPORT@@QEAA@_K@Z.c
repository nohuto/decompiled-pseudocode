/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00BAB2C
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00BA100 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C00BA864 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v9; // rdi
  int v10; // r14d
  NTSTATUS v11; // esi
  int v12; // eax
  int v13; // edi
  void *v15; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+30h] [rbp-D0h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  struct _LUID AuthenticationId; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  struct _PORT_VIEW v24; // [rsp+70h] [rbp-90h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v26; // [rsp+A4h] [rbp-5Ch] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v30; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[264]; // [rsp+100h] [rbp+0h] BYREF

  memset(Dst, 0, 0x208uLL);
  *(_QWORD *)this = 0LL;
  if ( ZwQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessSessionInformation,
         (char *)&TokenInformation + 4,
         4u,
         0LL) >= 0 )
  {
    v2 = HIDWORD(TokenInformation);
    v30.Length = 0;
    v30.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v30.ContextTrackingMode = 257;
    v3 = PALLOCMEM2(0x48uLL, 1953525831LL, 1);
    *(_QWORD *)this = v3;
    if ( v3 )
    {
      v3[16] = 0;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
      **(_QWORD **)this = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
      MaximumSize.QuadPart = 0x400000LL;
      v24.SectionHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateSection(&v24.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
        goto LABEL_23;
      P = 0LL;
      AuthenticationId = 0LL;
      LODWORD(TokenInformation) = 0;
      if ( !(unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread())
        || (v10 = 1,
            (v9 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v7, v6);
        v9 = PsReferencePrimaryToken(CurrentProcess);
        v10 = 0;
      }
      v11 = SeQueryAuthenticationIdToken(v9, &AuthenticationId);
      if ( v11 >= 0 )
      {
        v11 = SeQueryInformationToken(v9, TokenIntegrityLevel, &TokenInformation);
        if ( v11 >= 0 )
          v11 = SeQueryInformationToken(v9, TokenUser, &P);
      }
      if ( v10 )
        PsDereferenceImpersonationToken(v9);
      else
        PsDereferencePrimaryToken(v9);
      if ( v11 < 0 )
        goto LABEL_23;
      v12 = (int)TokenInformation;
      v24.Length = 48;
      v24.SectionOffset = 0;
      v24.ViewSize = 0x400000LL;
      if ( (unsigned int)TokenInformation < 0x2000 )
        v12 = 0x2000;
      LODWORD(TokenInformation) = v12;
      LODWORD(FileHandle) = AuthenticationId.HighPart;
      AllocationAttributes[0] = AuthenticationId.LowPart;
      LODWORD(ReturnLength) = v2;
      *(_OWORD *)&v24.ViewBase = 0LL;
      swprintf_s(
        Dst,
        0x104uLL,
        L"%s_%x_%x_%x_%x",
        L"\\RPC Control\\UmpdProxy",
        ReturnLength,
        *(_QWORD *)AllocationAttributes);
      RtlInitUnicodeString(&DestinationString, Dst);
      v13 = PROXYPORT::SecureConnectPort(
              *(PROXYPORT **)P,
              *(void ***)this,
              &DestinationString,
              &v30,
              &v24,
              *(PSID *)P,
              FileHandle,
              &v26);
      if ( v13 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 56LL) = MmSecureVirtualMemory(v24.ViewBase, v24.ViewSize, 4u);
        if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
        {
          *(_QWORD *)(*(_QWORD *)this + 8LL) = v24.SectionHandle;
          *(_QWORD *)(*(_QWORD *)this + 16LL) = v24.ViewBase;
          *(_QWORD *)(*(_QWORD *)this + 24LL) = v24.ViewSize;
          *(_QWORD *)(*(_QWORD *)this + 32LL) = v24.ViewRemoteBase;
          *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 32LL)
                                              - *(_QWORD *)(*(_QWORD *)this + 16LL);
          *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
        }
      }
      ExFreePoolWithTag(P, 0);
      if ( v13 < 0 || !*(_QWORD *)(*(_QWORD *)this + 56LL) )
      {
LABEL_23:
        if ( v24.SectionHandle )
          ZwClose(v24.SectionHandle);
        v15 = **(void ***)this;
        if ( v15 )
          ObfDereferenceObject(v15);
        Win32FreePool(*(_QWORD *)this, v4, v5);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
