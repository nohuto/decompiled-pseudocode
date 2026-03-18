/*
 * XREFs of PopHiberCheckResume @ 0x140475210
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1401B29E0 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1402267F8 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x140226D18 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140229EF0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x14022BE84 (HvlNotifyAcpiReenabled.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rbp
  char v1; // bl
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-158h] BYREF
  int v15; // [rsp+28h] [rbp-150h]
  __int64 v16; // [rsp+40h] [rbp-138h]
  __int64 v17; // [rsp+48h] [rbp-130h]
  __int128 v18; // [rsp+50h] [rbp-128h]
  __int128 v19; // [rsp+60h] [rbp-118h]

  v0 = BugCheckParameter4;
  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter4 + 200);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25);
    ((void (__fastcall *)(_QWORD))off_140398918[0])(0LL);
    PoResumeFromHibernate = 1;
    v3 = __rdtsc();
    ((void (__fastcall *)(__int64))off_1403987A0[0])(5LL);
    ((void (__fastcall *)(__int64))off_140398918[0])(1LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment();
      off_140398888[0]();
    }
    ((void (__fastcall *)(__int64))off_1403988A0[0])(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume(*(_QWORD *)(v0 + 224), *(_QWORD *)(v0 + 232));
    if ( *(_QWORD *)(v2 + 928) )
    {
      v10 = *(_QWORD *)(v0 + 264);
      v11 = *(_OWORD *)(v2 + 928);
      v14 = 0LL;
      v12 = *(_OWORD *)(v2 + 944);
      v13 = *(_QWORD *)(v10 + 8);
      v15 = 80;
      v16 = 0LL;
      v17 = 0x4000LL;
      v18 = v11;
      v19 = v12;
      MmMapMemoryDumpMdlEx(v13, v4, (__int64)&v14, 1);
      memset(*(void **)(*(_QWORD *)(v0 + 264) + 8LL), 0, 0x4000uLL);
    }
    v5 = &qword_1403AA4F8;
    v6 = 3LL;
    qword_1403A1C58 = *(_QWORD *)(v2 + 904);
    v7 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v5 = *v7;
      *((_OWORD *)v5 + 1) = v7[1];
      *((_OWORD *)v5 + 2) = v7[2];
      *((_OWORD *)v5 + 3) = v7[3];
      *((_OWORD *)v5 + 4) = v7[4];
      *((_OWORD *)v5 + 5) = v7[5];
      *((_OWORD *)v5 + 6) = v7[6];
      v5 += 16;
      v8 = v7[7];
      v7 += 8;
      *((_OWORD *)v5 - 1) = v8;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v5 = *v7;
    *((_OWORD *)v5 + 1) = v7[1];
    *((_OWORD *)v5 + 2) = v7[2];
    *((_OWORD *)v5 + 3) = v7[3];
    *((_OWORD *)v5 + 4) = v7[4];
    *((_OWORD *)v5 + 5) = v7[5];
    *((_OWORD *)v5 + 6) = v7[6];
    v5[14] = *((_QWORD *)v7 + 14);
    *(_BYTE *)(v0 + 4) = 0;
    qword_1403AA5C8 = v3;
    qword_1403AA558 = v3 - qword_1403AA560;
    if ( (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}
