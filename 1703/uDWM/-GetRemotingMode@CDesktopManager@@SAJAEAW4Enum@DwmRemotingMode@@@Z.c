/*
 * XREFs of ?GetRemotingMode@CDesktopManager@@SAJAEAW4Enum@DwmRemotingMode@@@Z @ 0x180016738
 * Callers:
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x1800166B4 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18002AAE0 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::GetRemotingMode(enum DwmRemotingMode::Enum *a1)
{
  unsigned int v2; // ebx
  __int64 (__fastcall ***v4)(_QWORD, __int64, char *); // rsi
  int v5; // eax
  int v6; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  *(_DWORD *)a1 = 0;
  if ( GetSystemMetrics(4096) )
  {
    v7 = 0;
    v8 = 0;
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64, char *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                                 + 7)
                                                                                              + 88LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7));
    v5 = (**v4)(v4, 1LL, &v7);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE0u);
    }
    else
    {
      v6 = (**v4)(v4, 2LL, &v8);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE1u);
      }
      else if ( v7 )
      {
        *(_DWORD *)a1 = 3;
      }
      else
      {
        *(_DWORD *)a1 = (v8 != 0) + 1;
      }
    }
  }
  return v2;
}
