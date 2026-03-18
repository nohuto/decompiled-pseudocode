/*
 * XREFs of NtUserPromotePointer @ 0x1C01EA5A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1C01BF748 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_15;
  v5 = a2 & 0xFFFFFF;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( v5 <= 0x10000
      || v5 > 0x10002 && (v5 <= 0x20000 || v5 > 0x20002 && (v5 <= 0x40000 || v5 > 0x40002 && v5 - 524289 > 1)) )
    {
      goto LABEL_15;
    }
  }
  else if ( a2 )
  {
LABEL_15:
    v7 = 0;
    UserSetLastError(87LL, v4);
    goto LABEL_16;
  }
  v7 = xxxPromotePointerToMouse(a1, a2);
  if ( !v7 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v6, v4);
  return v7;
}
