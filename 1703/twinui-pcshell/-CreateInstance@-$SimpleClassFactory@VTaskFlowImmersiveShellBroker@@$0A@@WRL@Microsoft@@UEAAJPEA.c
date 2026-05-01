/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D5250
 * Callers:
 *     <none>
 * Callees:
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1800D33CC (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1800D3674 (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<TaskFlowImmersiveShellBroker,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  TaskFlowImmersiveShellBroker *v7; // rax
  TaskFlowImmersiveShellBroker *v8; // rdi
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD *); // rcx
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v11 = 0LL;
    v7 = (TaskFlowImmersiveShellBroker *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v8 = TaskFlowImmersiveShellBroker::TaskFlowImmersiveShellBroker(v7);
      v6 = TaskFlowImmersiveShellBroker::RuntimeClassInitialize(v8);
      if ( v6 >= 0 )
      {
        v6 = (**(__int64 (__fastcall ***)(TaskFlowImmersiveShellBroker *, GUID *, _QWORD))v8)(
               v8,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v11);
        (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      else if ( v8 )
      {
        (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v6 >= 0 )
        v6 = (**v11)(v11, a3, a4);
    }
    else
    {
      v6 = -2147024882;
    }
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v9)[2])(v9);
    }
  }
  return (unsigned int)v6;
}
