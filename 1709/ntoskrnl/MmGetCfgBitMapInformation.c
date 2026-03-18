/*
 * XREFs of MmGetCfgBitMapInformation @ 0x14045FB34
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x14045F94C (PspPrepareSystemDllInitBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetCfgBitMapInformation(int a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8

  v2 = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( a1 )
  {
    v3 = v2[37];
    *a2 = v2[38];
  }
  else
  {
    v3 = v2[34];
    *a2 = v2[35];
  }
  return v3;
}
