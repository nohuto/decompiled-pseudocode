/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C0017A70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0017FB8 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001FE44 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // ebx
  unsigned __int16 v11; // r9
  _POOL_TYPE v12; // ebx
  ULONG Tag; // r15d
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  NTSTATUS v18; // edi
  FxAutoRegKey hKey; // [rsp+40h] [rbp-61h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-59h] BYREF
  FxDriver *pDriver; // [rsp+50h] [rbp-51h] BYREF
  _UNICODE_STRING parameters; // [rsp+58h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  hKey.m_Key = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  v10 = FxVerifierCheckIrqlLevel(v9, 0);
  if ( v10 < 0 || (v10 = FxValidateObjectAttributes(DriverName, KeyAttributes, 0, v11), v10 < 0) )
  {
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
    return (unsigned int)v10;
  }
  else
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
    v12 = ExDefaultNonPagedPoolType;
    Tag = DriverName->Tag;
    ContextSize = FxGetContextSize(KeyAttributes);
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x80u, 0, ContextSize, (unsigned __int64 *)&keyHandle) < 0 )
      goto LABEL_26;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v16 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v12, (unsigned __int64)keyHandle, Tag, Caller);
    v17 = v16;
    if ( v16 )
    {
      if ( DriverName->FxVerifierHandle )
      {
        memset(v16, 0, 0x30uLL);
        *((_DWORD *)v17 + 8) = 1146058822;
        v17 += 6;
      }
      FxContextHeaderInit((FxContextHeader *)v17 + 2, (FxObject *)v17, KeyAttributes);
    }
    if ( v17 )
    {
      *((_DWORD *)v17 + 2) = 8392710;
      *v17 = &FxObject::`vftable';
      v17[2] = DriverName;
      v17[7] = 0LL;
      *((_BYTE *)v17 + 48) = 1;
      FxObject::Construct((FxObject *)v17, 0);
      v17[13] = 0LL;
      *((_WORD *)v17 + 12) |= 0x11u;
      v17[14] = 0LL;
      *v17 = FxRegKey::`vftable';
      v17[15] = DriverName;
    }
    else
    {
LABEL_26:
      v17 = 0LL;
    }
    if ( v17 )
    {
      v18 = FxObject::Commit((FxObject *)v17, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
      if ( v18 < 0 )
        goto LABEL_30;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
      if ( v18 < 0 )
        goto LABEL_30;
      parameters.Buffer = parameters_buffer;
      ObjectAttributes.RootDirectory = hKey.m_Key;
      wcscpy(parameters_buffer, L"Parameters");
      ObjectAttributes.ObjectName = &parameters;
      *(_DWORD *)&parameters.Length = 1441812;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwCreateKey((PHANDLE)v17 + 14, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v18 < 0 )
LABEL_30:
        FxObject::DeleteFromFailedCreate((FxObject *)v17);
      else
        *Key = keyHandle;
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return (unsigned int)v18;
    }
    else
    {
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return 3221225626LL;
    }
  }
}
