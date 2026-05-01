/*
 * XREFs of ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180031CD4
 * Callers:
 *     ?OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x180030CF0 (-OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180031770 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180031B0C (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180006BA0 (WPP_SF_d.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180024D24 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     WPP_SF_l @ 0x18002FFE4 (WPP_SF_l.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180030200 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x180031F98 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_76760fd8d2347637ca4c9aed770147f6___ @ 0x180032C90 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_76760fd8d2347637ca4c9aed770147f6___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_HandleDesktopVisibilityChange(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        bool a3,
        char a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int8 v8; // di
  int v9; // r13d
  int v10; // r14d
  unsigned __int64 v11; // r15
  char v12; // r13
  __int64 v13; // rsi
  int v14; // edx
  char v15; // si
  int CallbackArray; // eax
  struct IObjectArray *v17; // rdi
  int Ptr; // ebx
  IUnknown **v19; // rax
  __int64 v20; // rcx
  struct IObjectArray *v21; // rcx
  struct IObjectArray *v22; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-30h] BYREF
  struct IObjectArray *v24; // [rsp+48h] [rbp-20h] BYREF
  int v25; // [rsp+50h] [rbp-18h]
  int v26; // [rsp+54h] [rbp-14h]
  int v27; // [rsp+58h] [rbp-10h]
  int v28; // [rsp+B0h] [rbp+48h] BYREF
  int v29; // [rsp+B8h] [rbp+50h] BYREF
  bool v30; // [rsp+C0h] [rbp+58h]
  char v31; // [rsp+C8h] [rbp+60h]

  v31 = a4;
  v30 = a3;
  v23[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v29) >= 0 && v29 )
    (*(void (__fastcall **)(_QWORD, struct IImmersiveMonitor *))(**((_QWORD **)this + 37) + 56LL))(
      *((_QWORD *)this + 37),
      a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v28) = 0;
  v8 = 0;
  v9 = *((_DWORD *)this + 86);
  LODWORD(v22) = v9;
  v10 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 49) )
  {
    v12 = v30;
    do
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v11);
      if ( (unsigned int)SHIsSameObject(
                           *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v13,
                           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2)
        && *(_BYTE *)(v13 + 12) != v12 )
      {
        LOBYTE(v28) = 1;
        v14 = *((_DWORD *)this + 72);
        *(_BYTE *)(v13 + 12) = v12;
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v13, v14);
      }
      if ( *(_BYTE *)(v13 + 12) )
        v8 = 1;
      else
        v10 = 1;
      ++v11;
    }
    while ( v11 < *((_QWORD *)this + 49) );
    v9 = (int)v22;
  }
  if ( v10 != v9 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_ec78d6d4df123bb2dcb1c9b30d08f526_Traceguids, v10);
    *((_DWORD *)this + 86) = v10;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 37) + 48LL))(
      *((_QWORD *)this + 37),
      (unsigned int)(*((_DWORD *)this + 72) == 1) + 1);
  }
  v15 = *((_BYTE *)this + 348);
  if ( v8 != v15 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, v8);
    *((_BYTE *)this + 348) = v8;
  }
  if ( (_BYTE)v28 || v31 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, a2, v30);
  if ( v8 != v15 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, 0LL, v8);
  if ( v10 != v9 )
  {
    v22 = 0LL;
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 26, &v22);
    v17 = v22;
    if ( CallbackArray >= 0
      && ((int (__fastcall *)(struct IObjectArray *, int *))v22->lpVtbl->GetCount)(v22, &v28) >= 0
      && v28 )
    {
      v24 = v17;
      ((void (__fastcall *)(struct IObjectArray *))v17->lpVtbl->AddRef)(v17);
      v25 = v9;
      v26 = v10;
      v27 = v28;
      Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
      v19 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_76760fd8d2347637ca4c9aed770147f6___(
                           v23,
                           &v24);
      Windows::Internal::ComTaskPool::RunTask(3, 2u, Ptr, 0, *v19, 0LL);
      v20 = v23[0];
      if ( v23[0] )
      {
        v23[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v21->lpVtbl->Release)(v21);
      }
    }
    if ( v17 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v17->lpVtbl->Release)(v17);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
