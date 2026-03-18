/*
 * XREFs of NtUserLoadKeyboardLayoutEx @ 0x1C00E95B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0071BA0 (xxxSafeLoadKeyboardLayoutEx.c)
 *     RtlStringCchCopyNW @ 0x1C008BE1C (RtlStringCchCopyNW.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     SetLastNtError @ 0x1C013DE08 (SetLastNtError.c)
 */

HKL __fastcall NtUserLoadKeyboardLayoutEx(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HKL a5,
        ULONG64 a6,
        unsigned int a7,
        unsigned int a8)
{
  _OWORD *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // r12d
  ULONG64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  HKL KeyboardLayout; // rbx
  struct tagWINDOWSTATION *ProcessWindowStation; // rsi
  int v19; // ecx
  const wchar_t *v20; // r8
  ULONG64 v21; // rdx
  _OWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _OWORD *v25; // rax
  _OWORD *v26; // rcx
  _BYTE v28[4]; // [rsp+50h] [rbp-6C8h] BYREF
  int v29; // [rsp+54h] [rbp-6C4h]
  unsigned int v30; // [rsp+58h] [rbp-6C0h]
  NTSTATUS v31; // [rsp+68h] [rbp-6B0h]
  HKL v32; // [rsp+70h] [rbp-6A8h]
  __int64 v33; // [rsp+78h] [rbp-6A0h]
  int v34; // [rsp+88h] [rbp-690h]
  const wchar_t *v35; // [rsp+90h] [rbp-688h]
  _BYTE v36[792]; // [rsp+98h] [rbp-680h] BYREF
  _BYTE v37[784]; // [rsp+3B0h] [rbp-368h] BYREF
  wchar_t pszDest[12]; // [rsp+6C0h] [rbp-58h] BYREF

  v8 = (_OWORD *)a4;
  v9 = a3;
  v10 = a2;
  v32 = a5;
  v12 = a6;
  v30 = a7;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v28, a2, a3, a4);
  if ( (a8 & 0x1F00FC60) != 0 )
  {
    UserSetLastError(1004);
    KeyboardLayout = 0LL;
  }
  else
  {
    memset(v37, 0, sizeof(v37));
    ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
    if ( a6 >= MmUserProbeAddress )
      v12 = MmUserProbeAddress;
    v19 = *(_DWORD *)v12;
    v29 = v19;
    v34 = v19;
    v20 = *(const wchar_t **)(v12 + 8);
    v35 = v20;
    if ( ((unsigned __int8)v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (ULONG64)v20 + (unsigned __int16)v19 + 2;
    if ( v21 >= MmUserProbeAddress
      || (unsigned __int16)v19 > HIWORD(v29)
      || (v19 & 1) != 0
      || v21 <= (unsigned __int64)v20 )
    {
      KeyboardLayout = 0LL;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      KeyboardLayout = 0LL;
    }
    v31 = RtlStringCchCopyNW(pszDest, 9uLL, v20, (unsigned __int64)(unsigned __int16)v19 >> 1);
    if ( v31 >= 0 )
    {
      if ( v8 )
      {
        if ( v8 + 49 < v8 || (unsigned __int64)(v8 + 49) > MmUserProbeAddress )
          v8 = (_OWORD *)MmUserProbeAddress;
        v22 = v36;
        v23 = 6LL;
        v24 = 6LL;
        do
        {
          *v22 = *v8;
          v22[1] = v8[1];
          v22[2] = v8[2];
          v22[3] = v8[3];
          v22[4] = v8[4];
          v22[5] = v8[5];
          v22[6] = v8[6];
          v22 += 8;
          *(v22 - 1) = v8[7];
          v8 += 8;
          --v24;
        }
        while ( v24 );
        *v22 = *v8;
        v25 = v37;
        v26 = v36;
        do
        {
          *v25 = *v26;
          v25[1] = v26[1];
          v25[2] = v26[2];
          v25[3] = v26[3];
          v25[4] = v26[4];
          v25[5] = v26[5];
          v25[6] = v26[6];
          v25 += 8;
          *(v25 - 1) = v26[7];
          v26 += 8;
          --v23;
        }
        while ( v23 );
        *v25 = *v26;
      }
      KeyboardLayout = xxxSafeLoadKeyboardLayoutEx(
                         ProcessWindowStation,
                         a1,
                         v32,
                         v10,
                         v9,
                         (struct tagKBDTABLE_MULT_INTERNAL *)v37,
                         pszDest,
                         v30,
                         a8);
    }
    else
    {
      v33 = 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return KeyboardLayout;
}
