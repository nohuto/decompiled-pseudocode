/*
 * XREFs of ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x180031C94
 * Callers:
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180031DA8 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x180069F60 (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InjectionDevice::InjectionDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  memset_0((void *)(a1 + 8), 0, 0x3D8uLL);
  *(_DWORD *)(a1 + 16) = 984;
  *(_DWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  result = a1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_BYTE *)(a1 + 992) = 0;
  return result;
}
