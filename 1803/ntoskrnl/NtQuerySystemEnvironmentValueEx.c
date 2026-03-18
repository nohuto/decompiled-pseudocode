/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x14057FEC8
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x14057FF60 (ExGetFirmwareEnvironmentVariable.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407C0090 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUmdfSidCheck @ 0x1407C262C (ExpUmdfSidCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  ULONG v12; // eax
  __int64 v13; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v15; // rbx
  NTSTATUS FirmwareEnvironmentVariable; // esi
  BOOLEAN v17; // [rsp+30h] [rbp-88h]
  ULONG v18; // [rsp+34h] [rbp-84h]
  __int64 v19; // [rsp+38h] [rbp-80h] BYREF
  PVOID P; // [rsp+40h] [rbp-78h]
  void *Src[2]; // [rsp+58h] [rbp-60h]
  GUID v22; // [rsp+68h] [rbp-50h]

  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             (_DWORD)ReturnLength,
             (__int64)Attributes);
  if ( dword_1403A1C50 != 2 )
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
  v12 = *ReturnLength;
  v18 = *ReturnLength;
  if ( !Value )
  {
    v18 = 0;
    v12 = 0;
  }
  if ( v12 )
    ProbeForWrite(Value, v12, 1u);
  if ( Attributes )
  {
    v13 = (__int64)Attributes;
    if ( (unsigned __int64)Attributes >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
  }
  v17 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v17 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v17 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v17 && !(unsigned __int8)ExpUmdfSidCheck() )
      return -1073741727;
  }
  v22 = *VendorGuid;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v15 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v9);
  v15[v9 >> 1] = 0;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v15, (__int64)&v19, 1);
  ExFreePoolWithTag(v15, 0);
  *ReturnLength = v18;
  if ( Attributes )
    *Attributes = v19;
  return FirmwareEnvironmentVariable;
}
