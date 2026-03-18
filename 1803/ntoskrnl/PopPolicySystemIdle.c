/*
 * XREFs of PopPolicySystemIdle @ 0x14051C940
 * Callers:
 *     PopPolicyWorkerThread @ 0x140073DA0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopScanIdleList @ 0x140073E84 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x140074B28 (PopGetConsoleDisplayRequestCount.c)
 *     PopResetIdleTime @ 0x1400CF6BC (PopResetIdleTime.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopTraceSystemIdleUpdate @ 0x14051CAE8 (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x14051CC74 (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x14051CCB0 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 */

__int64 PopPolicySystemIdle()
{
  bool v0; // bl
  bool v1; // di
  int ConsoleDisplayRequestCount; // ebp
  bool v3; // si
  int v4; // r9d
  int v5; // r8d
  int v6; // edx
  _QWORD v8[3]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v9[20]; // [rsp+80h] [rbp-58h] BYREF
  char v10; // [rsp+94h] [rbp-44h]

  v0 = 0;
  memset(v8, 0, sizeof(v8));
  v1 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock();
  if ( MEMORY[0xFFFFF780000002E4] != dword_1403A9F90 )
  {
    dword_1403A9F90 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1u);
  }
  PopFilterCapabilities(&PopCapabilities, v9);
  v3 = 0;
  if ( !v10 && dword_1403A9FC0 )
    v3 = dword_1403A9F88 - dword_1403A9FC0 < (unsigned int)dword_1403AAA40;
  if ( dword_1403A9F8C && dword_1403A9F88 >= (unsigned int)dword_1403A9F8C && !v3 && !PopUserShutdownInProgress )
  {
    if ( v10 )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_1403A9FA4 == 0;
    }
  }
  byte_1403A9FD0 = v0;
  if ( v10 && (_DWORD)qword_1403A9F94 == 2 )
    v1 = dword_1403A9FA0 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5u);
    byte_1403A9FB5 = 0;
  }
  PopIsHibernateSupported(v9);
  PopIsDozeSupported(v9);
  LOBYTE(v4) = v3;
  LOBYTE(v5) = dword_1403A9FA4 != 0;
  v6 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v6) = v0;
  PopTraceSystemIdleUpdate(dword_1403A9F88, v6, v5, v4);
  if ( v0 )
  {
    if ( v1 )
    {
      PopQueueWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, DelayedWorkQueue);
    }
    else
    {
      v8[0] = 0x8000000007LL;
      PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)&qword_1403A9F94, dword_1403A9FA0, 1);
    }
  }
  PopReleasePolicyLock();
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
