/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1C0099CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGCONTEXT *v10; // rdi
  struct DXGDEVICE *v11; // rdx
  __int64 v12; // r9
  int v13; // r14d
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+30h] [rbp-98h] BYREF
  __int64 v28; // [rsp+38h] [rbp-90h]
  _QWORD v29[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v31[96]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v32; // [rsp+D8h] [rbp+10h]
  struct DXGCONTEXT *v33; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  v28 = 0LL;
  v27 = 2084;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2084);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2084);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v32 = *v3;
    if ( (unsigned int)HIDWORD(*v3) > 1 )
    {
      v22 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, Current);
      *(_QWORD *)(v22 + 24) = SHIDWORD(v32);
      WdLogEvent5_WdWarning(v22);
    }
    else
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, v32, Current, &v33, 0);
      v10 = v33;
      if ( v33 )
      {
        v11 = (struct DXGDEVICE *)*((_QWORD *)v33 + 2);
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 185LL) )
        {
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v23, &EventProfilerExit, v24, v27);
          return 0LL;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v11);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, *((_QWORD *)v10 + 2), 0, v12, 0);
          v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31);
          if ( v13 < 0 )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
            if ( v29[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v25, &EventProfilerExit, v26, v27);
            return (unsigned int)v13;
          }
          else
          {
            v14 = _guard_dispatch_icall_fptr();
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
            if ( v29[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v15, &EventProfilerExit, v16, v27);
            return v14;
          }
        }
      }
      v19 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v19 + 24) = (unsigned int)v32;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v19);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v27);
  return 3221225485LL;
}
