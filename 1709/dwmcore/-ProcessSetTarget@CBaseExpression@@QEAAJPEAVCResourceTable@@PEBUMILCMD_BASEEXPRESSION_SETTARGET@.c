/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800A25F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z @ 0x1800A1830 (-SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800B3EAC (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  struct CResource *ResourceWithoutType; // r15
  unsigned int v5; // edx
  int v8; // ebp
  struct CSparseStorage::DataInfo *SlotForData; // rax
  char v10; // cl
  signed int v11; // eax
  unsigned int v12; // ebx

  ResourceWithoutType = 0LL;
  v5 = *((_DWORD *)a3 + 3);
  if ( v5 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5);
  CBaseExpression::SetTargetObjectHandle(this, v5);
  v8 = *((_DWORD *)a3 + 2);
  if ( v8 == `CBaseExpression::SetTargetObjectHandle'::`2'::sc_defaultValue )
  {
    *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) &= ~0x10000000u;
  }
  else
  {
    SlotForData = CSparseStorage::FindSlotForData((CBaseExpression *)((char *)this + 264), 4u, 4u);
    *((_DWORD *)SlotForData + 1) = v8;
    *(_DWORD *)SlotForData &= 0x84FFFFFF;
    *(_DWORD *)SlotForData |= 0x4000000u;
    *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) |= 0x10000000u;
  }
  v10 = *((_BYTE *)this + 192) & 0xBF | (*((_DWORD *)a3 + 9) != 0 ? 0x40 : 0);
  *((_BYTE *)this + 192) = v10;
  if ( (v10 & 0x40) == 0 || *(_QWORD *)(*((_QWORD *)this + 6) + 56LL) )
  {
    v11 = CBaseExpression::SetTarget(
            (__int64)this,
            *((_DWORD *)a2 + 12),
            ResourceWithoutType,
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 8),
            *((unsigned __int16 *)a3 + 15),
            *((_BYTE *)a3 + 28),
            *(_QWORD *)((char *)a3 + 20));
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x68u);
    else
      return 0;
  }
  else
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x5Eu);
  }
  return v12;
}
