/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x1C00849D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C001802C (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0037530 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C0083E18 (WPP_IFR_SF_qZd.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v11; // r14
  __int64 result; // rax
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  unsigned int v15; // ebp
  _QWORD *v16; // r15
  int v17; // edi
  int v18; // eax
  unsigned int v19; // ebp
  FxMemoryObject *v20; // rbx
  void *v21; // rax
  unsigned __int16 v22; // r9
  const _GUID *Value; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxMemoryObject *pObject; // [rsp+70h] [rbp+8h] BYREF
  FxRegKey *pKey; // [rsp+80h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  v11 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  *Memory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, m_Globals->Tag);
    result = FxValidateObjectAttributes(m_Globals, MemoryAttributes, 0, v13);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( (int)result >= 0 )
      {
        result = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, (unsigned int *)&pObject, 0LL);
        if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -2147483643 )
        {
          v15 = (unsigned int)pObject;
          if ( !(_DWORD)pObject )
          {
            WPP_IFR_SF_qZd(m_Globals, 0, v14, 0xFu, Value, Key, ValueName);
            return 3221225609LL;
          }
          v16 = FxPoolAllocator(
                  m_Globals,
                  &m_Globals->FxPoolFrameworks,
                  1u,
                  (unsigned int)pObject,
                  m_Globals->Tag,
                  retaddr);
          if ( !v16 )
          {
            v17 = -1073741670;
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x10u, WPP_FxRegistryAPI_cpp_Traceguids, Key, -1073741670);
            return (unsigned int)v17;
          }
          v18 = FxRegKey::_QueryValue(
                  pKey->m_Globals,
                  pKey->m_Key,
                  ValueName,
                  v15,
                  v16,
                  (unsigned int *)&pObject,
                  ValueType);
          v17 = v18;
          if ( v18 < 0 )
          {
            v22 = 18;
          }
          else
          {
            v19 = (unsigned int)pObject;
            v18 = FxMemoryObject::_Create(
                    m_Globals,
                    MemoryAttributes,
                    PoolType,
                    m_Globals->Tag,
                    (unsigned int)pObject,
                    &pObject);
            v17 = v18;
            if ( v18 >= 0 )
            {
              v20 = pObject;
              v17 = FxObject::Commit(pObject, (_FX_DRIVER_GLOBALS *)MemoryAttributes, v11, 0LL, 1u);
              if ( v17 < 0 )
              {
                FxObject::DeleteFromFailedCreate(v20);
              }
              else
              {
                v21 = (void *)v20->GetBuffer(&v20->IFxMemory);
                memmove(v21, v16, v19);
              }
              goto LABEL_25;
            }
            v22 = 17;
          }
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, v22, WPP_FxRegistryAPI_cpp_Traceguids, Key, v18);
LABEL_25:
          FxPoolFree(v16);
          return (unsigned int)v17;
        }
      }
    }
  }
  return result;
}
