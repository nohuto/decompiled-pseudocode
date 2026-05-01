/*
 * XREFs of CrmStateMonitorTestStart @ 0x18006A894
 * Callers:
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorTestStart(_QWORD *lpParameter)
{
  _DWORD *v1; // r9
  unsigned int v2; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  const void *v6; // r9
  void *v7; // r10
  HANDLE EventW; // rax
  HANDLE Thread; // rax

  v1 = lpParameter + 9;
  v2 = 0;
  lpParameter[5] = lpParameter + 9;
  v4 = *(_DWORD *)lpParameter;
  *v1 = 0;
  v5 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(v7, v6, v5);
  if ( CrmStateMonitorTestProvideRandomNotifications )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    lpParameter[8] = EventW;
    if ( !EventW
      || (Thread = CreateThread(0LL, 0LL, CrmStateMonitorWorkerThread, lpParameter, 0, 0LL),
          (lpParameter[7] = Thread) == 0LL) )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
  }
  return v2;
}
