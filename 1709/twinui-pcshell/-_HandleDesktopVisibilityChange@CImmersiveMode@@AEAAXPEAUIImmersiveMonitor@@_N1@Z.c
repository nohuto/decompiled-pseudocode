/*
 * XREFs of ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18003366C
 * Callers:
 *     ?OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1800324B0 (-OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18003308C (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1800334A4 (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180006C40 (WPP_SF_d.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002564C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     WPP_SF_l @ 0x180031754 (WPP_SF_l.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180031970 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1800338E4 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___ @ 0x18003430C (Windows--Internal--ComTaskPool--QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
  int v10; // esi
  unsigned __int64 v11; // r15
  char v12; // r13
  __int64 v13; // r14
  int v14; // edx
  char v15; // r14
  int CallbackArray; // eax
  struct IObjectArray *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct IObjectArray *v20; // rcx
  struct IObjectArray *v21[2]; // [rsp+20h] [rbp-38h] BYREF
  struct IObjectArray *v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+3Ch] [rbp-1Ch]
  int v25; // [rsp+40h] [rbp-18h]
  int v26; // [rsp+A0h] [rbp+48h] BYREF
  int v27; // [rsp+A8h] [rbp+50h] BYREF
  bool v28; // [rsp+B0h] [rbp+58h]
  char v29; // [rsp+B8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v21[1] = (struct IObjectArray *)-2LL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v27) >= 0 && v27 )
    (*(void (__fastcall **)(_QWORD, struct IImmersiveMonitor *))(**((_QWORD **)this + 44) + 56LL))(
      *((_QWORD *)this + 44),
      a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LOBYTE(v26) = 0;
  v8 = 0;
  v9 = *((_DWORD *)this + 100);
  LODWORD(v21[0]) = v9;
  v10 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 56) )
  {
    v12 = v28;
    do
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 55) + 8 * v11);
      if ( (unsigned int)SHIsSameObject(
                           *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v13,
                           (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2)
        && *(_BYTE *)(v13 + 12) != v12 )
      {
        LOBYTE(v26) = 1;
        v14 = *((_DWORD *)this + 86);
        *(_BYTE *)(v13 + 12) = v12;
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v13, v14);
      }
      if ( *(_BYTE *)(v13 + 12) )
        v8 = 1;
      else
        v10 = 1;
      ++v11;
    }
    while ( v11 < *((_QWORD *)this + 56) );
    v9 = (int)v21[0];
  }
  if ( v10 != v9 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_ec78d6d4df123bb2dcb1c9b30d08f526_Traceguids, v10);
    *((_DWORD *)this + 100) = v10;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 44) + 48LL))(
      *((_QWORD *)this + 44),
      (unsigned int)(*((_DWORD *)this + 86) == 1) + 1);
  }
  v15 = *((_BYTE *)this + 404);
  if ( v8 != v15 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, v8);
    *((_BYTE *)this + 404) = v8;
  }
  if ( (_BYTE)v26 || v29 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, a2, v28);
  if ( v8 != v15 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, 0LL, v8);
  if ( v10 != v9 )
  {
    v21[0] = 0LL;
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 33, v21);
    v17 = v21[0];
    if ( CallbackArray >= 0
      && ((int (__fastcall *)(struct IObjectArray *, int *))v21[0]->lpVtbl->GetCount)(v21[0], &v26) >= 0 )
    {
      if ( v26 )
      {
        v22 = v17;
        ((void (__fastcall *)(struct IObjectArray *))v17->lpVtbl->AddRef)(v17);
        v23 = v9;
        v24 = v10;
        v25 = v26;
        Windows::Internal::ComTaskPool::QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___(
          v19,
          v18,
          LODWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr),
          &v22);
        v20 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v20->lpVtbl->Release)(v20);
        }
      }
    }
    if ( v17 )
    {
      v21[0] = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v17->lpVtbl->Release)(v17);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
