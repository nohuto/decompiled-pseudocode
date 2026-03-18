/*
 * XREFs of PopPolicySystemIdle @ 0x1404E8080
 * Callers:
 *     PopPolicyWorkerThread @ 0x1400B0E10 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetConsoleDisplayRequestCount @ 0x1400B1110 (PopGetConsoleDisplayRequestCount.c)
 *     PopScanIdleList @ 0x1400B1278 (PopScanIdleList.c)
 *     PopResetIdleTime @ 0x14012EC3C (PopResetIdleTime.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopTraceSystemIdleUpdate @ 0x1404E8560 (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x1404E86D8 (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x1404E8714 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1404E882C (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
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
  if ( MEMORY[0xFFFFF780000002E4] != dword_140365710 )
  {
    dword_140365710 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1);
  }
  PopFilterCapabilities(&PopCapabilities, v9);
  v3 = 0;
  if ( !v10 && dword_140365740 )
    v3 = dword_140365708 - dword_140365740 < (unsigned int)dword_1403661C0;
  if ( dword_14036570C && dword_140365708 >= (unsigned int)dword_14036570C && !v3 && !PopUserShutdownInProgress )
  {
    if ( v10 )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140365724 == 0;
    }
  }
  byte_140365750 = v0;
  if ( v10 && (_DWORD)qword_140365714 == 2 )
    v1 = dword_140365720 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5);
    byte_140365735 = 0;
  }
  PopIsHibernateSupported(v9);
  PopIsDozeSupported(v9);
  LOBYTE(v4) = v3;
  LOBYTE(v5) = dword_140365724 != 0;
  v6 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v6) = v0;
  PopTraceSystemIdleUpdate(dword_140365708, v6, v5, v4);
  if ( v0 )
  {
    if ( v1 )
    {
      PopReleasePolicyLock();
      (*((void (**)(void))&xmmword_14038D4F0 + 1))();
      goto LABEL_12;
    }
    v8[0] = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)&qword_140365714, dword_140365720, 1);
  }
  PopReleasePolicyLock();
LABEL_12:
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
