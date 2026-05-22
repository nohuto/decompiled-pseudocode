/*
 * XREFs of ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037990
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180039800 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process2DInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  if ( *((_BYTE *)this + 3877) )
  {
    *((_BYTE *)this + 3877) = 0;
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 32), a2);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 68) + 48LL))(
           *((_QWORD *)this + 68),
           a2);
}
