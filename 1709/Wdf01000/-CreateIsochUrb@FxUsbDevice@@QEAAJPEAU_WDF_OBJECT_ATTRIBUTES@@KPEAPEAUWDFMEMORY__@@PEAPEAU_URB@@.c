/*
 * XREFs of ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C009104C
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x1C008C010 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00208B4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C0090604 (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0091A1C (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     USBD_IsochUrbAllocate @ 0x1C00A4AE8 (USBD_IsochUrbAllocate.c)
 *     USBD_UrbFree @ 0x1C00A512C (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateIsochUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 v10; // rdi
  int v11; // eax
  unsigned __int16 v12; // r9
  int _a1; // ebx
  _FX_DRIVER_GLOBALS *v14; // r14
  FxUsbUrb *v15; // r10
  __int64 v16; // rax
  _URB **v17; // r14
  FxObject *pParent; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+28h]
  _URB *urbLocal; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  v10 = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle(m_Globals, Attributes, 0);
  _a1 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -1071644142 )
      goto $Done_51;
    v14 = this->m_Globals;
    pParent = this;
  }
  else
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    v14 = pParent->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, pParent) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x23u, WPP_FxUsbDevice_cpp_Traceguids);
      _a1 = -1073741811;
      goto LABEL_21;
    }
  }
  _a1 = FxValidateObjectAttributes(v14, Attributes, 0, v12);
  if ( _a1 >= 0 )
  {
    if ( !UrbMemory )
      FxVerifierNullBugCheck(v14, retaddr);
    *UrbMemory = 0LL;
    _a1 = USBD_IsochUrbAllocate(this->m_USBDHandle, NumberOfIsochPackets, &urbLocal);
    if ( _a1 < 0 )
    {
      urbLocal = 0LL;
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x24u, WPP_FxUsbDevice_cpp_Traceguids, _a1);
      goto $Done_51;
    }
    v15 = (FxUsbUrb *)FxObjectHandleAlloc(
                        v14,
                        ExDefaultNonPagedPoolType,
                        0x88uLL,
                        0,
                        Attributes,
                        0,
                        FxObjectTypeExternal);
    if ( v15 )
    {
      FxUsbUrb::FxUsbUrb(v15, v14, this->m_USBDHandle, urbLocal, 12 * NumberOfIsochPackets + 152);
      v10 = v16;
    }
    if ( v10 )
    {
      urbLocal = 0LL;
      _a1 = FxObject::Commit((FxObject *)v10, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&hMemory, pParent, 1u);
      if ( _a1 < 0 )
      {
LABEL_19:
        if ( v10 )
          FxObject::DeleteFromFailedCreate((FxObject *)v10);
        goto LABEL_21;
      }
      v17 = Urb;
      *UrbMemory = hMemory;
      if ( v17 )
        *v17 = (_URB *)(**(__int64 (__fastcall ***)(__int64))(v10 + 104))(v10 + 104);
$Done_51:
      if ( _a1 >= 0 )
        return (unsigned int)_a1;
      goto LABEL_19;
    }
    _a1 = -1073741670;
  }
LABEL_21:
  if ( urbLocal )
    USBD_UrbFree(this->m_USBDHandle, urbLocal);
  return (unsigned int)_a1;
}
