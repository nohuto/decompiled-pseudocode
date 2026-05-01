/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CImmersiveApp@@UEAAJUtagSIZE@@0@Z @ 0x180053430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::SetSizeConstraintOverridesPhysical(
        CImmersiveApp *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int64 result; // rax

  *(struct tagSIZE *)((char *)this + 644) = a2;
  result = 0LL;
  *(struct tagSIZE *)((char *)this + 652) = a3;
  return result;
}
