/*
 * XREFs of RegisterModernAppThreadForRawKeyboard @ 0x1C01B66C4
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C01EF3E0 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00C7368 (_RegisterRawInputDevices.c)
 */

__int64 __fastcall RegisterModernAppThreadForRawKeyboard(__int64 a1)
{
  int v1; // ebx
  __int64 v4; // rdx
  int v5; // eax
  _DWORD v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 1184);
  if ( (v1 & 0x200000) != 0 )
    return 1LL;
  if ( (unsigned int)HasHidTable(a1) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 784LL) + 100LL);
    if ( (v5 & 0x800) != 0 )
    {
      *(_DWORD *)(a1 + 1184) = v1 | 0x200000;
      return 1LL;
    }
    if ( (v5 & 0x10) != 0 )
    {
      UserSetLastError(85LL, v4);
      return 0LL;
    }
  }
  v7 = 0LL;
  v6[0] = 393217;
  v6[1] = 16944;
  if ( !(unsigned int)RegisterRawInputDevices((__int64)v6, 1u, 2u) )
    return 0LL;
  *(_DWORD *)(a1 + 1184) |= 0x200000u;
  return 1LL;
}
