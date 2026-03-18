/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00DD5C4
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DF374 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0092A34 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACC14 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00BBC7C (DxgkRemoveSessionViewForCurrentSession.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01CB260 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01F2644 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  DXGADAPTER ***v10; // r15
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rcx
  unsigned int v14; // r14d
  char v15; // bl
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  bool v19; // zf
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  struct DXGDEVICE *v27; // [rsp+30h] [rbp-69h]
  _BYTE v28[8]; // [rsp+38h] [rbp-61h] BYREF
  char v29; // [rsp+40h] [rbp-59h]
  _BYTE v30[24]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v32[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v33[104]; // [rsp+88h] [rbp-11h] BYREF
  DXGDEVICE *v34; // [rsp+100h] [rbp+67h] BYREF
  char v35; // [rsp+110h] [rbp+77h]
  __int64 v36; // [rsp+118h] [rbp+7Fh]

  v3 = 0LL;
  v35 = 1;
  v34 = 0LL;
  v36 = a3;
  v6 = 224LL * a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v3);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
      v34 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v34,
                                             0LL);
    v9 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v26[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
      v26[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
      v26[5] = v9;
      WdLogEvent5_WdError(v26);
      return (unsigned int)v9;
    }
    v3 = (volatile signed __int64 *)v34;
    v27 = v34;
    v10 = (DXGADAPTER ***)*((_QWORD *)v34 + 209);
    if ( !v10 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30, v34);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, a2[37]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v3, 1, v11, 0);
    v12 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v31, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v3) )
    {
      if ( (int)v12 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v21[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
        v21[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
        v21[5] = *((_QWORD *)this + 8);
        v21[6] = v12;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        v14 = 0;
        if ( *((_DWORD *)v10[288] + 20) )
        {
          v15 = v35;
          do
          {
            v16 = *((_QWORD *)this + 8);
            v17 = *(_QWORD *)(v16 + 40);
            if ( ((1 << v14) & *(_DWORD *)(v17 + v6 + 80)) != 0 )
            {
              v18 = *(_DWORD *)(264LL * *(unsigned int *)(v17 + 4 * (56 * v36 + v14) + 8) + v16 + 240);
              if ( v18 < 0 )
              {
                v15 = 0;
                *(_DWORD *)(v17 + 4 * (56 * v36 + v14) + 156) = v18;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 152) |= 1 << v14;
                v22 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v10[288], v14);
                v12 = v22;
                if ( v22 < 0 )
                {
                  v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
                  v24[3] = v14;
                  v24[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
                  v24[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
                  v24[6] = v12;
                  WdLogEvent5_WdError(v24);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v14,
                  0);
              }
            }
            ++v14;
          }
          while ( v14 < *((_DWORD *)v10[288] + 20) );
          v19 = v15 == 0;
          v3 = (volatile signed __int64 *)v27;
          if ( v19 )
            DmmDisableAllFailurePathsOnAdapter(
              v10,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 152),
              v27);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      if ( v29 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
      return (unsigned int)v12;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v33);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    if ( v29 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v30);
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v25[3] = v3;
  v25[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
  v25[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
  v25[6] = -1073741811LL;
  WdLogEvent5_WdError(v25);
  if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  return 3221225485LL;
}
