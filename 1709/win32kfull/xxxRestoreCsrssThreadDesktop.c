/*
 * XREFs of xxxRestoreCsrssThreadDesktop @ 0x1C00484B0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0047A8C (xxxQueryInformationThread.c)
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 *     xxxHardErrorControl @ 0x1C020DE0C (xxxHardErrorControl.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     CloseProtectedHandle @ 0x1C0048FAC (CloseProtectedHandle.c)
 *     SendMsgCleanup @ 0x1C00490C0 (SendMsgCleanup.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxRestoreCsrssThreadDesktop(_QWORD *a1, char a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  void *v6; // rcx
  _BYTE v8[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, 0x30uLL);
  v4 = *(_QWORD *)(gptiCurrent + 432LL);
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
    CloseProtectedHandle(v6);
    a1[1] = 0LL;
  }
  return v5;
}
