/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C018A0B0
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0189EF4 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B2BCC (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01EA670 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(DXGDEVICE *this, unsigned int a2, unsigned int a3, PERESOURCE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v12; // rax
  struct DXGRESOURCE *v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edi
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  unsigned __int64 v22; // rax
  unsigned int v23; // edi
  __int64 v24; // r10
  int v25; // edx
  __int64 v26; // rax
  int v27; // edx
  struct DXGALLOCATION **v28; // r8
  struct DXGRESOURCE *v29; // r9
  unsigned int v30; // edx
  _BYTE v31[32]; // [rsp+30h] [rbp-48h] BYREF
  struct DXGALLOCATION *v33; // [rsp+98h] [rbp+20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 8277LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  Current = DXGPROCESS::GetCurrent(v8, v7);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 8285LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = 0LL;
  v33 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v31,
    (struct _KTHREAD **)Current);
  v15 = *((_DWORD *)Current + 62);
  if ( !a3 )
  {
    v23 = (a2 >> 6) & 0xFFFFFF;
    if ( v23 < v15
      && (v24 = *((_QWORD *)Current + 29),
          v14 = (a2 >> 25) & 0x60,
          v25 = *(_DWORD *)(v24 + 16LL * v23 + 8),
          ((a2 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v23 + 8) & 0x60))
      && (v25 & 0x2000) == 0
      && (v25 & 0x1F) == 5 )
    {
      v33 = *(struct DXGALLOCATION **)(v24 + 16LL * v23);
      if ( v33 )
        goto LABEL_29;
    }
    else
    {
      v33 = 0LL;
    }
    v26 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v26 + 24) = 8302LL;
    WdLogEvent5_WdAssertion(v26);
    v15 = *((_DWORD *)Current + 62);
LABEL_29:
    if ( v23 >= v15 )
      goto LABEL_35;
    v20 = *((_QWORD *)Current + 29);
    v27 = *(_DWORD *)(v20 + 16LL * v23 + 8);
    if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16LL * v23 + 8) & 0x60) || (v27 & 0x2000) != 0 || (v27 & 0x1F) == 0 )
      goto LABEL_35;
    v22 = a2;
    goto LABEL_34;
  }
  v16 = (a3 >> 6) & 0xFFFFFF;
  if ( v16 < v15
    && (v17 = *((_QWORD *)Current + 29),
        v14 = (a3 >> 25) & 0x60,
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        ((a3 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60))
    && (v18 & 0x2000) == 0
    && (v18 & 0x1F) == 4 )
  {
    v13 = *(struct DXGRESOURCE **)(v17 + 16LL * v16);
    if ( v13 )
      goto LABEL_16;
  }
  else
  {
    v13 = 0LL;
  }
  v19 = WdLogNewEntry5_WdAssertion(v14);
  *(_QWORD *)(v19 + 24) = 8296LL;
  WdLogEvent5_WdAssertion(v19);
  v15 = *((_DWORD *)Current + 62);
LABEL_16:
  if ( v16 >= v15 )
    goto LABEL_35;
  v20 = *((_QWORD *)Current + 29);
  v21 = *(_DWORD *)(v20 + 16LL * v16 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16LL * v16 + 8) & 0x60) || (v21 & 0x2000) != 0 || (v21 & 0x1F) == 0 )
    goto LABEL_35;
  v22 = a3;
LABEL_34:
  *(_DWORD *)(v20 + 16 * ((v22 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_35:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  if ( a3 )
  {
    v28 = 0LL;
    v29 = v13;
    v30 = 0;
  }
  else
  {
    v29 = 0LL;
    v28 = &v33;
    v30 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal(
    this,
    v30,
    v28,
    v29,
    (struct COREDEVICEACCESS *)a4,
    DXGDEVICE::DestroyFlagsDefault);
}
