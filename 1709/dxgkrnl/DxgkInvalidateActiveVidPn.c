/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C01A4110
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C01ECEB8 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  DXGADAPTER *Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGADAPTER *v11; // rcx
  bool v12; // zf
  __int64 v14; // rcx
  DXGADAPTER *v15; // r15
  _QWORD *v16; // rax
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGADAPTER *v21; // rbx
  size_t v22; // r13
  char *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int active; // r14d
  __int64 v30; // r8
  DXGADAPTER *v31; // rcx
  bool v32; // [rsp+28h] [rbp-110h]
  DXGADAPTER *v33[3]; // [rsp+30h] [rbp-108h] BYREF
  DXGADAPTER *v34[2]; // [rsp+48h] [rbp-F0h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-E0h]
  size_t Size; // [rsp+68h] [rbp-D0h]
  _BYTE v37[80]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v38[10]; // [rsp+C0h] [rbp-78h] BYREF

  memset(v38, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v38[1]);
  v38[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v38[3]) = 44;
  LOBYTE(v38[6]) = -1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2037);
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v33[2] = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
    WdLogEvent5_WdError(v7);
    v11 = (DXGADAPTER *)qword_1C005F010;
    v12 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v11, &EventProfilerExit, v10, 2037);
    return 3221225485LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v33,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    v34);
  v15 = v34[0];
  if ( !v34[0] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = -1073741811LL;
    v16[4] = Current;
    v16[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v16);
LABEL_14:
    v11 = v33[0];
    if ( v33[0] )
      DXGADAPTER::ReleaseReferenceNoTracking(v33[0]);
    v12 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v34[0], 0LL);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37);
  if ( v17 < 0 )
    goto LABEL_18;
  if ( (int)DXGADAPTER::GetDriverVersion(v15) > 1000 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = v15;
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
    goto LABEL_14;
  }
  v21 = 0LL;
  v22 = (unsigned int)Size;
  if ( (_DWORD)Size )
  {
    v23 = (char *)Src[1];
    if ( !Src[1] )
    {
      v24 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v24 + 24) = 6024LL;
      WdLogEvent5_WdError(v24);
      goto LABEL_26;
    }
    v21 = (DXGADAPTER *)operator new((unsigned int)Size, 0x4B677844u, PagedPool);
    v34[1] = v21;
    if ( !v21 )
    {
      v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      v17 = -1073741801;
      *(_QWORD *)(v28 + 24) = -1073741801LL;
      WdLogEvent5_WdWarning(v28);
LABEL_18:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
      if ( v33[0] )
        DXGADAPTER::ReleaseReferenceNoTracking(v33[0]);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(qword_1C005F010, &EventProfilerExit, v18, 2037);
      return (unsigned int)v17;
    }
    if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v23, v22);
  }
  active = DmmInvalidateActiveVidPn(
             v15,
             DXGK_AVIR_USERMODE,
             v21,
             v22,
             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38,
             v32);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
  v31 = v33[0];
  if ( v33[0] )
    DXGADAPTER::ReleaseReferenceNoTracking(v33[0]);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v31, &EventProfilerExit, v30, 2037);
  return active;
}
