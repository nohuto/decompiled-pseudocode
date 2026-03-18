/*
 * XREFs of RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01157D8
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010480C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C011239C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C011255C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmIsContactSuppressedByArbitrationOnly(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 0xFFFFFFFE) != 0 )
    return 0LL;
  return result;
}
