/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0087038
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkRender @ 0x1C01A43F0 (DxgkRender.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0095DE0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct DXGPROCESS *Current; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGALLOCATION **v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int i; // edi
  __int64 hAllocation; // rsi
  __int64 v16; // rdx
  struct DXGALLOCATION *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v22; // [rsp+24h] [rbp-64h]
  _BYTE v23[80]; // [rsp+38h] [rbp-50h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, Current, v7, v8);
  v12 = *a1;
  v22 = *a1;
  v13 = 0;
  for ( i = 0; i < v12; ++i )
  {
    hAllocation = a2->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v16 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v16 >= *((_DWORD *)Current + 52)
        || (v11 = *((_QWORD *)Current + 24),
            v10 = *(unsigned int *)(v11 + 16LL * (unsigned int)v16 + 8),
            v9 = (struct DXGALLOCATION **)(((unsigned int)hAllocation >> 26) & 0x30),
            (((unsigned int)hAllocation >> 26) & 0x30) != (*(_BYTE *)(v11 + 16LL * (unsigned int)v16 + 8) & 0x30))
        || (v10 & 0x1000) != 0
        || (v10 & 0xF) == 0
        || (*(_BYTE *)(v11 + 16LL * (unsigned int)v16 + 8) & 0xF) != 5
        || (v17 = *(struct DXGALLOCATION **)(v11 + 16LL * (unsigned int)v16)) == 0LL )
      {
        v20 = WdLogNewEntry5_WdWarning(v9, v16, v10, v11);
        *(_QWORD *)(v20 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v20);
        v13 = -1071775468;
        break;
      }
      if ( a4 )
      {
        v18 = *(_QWORD *)(*((_QWORD *)v17 + 1) + 16LL);
        if ( *(_QWORD *)(v18 + 16) != *(_QWORD *)(*((_QWORD *)a4 + 2) + 16LL) )
        {
          v19 = WdLogNewEntry5_WdWarning(v18, a4, v10, v11);
          *(_QWORD *)(v19 + 24) = hAllocation;
          WdLogEvent5_WdWarning(v19);
          v13 = -1071775467;
          break;
        }
      }
      DxgkReferenceDxgAllocation(v17);
      v9 = a3;
      a3[i] = v17;
      v12 = v22;
    }
    ++a2;
  }
  *a1 = i;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return v13;
}
