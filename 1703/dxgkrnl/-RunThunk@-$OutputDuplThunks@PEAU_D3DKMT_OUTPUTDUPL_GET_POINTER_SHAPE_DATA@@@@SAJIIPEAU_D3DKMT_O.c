/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01AF22C
 * Callers:
 *     DxgkDestroyOutputDupl @ 0x1C01AF8D0 (DxgkDestroyOutputDupl.c)
 *     DxgkOutputDuplGetFrameInfo @ 0x1C01AFA30 (DxgkOutputDuplGetFrameInfo.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C01AFBB0 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C01AFD70 (DxgkOutputDuplGetPointerShapeData.c)
 *     DxgkOutputDuplReleaseFrame @ 0x1C01AFFF0 (DxgkOutputDuplReleaseFrame.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AF094 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  __int64 v12; // rax
  int v14; // eax
  struct DXGADAPTER **v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // ebx
  struct DXGADAPTER *v22; // [rsp+30h] [rbp-38h] BYREF
  DXGADAPTER *v23; // [rsp+38h] [rbp-30h] BYREF

  v5 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v11 = (struct _KTHREAD **)Current;
  if ( Current )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)Current + 9) + 224LL))(0LL);
    v15 = &v22;
    v22 = 0LL;
    if ( v14 )
      v15 = 0LL;
    v16 = v14;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v23, (unsigned int)v5, v11, v15);
    if ( v16 || v22 )
    {
      v21 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(v22, v17, a2, a3, a4);
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(0LL, v17, v18, v19);
      v21 = -1073741811;
      *(_QWORD *)(v20 + 24) = v5;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
    }
    if ( v23 )
      DXGADAPTER::ReleaseReference(v23);
    return v21;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 43LL;
    WdLogEvent5_WdError(v12);
    return -1073741811LL;
  }
}
