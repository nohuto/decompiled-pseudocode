/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031860
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C0031160 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C00712A0 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00714F8 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_Dddd @ 0x1C007175C (WPP_IFR_SF_Dddd.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00726C4 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C007282C (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0072894 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     WPP_IFR_SF_DDxd @ 0x1C0080350 (WPP_IFR_SF_DDxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  FxObject *v8; // rcx
  __int64 v9; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  unsigned int Flags; // edx
  unsigned __int16 v16; // r9
  _POOL_TYPE v17; // r14d
  unsigned __int64 ContextSizeOverride; // rdx
  ULONG v19; // r15d
  int v20; // ebx
  __int64 v21; // r8
  unsigned __int64 v22; // r13
  void *Caller; // rax
  _QWORD *v24; // rax
  _FX_DRIVER_GLOBALS *v25; // rdx
  unsigned __int64 v26; // rbx
  _QWORD *v27; // r14
  unsigned __int8 **v28; // r13
  FxVerifierLock *v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // r12
  int (__fastcall *EvtWmiProviderFunctionControl)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // rax
  unsigned __int64 *v33; // r15
  KIRQL v34; // al
  unsigned __int8 v35; // r8
  __int64 v36; // r14
  KIRQL v37; // al
  unsigned __int8 v38; // r8
  _QWORD *v39; // rdi
  _QWORD *v40; // rsi
  bool v41; // dl
  _QWORD *v42; // rax
  unsigned __int8 v43; // r12
  int v44; // esi
  _FX_DRIVER_GLOBALS *ParentObject; // rdx
  bool v46; // zf
  void *v47; // r14
  _WDF_OBJECT_ATTRIBUTES *v48; // r12
  KIRQL v49; // r15
  KIRQL v50; // r14
  FxVerifierLock **v51; // rcx
  unsigned __int64 v52; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v58; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v60; // rdx
  FxVerifierLock *v61; // rcx
  FxVerifierLock *v62; // rcx
  __int64 v63; // rax
  unsigned __int16 v64; // ax
  char *v65; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  const _GUID *Tag; // [rsp+28h] [rbp-79h]
  int _a3; // [rsp+38h] [rbp-69h]
  int globals; // [rsp+40h] [rbp-61h]
  int v71; // [rsp+48h] [rbp-59h]
  FxDevice *pDevice; // [rsp+58h] [rbp-49h] BYREF
  void *PPObject; // [rsp+60h] [rbp-41h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+68h] [rbp-39h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v75; // [rsp+70h] [rbp-31h]
  WDFWMIPROVIDER__ **v76; // [rsp+78h] [rbp-29h]
  _GUID zeroGuid; // [rsp+80h] [rbp-21h] BYREF
  __int64 v78; // [rsp+90h] [rbp-11h]
  void *retaddr; // [rsp+F0h] [rbp+4Fh]

  v76 = WmiProvider;
  *(_QWORD *)&zeroGuid.Data1 = Provider;
  v75 = ProviderAttributes;
  if ( !Device )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v8 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (Device & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxObject *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4098 )
  {
    PPObject = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, &PPObject, (void *)Device, 0x1002u, v9);
    v8 = (FxObject *)PPObject;
  }
  m_Globals = v8->m_Globals;
  *Provider = 0LL;
  BYTE1(pDevice) = 0;
  *WmiProvider = 0LL;
  result = FxValidateObjectAttributes(m_Globals, ProviderAttributes, 1, (unsigned __int16)WmiProviderConfig);
  if ( (int)result >= 0 )
  {
    if ( WmiProviderConfig->Size != 40 )
    {
      WPP_IFR_SF_DDd(
        m_Globals,
        v12,
        0xCu,
        0xAu,
        WPP_FxWmiProvider_cpp_Traceguids,
        WmiProviderConfig->Size,
        40,
        -1073741820);
      return 3221225476LL;
    }
    Flags = WmiProviderConfig->Flags;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      WPP_IFR_SF_DDd(m_Globals, Flags, 0xCu, 0xBu, WPP_FxWmiProvider_cpp_Traceguids, Flags, 7, -1073741811);
      return 3221225485LL;
    }
    if ( (Flags & 0xFFFFFFFB) != 0 && (Flags & 4) != 0 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xCu, WPP_FxWmiProvider_cpp_Traceguids, -1073741811);
      return 3221225485LL;
    }
    if ( WmiProviderConfig->EvtWmiProviderFunctionControl && (Flags & 6) == 0 )
    {
      WPP_IFR_SF_Dddd(m_Globals, Flags, v13, v14, Tag, WmiProviderConfig->Flags, _a3, globals, v71);
      return 3221225485LL;
    }
    *(_QWORD *)zeroGuid.Data4 = 0LL;
    v78 = 0LL;
    if ( RtlCompareMemory(&WmiProviderConfig->Guid, zeroGuid.Data4, 0x10uLL) == 16 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xEu, WPP_FxWmiProvider_cpp_Traceguids, -1073741811);
      return 3221225485LL;
    }
    v17 = ExDefaultNonPagedPoolType;
    ContextSizeOverride = 0LL;
    v19 = m_Globals->Tag;
    if ( ProviderAttributes )
    {
      ContextTypeInfo = ProviderAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = ProviderAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v20 = 0;
    v21 = -1LL;
    v22 = 272LL;
    if ( ContextSizeOverride )
    {
      v54 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v54 < ContextSizeOverride )
        goto LABEL_83;
      v55 = v54 + 272;
      v22 = -1LL;
      if ( v55 >= 0x110 )
        v22 = v55;
      v20 = v55 < 0x110 ? 0xC0000095 : 0;
      if ( v55 < 0x110 )
        goto LABEL_82;
    }
    if ( m_Globals->FxVerifierHandle )
    {
      v56 = v22 + 48;
      v57 = v22;
      if ( v22 + 48 >= v22 )
        v21 = v22 + 48;
      v22 = v21;
      v20 = v56 < v57 ? 0xC0000095 : 0;
    }
    if ( v20 < 0 )
    {
LABEL_82:
      WPP_IFR_SF_DDxd(m_Globals, ContextSizeOverride, v21, v16, Tag, 0xD8u, 0, ContextSizeOverride, v20);
      if ( v20 < 0 )
        goto LABEL_83;
    }
    if ( m_Globals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v24 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v17, v22, v19, Caller);
    v26 = (unsigned __int64)v24;
    if ( v24 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v24, 0, 0x30uLL);
        *(_DWORD *)(v26 + 32) = 1146058822;
        v26 += 48LL;
      }
      memset((void *)(v26 + 224), 0, 0x30uLL);
      *(_QWORD *)(v26 + 224) = v26;
      if ( ProviderAttributes )
      {
        v58 = ProviderAttributes->ContextTypeInfo;
        if ( v58 )
        {
          ContextSize = ProviderAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v58->ContextSize;
          memset((void *)(v26 + 272), 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        *(_QWORD *)(v26 + 256) = ProviderAttributes->ContextTypeInfo;
      }
    }
    if ( v26 )
    {
      v27 = PPObject;
      *(_QWORD *)v26 = &FxObject::`vftable';
      v28 = (unsigned __int8 **)(v26 + 72);
      *(_QWORD *)(v26 + 16) = m_Globals;
      *(_DWORD *)(v26 + 8) = 14684164;
      v29 = 0LL;
      *(_QWORD *)(v26 + 56) = 0LL;
      *(_BYTE *)(v26 + 48) = 1;
      *(_DWORD *)(v26 + 12) = 1;
      *(_DWORD *)(v26 + 24) = 0x10000;
      *(_QWORD *)(v26 + 64) = 0LL;
      *(_QWORD *)(v26 + 40) = v26 + 32;
      *(_QWORD *)(v26 + 32) = v26 + 32;
      *(_QWORD *)(v26 + 80) = v26 + 72;
      *(_QWORD *)(v26 + 72) = v26 + 72;
      v30 = *(_QWORD *)(v26 + 16);
      *(_QWORD *)(v26 + 88) = 0LL;
      *(_QWORD *)(v26 + 96) = 0LL;
      if ( *(_BYTE *)(v30 + 316) )
        FxObject::Vf_VerifyConstruct((FxObject *)v26, v25, 0);
      *(_QWORD *)v26 = FxNonPagedObject::`vftable';
      *(_QWORD *)(v26 + 112) = 0LL;
      *(_BYTE *)(v26 + 104) = 1;
      if ( *(char *)(v26 + 24) < 0 )
      {
        v60 = *(_FX_DRIVER_GLOBALS **)(v26 + 16);
        if ( v60->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v60, (FxObject *)v26);
          *(_QWORD *)(v26 - 40) = VerifierLock;
        }
      }
      *(_QWORD *)v26 = FxWmiProvider::`vftable';
      v31 = (_QWORD *)(v26 + 120);
      *(_QWORD *)(v26 + 200) = 0LL;
      *(_QWORD *)(v26 + 128) = v26 + 120;
      *(_QWORD *)(v26 + 120) = v26 + 120;
      *(_QWORD *)(v26 + 144) = v26 + 136;
      *(_QWORD *)(v26 + 136) = v26 + 136;
      *(_DWORD *)(v26 + 152) = 0;
      *(_QWORD *)(v26 + 160) = v27[83];
      *(_WORD *)(v26 + 208) = 0;
      *(_BYTE *)(v26 + 210) = 0;
      *(_QWORD *)(v26 + 184) = 0LL;
      *(_DWORD *)(v26 + 196) = WmiProviderConfig->Flags;
      *(_DWORD *)(v26 + 192) = WmiProviderConfig->MinInstanceBufferSize;
      *(_GUID *)(v26 + 168) = WmiProviderConfig->Guid;
      EvtWmiProviderFunctionControl = WmiProviderConfig->EvtWmiProviderFunctionControl;
      if ( EvtWmiProviderFunctionControl )
        *(_QWORD *)(v26 + 200) = EvtWmiProviderFunctionControl;
      v33 = (unsigned __int64 *)(v26 + 56);
      v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 56));
      *(_WORD *)(v26 + 24) |= 2u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 56), v34);
      *(_WORD *)(v26 + 24) |= 0x800u;
      v36 = *((_QWORD *)PPObject + 83);
      if ( *(char *)(v36 + 24) < 0 && (v61 = *(FxVerifierLock **)(v36 - 40)) != 0LL )
      {
        FxVerifierLock::Lock(v61, (unsigned __int8 *)&pDevice, v35);
        v37 = (unsigned __int8)pDevice;
      }
      else
      {
        v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v36 + 112));
      }
      LOBYTE(pDevice) = v37;
      if ( (_QWORD *)*v31 == v31 )
      {
        v39 = *(_QWORD **)(v36 + 120);
        v40 = (_QWORD *)(v36 + 120);
        if ( v39 == (_QWORD *)(v36 + 120) )
        {
LABEL_35:
          v41 = 0;
          if ( *(_DWORD *)(v36 + 140) == 1 )
          {
            v41 = (*(_BYTE *)(v26 + 196) & 4) != 0;
          }
          else if ( *(_DWORD *)(v36 + 140) == 2 )
          {
            v44 = -1073741436;
            v29 = 0LL;
            goto LABEL_100;
          }
          ++*(_DWORD *)(v36 + 136);
          v42 = *(_QWORD **)(v36 + 128);
          if ( (_QWORD *)*v42 != v40 )
            __fastfail(3u);
          *v31 = v40;
          *(_QWORD *)(v26 + 128) = v42;
          *v42 = v31;
          *(_QWORD *)(v36 + 128) = v31;
          v43 = (unsigned __int8)pDevice;
          if ( v41 )
            BYTE1(pDevice) = FxWmiIrpHandler::DeferUpdateLocked((FxWmiIrpHandler *)v36, (unsigned __int8)pDevice);
          v29 = 0LL;
          v44 = 0;
LABEL_41:
          if ( *(char *)(v36 + 24) < 0 && (v62 = *(FxVerifierLock **)(v36 - 40)) != 0LL )
            FxVerifierLock::Unlock(v62, v43, v38);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)(v36 + 112), v43);
          if ( v44 >= 0 )
          {
            v46 = *(_WORD *)(v26 + 10) == 0;
            v47 = PPObject;
            VerifierLock = 0LL;
            if ( v46 )
            {
              v44 = -1073741816;
            }
            else
            {
              v48 = v75;
              if ( v75 && v75->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks((FxObject *)v26, ObjectLock);
                v29 = VerifierLock;
              }
              if ( v47 )
              {
                v29 = (FxVerifierLock *)v47;
                VerifierLock = (FxVerifierLock *)v47;
              }
              else if ( v48 && (ParentObject = (_FX_DRIVER_GLOBALS *)v48->ParentObject) != 0LL )
              {
                FxObjectHandleGetPtr(
                  *(_FX_DRIVER_GLOBALS **)(v26 + 16),
                  (unsigned __int64)ParentObject,
                  0x1000u,
                  (void **)&VerifierLock);
                v29 = VerifierLock;
              }
              else if ( !*(_QWORD *)(v26 + 64) )
              {
                v63 = *(_QWORD *)(v26 + 16);
                if ( *(_QWORD *)(v63 + 72) != v26 )
                  v29 = *(FxVerifierLock **)(v63 + 72);
                VerifierLock = v29;
              }
              if ( !v29 )
                goto LABEL_57;
              v49 = KeAcquireSpinLockRaiseToDpc(v33);
              if ( *(_WORD *)(v26 + 26) == 1 )
              {
                if ( *(_QWORD *)(v26 + 64) )
                {
                  KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 56), v49);
                  v44 = -1071644147;
                }
                else
                {
                  v50 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v29->m_Mutex.m_Lock.Owner);
                  if ( WORD1(v29->m_Lock.m_Lock) == 1 )
                  {
                    v51 = *(FxVerifierLock ***)&v29->m_Mutex.m_DbgFlagIsInitialized;
                    if ( *v51 != (FxVerifierLock *)&v29->m_OldIrql )
                      __fastfail(3u);
                    *v28 = &v29->m_OldIrql;
                    *(_QWORD *)(v26 + 80) = v51;
                    *v51 = (FxVerifierLock *)v28;
                    *(_QWORD *)&v29->m_Mutex.m_DbgFlagIsInitialized = v28;
                    if ( !*(_QWORD *)(v26 + 96) )
                      *(_QWORD *)(v26 + 96) = *(_QWORD *)&v29->m_Mutex.m_Lock.OldIrql;
                    KeReleaseSpinLock((PKSPIN_LOCK)&v29->m_Mutex.m_Lock.Owner, v50);
                    *(_QWORD *)(v26 + 64) = v29;
                    v44 = 0;
                  }
                  else
                  {
                    FxObject::TraceDroppedEvent((FxObject *)v29, FxObjectDroppedEventAddChildObjectInternal);
                    KeReleaseSpinLock((PKSPIN_LOCK)&v29->m_Mutex.m_Lock.Owner, v50);
                    v44 = -1073741738;
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 56), v49);
                  if ( v44 >= 0 )
                  {
LABEL_57:
                    if ( v48 )
                    {
                      v64 = *(_WORD *)(v26 + 10);
                      if ( v64 )
                        v65 = (char *)(v26 + v64);
                      else
                        v65 = 0LL;
                      EvtDestroyCallback = v48->EvtDestroyCallback;
                      if ( EvtDestroyCallback )
                        *((_QWORD *)v65 + 3) = EvtDestroyCallback;
                      EvtCleanupCallback = v48->EvtCleanupCallback;
                      if ( EvtCleanupCallback )
                      {
                        *((_QWORD *)v65 + 2) = EvtCleanupCallback;
                        *(_WORD *)(v26 + 24) |= 0x400u;
                      }
                    }
                    *(_WORD *)(v26 + 24) |= 8u;
                    if ( *(_WORD *)(v26 + 10) )
                      v52 = v26 ^ 0xFFFFFFFFFFFFFFF8uLL;
                    else
                      v52 = 0LL;
                    if ( *(_BYTE *)(*(_QWORD *)(v26 + 16) + 316LL) )
                      FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v26, ParentObject);
                    v46 = BYTE1(pDevice) == 0;
                    v44 = 0;
                    *v76 = (WDFWMIPROVIDER__ *)v52;
                    **(_QWORD **)&zeroGuid.Data1 = v26;
                    if ( !v46 )
                      FxWmiIrpHandler::UpdateGuids(*((FxWmiIrpHandler **)PPObject + 83));
                    return (unsigned int)v44;
                  }
                }
              }
              else
              {
                FxObject::TraceDroppedEvent((FxObject *)v26, FxObjectDroppedEventAssignParentObject);
                KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 56), v49);
                v44 = -1073741738;
              }
              v47 = PPObject;
            }
            FxWmiIrpHandler::RemoveProvider(*((FxWmiIrpHandler **)v47 + 83), (FxWmiProvider *)v26);
          }
          if ( BYTE1(pDevice) )
            FxWmiIrpHandler::DecrementUpdateCount(*((FxWmiIrpHandler **)PPObject + 83));
          FxObject::DeleteFromFailedCreate((FxObject *)v26);
          return (unsigned int)v44;
        }
        while ( RtlCompareMemory(v39 + 6, (const void *)(v26 + 168), 0x10uLL) != 16 )
        {
          v39 = (_QWORD *)*v39;
          if ( v39 == v40 )
            goto LABEL_34;
        }
        if ( v39 == (_QWORD *)120 )
        {
LABEL_34:
          v33 = (unsigned __int64 *)(v26 + 56);
          goto LABEL_35;
        }
        v33 = (unsigned __int64 *)(v26 + 56);
        v29 = 0LL;
      }
      v44 = 0x40000000;
LABEL_100:
      v43 = (unsigned __int8)pDevice;
      goto LABEL_41;
    }
LABEL_83:
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0xFu, WPP_FxWmiProvider_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
  return result;
}
