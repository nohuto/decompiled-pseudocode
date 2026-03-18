/*
 * XREFs of ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C01D9894
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C01DA300 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C000D7A0 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00E24E4 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C01D95C0 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  unsigned int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  DXGADAPTER *v19; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v22[40]; // [rsp+58h] [rbp-30h] BYREF
  LONG HighPart; // [rsp+9Ch] [rbp+14h]

  HighPart = a2.HighPart;
  if ( !DXGDISPLAYMANAGEROBJECT::ContainsTarget(this, a2, a3) )
    return 3221226021LL;
  v19 = 0LL;
  v8 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)&v19, a2);
  v12 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v8, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20) >= 0 && *((_QWORD *)v12 + 288) )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v12, a3, a4);
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = HighPart;
      *(_QWORD *)(v18 + 32) = a2.LowPart;
      WdLogEvent5_WdWarning(v18);
      SourceConnectedToTargetInClientVidPn = -1073741275;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v22);
    COREACCESS::~COREACCESS((COREACCESS *)v21);
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = HighPart;
    *(_QWORD *)(v13 + 32) = a2.LowPart;
    WdLogEvent5_WdWarning(v13);
    SourceConnectedToTargetInClientVidPn = -1073741275;
  }
  if ( v19 )
    DXGADAPTER::ReleaseReferenceNoTracking(v19);
  return SourceConnectedToTargetInClientVidPn;
}
