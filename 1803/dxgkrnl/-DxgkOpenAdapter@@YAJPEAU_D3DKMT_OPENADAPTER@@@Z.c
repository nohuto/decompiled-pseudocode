/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00A2C70
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00A29F4 (DpiGetDxgAdapterSafe.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00A5780 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  int DxgAdapterSafe; // eax
  DXGADAPTER *v7; // rsi
  DXGADAPTER *v8; // rbx
  char *v9; // r15
  int v10; // eax
  DXGADAPTER *v11; // rbx
  ADAPTER_RENDER *v12; // rcx
  int v13; // ebx
  signed __int64 v14; // rcx
  DXGADAPTER *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h]
  unsigned int v23; // [rsp+78h] [rbp+38h] BYREF
  DXGADAPTER *v24; // [rsp+80h] [rbp+40h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0LL;
  v21 = 2001;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2001);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2001);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DxgAdapterSafe = DpiGetDxgAdapterSafe(*(struct _DEVICE_OBJECT **)a1, &v24, &v25);
    if ( DxgAdapterSafe < 0 )
    {
      v13 = DxgAdapterSafe;
    }
    else
    {
      v7 = v24;
      _InterlockedIncrement64((volatile signed __int64 *)v24 + 3);
      KeEnterCriticalRegion();
      v8 = v24;
      v9 = (char *)v24 + 120;
      ExAcquirePushLockSharedEx((char *)v24 + 120, 0LL);
      v10 = *((_DWORD *)v8 + 44);
      v11 = v24;
      if ( v10 == 1
        && !*((_BYTE *)v24 + 2373)
        && (v12 = (ADAPTER_RENDER *)*((_QWORD *)v24 + 308)) != 0LL
        && ADAPTER_RENDER::IsProcessGpuAccessBlocked(v12, Current) )
      {
        v20 = WdLogNewEntry5_WdEvent();
        *(_QWORD *)(v20 + 24) = v11;
        *(_QWORD *)(v20 + 32) = Current;
        WdLogEvent5_WdEvent(v20);
        DXGADAPTER::ReleaseReferenceNoTracking(v11);
        v13 = -1073741790;
      }
      else
      {
        v13 = DXGADAPTER::CreateHandle(v11, Current, &v23);
        v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v15 = v24;
        if ( v14 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v24 + 2), v24);
        if ( v13 >= 0 )
        {
          v13 = 0;
          *((_DWORD *)a1 + 2) = v23;
          *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v15 + 268);
        }
      }
      ExReleasePushLockSharedEx(v9, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v24 + 2), v24);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v4);
    v13 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v21);
  return (unsigned int)v13;
}
