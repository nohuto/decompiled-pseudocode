/*
 * XREFs of imp_WdfRegistryAssignMultiString @ 0x1C00841F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C00373EC (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C00392F4 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        WDFCOLLECTION__ *StringsCollection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxCollectionInternal *v9; // rcx
  unsigned __int64 v10; // rax
  ULONG v11; // r15d
  unsigned int v12; // esi
  wchar_t *v13; // rdi
  FxCollectionInternal *v14; // rdx
  NTSTATUS _a2; // eax
  FxRegKey *pKey; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 valid; // [rsp+80h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+90h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !StringsCollection )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)StringsCollection, 0x100Eu, (void **)&pCollection);
      valid = 0;
      if ( pCollection )
        v9 = &pCollection->FxCollectionInternal;
      else
        v9 = 0LL;
      v10 = FxCalculateTotalStringSize(v9, 1u, &valid);
      v11 = -1;
      if ( v10 <= 0xFFFFFFFF )
        v11 = v10;
      v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v10 <= 0xFFFFFFFF )
      {
        if ( valid )
        {
          v13 = (wchar_t *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, v11, m_Globals->Tag, retaddr);
          if ( !v13 )
          {
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x2Au, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return 3221225626LL;
          }
          if ( pCollection )
            v14 = &pCollection->FxCollectionInternal;
          else
            v14 = 0LL;
          FxCopyMultiSz(v13, v14);
          _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 7u, v13, v11);
          v12 = _a2;
          if ( _a2 < 0 )
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x2Bu, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
          FxPoolFree(v13);
        }
        else
        {
          v12 = -1073741811;
          WPP_IFR_SF_qid(
            m_Globals,
            2u,
            2u,
            0x29u,
            WPP_FxRegistryAPI_cpp_Traceguids,
            Key,
            (__int64)StringsCollection,
            -1073741811);
        }
      }
      else
      {
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          2u,
          0x28u,
          WPP_FxRegistryAPI_cpp_Traceguids,
          StringsCollection,
          v10 > 0xFFFFFFFF ? 0xC0000095 : 0);
      }
      return v12;
    }
  }
  return result;
}
