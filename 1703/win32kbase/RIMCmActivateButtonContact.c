/*
 * XREFs of RIMCmActivateButtonContact @ 0x1C011690C
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01138B4 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     RIMCmGetButtonContact @ 0x1C0116C18 (RIMCmGetButtonContact.c)
 */

_QWORD *__fastcall RIMCmActivateButtonContact(__int64 a1)
{
  __int64 ButtonContact; // rax
  __int64 v2; // rcx
  _QWORD *result; // rax
  __int64 *v4; // rdx
  __int64 v5; // rcx

  ButtonContact = RIMCmGetButtonContact(a1);
  *(_DWORD *)(ButtonContact + 32) |= 6u;
  ++*(_DWORD *)(v2 + 1576);
  ++*(_DWORD *)(v2 + 1580);
  *(_QWORD *)(ButtonContact + 24) = 0LL;
  result = (_QWORD *)(ButtonContact + 16);
  *result = 0LL;
  v4 = *(__int64 **)(v2 + 1560);
  v5 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    __fastfail(3u);
  *result = v5;
  result[1] = v4;
  *(_QWORD *)(v5 + 8) = result;
  *v4 = (__int64)result;
  return result;
}
