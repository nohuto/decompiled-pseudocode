/*
 * XREFs of PopHiberCheckResume @ 0x140409FA0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140189280 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x140137880 (MmMapMemoryDumpMdlEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlRestoreEnlightenment @ 0x1401E4E84 (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401E75D0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1401E948C (HvlNotifyAcpiReenabled.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rbp
  char v1; // bl
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // al
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // [rsp+20h] [rbp-168h] BYREF
  int v17; // [rsp+28h] [rbp-160h]
  __int64 v18; // [rsp+40h] [rbp-148h]
  __int64 v19; // [rsp+48h] [rbp-140h]
  __int128 v20; // [rsp+50h] [rbp-138h]
  __int128 v21; // [rsp+60h] [rbp-128h]

  v0 = qword_14034B1C0;
  v1 = 0;
  v2 = *(_QWORD *)(qword_14034B1C0 + 200);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25);
    ((void (__fastcall *)(_QWORD))off_14033B548[0])(0LL);
    v3 = __rdtsc();
    PoResumeFromHibernate = 1;
    ((void (__fastcall *)(__int64))off_14033B3D0[0])(5LL);
    ((void (__fastcall *)(__int64))off_14033B548[0])(1LL);
    ((void (__fastcall *)(__int64))off_14033B4D0[0])(5LL);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment();
      off_14033B4B8[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    v4 = (char)KdDebuggerEnabled;
    if ( (_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
      v4 = (char)KdDebuggerEnabled;
    }
    if ( v4 && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (PopSimulate & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume(*(_QWORD *)(v0 + 232), *(_QWORD *)(v0 + 240));
    if ( *(_QWORD *)(v2 + 928) )
    {
      v11 = *(_QWORD *)(v0 + 272);
      v12 = *(_OWORD *)(v2 + 928);
      v16 = 0LL;
      v13 = *(_OWORD *)(v2 + 944);
      v14 = *(_QWORD *)(v11 + 8);
      v17 = 80;
      v18 = 0LL;
      v19 = 0x4000LL;
      v20 = v12;
      v21 = v13;
      MmMapMemoryDumpMdlEx(v14, v5, (__int64)&v16, 1);
      v15 = *(_QWORD *)(v0 + 272);
      HIWORD(v17) |= 1u;
      memset(*(void **)(v15 + 8), 0, 0x4000uLL);
    }
    v6 = &qword_14034B5D8;
    v7 = 3LL;
    qword_140344B38 = *(_QWORD *)(v2 + 904);
    v8 = (_OWORD *)(v2 + 136);
    do
    {
      *(_OWORD *)v6 = *v8;
      *((_OWORD *)v6 + 1) = v8[1];
      *((_OWORD *)v6 + 2) = v8[2];
      *((_OWORD *)v6 + 3) = v8[3];
      *((_OWORD *)v6 + 4) = v8[4];
      *((_OWORD *)v6 + 5) = v8[5];
      *((_OWORD *)v6 + 6) = v8[6];
      v6 += 16;
      v9 = v8[7];
      v8 += 8;
      *((_OWORD *)v6 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)v6 = *v8;
    *((_OWORD *)v6 + 1) = v8[1];
    *((_OWORD *)v6 + 2) = v8[2];
    *((_OWORD *)v6 + 3) = v8[3];
    *((_OWORD *)v6 + 4) = v8[4];
    *((_OWORD *)v6 + 5) = v8[5];
    *((_OWORD *)v6 + 6) = v8[6];
    v6[14] = *((_QWORD *)v8 + 14);
    *(_DWORD *)(v0 + 224) = *(_DWORD *)(v2 + 656);
    *(_BYTE *)(v0 + 4) = 0;
    qword_14034B6A8 = v3;
    qword_14034B638 = v3 - qword_14034B640;
    if ( (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 20) = 0;
    return 1;
  }
  return v1;
}
