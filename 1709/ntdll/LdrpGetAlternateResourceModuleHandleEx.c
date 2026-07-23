/*
 * XREFs of LdrpGetAlternateResourceModuleHandleEx @ 0x1800E0834
 * Callers:
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E09B4 (LdrpGetMappingFromCacheEntry.c)
 */

__int64 __fastcall LdrpGetAlternateResourceModuleHandleEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v7; // ebx
  int i; // ecx
  int v9; // edi
  bool v10; // sf
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 SizeOfImage; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0LL;
  SizeOfImage = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  *a4 = 0LL;
  v7 = AlternateResourceModuleCount;
  HIDWORD(v13) = AlternateResourceModuleCount;
  for ( i = AlternateResourceModuleCount - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( v15[0] )
      {
        v9 = v7;
        for ( LODWORD(v13) = v7; ; LODWORD(v13) = v9 )
        {
          v10 = v9 < 0;
          if ( v9 < 0 )
            break;
          if ( *((_QWORD *)AlternateResourceModules + 9 * v9 + 1) == a1
            && (unsigned __int8)LdrpGetMappingFromCacheEntry((unsigned int)v9, a3, v15, &SizeOfImage, v13) )
          {
            v7 = v9;
            v10 = v9 < 0;
            break;
          }
          --v9;
        }
        if ( v10 )
          v7 = AlternateResourceModuleCount;
        break;
      }
      v15[0] = *((_QWORD *)AlternateResourceModules + 9 * i + 4);
      SizeOfImage = *((_QWORD *)AlternateResourceModules + 9 * i + 6);
      v7 = i;
      HIDWORD(v13) = i;
    }
  }
  if ( v7 == AlternateResourceModuleCount )
  {
    v15[0] = 0LL;
  }
  else
  {
    if ( !SizeOfImage )
    {
      v11 = RtlImageNtHeader((PVOID)(v15[0] & 0xFFFFFFFFFFFFFFFCuLL));
      if ( v11 )
      {
        if ( v11->OptionalHeader.Magic == 267 || v11->OptionalHeader.Magic == 523 )
          SizeOfImage = v11->OptionalHeader.SizeOfImage;
        else
          SizeOfImage = 0LL;
      }
    }
    *a4 = SizeOfImage;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  return v15[0];
}
