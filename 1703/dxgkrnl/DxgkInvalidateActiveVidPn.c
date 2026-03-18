/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C018F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DmmInvalidateActiveVidPn @ 0x1C01D5D98 (DmmInvalidateActiveVidPn.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGADAPTER *Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  DXGADAPTER *v10; // rcx
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGADAPTER *v15; // r14
  _QWORD *v16; // rax
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGADAPTER *v23; // rbx
  size_t v24; // r12
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned int active; // esi
  __int64 v33; // r8
  DXGADAPTER *v34; // rcx
  unsigned int v35; // [rsp+28h] [rbp-120h]
  DXGADAPTER *v36[3]; // [rsp+30h] [rbp-118h] BYREF
  int v37; // [rsp+48h] [rbp-100h]
  DXGADAPTER *v38[2]; // [rsp+50h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-E8h]
  size_t Size; // [rsp+70h] [rbp-D8h]
  _BYTE v41[80]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v42[8]; // [rsp+D0h] [rbp-78h] BYREF

  memset(v42, 0, sizeof(v42));
  EtwActivityIdControl(3u, (LPGUID)&v42[1]);
  v42[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v42[3]) = 44;
  v37 = 2037;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerEnter, v3, 2037);
  Current = DXGPROCESS::GetCurrent(v2);
  v36[2] = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v8);
    WdLogEvent5_WdError(v7);
    v10 = (DXGADAPTER *)qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v10, &EventProfilerExit, v9, 2037);
    return 3221225485LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v36, LODWORD(Src[0]), (struct _KTHREAD **)Current, v38);
  v15 = v38[0];
  if ( !v38[0] )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v16[3] = -1073741811LL;
    v16[4] = Current;
    v16[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v16);
LABEL_14:
    v10 = v36[0];
    if ( v36[0] )
      DXGADAPTER::ReleaseReference(v36[0]);
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v38[0], 0LL);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
  if ( v17 < 0 )
    goto LABEL_18;
  if ( (int)DXGADAPTER::GetDriverVersion(v15) > 1000 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = v15;
LABEL_26:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    goto LABEL_14;
  }
  v23 = 0LL;
  v24 = (unsigned int)Size;
  if ( (_DWORD)Size )
  {
    v25 = (char *)Src[1];
    if ( !Src[1] )
    {
      v26 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v26 + 24) = 6014LL;
      WdLogEvent5_WdError(v26);
      goto LABEL_26;
    }
    v23 = (DXGADAPTER *)operator new((unsigned int)Size, 0x4B677844u, PagedPool);
    v38[1] = v23;
    if ( !v23 )
    {
      v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
      v17 = -1073741801;
      *(_QWORD *)(v31 + 24) = -1073741801LL;
      WdLogEvent5_WdWarning(v31);
LABEL_18:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
      if ( v36[0] )
        DXGADAPTER::ReleaseReference(v36[0]);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C006E790, &EventProfilerExit, v18, 2037);
      return (unsigned int)v17;
    }
    if ( &v25[v24] < v25 || (unsigned __int64)&v25[v24] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v23, v25, v24);
  }
  active = DmmInvalidateActiveVidPn(
             v15,
             DXGK_RFVR_USERMODE,
             v23,
             v24,
             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v42,
             v35);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
  v34 = v36[0];
  if ( v36[0] )
    DXGADAPTER::ReleaseReference(v36[0]);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v34, &EventProfilerExit, v33, 2037);
  return active;
}
