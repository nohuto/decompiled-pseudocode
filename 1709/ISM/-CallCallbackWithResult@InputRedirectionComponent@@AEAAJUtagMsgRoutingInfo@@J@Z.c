/*
 * XREFs of ?CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800A7674
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800A73B0 (-EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800A74F0 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionComponent::CallCallbackWithResult(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h]

  v16 = -2LL;
  v14 = 0LL;
  v15 = 0;
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**(_QWORD **)(a1 + 48) + 24LL))(
         *(_QWORD *)(a1 + 48),
         &GUID_a464cb85_68af_4085_87c5_bbf363d89286,
         &v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v9 = 406;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)(a1 + 48) + 48LL))(
         *(_QWORD *)(a1 + 48),
         a2,
         v15,
         &v14);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v9 = 411;
    goto LABEL_13;
  }
  v6 = (**v14)(v14, &GUID_a464cb85_68af_4085_87c5_bbf363d89286, &v13);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v9 = 415;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, a3);
  v8 = v6;
  if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 417;
LABEL_13:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v9, v6);
  }
LABEL_14:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
  }
  return v8;
}
