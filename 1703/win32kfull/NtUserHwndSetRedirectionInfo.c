/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C01DBCB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GreHintDxUpdate @ 0x1C024E738 (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C024EBB4 (GreSetHwndPresentFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, int *a3, unsigned int a4)
{
  NTSTATUS v8; // esi
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 StyleWindow; // rax
  _QWORD *v17; // rbx
  int v18; // r8d
  _OWORD *v19; // r14
  int v20; // edx
  int v21; // ecx
  __int64 DC; // rdi
  __int64 v23; // rcx
  int v24; // ebx
  ULONG v25; // eax
  _OWORD v27[2]; // [rsp+50h] [rbp-58h] BYREF

  v8 = -1073741811;
  memset(v27, 0, sizeof(v27));
  v9 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v10 = ValidateHwnd(a1);
  v15 = v10;
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    v17 = (_QWORD *)StyleWindow;
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(StyleWindow + 82) & 0x3FFF) != 0x29D )
      {
        if ( a2 == 2 )
        {
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > W32UserProbeAddress )
                a3 = (int *)W32UserProbeAddress;
              v18 = *a3;
              LODWORD(v27[0]) = *a3;
              goto LABEL_21;
            }
            v8 = -1073741306;
          }
        }
        else
        {
          if ( a2 != 4 )
          {
            v8 = -1073741821;
            goto LABEL_33;
          }
          if ( a3 )
          {
            if ( a4 < 0x10 )
            {
              v8 = -1073741306;
              goto LABEL_33;
            }
            if ( a3 + 4 < a3 || (unsigned __int64)(a3 + 4) > W32UserProbeAddress )
              a3 = (int *)W32UserProbeAddress;
            v27[0] = *(_OWORD *)a3;
            v18 = v27[0];
LABEL_21:
            if ( a2 == 2 )
            {
              v8 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
            }
            else
            {
              if ( v18 || *(_QWORD *)((char *)v27 + 4) || HIDWORD(v27[0]) )
              {
                v19 = v27;
                if ( SDWORD2(v27[0]) < v18 || SHIDWORD(v27[0]) < SDWORD1(v27[0]) )
                  goto LABEL_34;
                if ( v15 != StyleWindow )
                {
                  v20 = *(_DWORD *)(v15 + 132) - *(_DWORD *)(StyleWindow + 132);
                  v21 = *(_DWORD *)(v15 + 128) - *(_DWORD *)(StyleWindow + 128);
                  LODWORD(v27[0]) = v21 + v18;
                  DWORD2(v27[0]) += v21;
                  HIDWORD(v27[0]) += v20;
                  DWORD1(v27[0]) += v20;
                }
              }
              else
              {
                v19 = 0LL;
              }
              DC = _GetDC(v15);
              v24 = GreHintDxUpdate(v23, *v17, DC, v19, -1073741811);
              _ReleaseDC(DC);
              if ( v24 )
                v8 = 0;
            }
          }
        }
      }
    }
  }
LABEL_33:
  if ( v8 < 0 )
  {
LABEL_34:
    v9 = 0;
    v25 = RtlNtStatusToDosError(v8);
    UserSetLastError(v25);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}
