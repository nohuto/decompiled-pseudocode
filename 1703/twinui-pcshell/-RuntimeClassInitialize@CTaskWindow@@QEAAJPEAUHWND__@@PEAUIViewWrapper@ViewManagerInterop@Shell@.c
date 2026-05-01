/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180063344
 * Callers:
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1800631FC (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 * Callees:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x180064708 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x1800648BC (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x180064AF0 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  signed int v14; // ecx
  signed int LastError; // eax
  unsigned int v17; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 40) = a2;
  if ( *(_QWORD *)(a1 + 56) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = a3;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = a5;
  *(_DWORD *)(a1 + 48) = a4;
  if ( *(_QWORD *)(a1 + 136) != v12 )
  {
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = v12;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 52) = 5;
LABEL_13:
    if ( !a6 || !a7 || (v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 64LL))(a1 + 8), v14 >= 0) )
    {
      if ( *(_QWORD *)(a1 + 40) )
        CTaskWindow::_QueryCloakedState((CTaskWindow *)a1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 152LL))(a1 + 8);
      return (unsigned int)CTaskWindow::_RegisterForViewReadinessChanges((CTaskWindow *)a1);
    }
    return (unsigned int)v14;
  }
  if ( (unsigned int)GetWindowBand(*(_QWORD *)(a1 + 40), &v17) )
  {
    if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(v17, a1 + 52) )
      return (unsigned int)-2147019873;
    goto LABEL_13;
  }
  LastError = GetLastError();
  v14 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v14 = LastError;
  if ( v14 >= 0 )
    return (unsigned int)-2147467259;
  return (unsigned int)v14;
}
