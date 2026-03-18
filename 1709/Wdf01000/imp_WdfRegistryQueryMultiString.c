/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x1C0011810
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0011B2C (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00120E8 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C00121BC (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0012300 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017780 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0017810 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0037530 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C0083E18 (WPP_IFR_SF_qZd.c)
 */

int __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int16 v8; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFCOLLECTION__ *v10; // rdi
  int result; // eax
  unsigned __int8 v12; // dl
  int v13; // edi
  unsigned int v14; // r8d
  unsigned int v15; // edi
  _QWORD *v16; // r12
  unsigned int m_Count; // esi
  FxString *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  const _GUID *Value; // [rsp+20h] [rbp-50h]
  int _a3; // [rsp+38h] [rbp-38h]
  FxCollection *pCollection; // [rsp+40h] [rbp-30h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-28h] BYREF
  FxDeviceBase *v26; // [rsp+50h] [rbp-20h]
  void *dummy; // [rsp+58h] [rbp-18h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int dataLength; // [rsp+B0h] [rbp+40h] BYREF
  PCWSTR type; // [rsp+C0h] [rbp+50h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+C8h] [rbp+58h]

  Attributes = StringsAttributes;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = Collection;
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, StringsAttributes, 0, v8);
  if ( result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( result >= 0 )
      {
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v10, 0x100Eu, (void **)&pCollection);
        v26 = FxDeviceBase::_SearchForDevice(m_Globals, StringsAttributes);
        v13 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, (unsigned int *)&type);
        if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
        {
          if ( (_DWORD)type != 7 )
            return -1073741788;
          v15 = dataLength;
          if ( !dataLength )
          {
            WPP_IFR_SF_qZd(m_Globals, v12, v14, 0x14u, Value, Key, ValueName, _a3);
            return -1073741687;
          }
          v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, dataLength, m_Globals->Tag, retaddr);
          if ( !v16 )
          {
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x15u, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return -1073741670;
          }
          v13 = FxRegKey::_QueryValue(
                  pKey->m_Globals,
                  pKey->m_Key,
                  ValueName,
                  v15,
                  v16,
                  &dataLength,
                  (unsigned int *)&type);
          if ( v13 >= 0 )
          {
            v13 = FxRegKey::_VerifyMultiSzString(m_Globals, ValueName, (wchar_t *)v16, dataLength);
            if ( v13 >= 0 )
            {
              type = (PCWSTR)v16;
              m_Count = pCollection->m_Count;
              dataLength = m_Count;
              if ( *(_WORD *)v16 )
              {
                while ( 1 )
                {
                  v18 = (FxString *)FxObjectHandleAlloc(
                                      m_Globals,
                                      ExDefaultNonPagedPoolType,
                                      0x78uLL,
                                      0,
                                      Attributes,
                                      0,
                                      FxObjectTypeExternal);
                  if ( v18 )
                  {
                    FxString::FxString(v18, m_Globals);
                    v20 = v19;
                  }
                  else
                  {
                    v20 = 0LL;
                  }
                  if ( !v20 )
                    break;
                  if ( v26 )
                    *(_QWORD *)(v20 + 96) = v26;
                  RtlInitUnicodeString(&DestinationString, type);
                  v13 = FxDuplicateUnicodeString(
                          *(_FX_DRIVER_GLOBALS **)(v20 + 16),
                          &DestinationString,
                          (_UNICODE_STRING *)(v20 + 104));
                  if ( v13 < 0 )
                    goto LABEL_39;
                  v13 = FxObject::Commit((FxObject *)v20, Attributes, &dummy, 0LL, 1u);
                  if ( v13 < 0 )
                    goto LABEL_39;
                  if ( !FxCollectionInternal::Add(
                          &pCollection->FxCollectionInternal,
                          pCollection->m_Globals,
                          (FxObject *)v20) )
                  {
                    v13 = -1073741670;
                    WPP_IFR_SF_qid(
                      m_Globals,
                      2u,
                      2u,
                      0x16u,
                      WPP_FxRegistryAPI_cpp_Traceguids,
                      Key,
                      (__int64)Collection,
                      -1073741670);
                  }
                  if ( v13 < 0 )
                  {
LABEL_39:
                    FxObject::DeleteFromFailedCreate((FxObject *)v20);
                    goto LABEL_41;
                  }
                  v21 = -1LL;
                  do
                    ++v21;
                  while ( type[v21] );
                  type += v21 + 1;
                  if ( !*type )
                    goto LABEL_26;
                }
                v13 = -1073741670;
LABEL_41:
                WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x17u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v13);
LABEL_26:
                m_Count = dataLength;
              }
              if ( v13 < 0 )
              {
                while ( pCollection->m_Count > m_Count )
                  FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, m_Count);
              }
            }
          }
          FxPoolFree(v16);
        }
        else
        {
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x13u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v13);
        }
        return v13;
      }
    }
  }
  return result;
}
