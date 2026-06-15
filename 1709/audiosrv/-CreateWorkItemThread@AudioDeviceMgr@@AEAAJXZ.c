/*
 * XREFs of ?CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ @ 0x1800E6DF0
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800E74EC (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::CreateWorkItemThread(AudioDeviceMgr *this)
{
  signed int v1; // edx
  HANDLE EventW; // rax
  signed int LastError; // eax
  HANDLE v5; // rax
  signed int v6; // eax
  char *Thread; // rax
  signed int v8; // eax

  v1 = 0;
  if ( ((*((_QWORD *)this + 34) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 32) = EventW;
    if ( (((unsigned __int64)EventW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_6;
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    if ( v1 >= 0 )
    {
LABEL_6:
      v5 = CreateEventW(0LL, 0, 0, 0LL);
      *((_QWORD *)this + 33) = v5;
      if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        goto LABEL_10;
      v6 = GetLastError();
      v1 = v6;
      if ( v6 > 0 )
        v1 = (unsigned __int16)v6 | 0x80070000;
      if ( v1 >= 0 )
      {
LABEL_10:
        Thread = (char *)CreateThread(0LL, 0LL, AudioDeviceMgr::s_WorkItemThreadProc, this, 0, 0LL);
        *((_QWORD *)this + 34) = Thread;
        if ( (unsigned __int64)(Thread - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v8 = GetLastError();
          v1 = v8;
          if ( v8 > 0 )
            return (unsigned __int16)v8 | 0x80070000;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return (unsigned int)v1;
}
