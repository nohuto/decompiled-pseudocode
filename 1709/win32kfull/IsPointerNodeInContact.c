/*
 * XREFs of IsPointerNodeInContact @ 0x1C01F6970
 * Callers:
 *     <none>
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall IsPointerNodeInContact(unsigned __int16 a1)
{
  struct tagINPUTPOINTERNODE *NodeById; // rax
  unsigned int v2; // r8d

  NodeById = FindNodeById(a1, 1, 1);
  if ( !NodeById || *((_DWORD *)NodeById + 9) != 2 )
    return 0;
  return v2;
}
