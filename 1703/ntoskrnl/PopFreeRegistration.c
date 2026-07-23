/*
 * XREFs of PopFreeRegistration @ 0x1405796B8
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1404C5F9C (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x140579608 (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x14017F940 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(WNF_STATE_NAME *a1)
{
  WNF_STATE_NAME *v2; // rbx
  __int64 v3; // rsi
  _DWORD *v4; // rcx

  v2 = a1 + 8;
  v3 = 3LL;
  do
  {
    v4 = (_DWORD *)*v2;
    if ( *v2 )
    {
      if ( (*v4)-- == 1 )
        ExFreePoolWithTag(v4, 0x74655350u);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( a1[7].Data[0] || a1[7].Data[1] )
    ZwDeleteWnfStateName(a1 + 7);
  ExFreePoolWithTag(a1, 0x74655350u);
}
