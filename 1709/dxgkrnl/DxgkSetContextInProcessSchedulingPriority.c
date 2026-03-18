/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1C00F5F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C00C04D0 (-SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // r14
  struct DXGDEVICE *v12; // rdx
  __int64 v13; // r9
  int v14; // r15d
  unsigned int v15; // esi
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD v28[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v30[120]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+10h]
  struct DXGCONTEXT *v32; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2084);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v31 = *v3;
    v7 = (int)HIDWORD(*v3);
    if ( HIDWORD(v31) > 1 )
    {
      v22 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, Current);
      *(_QWORD *)(v22 + 24) = v7;
      WdLogEvent5_WdWarning(v22);
    }
    else
    {
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v29, v31, Current, &v32, 0);
      v11 = (__int64 *)v32;
      if ( v32 )
      {
        v12 = (struct DXGDEVICE *)*((_QWORD *)v32 + 2);
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 185LL) )
        {
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v29);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v24, &EventProfilerExit, v25, 2084);
          return 0LL;
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v12);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, v11[2], 0, v13, 0);
          v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30);
          if ( v14 < 0 )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
            if ( v28[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v29);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v26, &EventProfilerExit, v27, 2084);
            return (unsigned int)v14;
          }
          else
          {
            v15 = DXGCONTEXT::SetInProcessSchedulingPriority((DXGCONTEXT *)v11, v7);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
            if ( v28[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v29);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(qword_1C005F010, &EventProfilerExit, v16, 2084);
            return v15;
          }
        }
      }
      v23 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v23 + 24) = (unsigned int)v31;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v29);
    }
    v21 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    v20 = qword_1C005F010;
    v21 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v19, 2084);
  return 3221225485LL;
}
