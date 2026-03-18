/*
 * XREFs of RIMGetMaxContactCountNoButton @ 0x1C0107328
 * Callers:
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C0107EFC (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     rimFindOrCreateActiveContact @ 0x1C0111DBC (rimFindOrCreateActiveContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetMaxContactCountNoButton(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 680);
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return (unsigned int)(result - 1);
  return result;
}
