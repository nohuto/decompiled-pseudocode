/*
 * XREFs of ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01B8018
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01B7ED0 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 * Callees:
 *     CreateTouchInputBuffer @ 0x1C01B9BD0 (CreateTouchInputBuffer.c)
 */

void __fastcall xxxSendToTouchStack(struct DEVICEINFO *a1, unsigned int a2, struct tagPOINTER_TOUCH_INFO *a3, ULONG a4)
{
  unsigned int v4; // ebp
  int v6; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
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
    v11 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v10, v9) + 840);
    v12 = *(_QWORD *)(v11 + 80);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v13);
    RIMInjectInput(
      v12,
      *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 840) + 88LL),
      0LL,
      *(_QWORD *)(*((_QWORD *)a1 + 57) + 24LL),
      *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL));
  }
}
