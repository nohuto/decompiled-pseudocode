/*
 * XREFs of ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800B53D8
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800B50E0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800B5270 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionProcessor::CallCallbackWithResult(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]

  v13 = -2LL;
  v11 = 0LL;
  v12 = 0;
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**(_QWORD **)(a1 + 48) + 24LL))(
         *(_QWORD *)(a1 + 48),
         &GUID_a464cb85_68af_4085_87c5_bbf363d89286,
         &v12);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)(a1 + 48) + 48LL))(
           *(_QWORD *)(a1 + 48),
           a2,
           v12,
           &v11);
    if ( v6 >= 0 )
    {
      v6 = (**v11)(v11, &GUID_a464cb85_68af_4085_87c5_bbf363d89286, &v10);
      if ( v6 >= 0 )
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, a3);
    }
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  }
  return (unsigned int)v6;
}
