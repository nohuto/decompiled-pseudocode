/*
 * XREFs of PdcPortSendMessage @ 0x180172860
 * Callers:
 *     PdcpNotificationClientCallback @ 0x180172040 (PdcpNotificationClientCallback.c)
 * Callees:
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall PdcPortSendMessage(RTL_SRWLOCK *a1, _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebx

  v2 = a1 + 2;
  AcquireSRWLockShared(a1 + 2);
  if ( a1[1].Ptr )
  {
    memset(a2, 0, 0x28uLL);
    *a2 = 50332376;
    v5 = ZwAlpcSendWaitReceivePort(a1[1].Ptr, 0x10000LL, a2, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    v5 = -1073741816;
  }
  ReleaseSRWLockShared(v2);
  return v5;
}
