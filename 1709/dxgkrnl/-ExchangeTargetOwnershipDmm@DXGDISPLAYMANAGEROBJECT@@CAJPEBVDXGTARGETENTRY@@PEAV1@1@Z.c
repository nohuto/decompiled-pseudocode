/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C
 * Callers:
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01D9460 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01D99B4 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01D9BE4 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C01D9D3C (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C000D7A0 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C001DFC4 (--1DXGADAPTERREFERENCE@@QEAA@XZ.c)
 *     DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___ @ 0x1C01E9F34 (DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        const struct DXGTARGETENTRY *a1,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct DXGDISPLAYMANAGEROBJECT *a3)
{
  struct _LUID v3; // rbx
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-39h] BYREF
  DXGADAPTER *v25[2]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v26[112]; // [rsp+40h] [rbp-19h] BYREF
  struct DXGDISPLAYMANAGEROBJECT *v27; // [rsp+C0h] [rbp+67h] BYREF
  struct DXGDISPLAYMANAGEROBJECT *v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = (struct _LUID)*((_QWORD *)a1 + 3);
  v25[0] = 0LL;
  v27 = (struct DXGDISPLAYMANAGEROBJECT *)v3;
  v7 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)v25, v3);
  v11 = v7;
  if ( v7 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v7, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26) >= 0 && *((_QWORD *)v11 + 288) )
    {
      v17 = *((unsigned int *)a1 + 8);
      v24[0] = &v27;
      v28 = a3;
      v24[1] = &v28;
      v27 = a2;
      v18 = DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad_(v11, v17, v24);
      v3 = (struct _LUID)v18;
      if ( v18 >= 0 )
      {
        v3.LowPart = 0;
      }
      else
      {
        v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(struct _LUID *)(v22 + 24) = v3;
        WdLogEvent5_WdWarning(v22);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v16 + 24) = SHIDWORD(v27);
      *(_QWORD *)(v16 + 32) = v3.LowPart;
      WdLogEvent5_WdWarning(v16);
      v3.LowPart = -1073741275;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = SHIDWORD(v27);
    *(_QWORD *)(v12 + 32) = v3.LowPart;
    WdLogEvent5_WdWarning(v12);
    v3.LowPart = -1073741275;
  }
  DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v25);
  return v3.LowPart;
}
