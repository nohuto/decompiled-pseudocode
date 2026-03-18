/*
 * XREFs of ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0189EF4
 * Callers:
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B2BCC (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01EA670 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C018A0B0 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B380 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStagingSurface2(
        DXGDEVICE *this,
        struct _D3DKMDT_STAGINGSURFACEDATA *a2,
        PERESOURCE **a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  __int64 result; // rax
  unsigned int v13; // r14d
  int AllocationResident; // esi
  _QWORD v15[54]; // [rsp+20h] [rbp-E0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 8215LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(v15, 0, 0x134uLL);
  memset(&v15[39], 0, 0x68uLL);
  v15[53] = 0LL;
  *a4 = 0;
  v15[52] = 0LL;
  if ( a5 )
    *a5 = 0;
  HIDWORD(v15[0]) = 0;
  v11 = v15[50];
  LODWORD(v15[2]) = 3;
  v15[3] = a2;
  if ( !a5 )
    v11 = 1;
  LOBYTE(v15[50]) = v11;
  result = DXGDEVICE::CreateStandardAllocation(this, (struct _D3DKM_CREATESTANDARDALLOCATION *)v15, a3);
  if ( (int)result >= 0 )
  {
    v13 = HIDWORD(v15[6]);
    AllocationResident = DXGDEVICE::MakeAllocationResident(this, HIDWORD(v15[6]), (struct COREDEVICEACCESS *)a3);
    if ( AllocationResident >= 0 )
    {
      *a4 = v13;
      if ( a5 )
        *a5 = v15[1];
    }
    else
    {
      DXGDEVICE::DestroyStagingSurface(this, v13, v15[1], (struct COREDEVICEACCESS *)a3);
    }
    return (unsigned int)AllocationResident;
  }
  return result;
}
