/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0187C24
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00188A4 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C002F4A0 (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(DXGADAPTER **this, const struct DXGALLOCATION *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGADAPTER **v14; // rcx
  __int64 result; // rax
  _QWORD *v16; // rax
  int v17; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3533LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3534LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[211]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 3538LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v7 >= *((_DWORD *)this + 424) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 3539LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v17 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation(this, v7, a2, &v17) )
  {
    v14 = (DXGADAPTER **)this[2];
    if ( this[211] != v14[2] )
      return 0LL;
    if ( *((_DWORD *)this + 82) != 1 )
      return 0LL;
    if ( !v17 )
      return 0LL;
    if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    result = VIDMM_EXPORT::VidMmPinAllocation(v14[68], v14[69], *((struct _VIDMM_MULTI_ALLOC **)a2 + 3), 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v16[3] = this;
    v16[5] = -1073741801LL;
    v16[4] = a2;
    WdLogEvent5_WdWarning(v16);
    return 3221225495LL;
  }
  return result;
}
