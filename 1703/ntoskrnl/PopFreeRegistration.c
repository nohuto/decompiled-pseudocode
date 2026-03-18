/*
 * XREFs of PopFreeRegistration @ 0x1405796B8
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1404C5F9C (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x140579608 (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x14017F940 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(_DWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD **v4; // rbx
  __int64 v5; // rsi
  _DWORD *v6; // rcx

  v4 = (_DWORD **)(a1 + 16);
  v5 = 3LL;
  do
  {
    v6 = *v4;
    if ( *v4 )
    {
      if ( (*v6)-- == 1 )
        ExFreePoolWithTag(v6, 0x74655350u);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( a1[14] || a1[15] )
    ZwDeleteWnfStateName((__int64)(a1 + 14), a2, a3);
  ExFreePoolWithTag(a1, 0x74655350u);
}
