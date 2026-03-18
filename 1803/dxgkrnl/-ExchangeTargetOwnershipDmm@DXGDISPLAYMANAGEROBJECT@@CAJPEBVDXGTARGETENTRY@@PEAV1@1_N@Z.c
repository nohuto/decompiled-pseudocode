/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_N@Z @ 0x1C0098734
 * Callers:
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C0110F00 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_N@Z @ 0x1C01E38C4 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_N@Z.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01E3EA8 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C01E3FFC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C000BF04 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C002499C (--1DXGADAPTERREFERENCE@@QEAA@XZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z @ 0x1C00BA694 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@I@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01E383C (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___ @ 0x1C020EF94 (DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        const struct DXGTARGETENTRY *a1,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct DXGDISPLAYMANAGEROBJECT *a3,
        char a4)
{
  struct _LUID v4; // rbx
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int TargetUsage; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGDISPLAYMANAGEROBJECT *v32; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v33[2]; // [rsp+38h] [rbp-39h] BYREF
  DXGADAPTER *v34[2]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v35[80]; // [rsp+58h] [rbp-19h] BYREF
  struct DXGDISPLAYMANAGEROBJECT *v36; // [rsp+D8h] [rbp+67h] BYREF

  v4 = (struct _LUID)*((_QWORD *)a1 + 3);
  v34[0] = 0LL;
  v36 = (struct DXGDISPLAYMANAGEROBJECT *)v4;
  v9 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)v34, v4);
  v13 = v9;
  if ( v9 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v9, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35) >= 0 && *((_QWORD *)v13 + 307) )
    {
      if ( a4
        && a2
        && (TargetUsage = DmmGetTargetUsage(v13, *((unsigned int *)a1 + 8)),
            v21 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage),
            v15 = v21,
            v21 < 0) )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v25[3] = SHIDWORD(v36);
        v25[4] = v4.LowPart;
        v25[5] = *((unsigned int *)a1 + 8);
        v25[6] = v15;
      }
      else
      {
        v26 = *((unsigned int *)a1 + 8);
        v33[0] = &v36;
        v32 = a3;
        v33[1] = &v32;
        v36 = a2;
        v27 = DmmDoForSpecifiedTarget__lambda_282b3ae622458216dccf572a010eafad_(v13, v26, v33);
        v15 = v27;
        if ( v27 >= 0 )
        {
          LODWORD(v15) = 0;
          goto LABEL_14;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
        v25[3] = v15;
      }
      WdLogEvent5_WdWarning(v25);
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = v4.HighPart;
      *(_QWORD *)(v19 + 32) = v4.LowPart;
      WdLogEvent5_WdWarning(v19);
      LODWORD(v15) = -1073741275;
    }
LABEL_14:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    goto LABEL_15;
  }
  v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v14 + 24) = v4.HighPart;
  *(_QWORD *)(v14 + 32) = v4.LowPart;
  WdLogEvent5_WdWarning(v14);
  LODWORD(v15) = -1073741275;
LABEL_15:
  DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(v34);
  return (unsigned int)v15;
}
