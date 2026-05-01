/*
 * XREFs of ?RmpActivityHostQueryRawTypeSpecificCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180001B44
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180001A70 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 * Callees:
 *     ?RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180007840 (-RmpSystemQueryActivityHostRawCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K1@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryRawTypeSpecificCommit(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  result = RmpSystemQueryActivityHostRawCommit(a1, &v5, &v6);
  if ( (int)result >= 0 )
  {
    if ( *((_DWORD *)a1 + 14) == 1 )
      *a2 = v5;
    else
      *a2 = v5 + v6;
    return 0LL;
  }
  return result;
}
