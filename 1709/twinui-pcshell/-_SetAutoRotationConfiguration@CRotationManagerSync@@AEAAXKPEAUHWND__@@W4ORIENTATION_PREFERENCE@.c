/*
 * XREFs of ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18003B314
 * Callers:
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18003AB00 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x18003ACDC (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18003B3E0 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetAutoRotationConfiguration(
        CRotationManagerSync *this,
        unsigned int a2,
        HWND a3,
        __int64 a4)
{
  bool v7; // zf
  PSRWLOCK v8; // rax

  if ( a2 == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[9].Ptr) )
  {
    if ( *((_DWORD *)this + 32) )
    {
      *((_DWORD *)this + 30) = a4;
    }
    else if ( (_DWORD)a4 != *((_DWORD *)this + 27) || !*((_BYTE *)this + 112) )
    {
      v7 = *((_BYTE *)this + 113) == 0;
      *((_DWORD *)this + 27) = a4;
      *((_BYTE *)this + 112) = 0;
      if ( v7 )
      {
        SetDisplayAutoRotationPreferences((ORIENTATION_PREFERENCE)a4);
        *((_BYTE *)this + 112) = 1;
      }
    }
  }
  if ( a2 && a2 != *(_DWORD *)((char *)this + (*((_DWORD *)this + 32) != 0 ? 0xC : 0) + 104) )
  {
    if ( !*((_DWORD *)this + 32) )
      CRotationManagerSync::_SetActiveProcessForRotation(this, a2);
    *(_DWORD *)((char *)this + (*((_DWORD *)this + 32) != 0 ? 0xC : 0) + 104) = a2;
  }
  if ( a3 )
  {
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    *((_QWORD *)this + 20) = a3;
    (*(void (__fastcall **)(PVOID, HWND, HWND, __int64))(*(_QWORD *)v8[14].Ptr + 24LL))(v8[14].Ptr, a3, a3, a4);
  }
}
