/*
 * XREFs of SynthesizeMouseInput @ 0x1C0084220
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C012C6D0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ApiSetSendPTPAsMouse @ 0x1C013D860 (ApiSetSendPTPAsMouse.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z @ 0x1C00476F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@K@Z @ 0x1C0080CE4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *v9; // r10
  __int128 v10; // [rsp+38h] [rbp-31h] BYREF
  __int128 v11; // [rsp+48h] [rbp-21h] BYREF
  struct tagPOINT v12; // [rsp+58h] [rbp-11h] BYREF

  if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018) )
  {
    *((_QWORD *)&v10 + 1) = a1;
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    LODWORD(v10) = a1 != 0 ? 3 : 0;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v12, a2, &v11, a5, &v10, 0);
    CMouseProcessor::SynthesizeMouse(v9, (struct tagPOINT)&v12);
  }
}
