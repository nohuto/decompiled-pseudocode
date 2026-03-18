/*
 * XREFs of ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0091F00
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008C960 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092638 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0094950 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0094C30 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002434C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00640B8 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00641E0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007E13C (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_dqdd @ 0x1C0084FC0 (WPP_IFR_SF_dqdd.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C008D73C (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C008FC80 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C0090A3C (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C0091844 (-GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z.c)
 *     ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C00930C8 (-FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C00938CC (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfig(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _FILE_OBJECT *Urb,
        _FX_URB_TYPE NumConfiguredInterfaces,
        unsigned __int8 *PipesAttributes_0)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int16 v8; // r12
  int v9; // edi
  unsigned __int8 m_NumInterfaces; // si
  unsigned __int16 v11; // ax
  size_t v12; // rdi
  FxUsbPipe ***v13; // rax
  FxUsbPipe ***v14; // r14
  __int64 m_ObjectSize; // rax
  const void *v16; // rbx
  unsigned __int8 v17; // dl
  void **p_SectionObjectPointer; // rsi
  void **v19; // r13
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  _QWORD *v23; // rax
  FxIoTarget **v24; // rdi
  __int64 v25; // rax
  FxUsbPipe *v26; // rax
  FxIoTarget *v27; // rax
  int v28; // eax
  unsigned __int16 v29; // r12
  _URB *v30; // rax
  unsigned __int16 v31; // r9
  USBD_HANDLE__ *m_USBDHandle; // r9
  int v33; // eax
  FxUsbInterface *InterfaceFromNumber; // rax
  FxUsbPipe **v35; // r11
  unsigned __int8 v36; // r13
  unsigned __int16 *v37; // r12
  unsigned __int16 *v38; // rsi
  FxUsbInterface *v39; // r10
  __int64 v40; // rcx
  unsigned __int8 *v41; // r12
  __int64 v42; // r15
  FxUsbPipe ***v43; // rsi
  unsigned int v44; // ebx
  FxObject *v45; // rcx
  unsigned __int8 v47; // [rsp+58h] [rbp-B0h]
  unsigned int v48; // [rsp+5Ch] [rbp-ACh]
  _URB *v49; // [rsp+60h] [rbp-A8h]
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h]
  _QWORD *v52; // [rsp+80h] [rbp-88h]
  FxObject *Parent; // [rsp+88h] [rbp-80h]
  FxSyncRequest request; // [rsp+90h] [rbp-78h] BYREF
  void *Caller; // [rsp+210h] [rbp+108h]
  unsigned __int8 v56; // [rsp+218h] [rbp+110h]
  FxUsbInterface *v57; // [rsp+218h] [rbp+110h]
  unsigned __int8 v60; // [rsp+230h] [rbp+128h]
  unsigned __int8 *PipesAttributes_0a; // [rsp+238h] [rbp+130h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  request.__vftable = (FxSyncRequest_vtbl *)m_Globals;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, m_Globals, 0LL, 0LL);
  v49 = 0LL;
  v8 = 0;
  if ( PipesAttributes_0 )
    *PipesAttributes_0 = 0;
  v9 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)this);
  if ( v9 >= 0 )
  {
    m_NumInterfaces = this->m_NumInterfaces;
    v11 = 16;
    v47 = m_NumInterfaces;
    if ( m_NumInterfaces )
      v11 = 16 * m_NumInterfaces;
    else
      v47 = 1;
    v12 = v11;
    v13 = (FxUsbPipe ***)FxPoolAllocator(
                           m_Globals,
                           &m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           v11,
                           m_Globals->Tag,
                           Caller);
    v14 = v13;
    if ( !v13 )
    {
      v9 = -1073741670;
      m_ObjectSize = this->m_ObjectSize;
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v16 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbDevice_cpp_Traceguids, v16, -1073741670);
      goto LABEL_70;
    }
    memset(v13, 0, v12);
    v60 = 0;
    p_SectionObjectPointer = (void **)&Urb->SectionObjectPointer;
    v19 = (void **)&Urb->SectionObjectPointer;
    options.Timeout = (__int64)Urb + (unsigned __int16)Urb->Type;
    if ( (unsigned __int64)&Urb->SectionObjectPointer < options.Timeout )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)v19 + 4) > 0xFFu )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dqdd(
            *p_m_Globals,
            v17,
            0xEu,
            0x16u,
            WPP_FxUsbDevice_cpp_Traceguids,
            255,
            v19,
            *((_DWORD *)v19 + 4),
            -1073741808);
          goto LABEL_59;
        }
        Parent = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v19 + 2));
        if ( !Parent )
        {
          v9 = -1073741808;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x17u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v19 + 2),
            -1073741808);
          goto LABEL_59;
        }
        v20 = *((unsigned __int8 *)v19 + 16);
        v56 = *((_BYTE *)v19 + 16);
        v21 = v20;
        if ( v20 <= v8 )
          v21 = v8;
        v8 = v21;
        if ( (_BYTE)v20 )
          v22 = 8 * *((unsigned __int8 *)v19 + 16);
        else
          v22 = 8;
        *(_QWORD *)&options.Size = v22;
        v23 = FxPoolAllocator(
                (_FX_DRIVER_GLOBALS *)request.__vftable,
                (FX_POOL *)&request.__vftable[1].QueryInterface,
                ExDefaultNonPagedPoolType,
                v22,
                HIDWORD(request.__vftable[1].SelfDestruct),
                Caller);
        v52 = v23;
        v24 = (FxIoTarget **)v23;
        if ( !v23 )
        {
          v9 = -1073741670;
          WPP_IFR_SF_dd(
            *p_m_Globals,
            2u,
            0xEu,
            0x18u,
            WPP_FxUsbDevice_cpp_Traceguids,
            *((unsigned __int8 *)v19 + 2),
            -1073741670);
          goto LABEL_59;
        }
        memset(v23, 0, *(size_t *)&options.Size);
        v25 = 2LL * v60;
        v48 = 0;
        v14[v25] = (FxUsbPipe **)v24;
        LODWORD(v14[v25 + 1]) = v56;
        if ( v56 )
          break;
LABEL_28:
        if ( *(_QWORD *)&Parent[1].m_ObjectFlags )
          FxUsbDevice::CleanupInterfacePipesAndDelete(this, (_FX_DRIVER_GLOBALS *)Parent);
        ++v60;
        v19 = (void **)((char *)v19 + *(unsigned __int16 *)v19);
        if ( (unsigned __int64)v19 >= options.Timeout )
          goto LABEL_31;
      }
      while ( 1 )
      {
        v26 = (FxUsbPipe *)FxObjectHandleAlloc(
                             *p_m_Globals,
                             ExDefaultNonPagedPoolType,
                             0x1B0uLL,
                             0,
                             PipesAttributes,
                             0,
                             FxObjectTypeExternal);
        if ( v26 )
          FxUsbPipe::FxUsbPipe(v26, *p_m_Globals, this);
        else
          v27 = 0LL;
        *(_QWORD *)&options.Size = v27;
        *v24 = v27;
        if ( !v27 )
          break;
        v9 = FxIoTarget::Init(v27, this->m_DeviceBase);
        if ( v9 < 0 )
        {
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Au, WPP_FxUsbDevice_cpp_Traceguids, v9);
          goto LABEL_59;
        }
        v28 = FxObject::Commit(*(FxObject **)&options.Size, (_FX_DRIVER_GLOBALS *)PipesAttributes, 0LL, Parent, 1u);
        v9 = v28;
        if ( v28 < 0 )
        {
          WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxUsbDevice_cpp_Traceguids, v28);
          goto LABEL_59;
        }
        v24 = (FxIoTarget **)(v52 + 1);
        ++v48;
        ++v52;
        if ( v48 >= v56 )
          goto LABEL_28;
      }
      v9 = -1073741670;
      v31 = 25;
      goto LABEL_38;
    }
LABEL_31:
    if ( this->m_NumInterfaces > 1u && v8 )
    {
      v29 = 24 * v8 + 56;
      v30 = (_URB *)FxPoolAllocator(
                      *p_m_Globals,
                      &(*p_m_Globals)->FxPoolFrameworks,
                      ExDefaultNonPagedPoolType,
                      v29,
                      (*p_m_Globals)->Tag,
                      Caller);
      v49 = v30;
      if ( !v30 )
      {
        v9 = -1073741670;
        v31 = 28;
LABEL_38:
        WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, v31, WPP_FxUsbDevice_cpp_Traceguids, -1073741670);
LABEL_59:
        if ( v47 )
        {
          v41 = (unsigned __int8 *)v47;
          v42 = 0LL;
          PipesAttributes_0a = (unsigned __int8 *)v47;
          v43 = v14;
          do
          {
            if ( *v43 )
            {
              v44 = 0;
              if ( *((_DWORD *)v43 + 2) )
              {
                do
                {
                  v45 = (*v43)[v44];
                  if ( v45 )
                  {
                    FxObject::DeleteFromFailedCreate(v45);
                    v14[2 * v42][v44] = 0LL;
                  }
                  ++v44;
                }
                while ( v44 < *((_DWORD *)v43 + 2) );
                v41 = PipesAttributes_0a;
              }
              FxPoolFree(v14[2 * v42]);
              v14[2 * v42] = 0LL;
              LODWORD(v14[2 * v42 + 1]) = 0;
            }
            ++v42;
            v43 += 2;
            PipesAttributes_0a = --v41;
          }
          while ( v41 );
        }
        FxPoolFree(v14);
        goto LABEL_70;
      }
      memset(v30, 0, v29);
    }
    m_USBDHandle = this->m_USBDHandle;
    options.Timeout = 0x500000010LL;
    v51 = -20000000LL;
    FxFormatUsbRequest(*(FxRequestBase **)&request.m_ClearContextOnDestroy, Urb, FxUrbTypeLegacy, m_USBDHandle);
    v33 = FxIoTarget::SubmitSync(
            this,
            *(FxRequest **)&request.m_ClearContextOnDestroy,
            (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
            0LL);
    v9 = v33;
    if ( v33 < 0 )
    {
      WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxUsbDevice_cpp_Traceguids, v33);
    }
    else
    {
      this->m_ConfigHandle = Urb->FsContext2;
      InterfaceFromNumber = FxUsbDevice::GetInterfaceFromNumber(this, BYTE2(Urb->SectionObjectPointer));
      InterfaceFromNumber->m_NumberOfConfiguredPipes = Urb->FinalStatus;
      InterfaceFromNumber->m_ConfiguredPipes = *v14;
      *v14 = v35;
      *((_DWORD *)v14 + 2) = (_DWORD)v35;
      FxUsbInterface::SetInfo(InterfaceFromNumber, (_USBD_INTERFACE_INFORMATION *)p_SectionObjectPointer);
      v36 = 1;
      if ( this->m_NumInterfaces > 1u )
      {
        v37 = (unsigned __int16 *)((char *)Urb + (unsigned __int16)Urb->Type);
        v38 = (unsigned __int16 *)((char *)p_SectionObjectPointer + *(unsigned __int16 *)p_SectionObjectPointer);
        while ( v38 < v37 )
        {
          v39 = FxUsbDevice::GetInterfaceFromNumber(this, *((_BYTE *)v38 + 2));
          v57 = v39;
          if ( *((_DWORD *)v38 + 4) )
          {
            FxUsbInterface::FormatSelectSettingUrb(v39, v49, v38[8], *((_BYTE *)v38 + 3));
            IoReuseIrp(*(PIRP *)(*(_QWORD *)&request.m_ClearContextOnDestroy + 152LL), 0);
            FxRequestBase::ClearFieldsForReuse(*(FxRequestBase **)&request.m_ClearContextOnDestroy);
            FxFormatUsbRequest(
              *(FxRequestBase **)&request.m_ClearContextOnDestroy,
              (_FILE_OBJECT *)v49,
              FxUrbTypeLegacy,
              0LL);
            v9 = FxIoTarget::SubmitSync(
                   this,
                   *(FxRequest **)&request.m_ClearContextOnDestroy,
                   (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                   0LL);
            if ( v9 < 0 )
            {
              WPP_IFR_SF_d(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxUsbDevice_cpp_Traceguids, v9);
              goto $Done_53;
            }
            memmove(
              v38,
              &v49->UrbGetIsochPipeTransferPathDelays.MaximumSendPathDelayInMilliSeconds,
              v49->UrbSelectInterface.Interface.Length);
            v39 = v57;
          }
          v39->m_NumberOfConfiguredPipes = *((_BYTE *)v38 + 16);
          v40 = 2LL * v36;
          v39->m_ConfiguredPipes = v14[2 * v36];
          v14[v40] = 0LL;
          LODWORD(v14[v40 + 1]) = 0;
          FxUsbInterface::SetInfo(v39, (_USBD_INTERFACE_INFORMATION *)v38);
          v38 = (unsigned __int16 *)((char *)v38 + *v38);
          ++v36;
        }
      }
      if ( PipesAttributes_0 )
        *PipesAttributes_0 = v36;
    }
$Done_53:
    if ( v49 )
      FxPoolFree(v49);
    goto LABEL_59;
  }
LABEL_70:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v9;
}
