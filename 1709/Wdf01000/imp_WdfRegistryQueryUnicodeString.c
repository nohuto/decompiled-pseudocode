/*
 * XREFs of imp_WdfRegistryQueryUnicodeString @ 0x1C0084CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0037530 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        unsigned __int16 *ValueByteLength,
        _UNICODE_STRING *Value)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  _UNICODE_STRING *v10; // rbx
  unsigned __int64 MaximumLength; // rsi
  unsigned int _a2; // ebx
  unsigned __int16 v13; // r9
  _QWORD *v14; // rbp
  int v15; // eax
  size_t v16; // rsi
  int v17; // edi
  wchar_t *Buffer; // rax
  FxRegKey *pKey; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int dataLength; // [rsp+90h] [rbp+8h] BYREF
  unsigned int type; // [rsp+A0h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      v10 = Value;
      if ( Value )
      {
        result = FxValidateUnicodeString(m_Globals, Value);
        if ( (int)result < 0 )
          return result;
        MaximumLength = v10->MaximumLength;
        dataLength = MaximumLength;
        if ( !(_DWORD)MaximumLength )
        {
          _a2 = -1073741811;
          v13 = 24;
LABEL_9:
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, v13, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
          return _a2;
        }
        v14 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, MaximumLength, m_Globals->Tag, retaddr);
        if ( !v14 )
        {
          _a2 = -1073741670;
          v13 = 25;
          goto LABEL_9;
        }
      }
      else
      {
        LODWORD(MaximumLength) = 0;
        dataLength = 0;
        v14 = 0LL;
      }
      v15 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, MaximumLength, v14, &dataLength, &type);
      v16 = dataLength;
      v17 = v15;
      if ( v15 >= 0 )
      {
        if ( type - 1 > 1 )
          v17 = -1073741788;
        if ( v17 >= 0 )
          goto LABEL_18;
      }
      if ( v17 == -2147483643 )
      {
LABEL_18:
        if ( ValueByteLength )
          *ValueByteLength = dataLength;
      }
      if ( v17 >= 0 )
      {
        if ( v10 )
        {
          memmove(v10->Buffer, v14, v16);
          Buffer = v10->Buffer;
          v10->Length = v16;
          if ( !Buffer[((unsigned __int64)(unsigned __int16)v16 >> 1) - 1] )
            v10->Length = v16 - 2;
        }
      }
      if ( v14 )
        FxPoolFree(v14);
      return (unsigned int)v17;
    }
  }
  return result;
}
