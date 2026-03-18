/*
 * XREFs of NtUserRegisterWindowMessage @ 0x1C00E0610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRegisterWindowMessage(ULONG64 a1)
{
  ULONG64 v1; // r8
  int v2; // ecx
  _WORD *v3; // rdx
  ULONG64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // r9
  _WORD *v8; // rax
  NTSTATUS v9; // ecx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-278h]
  __int64 v13; // [rsp+78h] [rbp-220h]
  _BYTE v14[512]; // [rsp+80h] [rbp-218h] BYREF

  v1 = a1;
  if ( a1 >= MmUserProbeAddress )
    v1 = MmUserProbeAddress;
  v2 = *(_DWORD *)v1;
  v12 = *(_DWORD *)v1;
  v3 = *(_WORD **)(v1 + 8);
  HIWORD(v13) = HIWORD(v3);
  if ( ((unsigned __int8)v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (ULONG64)v3 + (unsigned __int16)v2 + 2;
  if ( v4 >= MmUserProbeAddress || (unsigned __int16)v2 > HIWORD(v12) || (v2 & 1) != 0 || v4 <= (unsigned __int64)v3 )
  {
    v5 = 0;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  else
  {
    v5 = 0;
  }
  v6 = 2147483646LL;
  v7 = 256LL;
  v8 = v14;
  v9 = 0;
  v10 = 0LL;
  while ( v7 )
  {
    if ( !v6 || !*v3 )
      goto LABEL_18;
    *v8++ = *v3++;
    --v7;
    --v6;
    ++v10;
  }
  --v8;
  v9 = -2147483643;
LABEL_18:
  *v8 = 0;
  if ( v9 >= 0 )
    return (unsigned __int16)UserAddAtomEx(v14, 0LL, 2LL);
  else
    UserSetLastStatus(v9, 1);
  return v5;
}
