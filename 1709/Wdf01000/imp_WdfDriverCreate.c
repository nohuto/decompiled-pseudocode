/*
 * XREFs of imp_WdfDriverCreate @ 0x1C0014F60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     GetImageName @ 0x1C00153AC (GetImageName.c)
 *     FxInitialize @ 0x1C00158D0 (FxInitialize.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00173DC (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C0017958 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001CE70 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001D258 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0020140 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0020188 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     _TlgWrite @ 0x1C0073A18 (_TlgWrite.c)
 *     WPP_IFR_SF_dddd @ 0x1C0079E78 (WPP_IFR_SF_dddd.c)
 *     _TlgCreateSz @ 0x1C0079FE4 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C007A018 (_TlgCreateWsz.c)
 *     FxDestroy @ 0x1C008056C (FxDestroy.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8B40 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfDriverCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes,
        _WDF_DRIVER_CONFIG *DriverConfig,
        WDFDRIVER__ **Driver)
{
  char *DriverName; // rbx
  unsigned int DriverInitFlags; // ecx
  int result; // eax
  _WDF_DRIVER_CONFIG *v12; // rdx
  unsigned __int16 v13; // r9
  unsigned int DriverPoolTag; // eax
  _WDF_DRIVER_CONFIG *v15; // r9
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v17; // edi
  void *Caller; // rax
  FxDriver *v19; // rax
  FxDriver *v20; // rdi
  FxDriver *v21; // rax
  FxDriver *v22; // rdi
  int v23; // r15d
  _FX_DRIVER_GLOBALS *v24; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  WDFDRIVER__ *v26; // r14
  wchar_t *Buffer; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v29; // rax
  unsigned __int16 m_ObjectSize; // ax
  char *v31; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int64 ContextSize; // r8
  __int64 v35; // rcx
  int v36; // eax
  const _TlgProvider_t *v37; // rcx
  const _GUID *v38; // r8
  const _GUID *v39; // r9
  char v40; // [rsp+50h] [rbp-B0h] BYREF
  char v41; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int Tag; // [rsp+54h] [rbp-ACh] BYREF
  FxAutoString imageName; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[12]; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  DriverName = DriverGlobals[-8].DriverName;
  if ( !DriverObject )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  DriverName[424] = 0;
  if ( !RegistryPath )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( !DriverConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( DriverConfig->Size != 32 )
  {
    WPP_IFR_SF_dddd(
      (_FX_DRIVER_GLOBALS *)DriverName,
      2u,
      0x11u,
      0xAu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverConfig->Size,
      32,
      32,
      -1073741820);
    return -1073741820;
  }
  DriverInitFlags = DriverConfig->DriverInitFlags;
  if ( (DriverInitFlags & 0xFFFFFFEC) != 0 )
  {
    WPP_IFR_SF_DDd(
      (_FX_DRIVER_GLOBALS *)DriverName,
      (unsigned __int8)DriverObject,
      0x11u,
      0xBu,
      WPP_FxDriverApi_cpp_Traceguids,
      DriverInitFlags,
      19,
      -1073741811);
    return -1073741811;
  }
  result = FxVerifierCheckIrqlLevel((_FX_DRIVER_GLOBALS *)DriverName, 0);
  if ( result >= 0 )
  {
    if ( DriverName[424]
      || (result = FxValidateUnicodeString((_FX_DRIVER_GLOBALS *)DriverName, RegistryPath), result >= 0) )
    {
      if ( *((_QWORD *)DriverName + 9) || *((_QWORD *)DriverName + 54) )
      {
        WPP_IFR_SF_qd(
          (_FX_DRIVER_GLOBALS *)DriverName,
          2u,
          0x11u,
          0xDu,
          WPP_FxDriverApi_cpp_Traceguids,
          DriverObject,
          -1073741437);
        return -1073741437;
      }
      if ( Driver )
        *Driver = 0LL;
      FxDriver::_InitializeDriverName((_FX_DRIVER_GLOBALS *)DriverName, RegistryPath);
      if ( DriverConfig->Size == 32 && (DriverPoolTag = DriverConfig->DriverPoolTag) != 0 && DriverPoolTag != 543908932 )
      {
        *((_DWORD *)DriverName + 17) = DriverPoolTag;
        *((_DWORD *)DriverName + 111) = DriverConfig->DriverPoolTag;
      }
      else
      {
        FxDriver::_InitializeTag((_FX_DRIVER_GLOBALS *)DriverName, v12);
      }
      if ( (DriverConfig->DriverInitFlags & 3) == 1 && DriverConfig->EvtDriverDeviceAdd )
      {
        WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)DriverName, 2u, 0x11u, 0xEu, WPP_FxDriverApi_cpp_Traceguids);
        return -1073741811;
      }
      result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)DriverName, DriverAttributes, 7, v13);
      if ( result >= 0 )
      {
        FxInitialize((_FX_DRIVER_GLOBALS *)DriverName, DriverObject, RegistryPath, v15);
        ContextSizeOverride = 0LL;
        v17 = ExDefaultNonPagedPoolType;
        Tag = *((_DWORD *)DriverName + 17);
        if ( DriverAttributes )
        {
          ContextTypeInfo = DriverAttributes->ContextTypeInfo;
          if ( ContextTypeInfo )
          {
            ContextSizeOverride = DriverAttributes->ContextSizeOverride;
            if ( !ContextSizeOverride )
              ContextSizeOverride = ContextTypeInfo->ContextSize;
          }
        }
        if ( (int)FxCalculateObjectTotalSize2(
                    (_FX_DRIVER_GLOBALS *)DriverName,
                    0x168u,
                    0,
                    ContextSizeOverride,
                    (unsigned __int64 *)&imageName.m_UnicodeString.Length) < 0 )
          goto LABEL_89;
        if ( DriverName[264] )
          Caller = retaddr;
        else
          Caller = 0LL;
        v19 = (FxDriver *)FxPoolAllocator(
                            (_FX_DRIVER_GLOBALS *)DriverName,
                            (FX_POOL *)(DriverName + 104),
                            v17,
                            *(unsigned __int64 *)&imageName.m_UnicodeString.Length,
                            Tag,
                            Caller);
        v20 = v19;
        if ( v19 )
        {
          if ( DriverName[320] )
          {
            memset(v19, 0, 0x30uLL);
            LODWORD(v20->m_ChildListHead.Flink) = 1146058822;
            v20 = (FxDriver *)((char *)v20 + 48);
          }
          memset(&v20[1].m_Type, 0, 0x30uLL);
          *(_QWORD *)&v20[1].m_Type = v20;
          if ( DriverAttributes )
          {
            v29 = DriverAttributes->ContextTypeInfo;
            if ( v29 )
            {
              ContextSize = DriverAttributes->ContextSizeOverride;
              if ( !ContextSize )
                ContextSize = v29->ContextSize;
              memset(&v20[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v20[1].m_ChildListHead.Blink = (_LIST_ENTRY *)DriverAttributes->ContextTypeInfo;
          }
        }
        if ( v20
          && (FxDriver::FxDriver(v20, DriverObject, DriverConfig, (_FX_DRIVER_GLOBALS *)DriverName), (v22 = v21) != 0LL) )
        {
          v23 = FxDriver::Initialize(v21, RegistryPath, DriverConfig, DriverAttributes);
          if ( v23 >= 0 )
          {
            v24 = 0LL;
            *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
            if ( v22->m_ObjectSize )
            {
              if ( !DriverAttributes )
                goto LABEL_94;
              if ( DriverAttributes->ExecutionLevel == WdfExecutionLevelPassive )
              {
                FxObject::MarkPassiveCallbacks(v22, ObjectLock);
                v24 = *(_FX_DRIVER_GLOBALS **)&imageName.m_UnicodeString.Length;
              }
              if ( DriverAttributes->ParentObject )
              {
                FxObjectHandleGetPtr(
                  v22->m_Globals,
                  (unsigned __int64)DriverAttributes->ParentObject,
                  0x1000u,
                  (void **)&imageName);
                v24 = *(_FX_DRIVER_GLOBALS **)&imageName.m_UnicodeString.Length;
              }
              else
              {
LABEL_94:
                if ( !v22->m_ParentObject )
                {
                  m_Globals = v22->m_Globals;
                  if ( m_Globals->Driver != v22 )
                  {
                    v24 = (_FX_DRIVER_GLOBALS *)m_Globals->Driver;
                    *(_QWORD *)&imageName.m_UnicodeString.Length = v24;
                  }
                }
              }
              if ( !v24 || (v23 = FxObject::AssignParentObject(v22, (FxObject *)v24), v23 >= 0) )
              {
                if ( DriverAttributes )
                {
                  m_ObjectSize = v22->m_ObjectSize;
                  if ( m_ObjectSize )
                    v31 = (char *)v22 + m_ObjectSize;
                  else
                    v31 = 0LL;
                  EvtDestroyCallback = DriverAttributes->EvtDestroyCallback;
                  if ( EvtDestroyCallback )
                    *((_QWORD *)v31 + 3) = EvtDestroyCallback;
                  EvtCleanupCallback = DriverAttributes->EvtCleanupCallback;
                  if ( EvtCleanupCallback )
                  {
                    *((_QWORD *)v31 + 2) = EvtCleanupCallback;
                    v22->m_ObjectFlags |= 0x400u;
                  }
                }
                v22->m_ObjectFlags |= 8u;
                if ( v22->m_ObjectSize )
                  v26 = (WDFDRIVER__ *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v26 = 0LL;
                if ( v22->m_Globals->FxVerifierOn )
                  FxObject::Vf_VerifyLeakDetectionConsiderObject(v22, v24);
                *((_QWORD *)DriverName + 9) = v22;
                v23 = 0;
                *((_QWORD *)DriverName + 54) = v26;
                *((_DWORD *)DriverName + 110) |= DriverConfig->DriverInitFlags;
                DriverName[480] = (DriverConfig->DriverInitFlags & 3) == 0 || DriverConfig->EvtDriverUnload;
                if ( Driver )
                  *Driver = v26;
                if ( *((_QWORD *)DriverName + 52) )
                {
                  *(_QWORD *)&imageName.m_UnicodeString.Length = 0LL;
                  imageName.m_UnicodeString.Buffer = 0LL;
                  GetImageName((_FX_DRIVER_GLOBALS *)DriverName, &imageName.m_UnicodeString);
                  Buffer = imageName.m_UnicodeString.Buffer;
                  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5
                    && (Tlgg_TelemetryProviderProv.KeywordAny & 0x200000000000LL) != 0
                    && (Tlgg_TelemetryProviderProv.KeywordAll & 0x200000000000LL) == Tlgg_TelemetryProviderProv.KeywordAll )
                  {
                    _TlgData[2].Ptr = *((_QWORD *)DriverName + 52);
                    *(_QWORD *)&_TlgData[2].Size = 16LL;
                    TlgCreateSz(&_TlgData[3], DriverName + 448);
                    TlgCreateWsz(&_TlgData[4], Buffer);
                    TlgCreateWsz(&_TlgData[5], L"01.023.0");
                    v35 = *((_QWORD *)DriverName + 37);
                    Tag = *(_DWORD *)(v35 + 16);
                    _TlgData[6].Ptr = (unsigned __int64)&Tag;
                    *(_QWORD *)&_TlgData[6].Size = 4LL;
                    v36 = *(_DWORD *)(v35 + 20);
                    v37 = (const _TlgProvider_t *)*((unsigned int *)DriverName + 110);
                    v44 = v36;
                    _TlgData[7].Ptr = (unsigned __int64)&v44;
                    _TlgData[8].Ptr = (unsigned __int64)(DriverName + 316);
                    v40 = (unsigned __int8)v37 & 1;
                    LOBYTE(v37) = ((unsigned __int8)v37 & 2) != 0;
                    *(_QWORD *)&_TlgData[7].Size = 4LL;
                    _TlgData[9].Ptr = (unsigned __int64)&v40;
                    _TlgData[10].Ptr = (unsigned __int64)&v41;
                    *(_DWORD *)&imageName.m_UnicodeString.Length = *((_DWORD *)DriverName + 101);
                    _TlgData[11].Ptr = (unsigned __int64)&imageName;
                    *(_QWORD *)&_TlgData[8].Size = 1LL;
                    *(_QWORD *)&_TlgData[9].Size = 1LL;
                    v41 = (char)v37;
                    *(_QWORD *)&_TlgData[10].Size = 1LL;
                    *(_QWORD *)&_TlgData[11].Size = 4LL;
                    TlgWrite(v37, &TlgEvent_0._TlgChannel, v38, v39, 0xCu, _TlgData);
                  }
                  if ( Buffer )
                    FxPoolFree(Buffer);
                }
                return v23;
              }
            }
            else
            {
              v23 = -1073741816;
            }
          }
          FxObject::DeleteFromFailedCreate(v22);
        }
        else
        {
LABEL_89:
          v23 = -1073741670;
        }
        FxDestroy((_FX_DRIVER_GLOBALS *)DriverName);
        return v23;
      }
    }
  }
  return result;
}
