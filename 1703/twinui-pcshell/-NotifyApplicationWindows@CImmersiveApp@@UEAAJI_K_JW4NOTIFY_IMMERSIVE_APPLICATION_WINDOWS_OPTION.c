/*
 * XREFs of ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x180051AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x18002A6F0 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::NotifyApplicationWindows(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v8; // ebx
  char v9; // di
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  HWND v13; // rax

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *(_QWORD *)(a1 + 312) == 0LL ? 0x8007139F : 0;
  if ( *(_QWORD *)(a1 + 312) )
  {
    v9 = 1;
    v10 = *(_QWORD *)(a1 + 312);
    v11 = 0LL;
    do
    {
      if ( !v9 )
        break;
      v9 = 1;
      if ( a5 != 1 )
      {
        v9 = 0;
        if ( (unsigned int)(a5 - 2) > 1 )
          continue;
      }
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * v11);
      v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
      CApplicationManagerUtility::NotifyWindow(v13, a2, a3, a4, a6 != 0);
      ++v11;
    }
    while ( v11 < v10 );
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v8;
}
