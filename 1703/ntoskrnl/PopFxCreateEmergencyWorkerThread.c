/*
 * XREFs of PopFxCreateEmergencyWorkerThread @ 0x1405CF5DC
 * Callers:
 *     PopFxRegisterPluginEx @ 0x14022B7A0 (PopFxRegisterPluginEx.c)
 *     PoFxInitPowerManagement @ 0x140820D80 (PoFxInitPowerManagement.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopFxCreateEmergencyWorkerThread(__int64 a1)
{
  int v1; // ebx
  __int128 v3; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+60h] [rbp-28h]
  int v5; // [rsp+68h] [rbp-20h]
  __int128 v6; // [rsp+70h] [rbp-18h]
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v3) = 48;
  *((_QWORD *)&v3 + 1) = 0LL;
  v5 = 512;
  v4 = 0LL;
  v6 = 0LL;
  v1 = PsCreateSystemThreadEx((__int64)&Handle, 0x1FFFFF, &v3, 0LL, 0LL, (__int64)PopFxEmergencyWorker, a1, 0LL, 0LL);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
