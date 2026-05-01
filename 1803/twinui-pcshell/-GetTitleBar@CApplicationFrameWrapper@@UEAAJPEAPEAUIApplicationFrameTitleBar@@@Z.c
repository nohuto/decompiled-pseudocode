/*
 * XREFs of ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180016A30
 * Callers:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x180018490 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C6D0 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18003C950 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetTitleBar(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameTitleBar **a2)
{
  struct IApplicationFrameTitleBar *v4; // rcx
  __int64 result; // rax

  v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationFrameTitleBar *)*((_QWORD *)this + 16);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
