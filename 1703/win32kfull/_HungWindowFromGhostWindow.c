/*
 * XREFs of _HungWindowFromGhostWindow @ 0x1C003C134
 * Callers:
 *     GetMonitorMaxArea @ 0x1C003C008 (GetMonitorMaxArea.c)
 *     NtUserHungWindowFromGhostWindow @ 0x1C0139450 (NtUserHungWindowFromGhostWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall HungWindowFromGhostWindow(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rcx
  __int64 Prop; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rax

  v1 = 0LL;
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x2AA && !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    Prop = GetProp(v3, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    if ( Prop || (Prop = GetProp(v7, *(unsigned __int16 *)(gpsi + 1362LL), v6)) != 0 )
    {
      LOBYTE(v5) = v6;
      v8 = HMValidateHandleNoSecure(Prop, v5);
      v1 = v8;
      if ( v8 && (unsigned int)IsWindowBeingDestroyed(v8) )
        return 0LL;
    }
  }
  return v1;
}
