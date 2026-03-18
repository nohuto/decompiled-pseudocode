/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004F1D8
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0051F40 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@IEBA_NXZ @ 0x1C004F1B4 (-ExecutingOnSensorHostingThread@CBaseInput@@IEBA_NXZ.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004F3E0 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@CBaseInput@@AEAAXK@Z @ 0x1C004F5B4 (-ApplyRimDevBackedDeviceSummaryInfomation@CBaseInput@@AEAAXK@Z.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMBroadcastToSecondaryRims @ 0x1C0094508 (RIMBroadcastToSecondaryRims.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     RIMUpdateSecondaryRim @ 0x1C010FB20 (RIMUpdateSecondaryRim.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rdi
  bool v6; // r14
  bool v7; // bl
  int v8; // eax
  unsigned int v9; // edi
  char v10; // r15
  __int128 v11; // rcx
  int v12; // edi
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+34h] [rbp-34h]
  _QWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+4Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a2 + 3);
  v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v6 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v7 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v4 + 40);
  ExReleasePushLockSharedEx(v4, 0LL);
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
        v10 &= -(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != 0);
      }
    }
    if ( *(_DWORD *)a2 == 1 || ((v2 + 64) & -(__int64)(v2 != 0)) == 0 )
      *((_QWORD *)&v11 + 1) = 0LL;
    else
      *((_QWORD *)&v11 + 1) = *(_QWORD *)((v2 + 64) & -(__int64)(v2 != 0));
    if ( v6 && *(_DWORD *)a2 == 4 )
    {
      RIMBroadcastToSecondaryRims(a2);
      v6 = 0;
    }
    RIMLockExclusive(&CBaseInput::_sLock);
    v12 = ((__int64 (__fastcall *)(CBaseInput *, unsigned __int64))off_1C015F0A0[2 * v9])(this, v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      v11 = -(__int128)v2;
      *((_QWORD *)&v11 + 1) &= v2 + 64;
      if ( *((_QWORD *)&v11 + 1) )
        *((_QWORD *)&v11 + 1) = **((_QWORD **)&v11 + 1);
      else
        *((_QWORD *)&v11 + 1) = 0LL;
    }
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInfomation((CBaseInput *)v11, *((_DWORD *)a2 + 1));
    qword_1C018EC98 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      if ( v2 )
        *(_QWORD *)&v11 = v2 + 64;
      else
        *(_QWORD *)&v11 = 0LL;
      v16 = *(_DWORD *)a2;
      v13 = *(_DWORD *)(v2 + 248);
      v14 = v11;
      v15 = v12;
      if ( (v13 & 0x8000000) != 0 )
      {
        v18 = 0;
        v17[0] = v11;
        *(_DWORD *)(v2 + 248) = v13 & 0xF7FFFFFF;
        v17[1] = *((_QWORD *)&v11 + 1);
        v19 = 1;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v17);
      }
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v14);
    }
    if ( v6 )
      RIMBroadcastToSecondaryRims(a2);
  }
}
