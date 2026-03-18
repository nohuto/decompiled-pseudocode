/*
 * XREFs of DxgkUnpinDirectFlipResources @ 0x1C01111E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C010B34C (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkUnpinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // rcx
  DXGDEVICE *v12; // r15
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned int i; // esi
  unsigned int *v20; // rdx
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-D0h]
  _QWORD v37[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v38[4]; // [rsp+50h] [rbp-B8h]
  struct DXGDEVICE *v39; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v40[152]; // [rsp+70h] [rbp-98h] BYREF
  char v41; // [rsp+118h] [rbp+10h]
  struct DXGDEVICE *v42; // [rsp+128h] [rbp+20h] BYREF

  v3 = (_OWORD *)a1;
  v36 = 0LL;
  v35 = 2080;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2080);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2080);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v8);
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    goto LABEL_22;
  }
  v41 = *((_BYTE *)Current + 322) == 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v38 = *v3;
  v9 = *(_QWORD *)&v38[2];
  if ( !*(_QWORD *)&v38[2] || (v10 = v38[1]) == 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, Current);
    *(_QWORD *)(v34 + 24) = v38[0];
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_22;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v38[0], (struct _KTHREAD **)Current, &v39);
  v12 = v39;
  if ( v39 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v39);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v12, 2, v13, 0);
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40);
    v18 = v14;
    if ( v14 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= v10 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
          v26 = v37[0] == 0LL;
          goto LABEL_17;
        }
        v20 = (unsigned int *)(v9 + 4LL * i);
        if ( v20 + 1 < v20 || (unsigned __int64)(v20 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v21 = *v20;
        v22 = DXGDEVICE::UnpinDirectFlipResource(v12, v21, v41, (struct COREDEVICEACCESS *)v40);
        v18 = v22;
        if ( v22 < 0 )
          break;
      }
      v33 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v33 + 24) = v21;
      *(_QWORD *)(v33 + 32) = v18;
      WdLogEvent5_WdWarning(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      v26 = v37[0] == 0LL;
LABEL_17:
      if ( !v26 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
      if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        goto LABEL_21;
      goto LABEL_22;
    }
    v32 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v32 + 24) = v12;
    *(_QWORD *)(v32 + 32) = v18;
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
    if ( v37[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v31 + 24) = v38[0];
    LODWORD(v18) = -1073741811;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
  }
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_21:
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v35);
  return (unsigned int)v18;
}
