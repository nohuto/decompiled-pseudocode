/*
 * XREFs of GenerateMouseMove @ 0x1C0013AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00140EC (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GenerateMouseMove(unsigned int a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( result )
    return CMouseProcessor::MoveMouseWindowManagement(result, a1);
  return result;
}
