/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047EFC
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005DD40 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18013419C (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 * Callees:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1800472EC (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180047960 (-UpdateTitle@CTaskWindow@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180134E78 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x180135128 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
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
  __int64 v8; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  void (*v14)(void); // rax
  __int64 result; // rax
  unsigned int v16; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 40) = a2;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v8 = *(_QWORD *)(a1 + 56);
    }
    *(_QWORD *)(a1 + 56) = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v12 = a5;
  *(_DWORD *)(a1 + 48) = a4;
  v13 = *(_QWORD *)(a1 + 136);
  if ( v13 != v12 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = *(_QWORD *)(a1 + 136);
    }
    *(_QWORD *)(a1 + 136) = v12;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( a2 )
  {
    if ( !(unsigned int)GetWindowBand(*(_QWORD *)(a1 + 40), &v16) )
    {
      result = ResultFromKnownLastError();
      if ( (int)result < 0 )
        return result;
    }
    if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(v16, a1 + 52) )
      return 2147947423LL;
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 5;
  }
  if ( !a6
    || !a7
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 64LL))(a1 + 8), (int)result >= 0) )
  {
    if ( *(_QWORD *)(a1 + 40) )
      CTaskWindow::_QueryCloakedState((CTaskWindow *)a1);
    v14 = *(void (**)(void))(*(_QWORD *)(a1 + 8) + 152LL);
    if ( (char *)v14 == (char *)CTaskWindow::UpdateTitle )
      CTaskWindow::UpdateTitle((CTaskWindow *)(a1 + 8));
    else
      v14();
    return CTaskWindow::_RegisterForViewReadinessChanges((CTaskWindow *)a1);
  }
  return result;
}
