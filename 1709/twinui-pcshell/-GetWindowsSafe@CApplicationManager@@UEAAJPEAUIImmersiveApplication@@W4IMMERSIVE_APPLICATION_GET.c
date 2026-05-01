/*
 * XREFs of ?GetWindowsSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18000F130
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetWindowsSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rsi
  __int64 (__fastcall **v9)(_QWORD, GUID *, __int64); // rbx
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rcx

  v8 = a5;
  *(_QWORD *)a5 = 0LL;
  a5 = 0LL;
  v9 = *a2;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&a5);
  v11 = (*v9)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v10);
  if ( v11 >= 0 )
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a5 + 352LL))(a5, a3, a4, v8);
  v12 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v11;
}
