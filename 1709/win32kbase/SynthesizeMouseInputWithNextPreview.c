/*
 * XREFs of SynthesizeMouseInputWithNextPreview @ 0x1C012E480
 * Callers:
 *     <none>
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0013B30 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C001673C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SynthesizeMouseInputWithNextPreview(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct _MOUSE_INPUT_DATA *a6)
{
  CMouseProcessor *v10; // r10
  __int128 v11; // [rsp+38h] [rbp-39h] BYREF
  __int128 v12; // [rsp+48h] [rbp-29h] BYREF
  struct tagPOINT v13; // [rsp+58h] [rbp-19h] BYREF

  if ( (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018) )
  {
    *((_QWORD *)&v11 + 1) = a1;
    *(_QWORD *)&v12 = a3;
    *((_QWORD *)&v12 + 1) = a4;
    LODWORD(v11) = a1 != 0 ? 3 : 0;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v13, a2, &v12, a5, &v11, 0LL);
    CMouseProcessor::SynthesizeMouse(v10, (struct tagPOINT)&v13, a6);
  }
}
