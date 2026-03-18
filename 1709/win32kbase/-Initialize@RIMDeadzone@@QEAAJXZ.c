/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C00970EC
 * Callers:
 *     RIMInitializeDeadzone @ 0x1C0096ED4 (RIMInitializeDeadzone.c)
 * Callees:
 *     ?_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C0097048 (-_InitializeLeftHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C0097144 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ApiSetGetUserHandedness @ 0x1C0097174 (ApiSetGetUserHandedness.c)
 *     ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x1C01153A0 (-_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ.c)
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
