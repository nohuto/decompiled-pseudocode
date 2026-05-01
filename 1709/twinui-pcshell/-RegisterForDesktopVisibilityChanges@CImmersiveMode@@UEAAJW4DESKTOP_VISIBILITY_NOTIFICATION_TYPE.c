/*
 * XREFs of ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180032230
 * Callers:
 *     <none>
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025DC4 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     ?Add@?$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@@@QEAAJAEBQEAVCDesktopVisibilityChangeSource@CImmersiveMode@@PEA_K@Z @ 0x180033F9C (-Add@-$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V-$CTPolicyLo.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::RegisterForDesktopVisibilityChanges(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  signed int v10; // edi
  unsigned int v11; // esi
  _DWORD *v13; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0;
  v8 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v13 = v8;
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = a2;
  }
  else
  {
    v9 = 0LL;
  }
  v13 = v9;
  v10 = v9 == 0LL ? 0x8007000E : 0;
  if ( v9 )
  {
    *v9 = 0;
    v10 = GlobalInterfaceTable::s_Retrieve();
    if ( v10 >= 0 )
      v10 = ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, __int64, GUID *, _DWORD *))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RegisterInterfaceInGlobal)(
              GlobalInterfaceTable::s_pGlobalInterfaceTable,
              a3,
              &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
              v9);
    if ( v10 >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v10 = CTSimpleArray<CImmersiveMode::CDesktopVisibilityChangeSource *,4294967294,CTPolicyLocalMem<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>>::Add(
              a1 + 256,
              &v13);
      if ( v10 >= 0 )
      {
        *a4 = *v9;
        v9 = 0LL;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  if ( v9 )
  {
    v11 = *v9;
    if ( *v9 && (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        v11);
    operator delete(v9);
  }
  return (unsigned int)v10;
}
