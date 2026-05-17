/*
 * XREFs of LdrGetDllFullName @ 0x18007AD40
 * Callers:
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 * Callees:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall LdrGetDllFullName(unsigned __int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // esi
  unsigned __int16 *v4; // rdi
  unsigned __int64 v5; // rbx
  PVOID SubSystemTib; // rcx
  unsigned int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    v8 = sub_180030264(a1, (__int64 *)&v10, &v9);
    v5 = v10;
    v2 = v8;
    if ( !v10 )
      return v2;
    v4 = (unsigned __int16 *)(v10 + 72);
  }
  else
  {
    v10 = qword_18015AE50;
    v4 = (unsigned __int16 *)(qword_18015AE50 + 72);
    v5 = qword_18015AE50;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v4 = (unsigned __int16 *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(a2, v4);
    if ( *v4 > a2[1] )
      v2 = -1073741789;
    if ( v5 != qword_18015AE50 )
      sub_18003015C(v5);
  }
  return v2;
}
