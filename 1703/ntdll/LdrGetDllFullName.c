/*
 * XREFs of LdrGetDllFullName @ 0x18007AD40
 * Callers:
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v2; // esi
  const UNICODE_STRING *v4; // rdi
  char *v5; // rbx
  PVOID SubSystemTib; // rcx
  NTSTATUS v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( DllHandle )
  {
    v8 = sub_180030264((ULONG_PTR)DllHandle, &v10, &v9);
    v5 = (char *)v10;
    v2 = v8;
    if ( !v10 )
      return v2;
    v4 = (const UNICODE_STRING *)(v10 + 72);
  }
  else
  {
    v10 = qword_18015AE50;
    v4 = (const UNICODE_STRING *)(qword_18015AE50 + 72);
    v5 = (char *)qword_18015AE50;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v4 = (const UNICODE_STRING *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(FullDllName, v4);
    if ( v4->Length > FullDllName->MaximumLength )
      v2 = -1073741789;
    if ( v5 != (char *)qword_18015AE50 )
      sub_18003015C(v5);
  }
  return v2;
}
