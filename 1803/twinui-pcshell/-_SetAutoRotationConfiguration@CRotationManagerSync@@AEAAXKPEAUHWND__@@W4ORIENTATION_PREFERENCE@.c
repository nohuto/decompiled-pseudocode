/*
 * XREFs of ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18000877C
 * Callers:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x1800085E4 (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180008AB0 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800086FC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetAutoRotationConfiguration(
        CRotationManagerSync *this,
        unsigned int a2,
        HWND a3,
        __int64 a4)
{
  int v7; // edx
  bool v8; // zf
  PSRWLOCK v9; // rax

  if ( a2 == HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
  {
    if ( *((_DWORD *)this + 30) )
    {
      *((_DWORD *)this + 28) = a4;
    }
    else if ( (_DWORD)a4 != *((_DWORD *)this + 25) || !*((_BYTE *)this + 104) )
    {
      v8 = *((_BYTE *)this + 105) == 0;
      *((_DWORD *)this + 25) = a4;
      *((_BYTE *)this + 104) = 0;
      if ( v8 )
      {
        SetDisplayAutoRotationPreferences((ORIENTATION_PREFERENCE)a4);
        *((_BYTE *)this + 104) = 1;
      }
    }
  }
  if ( a2 )
  {
    v7 = *((_DWORD *)this + 30);
    if ( a2 != *(_DWORD *)((char *)this + (v7 != 0 ? 0xC : 0) + 96) )
    {
      if ( !v7 )
      {
        CRotationManagerSync::_SetActiveProcessForRotation(this, a2);
        v7 = *((_DWORD *)this + 30);
      }
      *(_DWORD *)((char *)this + (v7 != 0 ? 0xC : 0) + 96) = a2;
    }
  }
  if ( a3 )
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    *((_QWORD *)this + 19) = a3;
    (*(void (__fastcall **)(PVOID, HWND, HWND, __int64))(*(_QWORD *)v9[16].Ptr + 24LL))(v9[16].Ptr, a3, a3, a4);
  }
}
