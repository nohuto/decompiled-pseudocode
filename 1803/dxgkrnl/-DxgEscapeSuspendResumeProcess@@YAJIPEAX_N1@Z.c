/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C019B9D0
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025104 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0025160 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00D2E50 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01B7E4C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, void *a2, bool a3, bool a4)
{
  __int64 v5; // r14
  bool v6; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  struct DXGPROCESS *Process; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r8
  int v24; // edx
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE v32[8]; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v33[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v34[8]; // [rsp+50h] [rbp-49h] BYREF
  void *v35; // [rsp+58h] [rbp-41h]
  __int128 v36; // [rsp+60h] [rbp-39h]
  int v37; // [rsp+70h] [rbp-29h]
  __int16 v38; // [rsp+74h] [rbp-25h]
  char v39; // [rsp+76h] [rbp-23h]

  v38 = 0;
  v5 = a1;
  v35 = a2;
  v36 = 0LL;
  v6 = a4;
  v37 = 2048;
  v39 = 0;
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v34, 1);
  v12 = v8;
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v34);
    Current = DXGPROCESS::GetCurrent(v16, v15);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v33, (struct _KTHREAD **)Current);
    if ( !(_DWORD)v5 )
      goto LABEL_25;
    v21 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (*((_BYTE *)Current + 323) & 8) != 0 )
    {
      v22 = *((_QWORD *)Current + 57);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 208));
      if ( (unsigned int)v21 < *(_DWORD *)(v22 + 248)
        && (v23 = *(_QWORD *)(v22 + 232),
            v24 = *(_DWORD *)(v23 + 16LL * (unsigned int)v21 + 8),
            (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * (unsigned int)v21 + 8) & 0x60))
        && (v24 & 0x2000) == 0
        && (v24 & 0x1F) != 0
        && (v25 = 2 * v21, (v24 & 0x1F) == 1) )
      {
        v26 = *(_QWORD *)(v23 + 8 * v25);
      }
      else
      {
        v26 = 0LL;
      }
      ExReleasePushLockSharedEx(v22 + 208, 0LL);
      KeLeaveCriticalRegion();
      v6 = a4;
    }
    else if ( (unsigned int)v21 < *((_DWORD *)Current + 62)
           && (v20 = *((_QWORD *)Current + 29),
               v19 = ((unsigned int)v5 >> 25) & 0x60,
               v18 = *(unsigned int *)(v20 + 16 * v21 + 8),
               (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v21 + 8) & 0x60))
           && (v18 & 0x2000) == 0
           && (v18 & 0x1F) != 0
           && (v27 = 2 * v21, v18 &= 0x1Fu, (_BYTE)v18 == 1) )
    {
      v26 = *(_QWORD *)(v20 + 8 * v27);
    }
    else
    {
      v26 = 0LL;
    }
    if ( v26 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
      KeEnterCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v32, Process);
      v28 = *(_QWORD *)(v26 + 2464);
      if ( v28 && *(_QWORD *)(v28 + 528) )
        DXGPROCESS::SuspendResumeEscapeAllDevices(Process, (const struct DXGADAPTER *)v26, a3, v6);
      KeLeaveCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v32);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v26);
    }
    else
    {
LABEL_25:
      v29 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      LODWORD(v12) = -1073741811;
      *(_QWORD *)(v29 + 24) = v5;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
  }
  if ( (_BYTE)v38 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v34);
  return (unsigned int)v12;
}
