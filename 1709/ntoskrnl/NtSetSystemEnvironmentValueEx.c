/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x14075DF18
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407581E0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14075A890 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  unsigned __int16 v8; // cx
  size_t v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned int v11; // r14d
  char *v12; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v14; // rdi
  __int64 v15; // rax
  NTSTATUS v16; // ebx
  void *Src[2]; // [rsp+50h] [rbp-58h]
  GUID v18; // [rsp+60h] [rbp-48h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (__int64)VendorGuid,
             (__int64)Value,
             (unsigned int)ReturnLength,
             (int)Attributes);
  if ( dword_14035E690 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(UNICODE_STRING *)Src = *VariableName;
  v8 = _mm_cvtsi128_si32(*(__m128i *)VariableName);
  if ( !v8 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = (unsigned __int64)Src[1] + v8;
  if ( v10 > 0x7FFFFFFF0000LL || (void *)v10 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = Value != 0LL ? (unsigned int)ReturnLength : 0;
  if ( v11 )
  {
    v12 = (char *)Value + v11;
    if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Value )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1) )
    return -1073741727;
  v18 = *VendorGuid;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v9);
  v14[v9 >> 1] = 0;
  v15 = *(_QWORD *)&v18.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v18.Data1 == ExpSecureBootVendorGuid )
    v15 = *(_QWORD *)v18.Data4 - 0x4B788FE7F42860BDLL;
  if ( v15 || wcsnicmp(v14, L"Kernel_", 7uLL) )
  {
    v16 = ExpSetFirmwareEnvironmentVariable(v14, (__int64)&v18, (unsigned __int64)Value, v11, (int)Attributes, 1);
    ExFreePoolWithTag(v14, 0);
    return v16;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    return -1073741790;
  }
}
