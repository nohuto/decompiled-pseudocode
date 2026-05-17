/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x180029A0C
 * Callers:
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18002A8F0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18002AD00 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180011F70 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v14; // [rsp+30h] [rbp-38h]
  char v15; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v15 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v13 = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v13);
  v9 = v13;
  if ( !v13 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  v10 = (unsigned int)(AlternateResourceModuleCount - 1);
  v11 = AlternateResourceModules;
  while ( (int)v10 >= 0 )
  {
    if ( *(_QWORD *)(AlternateResourceModules + 72LL * (int)v10 + 8) == a1 )
    {
      if ( *(_DWORD *)(AlternateResourceModules + 72LL * (int)v10 + 24) != *(_DWORD *)(v9 + 88) )
      {
        v15 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)(AlternateResourceModules + 72LL * (int)v10 + 16) )
        {
          _mm_lfence();
          v8 = *(_DWORD **)(AlternateResourceModules + 72LL * (int)v10 + 16);
          v14 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v15 = 1;
            v8 = 0LL;
            v14 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)(AlternateResourceModules + 72LL * (int)v10) == a2 )
      {
        v8 = *(_DWORD **)(AlternateResourceModules + 72LL * (int)v10 + 32);
        v14 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)(AlternateResourceModules + 72LL * (int)v10 + 48);
        break;
      }
    }
    v10 = (unsigned int)(v10 - 1);
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock, v11, v10);
  if ( v15 )
    LdrUnloadAlternateResourceModuleEx(a1, 0);
  return v8;
}
