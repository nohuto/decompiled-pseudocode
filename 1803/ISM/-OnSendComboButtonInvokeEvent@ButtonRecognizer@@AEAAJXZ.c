/*
 * XREFs of ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1800B76AC
 * Callers:
 *     _lambda_c88a0564d6fae1946d42cf268bfdb624_::_lambda_invoker_cdecl_ @ 0x1800B7320 (_lambda_c88a0564d6fae1946d42cf268bfdb624_--_lambda_invoker_cdecl_.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1800B7B64 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::OnSendComboButtonInvokeEvent(ButtonRecognizer *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  __int16 v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 20);
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, (char *)this + 112, &v8);
  if ( v3 >= 0 )
  {
    v4 = *((_QWORD *)this + 24);
    v7 = *((_DWORD *)this + 18);
    v9 = v8;
    v6 = 0;
    v3 = CoreUICallSend(v4, &v9, 1LL, 1LL, v6, &unk_1801004FF, v7);
    if ( v3 >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 144LL))(*((_QWORD *)this + 20), v8);
  }
  return (unsigned int)v3;
}
