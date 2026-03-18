/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x1C0077DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C001166C (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  unsigned __int16 v9; // r9
  WDFMEMORY__ **v10; // rsi
  __int64 result; // rax
  FxMemoryObject *v12; // rax
  FxObject *v13; // rdi
  int v14; // ebx
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v10 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *PMemory = 0LL;
  if ( BufferSize )
  {
    result = FxValidateObjectAttributes(DriverName, Attributes, 0, v9);
    if ( (int)result >= 0 )
    {
      v12 = (FxMemoryObject *)FxObjectHandleAlloc(
                                DriverName,
                                ExDefaultNonPagedPoolType,
                                0x80uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v13 = v12;
      if ( v12 )
      {
        FxMemoryObject::FxMemoryObject(v12, DriverName, 0x80u, BufferSize);
        v13[1].m_Globals = Buffer;
        v13->__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
        v13[1].__vftable = (FxObject_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      }
      else
      {
        v13 = 0LL;
      }
      if ( v13 )
      {
        v14 = FxObject::Commit(v13, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&pParent, 0LL, 1u);
        if ( v14 < 0 )
          FxObject::DeleteFromFailedCreate(v13);
        else
          *v10 = (WDFMEMORY__ *)pParent;
        return (unsigned int)v14;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
