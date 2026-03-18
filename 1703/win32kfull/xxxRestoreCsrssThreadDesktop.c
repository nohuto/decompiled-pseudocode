/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00C7A50
 * Callers:
 *     xxxQueryInformationThread @ 0x1C001694C (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     SendMsgCleanup @ 0x1C00C6700 (SendMsgCleanup.c)
 *     CloseProtectedHandle @ 0x1C00C736C (CloseProtectedHandle.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(__int64 *a1, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  void *v6; // rcx
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, 0x30uLL);
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *a1 == v4 )
  {
    v5 = 0;
  }
  else
  {
    if ( v4 )
    {
      while ( (unsigned int)xxxInternalGetMessage((unsigned int)v8, 0, 0, 0, 3, 0) )
        xxxDispatchMessage(v8);
      if ( (a2 & 1) != 0 )
        SendMsgCleanup(gptiCurrent);
    }
    v5 = xxxSetThreadDesktop(0LL, *a1);
  }
  if ( *a1 )
  {
    ObfDereferenceObject((PVOID)*a1);
    *a1 = 0LL;
  }
  v6 = (void *)a1[1];
  if ( v6 )
  {
    CloseProtectedHandle(v6, 0);
    a1[1] = 0LL;
  }
  return v5;
}
