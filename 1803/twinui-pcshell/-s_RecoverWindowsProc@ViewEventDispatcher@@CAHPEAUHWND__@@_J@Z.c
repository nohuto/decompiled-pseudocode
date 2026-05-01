/*
 * XREFs of ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x1801D0FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x1801CFF2C (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 *     ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x1801E21C4 (-GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::s_RecoverWindowsProc(HWND a1, _QWORD *a2)
{
  HWND v3; // rbx
  __int64 ModernAppWindow; // rsi
  signed int LastError; // eax
  bool v6; // sf
  const unsigned __int16 *v7; // rdx
  unsigned int PropW; // esi
  unsigned int PropertyDirectlyFromWindow; // eax
  void *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v3 = a1;
  if ( (unsigned int)IsShellManagedWindow(a1) && IsWindowVisible(v3) )
  {
    SetLastError(0);
    ModernAppWindow = GetModernAppWindow(v3);
    LastError = GetLastError();
    v6 = LastError < 0;
    if ( LastError > 0 )
      v6 = 1;
    if ( !v6 )
      v3 = (HWND)ModernAppWindow;
    if ( v3 )
    {
      PropW = (unsigned int)GetPropW(v3, L"Microsoft.Windows.WindowFactory.ViewId");
      if ( PropW )
      {
        PropertyDirectlyFromWindow = LightweightPropertySet::GetPropertyDirectlyFromWindow(v3, v7);
        if ( PropertyDirectlyFromWindow )
        {
          v11 = a2[1];
          *(_QWORD *)&v14 = v3;
          DWORD2(v14) = PropW;
          v15 = PropertyDirectlyFromWindow;
          if ( v11 != a2[3]
            || (int)CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                      (__int64)a2,
                      v11 + 1,
                      v10) >= 0 )
          {
            ++a2[1];
            v12 = *a2 + 8 * (3LL * a2[1] - 3);
            if ( v12 )
            {
              *(_OWORD *)v12 = v14;
              *(_QWORD *)(v12 + 16) = v15;
            }
          }
        }
      }
    }
  }
  return 1LL;
}
