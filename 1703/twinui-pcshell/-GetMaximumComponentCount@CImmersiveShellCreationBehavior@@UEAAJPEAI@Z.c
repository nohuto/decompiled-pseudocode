/*
 * XREFs of ?GetMaximumComponentCount@CImmersiveShellCreationBehavior@@UEAAJPEAI@Z @ 0x1800CAE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800CA92C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::GetMaximumComponentCount(
        CImmersiveShellCreationBehavior *this,
        unsigned int *a2)
{
  __int64 result; // rax

  *a2 = 0;
  result = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 24));
  if ( (int)result >= 0 )
    *a2 = 111;
  return result;
}
