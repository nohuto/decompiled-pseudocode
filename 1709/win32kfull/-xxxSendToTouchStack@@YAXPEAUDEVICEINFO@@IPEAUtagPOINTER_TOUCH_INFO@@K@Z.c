/*
 * XREFs of ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01BD27C
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01BD134 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 * Callees:
 *     CreateTouchInputBuffer @ 0x1C01BE4DC (CreateTouchInputBuffer.c)
 */

void __fastcall xxxSendToTouchStack(struct DEVICEINFO *a1, unsigned int a2, struct tagPOINTER_TOUCH_INFO *a3, ULONG a4)
{
  unsigned int v4; // ebp
  int v6; // r14d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax

  *((_DWORD *)a1 + 64) = 0;
  v4 = 0;
  v6 = (int)a3;
  for ( *((_QWORD *)a1 + 33) = *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL); v4 < a2; v4 += 4 )
  {
    if ( v4 )
      CreateTouchInputBuffer((int)a1, a2, v6, v4, 0);
    else
      CreateTouchInputBuffer((int)a1, a2, v6, 0, a4);
    v10 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v9) + 848);
    v11 = *(_QWORD *)(v10 + 88);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    RIMInjectInput(
      v11,
      *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 848) + 96LL),
      0LL,
      *(_QWORD *)(*((_QWORD *)a1 + 57) + 24LL),
      *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL));
  }
}
