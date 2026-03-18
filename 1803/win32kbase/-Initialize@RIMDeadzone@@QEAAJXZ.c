/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C0105DD4
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C00ECF30 (RIMInitializeDeadzone.c)
 * Callees:
 *     ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01062B0 (-_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ.c)
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0106428 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01064D4 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ApiSetGetUserHandedness @ 0x1C0140B10 (ApiSetGetUserHandedness.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this)
{
  int UserHandedness; // eax
  int v3; // edi

  *((_DWORD *)this + 2) = 1;
  UserHandedness = ApiSetGetUserHandedness();
  ++*((_DWORD *)this + 1);
  v3 = UserHandedness;
  if ( UserHandedness != *(_DWORD *)this )
    RIMDeadzone::_ClearDeadzoneAreas(this);
  *((_DWORD *)this + 10) = 1;
  if ( v3 == 1 )
    return RIMDeadzone::_InitializeRightHandedDeadzone(this);
  else
    return RIMDeadzone::_InitializeLeftHandedDeadzone(this);
}
