/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0124780 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003AEAC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     RIMBroadcastToSecondaryRims @ 0x1C00FA084 (RIMBroadcastToSecondaryRims.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C00FAF84 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     RIMUpdateSecondaryRim @ 0x1C00FB5A4 (RIMUpdateSecondaryRim.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C0121AB0 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C012395C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  unsigned __int64 v2; // rbp
  CInputThread *v5; // rdi
  bool v6; // r14
  bool v7; // bl
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r15
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rdx
  CBaseInput *v21; // rcx
  int v22; // eax
  _QWORD v23[2]; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+34h] [rbp-34h]
  _QWORD v26[2]; // [rsp+38h] [rbp-30h] BYREF
  int v27; // [rsp+48h] [rbp-20h]
  int v28; // [rsp+4Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a2 + 3);
  RIMHandleAnySignalledReadsOnDestroyed((__int64)a2, 0LL);
  v5 = gpInputThread;
  v6 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v7 = CInputThread::_CalledOnInputThread(v5);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( *((_QWORD *)a2 + 4) )
    {
      if ( *((_DWORD *)a2 + 1) != 3 )
      {
        RIMUpdateSecondaryRim((__int64)a2);
        return;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v2 + 264);
      if ( (v9 & 0x4000) != 0 && (v9 & 0x8000) == 0 )
        return;
      if ( *((_DWORD *)a2 + 1) != 3 )
        v6 = *((_DWORD *)a2 + 2) == 32;
    }
  }
  v10 = *(_DWORD *)a2 - 1;
  if ( v10 < 5 )
  {
    v11 = 2LL * v10;
    if ( *((_DWORD *)&off_1C0172F40 + 4 * v10 + 2) != *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(&off_1C0172F40, v8);
    v12 = *((_DWORD *)a2 + 1) != 3;
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      v15 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == 1 )
      {
        v12 = 0;
        *(_DWORD *)(v2 + 264) |= 0x10000000u;
      }
      else
      {
        if ( v15 == 2 )
          KeBugCheck(0x164u);
        if ( (unsigned int)(v15 - 3) > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
        v12 &= -(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != 0);
      }
    }
    if ( *(_DWORD *)a2 != 1 && ((v2 + 80) & -(__int64)(v2 != 0)) != 0 )
      v16 = *(_QWORD **)((v2 + 80) & -(__int64)(v2 != 0));
    else
      v16 = 0LL;
    if ( v6 && *(_DWORD *)a2 == 4 )
    {
      RIMBroadcastToSecondaryRims((__int128 *)a2);
      v6 = 0;
    }
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v19 = ((__int64 (__fastcall *)(CBaseInput *, unsigned __int64))*(&off_1C0172F40 + v11))(this, v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( v16 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
      v16 = (_QWORD *)((v2 + 80) & ((unsigned __int128)-(__int128)v2 >> 64));
      if ( v16 )
        v16 = (_QWORD *)*v16;
    }
    qword_1C01A1658 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v21, *((_DWORD *)a2 + 1));
    if ( v12 )
    {
      if ( *((_DWORD *)a2 + 1) == 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
      if ( *((_QWORD *)a2 + 4) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
      v22 = *(_DWORD *)(v2 + 264);
      if ( (v22 & 0x10000000) != 0 )
      {
        *(_DWORD *)(v2 + 264) = v22 & 0xEFFFFFFF;
        if ( *(_DWORD *)a2 == 2 )
        {
          v24 = 0;
          v23[0] = v2 + 80;
          v23[1] = v16;
          v25 = 1;
          CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v23);
        }
        else
        {
          v12 = 0;
        }
      }
      if ( v12 )
      {
        v26[1] = v16;
        v26[0] = v2 + 80;
        v28 = *(_DWORD *)a2;
        v27 = v19;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v26);
      }
    }
    if ( v6 )
      RIMBroadcastToSecondaryRims((__int128 *)a2);
  }
}
