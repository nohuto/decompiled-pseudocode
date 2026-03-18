/*
 * XREFs of rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103CF8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010480C (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103D78 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByOtherActiveDevicesContacts(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  unsigned int v7; // edi
  __int64 v8; // r8

  v3 = (_QWORD *)(a1 + 576);
  v5 = *(_QWORD **)(a1 + 576);
  v7 = 0;
  while ( v5 != v3 )
  {
    v8 = *(v5 - 1);
    if ( v8 != a2 && (unsigned int)rimAbIsPointerSuppressedByOtherDeviceContacts(a3, a2, v8, 1LL) )
      return 1;
    v5 = (_QWORD *)*v5;
  }
  return v7;
}
