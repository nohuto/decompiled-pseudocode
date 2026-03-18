/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x1C0038D90
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0097D40 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C0038BE4 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  _DWORD *v3; // rax
  __int64 v4; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v6; // rdi
  int v7; // r14d
  NTSTATUS v8; // esi
  int v9; // eax
  int v10; // edi
  void *v12; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+30h] [rbp-D0h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+51h] [rbp-AFh] BYREF
  PVOID TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  struct _LUID AuthenticationId; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  struct _PORT_VIEW v21; // [rsp+70h] [rbp-90h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v23; // [rsp+A4h] [rbp-5Ch] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v27; // [rsp+F0h] [rbp-10h] BYREF
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
    v27.Length = 0;
    v27.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v27.ContextTrackingMode = 257;
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
      v21.SectionHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateSection(&v21.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
        goto LABEL_23;
      P = 0LL;
      AuthenticationId = 0LL;
      LODWORD(TokenInformation) = 0;
      if ( !(unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread())
        || (v7 = 1,
            (v6 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v4);
        v6 = PsReferencePrimaryToken(CurrentProcess);
        v7 = 0;
      }
      v8 = SeQueryAuthenticationIdToken(v6, &AuthenticationId);
      if ( v8 >= 0 )
      {
        v8 = SeQueryInformationToken(v6, TokenIntegrityLevel, &TokenInformation);
        if ( v8 >= 0 )
          v8 = SeQueryInformationToken(v6, TokenUser, &P);
      }
      if ( v7 )
        PsDereferenceImpersonationToken(v6);
      else
        PsDereferencePrimaryToken(v6);
      if ( v8 < 0 )
        goto LABEL_23;
      v9 = (int)TokenInformation;
      v21.Length = 48;
      v21.SectionOffset = 0;
      v21.ViewSize = 0x400000LL;
      if ( (unsigned int)TokenInformation < 0x2000 )
        v9 = 0x2000;
      LODWORD(TokenInformation) = v9;
      LODWORD(FileHandle) = AuthenticationId.HighPart;
      AllocationAttributes[0] = AuthenticationId.LowPart;
      LODWORD(ReturnLength) = v2;
      *(_OWORD *)&v21.ViewBase = 0LL;
      swprintf_s(
        Dst,
        0x104uLL,
        L"%s_%x_%x_%x_%x",
        L"\\RPC Control\\UmpdProxy",
        ReturnLength,
        *(_QWORD *)AllocationAttributes);
      RtlInitUnicodeString(&DestinationString, Dst);
      v10 = PROXYPORT::SecureConnectPort(
              *(PROXYPORT **)P,
              *(void ***)this,
              &DestinationString,
              &v27,
              &v21,
              *(PSID *)P,
              FileHandle,
              &v23);
      if ( v10 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 56LL) = MmSecureVirtualMemory(v21.ViewBase, v21.ViewSize, 4u);
        if ( *(_QWORD *)(*(_QWORD *)this + 56LL) )
        {
          *(_QWORD *)(*(_QWORD *)this + 8LL) = v21.SectionHandle;
          *(_QWORD *)(*(_QWORD *)this + 16LL) = v21.ViewBase;
          *(_QWORD *)(*(_QWORD *)this + 24LL) = v21.ViewSize;
          *(_QWORD *)(*(_QWORD *)this + 32LL) = v21.ViewRemoteBase;
          *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 32LL)
                                              - *(_QWORD *)(*(_QWORD *)this + 16LL);
          *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
        }
      }
      ExFreePoolWithTag(P, 0);
      if ( v10 < 0 || !*(_QWORD *)(*(_QWORD *)this + 56LL) )
      {
LABEL_23:
        if ( v21.SectionHandle )
          ZwClose(v21.SectionHandle);
        v12 = **(void ***)this;
        if ( v12 )
          ObfDereferenceObject(v12);
        Win32FreePool(*(_QWORD *)this);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
