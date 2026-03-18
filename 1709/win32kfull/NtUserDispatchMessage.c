/*
 * XREFs of NtUserDispatchMessage @ 0x1C00A0FA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+58h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v10 = *a1;
  v11 = a1[1];
  v12 = a1[2];
  v2 = DWORD2(v10);
  v3 = 0LL;
  if ( (DWORD2(v10) & 0xFFFE0000) != 0 )
  {
    v9 = 87LL;
    goto LABEL_18;
  }
  if ( (_QWORD)v10
    && ((v4 = ValidateHwnd(v10)) != 0
     && (*(_BYTE *)(v4 + 58) & 4) != 0
     && (v2 = *(_QWORD *)(v4 + 16), *(_QWORD *)(v2 + 400) != *(_QWORD *)(gptiCurrent + 400LL))
     || ((unsigned int)IsPointerInputMessage(DWORD2(v10), DWORD2(v10)) && (_DWORD)v2 != 595
      || (_DWORD)v2 == 528 && (_WORD)v11 == 582)
     && *((_QWORD *)&v11 + 1) >= (unsigned __int64)MmSystemRangeStart)
    || ((unsigned int)v2 >= 0x400 ? (v5 = 0) : (v5 = ((unsigned __int16)MessageTable[(unsigned int)v2] >> 13) & 1), v5) )
  {
    v9 = 5LL;
LABEL_18:
    UserSetLastError(v9, v2);
    goto LABEL_13;
  }
  v3 = xxxDispatchMessage(&v10);
LABEL_13:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v3;
}
