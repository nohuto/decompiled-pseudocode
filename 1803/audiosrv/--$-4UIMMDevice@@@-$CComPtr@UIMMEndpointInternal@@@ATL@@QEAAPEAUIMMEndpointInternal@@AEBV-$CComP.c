/*
 * XREFs of ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180018494
 * Callers:
 *     ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18003284C (-SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(
        struct IUnknown **a1,
        struct IUnknown **a2)
{
  struct IUnknown *v2; // rdi
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  bool v6; // di
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  if ( !v4 )
  {
    if ( !v2 )
      return *a1;
    goto LABEL_3;
  }
  if ( !v2 )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v9 = 0LL;
  v10 = 0LL;
  (**v4)(v4, &GUID_00000000_0000_0000_c000_000000000046, &v9);
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v2->lpVtbl->QueryInterface)(
    v2,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v10);
  v8 = v9;
  v6 = v9 == v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8 = v9;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_4:
  if ( !v6 )
    return ATL::AtlComQIPtrAssign(a1, *a2, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
  return *a1;
}
