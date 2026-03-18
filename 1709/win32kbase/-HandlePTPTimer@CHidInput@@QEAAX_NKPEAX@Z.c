/*
 * XREFs of ?HandlePTPTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C012BD54
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012AD40 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::HandlePTPTimer(CHidInput *this, char a2, int a3, void *a4)
{
  _QWORD *DeviceObject; // rbx
  void *v6; // r10
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  DeviceObject = WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v6 = (void *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + 55);
  if ( a2 )
  {
    ZwCancelTimer(*((HANDLE *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + 55), 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000LL * a3;
    ZwSetTimer(v6, &DueTime, 0LL, 0LL, 0, 0, 0LL);
    DeviceObject[121] = a4;
  }
}
