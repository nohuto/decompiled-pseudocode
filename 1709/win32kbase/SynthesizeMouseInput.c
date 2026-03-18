/*
 * XREFs of SynthesizeMouseInput @ 0x1C0012330
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C012BE00 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ApiSetSendPTPAsMouse @ 0x1C013CD30 (ApiSetSendPTPAsMouse.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C001673C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  CMouseProcessor *v9; // r10
  int v10; // [rsp+38h] [rbp-31h] BYREF
  __int64 v11; // [rsp+40h] [rbp-29h]
  _QWORD v12[2]; // [rsp+48h] [rbp-21h] BYREF
  struct tagPOINT v13; // [rsp+58h] [rbp-11h] BYREF

  if ( (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018) )
  {
    v11 = a1;
    v12[0] = a3;
    v12[1] = a4;
    v10 = a1 != 0 ? 3 : 0;
    ((void (__fastcall *)(struct tagPOINT *, __int64, _QWORD *, _QWORD, int *, _QWORD))CMouseProcessor::MouseInputDataEx::MouseInputDataEx)(
      &v13,
      a2,
      v12,
      a5,
      &v10,
      0LL);
    CMouseProcessor::SynthesizeMouse(v9, (struct tagPOINT)&v13, 0LL);
  }
}
