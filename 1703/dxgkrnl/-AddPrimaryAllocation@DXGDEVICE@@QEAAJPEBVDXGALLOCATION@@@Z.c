/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00C1AA8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0004EEC (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000DF04 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(
        DXGADAPTER **this,
        const struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGADAPTER **v20; // rcx
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  int v27; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v6 & 1) == 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2, v6, a4);
    *(_QWORD *)(v22 + 24) = 3362LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v23 + 24) = 3363LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v11 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[225]) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v24 + 24) = 3367LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( v11 >= *((_DWORD *)this + 452) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v25 + 24) = 3368LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v27 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation((DXGDEVICE *)this, v11, a2, &v27) )
  {
    v20 = (DXGADAPTER **)this[2];
    if ( !v27 )
      return 0LL;
    if ( this[225] != v20[2] )
      return 0LL;
    if ( *((_DWORD *)this + 82) != 1 )
      return 0LL;
    if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    result = VIDMM_EXPORT::VidMmPinAllocation(v20[54], v20[55], *((struct _VIDMM_MULTI_ALLOC **)a2 + 3), 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v26[3] = this;
    v26[5] = -1073741801LL;
    v26[4] = a2;
    WdLogEvent5_WdWarning(v26);
    return 3221225495LL;
  }
  return result;
}
