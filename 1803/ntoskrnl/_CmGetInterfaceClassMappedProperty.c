/*
 * XREFs of _CmGetInterfaceClassMappedProperty @ 0x1404907B0
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140490670 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404908C8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1407EF3CC (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InterfaceClassMappedPropertyFromRegValue; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx

  InterfaceClassMappedPropertyFromRegValue = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &off_1407F8F70;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v15 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 2;
      if ( (_DWORD)a4 )
        goto LABEL_11;
    }
    InterfaceClassMappedPropertyFromRegValue = CmGetInterfaceClassMappedPropertyFromRegValue(
                                                 a1,
                                                 a2,
                                                 a3,
                                                 a5,
                                                 a6,
                                                 a7,
                                                 a8,
                                                 (__int64)a9);
    if ( InterfaceClassMappedPropertyFromRegValue != -1073741802 )
      return InterfaceClassMappedPropertyFromRegValue;
LABEL_11:
    if ( *(_DWORD *)(a5 + 16) == DEVPKEY_NAME.pid )
    {
      v17 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v17 )
        return (unsigned int)CmGetInterfaceClassMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
    }
  }
  return InterfaceClassMappedPropertyFromRegValue;
}
