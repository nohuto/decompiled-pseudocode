/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C000769C
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C00074E8 (RIMInitializeDeadzone.c)
 * Callees:
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C00075F8 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ApiSetGetUserHandedness @ 0x1C0007724 (ApiSetGetUserHandedness.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0116830 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this)
{
  int UserHandedness; // eax
  int v3; // edi

  *((_DWORD *)this + 2) = 1;
  UserHandedness = ApiSetGetUserHandedness();
  ++*((_DWORD *)this + 1);
  v3 = UserHandedness;
  if ( *(_DWORD *)this && UserHandedness != *(_DWORD *)this )
    RIMDeadzone::Release(this);
  *((_DWORD *)this + 10) = 1;
  if ( (v3 & 0xFFFFFFFD) != 0 )
    return RIMDeadzone::_InitializeLeftHandedDeadzone(this);
  else
    return RIMDeadzone::_InitializeRightHandedDeadzone(this);
}
