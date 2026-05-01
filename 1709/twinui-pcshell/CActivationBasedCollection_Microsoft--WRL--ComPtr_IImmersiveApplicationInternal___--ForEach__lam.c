/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_040c5264cfde888b59927d935a6bda9c___ @ 0x180019368
 * Callers:
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18000A120 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_040c5264cfde888b59927d935a6bda9c___(
        __int64 a1,
        int *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rbp
  __int64 v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+94h] [rbp+1Ch]

  result = (__int64)&retaddr;
  v5 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    v14 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7);
    if ( (result & 1) != 0 )
    {
      v8 = (__int64 *)*((_QWORD *)a2 + 1);
      v9 = *v8;
      v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 384LL))(v7);
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, GUID *, __int64 *))(v9 + 88))(
                 v8,
                 v11,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 v10);
      if ( (int)result >= 0 )
      {
        v15 = *a2;
        v16 = 0;
        result = (*(__int64 (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)v7 + 456LL))(
                   v7,
                   v14,
                   &v15,
                   0LL);
      }
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return result;
}
