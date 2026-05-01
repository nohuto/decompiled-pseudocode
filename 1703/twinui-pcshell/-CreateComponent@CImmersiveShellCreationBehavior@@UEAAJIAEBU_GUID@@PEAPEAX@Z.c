/*
 * XREFs of ?CreateComponent@CImmersiveShellCreationBehavior@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800CAE70
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800CA92C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     ?_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CAD30 (-_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  LPVOID *v4; // rsi
  __int64 v5; // rbx
  __int64 result; // rax

  *a4 = 0LL;
  v4 = (LPVOID *)((char *)this - 24);
  v5 = a2;
  result = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 24));
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)v5 >= 0x6F )
      return 2147483659LL;
    else
      return CImmersiveShellCreationBehavior::_CreateComponentWithSxs(
               v4,
               3 * v5,
               (const struct IMMERSIVE_SHELL_COMPONENT *)(&off_180242780 + 3 * v5),
               a3,
               a4);
  }
  return result;
}
