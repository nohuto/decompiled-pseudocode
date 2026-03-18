/*
 * XREFs of ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01929C8
 * Callers:
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01930A0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C01933A4 (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C019350C (TdrBugcheckOnTimeout.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TdrGetDbgOwnerTag(const struct _TDR_RECOVERY_CONTEXT *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  if ( !a1 )
    return -1LL;
  result = *((_QWORD *)a1 + 13);
  if ( !result )
  {
    v2 = *((_QWORD *)a1 + 4);
    if ( !v2 )
      return -1LL;
    result = *(_QWORD *)(v2 + 456);
    if ( !result )
    {
      result = *(_QWORD *)(v2 + 312);
      if ( !result )
        return -1LL;
    }
  }
  return result;
}
