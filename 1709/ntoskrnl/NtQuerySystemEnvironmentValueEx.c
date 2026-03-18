/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x1405E97F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405E9890 (ExGetFirmwareEnvironmentVariable.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407591A4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  unsigned __int16 v8; // cx
  size_t v9; // rsi
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v14; // rbx
  NTSTATUS FirmwareEnvironmentVariable; // esi
  ULONG v16; // [rsp+34h] [rbp-84h]
  __int64 v17; // [rsp+38h] [rbp-80h] BYREF
  PVOID P; // [rsp+40h] [rbp-78h]
  void *Src[2]; // [rsp+58h] [rbp-60h]
  GUID v20; // [rsp+68h] [rbp-50h]

  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             (_DWORD)ReturnLength,
             (__int64)Attributes);
  if ( dword_14035E690 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(UNICODE_STRING *)Src = *VariableName;
  v8 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( !v8 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = (char *)Src[1] + v8;
  if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (__int64)ReturnLength;
  if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
    v11 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v11 = *(_DWORD *)v11;
  v16 = Value != 0LL ? *ReturnLength : 0;
  if ( v16 )
    ProbeForWrite(Value, Value != 0LL ? *ReturnLength : 0, 1u);
  if ( Attributes )
  {
    v12 = (__int64)Attributes;
    if ( (unsigned __int64)Attributes >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1) )
    return -1073741727;
  v20 = *VendorGuid;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v14 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v9);
  v14[v9 >> 1] = 0;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v14, (__int64)&v17, 1);
  ExFreePoolWithTag(v14, 0);
  *ReturnLength = v16;
  if ( Attributes )
    *Attributes = v17;
  return FirmwareEnvironmentVariable;
}
