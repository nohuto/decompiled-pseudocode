/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBE94 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C009A800 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00BFBD0 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7528 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C01B14A0 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        unsigned int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  DXGADAPTER ***v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r14d
  char v22; // bl
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r10
  int v26; // ecx
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  struct DXGDEVICE *v42; // [rsp+30h] [rbp-69h]
  _BYTE v43[8]; // [rsp+38h] [rbp-61h] BYREF
  char v44; // [rsp+40h] [rbp-59h]
  _BYTE v45[24]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v46[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v47[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v48[104]; // [rsp+88h] [rbp-11h] BYREF
  DXGDEVICE *v49; // [rsp+100h] [rbp+67h] BYREF
  char v50; // [rsp+110h] [rbp+77h]
  __int64 v51; // [rsp+118h] [rbp+7Fh]

  v3 = 0LL;
  v50 = 1;
  v49 = 0LL;
  v51 = a3;
  v6 = 216LL * a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        (struct DXGDEVICE *)v3);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      v49 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                             &v49,
                                             0LL);
    v10 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v41[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
      v41[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
      v41[5] = v10;
      WdLogEvent5_WdError(v41);
      return (unsigned int)v10;
    }
    v3 = (volatile signed __int64 *)v49;
    v42 = v49;
    v11 = (DXGADAPTER ***)*((_QWORD *)v49 + 225);
    if ( !v11 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45, v49);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, a2[33], v12, v13);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v3, 1LL, v14, 0);
    v15 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v46, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v3, v16, v17, v18) )
    {
      if ( (int)v15 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
        v35[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
        v35[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
        v35[5] = *((_QWORD *)this + 8);
        v35[6] = v15;
        WdLogEvent5_WdError(v35);
      }
      else
      {
        v21 = 0;
        if ( *((_DWORD *)v11[285] + 20) )
        {
          v22 = v50;
          do
          {
            v23 = *((_QWORD *)this + 8);
            v24 = *(_QWORD *)(v23 + 40);
            if ( ((1 << v21) & *(_DWORD *)(v24 + v6 + 80)) != 0 )
            {
              v25 = v21 + 54 * v51;
              v26 = *(_DWORD *)(264LL * *(unsigned int *)(v24 + 4 * v25 + 8) + v23 + 288);
              if ( v26 < 0 )
              {
                *(_DWORD *)(v24 + 4 * v25 + 148) = v26;
                v22 = 0;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 144) |= 1 << v21;
                v36 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v11[285], v21);
                v15 = v36;
                if ( v36 < 0 )
                {
                  v39 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
                  v39[3] = v21;
                  v39[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
                  v39[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
                  v39[6] = v15;
                  WdLogEvent5_WdError(v39);
                }
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                  v21,
                  0);
              }
            }
            ++v21;
          }
          while ( v21 < *((_DWORD *)v11[285] + 20) );
          v27 = v22 == 0;
          v3 = (volatile signed __int64 *)v42;
          if ( v27 )
            DmmDisableAllFailurePathsOnAdapter(
              v11,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 144),
              v42);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      COREACCESS::~COREACCESS((COREACCESS *)v47);
      if ( v44 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v28, v29, v30);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      return (unsigned int)v15;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v48);
    COREACCESS::~COREACCESS((COREACCESS *)v47);
    if ( v44 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v32, v33, v34);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45);
  }
  v40 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
  v40[3] = v3;
  v40[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6 + 4);
  v40[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v6);
  v40[6] = -1073741811LL;
  WdLogEvent5_WdError(v40);
  if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
  return 3221225485LL;
}
