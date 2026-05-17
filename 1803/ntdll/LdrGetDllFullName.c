/*
 * XREFs of LdrGetDllFullName @ 0x18001F910
 * Callers:
 *     sub_180085CF0 @ 0x180085CF0 (sub_180085CF0.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

__int64 __fastcall LdrGetDllFullName(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // eax
  unsigned __int64 v5; // rbx
  _WORD *v6; // rdi
  _QWORD *SubSystemTib; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    v4 = sub_18001FA3C(a1, &v10, &v9);
    v5 = v10;
    v2 = v4;
    if ( !v10 )
      return v2;
    v6 = (_WORD *)(v10 + 72);
  }
  else
  {
    v10 = qword_18015BF88;
    v6 = (_WORD *)(qword_18015BF88 + 72);
    v5 = qword_18015BF88;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && SubSystemTib[1] )
      v6 = (_WORD *)SubSystemTib[1];
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(a2, v6);
    if ( *v6 > *(_WORD *)(a2 + 2) )
      v2 = -1073741789;
    if ( v5 != qword_18015BF88 )
      sub_18001F5FC(v5);
  }
  return v2;
}
