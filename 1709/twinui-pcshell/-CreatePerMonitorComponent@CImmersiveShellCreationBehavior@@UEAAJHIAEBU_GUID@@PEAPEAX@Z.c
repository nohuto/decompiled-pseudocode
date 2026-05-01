/*
 * XREFs of ?CreatePerMonitorComponent@CImmersiveShellCreationBehavior@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x1800DEFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800DE87C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     ?_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DECBC (-_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::CreatePerMonitorComponent(
        CImmersiveShellCreationBehavior *this,
        int a2,
        unsigned int a3,
        const struct _GUID *a4,
        void **a5)
{
  LPVOID *v5; // rbp
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  GUID **v11; // r8

  v5 = (LPVOID *)((char *)this - 40);
  v6 = a3;
  *a5 = 0LL;
  result = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 40));
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)v6 < 9 )
      {
        v11 = &off_1802B7BB0 + 3 * v6;
        return CImmersiveShellCreationBehavior::_CreateComponentWithSxs(
                 v5,
                 v10,
                 (const struct IMMERSIVE_SHELL_COMPONENT *)v11,
                 a4,
                 a5);
      }
    }
    else if ( (unsigned int)v6 < 2 )
    {
      v10 = 3 * v6;
      v11 = &off_1802B7B80 + 3 * v6;
      return CImmersiveShellCreationBehavior::_CreateComponentWithSxs(
               v5,
               v10,
               (const struct IMMERSIVE_SHELL_COMPONENT *)v11,
               a4,
               a5);
    }
    return 2147483659LL;
  }
  return result;
}
