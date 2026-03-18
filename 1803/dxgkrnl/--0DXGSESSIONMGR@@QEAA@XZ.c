/*
 * XREFs of ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C01CE034
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

DXGSESSIONMGR *__fastcall DXGSESSIONMGR::DXGSESSIONMGR(DXGSESSIONMGR *this)
{
  char *v2; // rcx
  struct _KEVENT *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  void *EventHandle; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 7) = 44;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 32;
  v2 = (char *)this + 48;
  *((_DWORD *)this + 18) = 3;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 45;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 53) = -1;
  *((_DWORD *)this + 54) = 32;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 240) = 0;
  *((_QWORD *)this + 29) = (char *)this + 224;
  *((_QWORD *)this + 28) = (char *)this + 224;
  memset(v2, 0, 8LL * *((unsigned int *)this + 18));
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 22) = (char *)this + 168;
  *((_QWORD *)this + 21) = (char *)this + 168;
  v3 = IoCreateNotificationEvent(0LL, &EventHandle);
  *((_QWORD *)this + 17) = v3;
  if ( v3 )
  {
    KeSetEvent(v3, 0, 0);
    ObfReferenceObject(*((PVOID *)this + 17));
    ZwClose(EventHandle);
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v5 + 24) = 3412LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
