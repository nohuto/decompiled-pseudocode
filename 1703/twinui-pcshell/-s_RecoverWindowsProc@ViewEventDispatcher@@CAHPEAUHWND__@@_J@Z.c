/*
 * XREFs of ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x1800F9C70
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForView@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForView@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForView@@@@@@QEAAJ_K@Z @ 0x1800FAF64 (-EnsureCapacity@-$CTSimpleArray@URecoveredWindowForView@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecove.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall ViewEventDispatcher::s_RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  HWND v3; // rsi
  __int64 ModernAppWindow; // rbx
  signed int LastError; // eax
  signed int v6; // ecx
  unsigned int PropW; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-238h]
  __int64 v13; // [rsp+30h] [rbp-228h]
  WCHAR String[256]; // [rsp+40h] [rbp-218h] BYREF

  v3 = a1;
  if ( (unsigned int)IsShellManagedWindow(a1) && IsWindowVisible(v3) )
  {
    SetLastError(0);
    ModernAppWindow = GetModernAppWindow(v3);
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      v3 = (HWND)ModernAppWindow;
    if ( v3 )
    {
      PropW = (unsigned int)GetPropW(v3, L"Microsoft.Windows.WindowFactory.ViewId");
      if ( PropW )
      {
        _o_wcscpy_s(String, 256LL, L"LightweightProperty_");
        _o_wcscat_s(String, 256LL, L"ExperienceId");
        v8 = (unsigned int)GetPropW(v3, String);
        if ( v8 )
        {
          v9 = a2[1];
          *(_QWORD *)&v12 = v3;
          DWORD2(v12) = PropW;
          v13 = v8;
          if ( v9 != a2[3]
            || (int)CTSimpleArray<RecoveredWindowForView,4294967294,CTPolicyCoTaskMem<RecoveredWindowForView>,CSimpleArrayStandardCompareHelper<RecoveredWindowForView>,CSimpleArrayStandardMergeHelper<RecoveredWindowForView>>::EnsureCapacity(
                      a2,
                      v9 + 1) >= 0 )
          {
            ++a2[1];
            v10 = *a2 + 8 * (3LL * a2[1] - 3);
            if ( v10 )
            {
              *(_OWORD *)v10 = v12;
              *(_QWORD *)(v10 + 16) = v13;
            }
          }
        }
      }
    }
  }
  return 1LL;
}
