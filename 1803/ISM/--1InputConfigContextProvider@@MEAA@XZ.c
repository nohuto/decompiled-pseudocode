/*
 * XREFs of ??1InputConfigContextProvider@@MEAA@XZ @ 0x180090304
 * Callers:
 *     ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x1800902C0 (--_EInputConfigContextProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ @ 0x18000F62C (--1-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@@Z @ 0x180090790 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@.c)
 *     ?_Tidy@?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x180090A30 (-_Tidy@-$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V-$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PA.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (char *)this + 224;
  InputConfigContextProvider::ClearConfigs(this, (char *)this + 224);
  InputConfigContextProvider::ClearConfigs(v3, (char *)this + 248);
  std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::_Tidy((char *)this + 248);
  std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::_Tidy(v2);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
    (__int64 *)this + 12,
    v4);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  SystemContextProvider::~SystemContextProvider(this);
}
