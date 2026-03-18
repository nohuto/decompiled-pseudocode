/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C007982C
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C00BFD00 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0190B60 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C01BDFB0 (DxgkRender.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00EEED0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct DXGPROCESS *Current; // r13
  __int64 v7; // rdx
  struct DXGALLOCATION **v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int i; // edi
  __int64 hAllocation; // rsi
  __int64 v14; // rax
  struct DXGALLOCATION *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v21; // [rsp+24h] [rbp-64h]
  _BYTE v22[80]; // [rsp+38h] [rbp-50h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v22, Current);
  v10 = *a1;
  v21 = *a1;
  v11 = 0;
  for ( i = 0; i < v10; ++i )
  {
    hAllocation = a2->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v14 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 >= *((_DWORD *)Current + 60)
        || (v9 = *((_QWORD *)Current + 28),
            v7 = *(unsigned int *)(v9 + 16 * v14 + 8),
            v8 = (struct DXGALLOCATION **)(((unsigned int)hAllocation >> 25) & 0x60),
            (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v9 + 16 * v14 + 8) & 0x60))
        || (v7 & 0x2000) != 0
        || (v7 & 0x1F) == 0
        || (*(_BYTE *)(v9 + 16LL * (unsigned int)v14 + 8) & 0x1F) != 5
        || (v15 = *(struct DXGALLOCATION **)(v9 + 16LL * (unsigned int)v14)) == 0LL )
      {
        v19 = WdLogNewEntry5_WdWarning(v8, v7, v9);
        *(_QWORD *)(v19 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v19);
        v11 = -1071775468;
        break;
      }
      if ( a4 )
      {
        v16 = *(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL);
        v17 = *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL);
        if ( *(_QWORD *)(v16 + 16) != v17 )
        {
          v18 = WdLogNewEntry5_WdWarning(v17, v16, v9);
          *(_QWORD *)(v18 + 24) = hAllocation;
          WdLogEvent5_WdWarning(v18);
          v11 = -1071775467;
          break;
        }
      }
      DxgkReferenceDxgAllocation(v15);
      v8 = a3;
      a3[i] = v15;
      v10 = v21;
    }
    ++a2;
  }
  *a1 = i;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
  return v11;
}
