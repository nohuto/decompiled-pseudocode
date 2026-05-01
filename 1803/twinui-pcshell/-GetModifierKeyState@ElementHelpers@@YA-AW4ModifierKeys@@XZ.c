/*
 * XREFs of ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x180294AA0
 * Callers:
 *     ?_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x18028325C (-_OnKeyDown@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 *     ?_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z @ 0x1802832AC (-_OnKeyUp@CMultitaskingViewFrame@@AEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

__int64 ElementHelpers::GetModifierKeyState()
{
  unsigned int v0; // edi
  int *v1; // rbx

  v0 = 0;
  v1 = (int *)&unk_1803B2EA0;
  do
  {
    if ( GetKeyState(*v1) < 0 )
      v0 |= v1[1];
    v1 += 2;
  }
  while ( v1 != (int *)&unk_1803B2EC8 );
  return v0;
}
