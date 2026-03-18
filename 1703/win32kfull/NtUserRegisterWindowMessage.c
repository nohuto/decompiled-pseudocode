/*
 * XREFs of NtUserRegisterWindowMessage @ 0x1C00D9D10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(int *a1)
{
  int *v1; // r8
  unsigned int v2; // ebx
  int v3; // ecx
  _WORD *v4; // rdx
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r9
  _WORD *v8; // rax
  NTSTATUS v9; // ecx
  __int64 v10; // r8
  _BYTE v12[512]; // [rsp+80h] [rbp-218h] BYREF

  v1 = a1;
  v2 = 0;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v1 = (int *)W32UserProbeAddress;
  v3 = *v1;
  v4 = (_WORD *)*((_QWORD *)v1 + 1);
  if ( ((unsigned __int8)v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (unsigned __int64)v4 + (unsigned __int16)v3 + 2;
  if ( v5 >= W32UserProbeAddress
    || (unsigned __int16)v3 > (unsigned __int16)HIWORD(*v1)
    || (v3 & 1) != 0
    || v5 <= (unsigned __int64)v4 )
  {
    *W32UserProbeAddress = 0;
  }
  v6 = 2147483646LL;
  v7 = 256LL;
  v8 = v12;
  v9 = 0;
  v10 = 0LL;
  while ( v7 )
  {
    if ( !v6 || !*v4 )
      goto LABEL_17;
    *v8++ = *v4++;
    --v7;
    --v6;
    ++v10;
  }
  --v8;
  v9 = -2147483643;
LABEL_17:
  *v8 = 0;
  if ( v9 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v12, 0LL, 2LL);
  else
    UserSetLastStatus(v9, 1);
  return v2;
}
