/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C00A4680
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C00A4580 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C00E6F3C (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        struct _KEVENT **a4)
{
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  struct DXGADAPTER *v20; // rsi
  __int64 v21; // rbx
  int PairingAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGADAPTER *v27; // r14
  ADAPTER_DISPLAY **v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r10
  unsigned int v38; // edx
  __int64 v39; // r9
  int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  struct DXGADAPTER *v48; // [rsp+38h] [rbp-59h] BYREF
  struct DXGADAPTER *v49; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int64 v50; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v52[32]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v53[8]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v54[32]; // [rsp+80h] [rbp-11h] BYREF
  _BYTE v55[40]; // [rsp+A0h] [rbp+Fh] BYREF

  v4 = a3;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  Current = DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( !Current )
  {
    v35 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v21;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 9) + 216LL))() )
  {
    v36 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    LODWORD(v21) = -1073741790;
    *(_QWORD *)(v36 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v36);
    return (unsigned int)v21;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v52, v11, v14, v15);
  if ( (*((_BYTE *)v11 + 275) & 4) != 0 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)v11 + 50) + 168LL));
    v37 = *((_QWORD *)v11 + 50);
    v38 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v38 < *(_DWORD *)(v37 + 208)
      && (v39 = *(_QWORD *)(v37 + 192),
          v40 = *(_DWORD *)(v39 + 16LL * v38 + 8),
          (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x30))
      && (v40 & 0x1000) == 0
      && (v40 & 0xF) != 0
      && (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0xF) == 1 )
    {
      v20 = *(struct DXGADAPTER **)(v39 + 16LL * v38);
    }
    else
    {
      v20 = 0LL;
    }
    ExReleasePushLockSharedEx(v37 + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v19 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *((_DWORD *)v11 + 52)
      && (v18 = *((_QWORD *)v11 + 24),
          v16 = ((unsigned int)v7 >> 26) & 0x30,
          v17 = *(unsigned int *)(v18 + 16LL * (unsigned int)v19 + 8),
          (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * (unsigned int)v19 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (*(_BYTE *)(v18 + 16LL * (unsigned int)v19 + 8) & 0xF) == 1 )
    {
      v20 = *(struct DXGADAPTER **)(v18 + 16LL * (unsigned int)v19);
    }
    else
    {
      v20 = 0LL;
    }
  }
  LODWORD(v21) = -1073741811;
  if ( !v20 )
  {
    v41 = WdLogNewEntry5_WdWarning(v16, v19, v17, v18);
    *(_QWORD *)(v41 + 24) = v7;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdWarning(v41);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
    return (unsigned int)v21;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_12;
  v42 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v42 >= *((_DWORD *)v11 + 52)
    || (v18 = *((_QWORD *)v11 + 24),
        v16 = ((unsigned int)v6 >> 26) & 0x30,
        v17 = *(unsigned int *)(v18 + 16LL * (unsigned int)v42 + 8),
        (((unsigned int)v6 >> 26) & 0x30) != (*(_BYTE *)(v18 + 16LL * (unsigned int)v42 + 8) & 0x30))
    || (v17 & 0x1000) != 0
    || (v17 & 0xF) == 0
    || (*(_BYTE *)(v18 + 16LL * (unsigned int)v42 + 8) & 0xF) != 3
    || (v5 = *(_QWORD *)(v18 + 16LL * (unsigned int)v42)) == 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v16, v42, v17, v18);
    *(_QWORD *)(v41 + 24) = v20;
    *(_QWORD *)(v41 + 32) = v6;
    goto LABEL_47;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
  PairingAdapters = DxgkpGetPairingAdapters(v20, v4, &v49, &v50, &v48, &v51);
  v21 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v43[3] = v20;
    v43[4] = v4;
    v43[5] = v21;
  }
  else
  {
    v27 = v49;
    v28 = (ADAPTER_DISPLAY **)v48;
    if ( !v49 || !v48 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v44 + 24) = 4526LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( (unsigned int)v4 < *((_DWORD *)v28[285] + 20) )
    {
      if ( !v5
        || v27 == *(struct DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL) && v28 == *(ADAPTER_DISPLAY ***)(v5 + 1800) )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v27, (struct DXGADAPTER *const)v28);
        DXGADAPTER::ReleaseReference(v27);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v28);
        v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53);
        if ( v31 >= 0 )
        {
          if ( !*((_QWORD *)v27 + 286) )
          {
            v46 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
            *(_QWORD *)(v46 + 24) = 4561LL;
            WdLogEvent5_WdAssertion(v46);
          }
          if ( !v28[285] )
          {
            v47 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
            *(_QWORD *)(v47 + 24) = 4562LL;
            WdLogEvent5_WdAssertion(v47);
          }
          if ( !(_DWORD)v6 || *(_DWORD *)(v5 + 408) == 1 )
          {
            ADAPTER_DISPLAY::GetVBlankEvent(v28[285], v4, a4);
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v53);
          }
          else
          {
            v31 = -1073741130;
          }
        }
        LODWORD(v21) = v31;
        COREACCESS::~COREACCESS((COREACCESS *)v55);
        COREACCESS::~COREACCESS((COREACCESS *)v54);
      }
      else
      {
        v45 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
        *(_QWORD *)(v45 + 24) = v20;
        *(_QWORD *)(v45 + 32) = v6;
        WdLogEvent5_WdWarning(v45);
        LODWORD(v21) = -1073741811;
      }
      goto LABEL_25;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    LODWORD(v21) = -1073741811;
    v43[3] = v4;
    v43[4] = -1073741811LL;
  }
  WdLogEvent5_WdError(v43);
LABEL_25:
  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
  return (unsigned int)v21;
}
