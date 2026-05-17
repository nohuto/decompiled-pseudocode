/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180049188
 * Callers:
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     LdrpGetImageSize @ 0x180029E30 (LdrpGetImageSize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180049210 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  LdrpInitMuiCrits(&DataLoadLockCount, &LoadAsDataCrits);
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      if ( *(_QWORD *)(LoadAsDataTable + 48LL * --v3) == a1 )
      {
        v2 = *(_QWORD *)(LoadAsDataTable + 48LL * v3 + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v2;
}
