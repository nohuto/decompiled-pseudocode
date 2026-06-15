/*
 * XREFs of ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800B153C
 * Callers:
 *     ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800B1840 (-AddInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotif.c)
 *     ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800B3464 (-RemoveInterface@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall operator==(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx

  v2 = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 40LL))(*a1);
  return v3 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
}
