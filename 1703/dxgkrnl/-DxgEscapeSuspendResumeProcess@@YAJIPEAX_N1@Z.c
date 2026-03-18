/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0194244
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002144C (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C00214A8 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C009AFE8 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01A232C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, void *a2, bool a3, bool a4)
{
  __int64 v6; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGPROCESS *Process; // r14
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  unsigned int v28; // edx
  __int64 v29; // r9
  int v30; // r8d
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v36[24]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v37[8]; // [rsp+40h] [rbp-39h] BYREF
  void *v38; // [rsp+48h] [rbp-31h]
  __int64 v39; // [rsp+50h] [rbp-29h]
  int v40; // [rsp+58h] [rbp-21h]
  __int16 v41; // [rsp+5Ch] [rbp-1Dh]
  char v42; // [rsp+5Eh] [rbp-1Bh]

  v39 = 0LL;
  v41 = 0;
  v6 = a1;
  v38 = a2;
  v40 = 2048;
  v42 = 0;
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v37, 1);
  v13 = v8;
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v37);
    Current = DXGPROCESS::GetCurrent(v19);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, Current, v21, v22);
    if ( !(_DWORD)v6 )
      goto LABEL_25;
    if ( (*((_BYTE *)Current + 275) & 4) != 0 )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)Current + 50) + 168LL));
      v27 = *((_QWORD *)Current + 50);
      v28 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
      if ( v28 < *(_DWORD *)(v27 + 208)
        && (v29 = *(_QWORD *)(v27 + 192),
            v30 = *(_DWORD *)(v29 + 16LL * v28 + 8),
            (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x30))
        && (v30 & 0x1000) == 0
        && (v30 & 0xF) != 0
        && (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0xF) == 1 )
      {
        v31 = *(_QWORD *)(v29 + 16LL * v28);
      }
      else
      {
        v31 = 0LL;
      }
      ExReleasePushLockSharedEx(v27 + 168, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v23 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v23 < *((_DWORD *)Current + 52)
        && (v26 = *((_QWORD *)Current + 24),
            v24 = ((unsigned int)v6 >> 26) & 0x30,
            v25 = *(unsigned int *)(v26 + 16LL * (unsigned int)v23 + 8),
            (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * (unsigned int)v23 + 8) & 0x30))
        && (v25 & 0x1000) == 0
        && (v25 & 0xF) != 0
        && (*(_BYTE *)(v26 + 16LL * (unsigned int)v23 + 8) & 0xF) == 1 )
      {
        v31 = *(_QWORD *)(v26 + 16LL * (unsigned int)v23);
      }
      else
      {
        v31 = 0LL;
      }
    }
    if ( v31 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v31 + 24));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
      KeEnterCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v35, Process);
      v32 = *(_QWORD *)(v31 + 2288);
      if ( v32 && *(_QWORD *)(v32 + 416) )
        DXGPROCESS::SuspendResumeEscapeAllDevices(Process, (const struct DXGADAPTER *)v31, a3, a4);
      KeLeaveCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v35);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v31);
    }
    else
    {
LABEL_25:
      v33 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      LODWORD(v13) = -1073741811;
      *(_QWORD *)(v33 + 24) = v6;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdWarning(v14);
  }
  if ( (_BYTE)v41 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v37, v15, v16, v17);
  return (unsigned int)v13;
}
