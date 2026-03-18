/*
 * XREFs of NtUserIsTouchWindow @ 0x1C01E8A80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

_BOOL8 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rdx
  ULONG64 v6; // rcx
  BOOL v7; // ebx
  int Prop; // eax

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    Prop = GetProp(v4, gatomTouchFlags, 1);
    v6 = Prop & 0x10000;
    v7 = (Prop & 0x10000) != 0;
    if ( (_DWORD)v6 && a2 )
    {
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
