/*
 * XREFs of ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0133FBC
 * Callers:
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0064870 (CaptureLogicalCursorPosToQMouseMove.c)
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0039E64 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 */

void __fastcall CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // xmm0_8
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a2 + 13);
  if ( v3 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 416LL) + 280LL);
    CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)&v6, v4);
    v5 = v6;
  }
  else
  {
    v5 = *(_QWORD *)((char *)this + 100);
    v4 = *((_DWORD *)this + 27);
  }
  *((_QWORD *)a2 + 23) = v5;
  *((_DWORD *)a2 + 48) = v4;
}
