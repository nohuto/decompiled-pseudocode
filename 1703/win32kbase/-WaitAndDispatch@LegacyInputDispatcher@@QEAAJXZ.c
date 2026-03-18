/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C006E340
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E700 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS result; // eax
  unsigned int v3; // edx

  while ( 1 )
  {
    if ( (gdwMitConfig & 2) != 0 && WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (gdwUpdateKeyboard & 7) != 0 )
      CKeyboardSensor::UpdateKeyboardLEDs((CKeyboardSensor *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
    result = KeWaitForMultipleObjects(
               *((_DWORD *)this + 10),
               *((PVOID **)this + 1),
               WaitAny,
               WrUserRequest,
               *((_BYTE *)this + 44),
               *((_BYTE *)this + 45),
               0LL,
               *((PKWAIT_BLOCK *)this + 2));
    if ( result < 0 )
      break;
    if ( (unsigned int)result >= *((_DWORD *)this + 10) )
      break;
    v3 = *((_DWORD *)this + 8);
    if ( result < v3 || v3 == 64 )
      break;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 3) + 16LL * (result - v3)))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * result),
      *(_QWORD *)(*((_QWORD *)this + 3) + 16LL * (result - v3) + 8));
  }
  return result;
}
