/*
 * XREFs of PopPolicySystemIdle @ 0x1404C55E0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400702C0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopResetIdleTime @ 0x14003A050 (PopResetIdleTime.c)
 *     PopGetConsoleDisplayRequestCount @ 0x140070CB4 (PopGetConsoleDisplayRequestCount.c)
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopTraceSystemIdleUpdate @ 0x1404C579C (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x1404C592C (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x1404C5968 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1404C5A80 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 */

__int64 PopPolicySystemIdle()
{
  bool v0; // bl
  bool v1; // di
  int ConsoleDisplayRequestCount; // r15d
  bool v3; // si
  int v4; // ebp
  int v5; // r14d
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  _QWORD v10[3]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v11[20]; // [rsp+80h] [rbp-68h] BYREF
  char v12; // [rsp+94h] [rbp-54h]

  v0 = 0;
  memset(v10, 0, sizeof(v10));
  v1 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock();
  if ( MEMORY[0xFFFFF780000002E4] != dword_14034B0B0 )
  {
    dword_14034B0B0 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1);
  }
  PopFilterCapabilities(&PopCapabilities, v11);
  v3 = 0;
  v4 = dword_14034B0A8;
  if ( !v12 && dword_14034B0E0 )
    v3 = dword_14034B0A8 - dword_14034B0E0 < (unsigned int)dword_14034BB40;
  v5 = dword_14034B0C4;
  if ( dword_14034B0AC && dword_14034B0A8 >= (unsigned int)dword_14034B0AC && !v3 && !PopUserShutdownInProgress )
  {
    if ( v12 )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_14034B0C4 == 0;
    }
  }
  byte_14034B0F0 = v0;
  if ( v12 && (_DWORD)qword_14034B0B4 == 2 )
    v1 = dword_14034B0C0 == 1;
  if ( v0 )
  {
    if ( !v1 )
    {
      PopResetIdleTime(5);
      v5 = dword_14034B0C4;
      v4 = dword_14034B0A8;
    }
    byte_14034B0D5 = 0;
  }
  PopIsHibernateSupported(v11);
  PopIsDozeSupported(v11);
  LOBYTE(v6) = v5 != 0;
  LOBYTE(v7) = v3;
  v8 = (int)PopPolicy;
  LOBYTE(v8) = v0;
  PopTraceSystemIdleUpdate(v4, v8, v6, v7);
  if ( v0 )
  {
    if ( v1 )
    {
      PopReleasePolicyLock();
      ((void (*)(void))*(&xmmword_14036E700 + 1))();
      goto LABEL_12;
    }
    v10[0] = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)v10, 0, (unsigned int)&qword_14034B0B4, dword_14034B0C0, 1);
  }
  PopReleasePolicyLock();
LABEL_12:
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
