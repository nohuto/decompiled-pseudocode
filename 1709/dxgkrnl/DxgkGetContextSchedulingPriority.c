/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1C00F1EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000E3DC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGCONTEXT *v10; // rsi
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE v23[16]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v24[120]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+10h]
  struct DXGCONTEXT *v26; // [rsp+D0h] [rbp+18h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2030);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v6 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v6 = (__int64 *)MmUserProbeAddress;
    v25 = *v6;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v23, *v6, Current, &v26, 0);
    v10 = v26;
    if ( v26 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        (DXGDEVICEACCESSLOCKSHARED *)&v26,
        *((struct DXGDEVICE **)v26 + 2));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, *((_QWORD *)v10 + 2), 0, v11, 0);
      v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24);
      if ( v12 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
        if ( v26 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v26 + 13));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v23);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v21, &EventProfilerExit, v22, 2030);
        return (unsigned int)v12;
      }
      else
      {
        if ( (unsigned __int64)v3 >= MmUserProbeAddress )
          v3 = (__int64 *)MmUserProbeAddress;
        HIDWORD(v25) = *((_DWORD *)v10 + 97);
        *v3 = v25;
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
        if ( v26 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v26 + 13));
          KeLeaveCriticalRegion();
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v23);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v13, &EventProfilerExit, v14, 2030);
        return 0LL;
      }
    }
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v20 + 24) = (unsigned int)v25;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v20);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v23);
    v19 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    v18 = qword_1C005F010;
    v19 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v17, 2030);
  return 3221225485LL;
}
