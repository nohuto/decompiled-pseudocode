/*
 * XREFs of MiTranslateWsType @ 0x140084C24
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x140084BE4 (MmGetWorkingSetLeafSize.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateWsType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 1;
  if ( !v3 )
    return result;
  return v3 == 1;
}
