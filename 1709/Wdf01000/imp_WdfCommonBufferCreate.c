/*
 * XREFs of imp_WdfCommonBufferCreate @ 0x1C0067B50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003331C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C0064F64 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  WDFCOMMONBUFFER__ **v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int16 v10; // r9
  unsigned int _a1; // edi
  unsigned __int16 v12; // r9
  FxCommonBuffer *v13; // rax
  FxCommonBuffer *v14; // rax
  FxCommonBuffer *v15; // rdi
  int CommonBuffer; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v7 = CommonBufferHandle;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      _a1 = -1073741811;
      v12 = 10;
LABEL_6:
      WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v12, WPP_FxCommonBufferAPI_cpp_Traceguids, _a1);
      return _a1;
    }
    result = FxValidateObjectAttributes(m_Globals, Attributes, 1, v10);
    if ( (int)result >= 0 )
    {
      v13 = (FxCommonBuffer *)FxObjectHandleAlloc(
                                m_Globals,
                                ExDefaultNonPagedPoolType,
                                0xB8uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      if ( v13 )
      {
        FxCommonBuffer::FxCommonBuffer(v13, m_Globals, pDmaEnabler);
        v15 = v14;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !v15 )
      {
        _a1 = -1073741670;
        v12 = 11;
        goto LABEL_6;
      }
      CommonBuffer = FxObject::Commit(
                       v15,
                       (_FX_DRIVER_GLOBALS *)Attributes,
                       (void **)&CommonBufferHandle,
                       pDmaEnabler,
                       1u);
      if ( CommonBuffer < 0
        || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v15, Length, v17, v18), CommonBuffer < 0) )
      {
        FxObject::DeleteFromFailedCreate(v15);
      }
      else
      {
        *v7 = (WDFCOMMONBUFFER__ *)CommonBufferHandle;
      }
      return (unsigned int)CommonBuffer;
    }
  }
  return result;
}
