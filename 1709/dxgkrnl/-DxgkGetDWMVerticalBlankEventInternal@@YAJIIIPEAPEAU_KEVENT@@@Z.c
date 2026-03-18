/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00BBEF4
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C00BBDF0 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C00AC5EC (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, __int64 a2, unsigned int a3, struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct DXGADAPTER *v17; // rsi
  __int64 v18; // rbx
  int PairingAdapters; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGADAPTER *v23; // r14
  ADAPTER_DISPLAY **v24; // rbx
  __int64 v25; // rcx
  int v26; // esi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct DXGADAPTER *v41; // [rsp+38h] [rbp-59h] BYREF
  struct DXGADAPTER *v42; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v45[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v46[8]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v47[32]; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v48[40]; // [rsp+A0h] [rbp+Fh] BYREF

  v4 = a3;
  v5 = 0LL;
  v6 = (unsigned int)a2;
  v7 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v12 = Current;
  if ( !Current )
  {
    v28 = WdLogNewEntry5_WdError(v10);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v18;
  }
  if ( !*((_BYTE *)Current + 306) )
  {
    v29 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    LODWORD(v18) = -1073741790;
    *(_QWORD *)(v29 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v29);
    return (unsigned int)v18;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v45, Current);
  if ( (*((_BYTE *)v12 + 307) & 8) != 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)v12 + 55) + 200LL));
    v30 = *((_QWORD *)v12 + 55);
    v31 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v30 + 240)
      && (v32 = *(_QWORD *)(v30 + 224),
          v33 = *(_DWORD *)(v32 + 16 * v31 + 8),
          (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60))
      && (v33 & 0x2000) == 0
      && (v33 & 0x1F) != 0
      && (*(_BYTE *)(v32 + 16LL * (unsigned int)v31 + 8) & 0x1F) == 1 )
    {
      v17 = *(struct DXGADAPTER **)(v32 + 16LL * (unsigned int)v31);
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx(v30 + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v16 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v16 < *((_DWORD *)v12 + 60)
      && (v15 = *((_QWORD *)v12 + 28),
          v14 = ((unsigned int)v7 >> 25) & 0x60,
          v13 = *(unsigned int *)(v15 + 16 * v16 + 8),
          (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v16 + 8) & 0x60))
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0
      && (*(_BYTE *)(v15 + 16LL * (unsigned int)v16 + 8) & 0x1F) == 1 )
    {
      v17 = *(struct DXGADAPTER **)(v15 + 16LL * (unsigned int)v16);
    }
    else
    {
      v17 = 0LL;
    }
  }
  LODWORD(v18) = -1073741811;
  if ( !v17 )
  {
    v34 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v34 + 24) = v7;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v34);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
    return (unsigned int)v18;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_12;
  v35 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 >= *((_DWORD *)v12 + 60)
    || (v15 = *((_QWORD *)v12 + 28),
        v14 = ((unsigned int)v6 >> 25) & 0x60,
        v13 = *(unsigned int *)(v15 + 16 * v35 + 8),
        (((unsigned int)v6 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v35 + 8) & 0x60))
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0
    || (*(_BYTE *)(v15 + 16LL * (unsigned int)v35 + 8) & 0x1F) != 3
    || (v5 = *(_QWORD *)(v15 + 16LL * (unsigned int)v35)) == 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v34 + 24) = v17;
    *(_QWORD *)(v34 + 32) = v6;
    goto LABEL_47;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
  PairingAdapters = DxgkpGetPairingAdapters(v17, v4, &v42, &v43, &v41, &v44);
  v18 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v36[3] = v17;
    v36[4] = v4;
    v36[5] = v18;
  }
  else
  {
    v23 = v42;
    v24 = (ADAPTER_DISPLAY **)v41;
    if ( !v42 || !v41 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v37 + 24) = 4811LL;
      WdLogEvent5_WdAssertion(v37);
    }
    if ( (unsigned int)v4 < *((_DWORD *)v24[288] + 20) )
    {
      if ( !v5
        || v23 == *(struct DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL) && v24 == *(ADAPTER_DISPLAY ***)(v5 + 1672) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v23, (struct DXGADAPTER *const)v24);
        DXGADAPTER::ReleaseReferenceNoTracking(v23);
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v24);
        v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46);
        if ( v26 >= 0 )
        {
          if ( !*((_QWORD *)v23 + 289) )
          {
            v39 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v39 + 24) = 4846LL;
            WdLogEvent5_WdAssertion(v39);
          }
          if ( !v24[288] )
          {
            v40 = WdLogNewEntry5_WdAssertion(v25);
            *(_QWORD *)(v40 + 24) = 4847LL;
            WdLogEvent5_WdAssertion(v40);
          }
          if ( !(_DWORD)v6 || *(_DWORD *)(v5 + 408) == 1 )
          {
            ADAPTER_DISPLAY::GetVBlankEvent(v24[288], (unsigned int)v4, a4);
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v46);
          }
          else
          {
            v26 = -1073741130;
          }
        }
        LODWORD(v18) = v26;
        COREACCESS::~COREACCESS((COREACCESS *)v48);
        COREACCESS::~COREACCESS((COREACCESS *)v47);
      }
      else
      {
        v38 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v38 + 24) = v17;
        *(_QWORD *)(v38 + 32) = v6;
        WdLogEvent5_WdWarning(v38);
        LODWORD(v18) = -1073741811;
      }
      goto LABEL_25;
    }
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    LODWORD(v18) = -1073741811;
    v36[3] = v4;
    v36[4] = -1073741811LL;
  }
  WdLogEvent5_WdError(v36);
LABEL_25:
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  return (unsigned int)v18;
}
