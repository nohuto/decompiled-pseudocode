/*
 * XREFs of NtUserDispatchMessage @ 0x1C00CC2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+58h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (__int128 *)W32UserProbeAddress;
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  v2 = DWORD2(v12);
  v3 = 0LL;
  if ( (DWORD2(v12) & 0xFFFE0000) != 0 )
  {
    v4 = 87LL;
  }
  else
  {
    if ( (!(_QWORD)v12
       || ((v9 = ValidateHwnd(v12)) == 0
        || (*(_BYTE *)(v9 + 58) & 4) == 0
        || *(_QWORD *)(*(_QWORD *)(v9 + 16) + 376LL) == *(_QWORD *)(gptiCurrent + 376LL))
       && ((!(unsigned int)IsPointerInputMessage(DWORD2(v12)) || v2 == 595) && (v2 != 528 || (_WORD)v13 != 582)
        || *((_QWORD *)&v13 + 1) < (unsigned __int64)MmSystemRangeStart))
      && (v2 >= 0x400 || !(((unsigned __int16)MessageTable[v2] >> 13) & 1)) )
    {
      v3 = xxxDispatchMessage(&v12);
      goto LABEL_21;
    }
    v4 = 5LL;
  }
  UserSetLastError(v4);
LABEL_21:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v3;
}
