/*
 * XREFs of _RegisterPointerDeviceNotifications @ 0x1C010F95C
 * Callers:
 *     NtUserRegisterPointerDeviceNotifications @ 0x1C010F8A0 (NtUserRegisterPointerDeviceNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPointerDeviceNotifications(struct _LIST_ENTRY *a1, int a2)
{
  struct _LIST_ENTRY *Flink; // r8
  unsigned int v5; // ebx
  struct _LIST_ENTRY *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  Flink = gPointerDeviceClients.Flink;
  v5 = 0;
  while ( Flink != &gPointerDeviceClients )
  {
    v6 = Flink - 1;
    Flink = Flink->Flink;
    if ( v6->Flink == a1 )
      return v5;
  }
  v7 = (_QWORD *)Win32AllocPool(32LL, 2020635477LL);
  v8 = v7;
  if ( v7 )
  {
    v12[0] = v7;
    v12[1] = a1;
    *v7 = 0LL;
    HMAssignmentLock(v12);
    *((_DWORD *)v8 + 2) = a2;
    v9 = v8 + 2;
    v10 = (_QWORD *)qword_1C032EDE0;
    if ( *(struct _LIST_ENTRY **)qword_1C032EDE0 != &gPointerDeviceClients )
      __fastfail(3u);
    *v9 = &gPointerDeviceClients;
    v5 = 1;
    v8[3] = v10;
    *v10 = v9;
    qword_1C032EDE0 = (__int64)(v8 + 2);
  }
  return v5;
}
