/*
 * XREFs of LdrGetDllFullName @ 0x18001F910
 * Callers:
 *     sub_180085CF0 @ 0x180085CF0 (sub_180085CF0.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v2; // esi
  NTSTATUS v4; // eax
  char *v5; // rbx
  const UNICODE_STRING *v6; // rdi
  PVOID SubSystemTib; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  BaseAddress = 0LL;
  if ( DllHandle )
  {
    v4 = sub_18001FA3C(DllHandle, &BaseAddress, &v9);
    v5 = (char *)BaseAddress;
    v2 = v4;
    if ( !BaseAddress )
      return v2;
    v6 = (const UNICODE_STRING *)((char *)BaseAddress + 72);
  }
  else
  {
    BaseAddress = (PVOID)qword_18015BF88;
    v6 = (const UNICODE_STRING *)(qword_18015BF88 + 72);
    v5 = (char *)qword_18015BF88;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v6 = (const UNICODE_STRING *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(FullDllName, v6);
    if ( v6->Length > FullDllName->MaximumLength )
      v2 = -1073741789;
    if ( v5 != (char *)qword_18015BF88 )
      sub_18001F5FC(v5);
  }
  return v2;
}
