/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0013178
 * Callers:
 *     imp_WdfObjectAllocateContext @ 0x1C0013120 (imp_WdfObjectAllocateContext.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0026700 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0017FB8 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FC68 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

__int64 __fastcall FxObjectAllocateContext(
        FxObject *Object,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int8 AllowCallbacksOnly,
        void **Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  unsigned __int16 v11; // r9
  __int64 result; // rax
  unsigned __int64 ContextSize; // rax
  FxContextHeader *v14; // rax
  FxContextHeader *v15; // rdi
  unsigned __int64 size; // [rsp+40h] [rbp-28h] BYREF
  void *Caller; // [rsp+68h] [rbp+0h]
  int status; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = Object->m_Globals;
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
                                    m_Globals,
                                    (unsigned int)Attributes,
                                    0xBu);
  result = FxValidateObjectAttributes(m_Globals, v10, (IsVersionGreaterThanOrEqualTo != 0) + 8, v11);
  status = result;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo || AllowCallbacksOnly )
    {
      FxObject::AddRef(Object, &status, 459, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
      ContextSize = FxGetContextSize(Attributes);
      status = FxCalculateObjectTotalSize2(m_Globals, 0, 0, ContextSize, &size);
      if ( status >= 0 )
      {
        v14 = (FxContextHeader *)FxPoolAllocator(
                                   m_Globals,
                                   &m_Globals->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   size,
                                   m_Globals->Tag,
                                   Caller);
        v15 = v14;
        if ( v14 )
        {
          FxContextHeaderInit(v14, Object, Attributes);
          status = FxObject::AddContext(Object, v15, Context, Attributes);
          if ( status )
            FxPoolFree(v15);
        }
        else
        {
          status = -1073741670;
        }
      }
      Object->Release(Object, &status, 494, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
    }
    else
    {
      status = -1073741773;
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
    }
    return (unsigned int)status;
  }
  return result;
}
