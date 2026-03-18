/*
 * XREFs of ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1800C0D08
 * Callers:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800749A8 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MilWerRegisterMemoryBlock(const void *a1, unsigned int a2)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  if ( ModuleHandleW )
  {
    ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
    if ( ProcAddress )
      ((void (__fastcall *)(const void *, _QWORD))ProcAddress)(a1, a2);
  }
}
