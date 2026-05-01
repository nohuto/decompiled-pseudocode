/*
 * XREFs of ?GetPerMonitorComponentCount@CImmersiveShellCreationBehavior@@UEAAJHPEAI@Z @ 0x1800DEF90
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800DE87C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::GetPerMonitorComponentCount(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int *a3)
{
  __int64 result; // rax

  *a3 = 0;
  result = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 40));
  if ( (int)result >= 0 )
    *a3 = a2 != 0 ? 9 : 2;
  return result;
}
