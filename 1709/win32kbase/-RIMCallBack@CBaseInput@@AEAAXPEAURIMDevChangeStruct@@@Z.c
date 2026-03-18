/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0019C1C
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C001AE90 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C0018518 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0019BF8 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0019E30 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C0019FDC (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     RIMBroadcastToSecondaryRims @ 0x1C008FDEC (RIMBroadcastToSecondaryRims.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     RIMUpdateSecondaryRim @ 0x1C010E49C (RIMUpdateSecondaryRim.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rdi
  bool v6; // r14
  bool v7; // bl
  int v8; // eax
  unsigned int v9; // r15d
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  int v15; // r15d
  CBaseInput *v16; // rcx
  int v17; // eax
  __int64 *v18; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+34h] [rbp-34h]
  _QWORD v22[2]; // [rsp+38h] [rbp-30h] BYREF
  int v23; // [rsp+48h] [rbp-20h]
  int v24; // [rsp+4Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a2 + 3);
  RIMHandleAnySignalledReadsOnDestroyed((__int64)a2, 0LL);
  v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v6 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5, 0LL);
  v7 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v5 + 40);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    if ( *((_QWORD *)a2 + 4) )
    {
      if ( *((_DWORD *)a2 + 1) != 3 )
      {
        RIMUpdateSecondaryRim(a2);
        return;
      }
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 248);
      if ( (v8 & 0x4000) != 0 && (v8 & 0x8000) == 0 )
        return;
      if ( *((_DWORD *)a2 + 1) != 3 )
        v6 = *((_DWORD *)a2 + 2) == 32;
    }
  }
  v9 = *(_DWORD *)a2 - 1;
  if ( v9 < 4 )
  {
    v10 = *((_DWORD *)a2 + 1) != 3;
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v10 = 0;
        *(_DWORD *)(v2 + 248) |= 0x8000000u;
      }
      else
      {
        if ( *(_DWORD *)a2 == 2 )
          KeBugCheck(0x164u);
        v10 &= -(W32GetThreadWin32Thread(KeGetCurrentThread(), v11, v12, v13) != 0);
      }
    }
    if ( *(_DWORD *)a2 == 1 || ((v2 + 64) & -(__int64)(v2 != 0)) == 0 )
      v14 = 0LL;
    else
      v14 = *(_QWORD *)((v2 + 64) & -(__int64)(v2 != 0));
    if ( v6 && *(_DWORD *)a2 == 4 )
    {
      RIMBroadcastToSecondaryRims(a2);
      v6 = 0;
    }
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v15 = ((__int64 (__fastcall *)(CBaseInput *, unsigned __int64))off_1C015E190[2 * v9])(this, v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      v18 = (__int64 *)((v2 + 64) & ((unsigned __int128)-(__int128)v2 >> 64));
      if ( v18 )
        v14 = *v18;
      else
        v14 = 0LL;
    }
    qword_1C0193AF8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v16, *((_DWORD *)a2 + 1));
    if ( v10 )
    {
      v17 = *(_DWORD *)(v2 + 248);
      if ( (v17 & 0x8000000) != 0 )
      {
        *(_DWORD *)(v2 + 248) = v17 & 0xF7FFFFFF;
        if ( *(_DWORD *)a2 == 2 )
        {
          v20 = 0;
          v19[0] = v2 + 64;
          v19[1] = v14;
          v21 = 1;
          CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v19);
        }
        else
        {
          v10 = 0;
        }
      }
      if ( v10 )
      {
        v22[1] = v14;
        v22[0] = v2 + 64;
        v24 = *(_DWORD *)a2;
        v23 = v15;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v22);
      }
    }
    if ( v6 )
      RIMBroadcastToSecondaryRims(a2);
  }
}
