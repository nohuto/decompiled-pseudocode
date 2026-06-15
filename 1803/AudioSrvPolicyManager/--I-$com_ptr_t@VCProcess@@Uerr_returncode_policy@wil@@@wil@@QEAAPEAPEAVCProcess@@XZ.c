/*
 * XREFs of ??I?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ @ 0x18000A800
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::operator&(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 32LL))(v1);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return a1;
}
