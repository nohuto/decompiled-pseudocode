/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C0194B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02137B4 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  DXGADAPTER *Current; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  DXGADAPTER *v15; // r14
  _QWORD *v16; // rax
  int active; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGADAPTER *v24; // rsi
  size_t v25; // r12
  char *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  bool v32; // [rsp+28h] [rbp-120h]
  int v33; // [rsp+30h] [rbp-118h] BYREF
  __int64 v34; // [rsp+38h] [rbp-110h]
  DXGADAPTER *v35[3]; // [rsp+40h] [rbp-108h] BYREF
  struct DXGADAPTER *v36[2]; // [rsp+58h] [rbp-F0h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-E0h]
  size_t Size; // [rsp+78h] [rbp-D0h]
  _BYTE v39[80]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v40[10]; // [rsp+D0h] [rbp-78h] BYREF

  memset(v40, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v40[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 44;
  LOBYTE(v40[6]) = -1;
  v34 = 0LL;
  v33 = 2037;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2037);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2037);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v35[2] = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v10, v9);
    WdLogEvent5_WdError(v8);
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v33);
    return 3221225485LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v35,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    v36);
  v15 = v36[0];
  if ( !v36[0] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = -1073741811LL;
    v16[4] = Current;
    v16[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v16);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v36[0], 0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
  if ( active >= 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v15) > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = v15;
LABEL_25:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
LABEL_14:
      if ( v35[0] )
        DXGADAPTER::ReleaseReferenceNoTracking(v35[0]);
      goto LABEL_6;
    }
    v24 = 0LL;
    v25 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v26 = (char *)Src[1];
      if ( !Src[1] )
      {
        v27 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v27 + 24) = 5942LL;
        WdLogEvent5_WdError(v27);
        goto LABEL_25;
      }
      v24 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, PagedPool);
      v36[1] = v24;
      if ( !v24 )
      {
        v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
        active = -1073741801;
        *(_QWORD *)(v31 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_17;
      }
      if ( &v26[v25] < v26 || (unsigned __int64)&v26[v25] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v24, v26, v25);
    }
    active = DmmInvalidateActiveVidPn(
               v15,
               DXGK_AVIR_USERMODE,
               v24,
               v25,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v40,
               v32);
    operator delete[](v24);
  }
LABEL_17:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  if ( v35[0] )
    DXGADAPTER::ReleaseReferenceNoTracking(v35[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v33);
  return (unsigned int)active;
}
