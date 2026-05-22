/*
 * XREFs of ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180033D60 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AULegacyInputInfo@@K@Z @ 0x180033EE8 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AULegacyInputInfo@@K@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800351DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z @ 0x180035BD8 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAJPEAUInputInfo@@NGG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180035CCC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180036324 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOff(ControllerProcessor *this)
{
  unsigned int v2; // ebp
  unsigned int *v3; // r14
  _DWORD *v4; // rsi
  int updated; // edi
  __int64 v6; // rcx
  _BYTE v8[1744]; // [rsp+40h] [rbp-6F8h] BYREF

  ControllerProcessor::LiftPressedVirtualKeys(this, 0);
  v2 = 0;
  v3 = (unsigned int *)&unk_1800FAC24;
  v4 = (_DWORD *)((char *)this + 6900);
  *(_QWORD *)((char *)this + 1956) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
  do
  {
    if ( *v4 )
    {
      ControllerProcessor::BuildMouseInputInfo(this, v8, *v3);
      updated = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v8);
      if ( updated < 0 )
        goto LABEL_19;
    }
    ++v2;
    ++v4;
    v3 += 3;
  }
  while ( v2 < 5 );
  if ( *((_DWORD *)this + 719) )
    ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  v6 = *((_QWORD *)this + 861);
  if ( v6 )
  {
    *((_QWORD *)this + 861) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((_BYTE *)this + 5880) )
  {
    updated = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 611) + 56LL))(
                *((_QWORD *)this + 611),
                (char *)this + 4896);
    *((_BYTE *)this + 5880) = updated < 0;
  }
  else
  {
    updated = 0;
  }
  if ( updated < 0
    || (updated = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                    this,
                    (ControllerProcessor *)((char *)this + 160),
                    *((double *)this + 90),
                    0xD3u,
                    0xD4u,
                    1),
        updated < 0)
    || (updated = ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(
                    this,
                    (ControllerProcessor *)((char *)this + 160),
                    *((double *)this + 89),
                    0xD5u,
                    0xD6u,
                    1),
        updated < 0)
    || (updated = ControllerProcessor::UpdateAutoRepeatTimer(this), updated < 0)
    || (updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 239) + 96LL))(*((_QWORD *)this + 239)),
        updated < 0)
    || (updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 883) + 96LL))(*((_QWORD *)this + 883)),
        updated < 0)
    || (updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 884) + 96LL))(*((_QWORD *)this + 884)),
        updated < 0) )
  {
LABEL_19:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return (unsigned int)updated;
}
