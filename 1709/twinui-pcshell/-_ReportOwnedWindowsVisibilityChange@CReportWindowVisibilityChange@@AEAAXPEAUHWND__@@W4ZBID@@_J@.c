/*
 * XREFs of ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18002C38C
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C1EC (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18002C2E8 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(
        __int64 a1,
        LPARAM a2,
        int a3,
        __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rsi
  LPARAM lParam; // [rsp+38h] [rbp-40h] BYREF
  int v9; // [rsp+40h] [rbp-38h]
  LPVOID pv; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-28h]
  __int128 v12; // [rsp+58h] [rbp-20h]

  lParam = a2;
  v9 = a3;
  pv = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
         (__int64)&pv,
         0x14uLL) >= 0 )
    EnumWindows((WNDENUMPROC)CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc, (LPARAM)&lParam);
  if ( (a4 & 2) != 0 && *(_BYTE *)(a1 + 56) )
    a4 |= 4uLL;
  v6 = v11;
  for ( i = 0LL; i < v6; ++i )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr
                                                                   + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
      *((_QWORD *)pv + i),
      0LL,
      *(unsigned int *)(a1 + 60),
      a4);
  if ( pv )
    CoTaskMemFree(pv);
}
