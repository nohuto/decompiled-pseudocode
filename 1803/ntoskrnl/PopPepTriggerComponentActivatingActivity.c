/*
 * XREFs of PopPepTriggerComponentActivatingActivity @ 0x140079A10
 * Callers:
 *     <none>
 * Callees:
 *     PopPepUpdateIdleState @ 0x140079874 (PopPepUpdateIdleState.c)
 *     PopPepTryPowerUpComponent @ 0x140079A78 (PopPepTryPowerUpComponent.c)
 */

__int64 __fastcall PopPepTriggerComponentActivatingActivity(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax

  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 128);
    if ( v4 >= MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 136) )
      v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 136);
    *(_QWORD *)(a2 + 120) = v4;
    *(_DWORD *)(a2 + 152) = 0;
    PopPepTryPowerUpComponent();
    return PopPepUpdateIdleState(a1, a2, 1);
  }
  return result;
}
