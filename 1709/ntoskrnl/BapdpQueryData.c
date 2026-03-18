/*
 * XREFs of BapdpQueryData @ 0x140828560
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1401341B8 (BapdpProcessEtwEvents.c)
 *     BapdpProcessEDrvHintInfo @ 0x140828050 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1408280E0 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140828170 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x14082825C (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1408282EC (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1408283BC (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x14082848C (BapdpProcessSiData.c)
 *     BapdpProcessBootMetadata @ 0x140828C94 (BapdpProcessBootMetadata.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // r8
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_1403A2158;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_1403A2158 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 >= v12 )
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), *(unsigned int *)(v10 + 36));
    return 0LL;
  }
  else
  {
    *a5 = v12;
    return 3221225507LL;
  }
}
