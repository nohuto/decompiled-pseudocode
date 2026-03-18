/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01A8D58
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001E250 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C001E2AC (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00F1AA0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01BA040 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, void *a2, bool a3, bool a4)
{
  __int64 v6; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct DXGPROCESS *Process; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v34[24]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v35[8]; // [rsp+40h] [rbp-39h] BYREF
  void *v36; // [rsp+48h] [rbp-31h]
  __int64 v37; // [rsp+50h] [rbp-29h]
  int v38; // [rsp+58h] [rbp-21h]
  __int16 v39; // [rsp+5Ch] [rbp-1Dh]
  char v40; // [rsp+5Eh] [rbp-1Bh]

  v37 = 0LL;
  v39 = 0;
  v6 = a1;
  v36 = a2;
  v38 = 2048;
  v40 = 0;
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v35, 1);
  v12 = v8;
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v35);
    Current = DXGPROCESS::GetCurrent(v18, v17);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, Current);
    if ( !(_DWORD)v6 )
      goto LABEL_25;
    if ( (*((_BYTE *)Current + 307) & 8) != 0 )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)Current + 55) + 200LL));
      v23 = *((_QWORD *)Current + 55);
      v24 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v24 < *(_DWORD *)(v23 + 240)
        && (v25 = *(_QWORD *)(v23 + 224),
            v26 = *(_DWORD *)(v25 + 16 * v24 + 8),
            (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60))
        && (v26 & 0x2000) == 0
        && (v26 & 0x1F) != 0
        && (*(_BYTE *)(v25 + 16LL * (unsigned int)v24 + 8) & 0x1F) == 1 )
      {
        v27 = *(_QWORD *)(v25 + 16LL * (unsigned int)v24);
      }
      else
      {
        v27 = 0LL;
      }
      ExReleasePushLockSharedEx(v23 + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v28 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v28 < *((_DWORD *)Current + 60)
        && (v29 = *((_QWORD *)Current + 28),
            v20 = (unsigned int)v28,
            v21 = ((unsigned int)v6 >> 25) & 0x60,
            v22 = *(unsigned int *)(v29 + 16 * v28 + 8),
            (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60))
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0
        && (v20 = 2LL * (unsigned int)v28, (*(_BYTE *)(v29 + 16LL * (unsigned int)v28 + 8) & 0x1F) == 1) )
      {
        v27 = *(_QWORD *)(v29 + 16LL * (unsigned int)v28);
      }
      else
      {
        v27 = 0LL;
      }
    }
    if ( v27 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
      KeEnterCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v33, Process);
      v30 = *(_QWORD *)(v27 + 2312);
      if ( v30 && *(_QWORD *)(v30 + 512) )
        DXGPROCESS::SuspendResumeEscapeAllDevices(Process, (const struct DXGADAPTER *)v27, a3, a4);
      KeLeaveCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v33);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v27);
    }
    else
    {
LABEL_25:
      v31 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      LODWORD(v12) = -1073741811;
      *(_QWORD *)(v31 + 24) = v6;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
  }
  if ( (_BYTE)v39 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v35, v14, v15);
  return (unsigned int)v12;
}
