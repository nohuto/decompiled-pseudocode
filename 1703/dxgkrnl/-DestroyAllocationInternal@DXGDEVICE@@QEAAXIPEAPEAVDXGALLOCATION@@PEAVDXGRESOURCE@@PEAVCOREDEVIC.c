/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C008B0E0 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00BC120 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00FD580 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0182880 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ED28 (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01A0068 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01ABFE8 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C01B4380 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C002FD6C (-VmBusSendDestroyAllocation@DXGADAPTER@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCAT.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C00C1B98 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C7DC0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        PERESOURCE **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v8; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  UINT v14; // r15d
  __int64 v15; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F v16; // ebx
  __int64 v17; // r12
  UINT v18; // edi
  struct DXGPROCESS *Current; // rax
  struct DXGALLOCATION **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  struct DXGALLOCATION *v23; // rdi
  struct DXGRESOURCE *v24; // rbp
  PERESOURCE **v25; // r14
  _QWORD *v26; // rax
  struct DXGALLOCATION *v27; // r9
  PERESOURCE **v28; // rbp
  _QWORD *v29; // rax
  struct DXGALLOCATION *v30; // r9
  struct DXGALLOCATION *v31; // [rsp+70h] [rbp+8h] BYREF

  v8 = a2;
  v14 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = 5370LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v16 = a6.0;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( *(_BYTE *)(v17 + 186) )
  {
    if ( a4 )
      v14 = *((_DWORD *)a4 + 5);
    v18 = *((_DWORD *)this + 84);
    Current = DXGPROCESS::GetCurrent(v11);
    DXGADAPTER::VmBusSendDestroyAllocation(
      (struct VMBCHANNEL__ **)v17,
      *((_DWORD *)Current + 96),
      v18,
      v14,
      v8,
      a3,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v16);
    if ( !a4 )
      goto LABEL_14;
    *((_DWORD *)a4 + 5) = 0;
    if ( (_DWORD)v8 )
    {
      v20 = a3;
      v21 = v8;
      do
      {
        v22 = (__int64)*v20++;
        *(_DWORD *)(v22 + 96) = 0;
        --v21;
      }
      while ( v21 );
    }
  }
  if ( a4 )
  {
    DXGDEVICE::TerminateAllocations(
      this,
      a4,
      1LL,
      *((struct DXGALLOCATION **)a4 + 3),
      a5,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v16);
    return;
  }
LABEL_14:
  v31 = 0LL;
  DXGDEVICE::RemoveAllocationsAndTransferToList((struct _KTHREAD **)this, a3, (unsigned int)v8, &v31);
  v23 = v31;
  if ( v31 )
  {
    v24 = (struct DXGRESOURCE *)*((_QWORD *)v31 + 5);
    if ( v24 )
    {
      v25 = a5;
      do
      {
        v26 = (_QWORD *)((char *)v23 + 64);
        v27 = v23;
        v23 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 8);
        *v26 = 0LL;
        DXGDEVICE::TerminateAllocations(this, v24, 0LL, v27, v25, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v16);
      }
      while ( v23 );
    }
    else
    {
      v28 = a5;
      do
      {
        v29 = (_QWORD *)((char *)v23 + 64);
        v30 = v23;
        v23 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 8);
        *v29 = 0LL;
        DXGDEVICE::TerminateAllocations(this, 0LL, 0LL, v30, v28, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v16);
      }
      while ( v23 );
    }
  }
}
