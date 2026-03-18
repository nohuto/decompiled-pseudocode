/*
 * XREFs of EngFntCacheLookUp @ 0x1C00BACE0
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00BAAF0 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     bLoadFontFile @ 0x1C0227558 (bLoadFontFile.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     SearchFNTCacheHlink @ 0x1C00BAD84 (SearchFNTCacheHlink.c)
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  void *v3; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  ULONG v8; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  *pulSize = 0;
  v9 = 0LL;
  v10 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  if ( FastCheckSum )
  {
    if ( (dword_1C032C4C0 & 1) != 0 )
    {
      v6 = qword_1C032C4C8;
      if ( qword_1C032C4C8 )
      {
        if ( *(_QWORD *)qword_1C032C4C8 )
        {
          SearchFNTCacheHlink(FastCheckSum, &v9, *(_QWORD *)qword_1C032C4C8);
          v7 = v9;
          if ( v9 )
          {
            if ( (*(_DWORD *)(v9 + 24) & 1) == 0 )
            {
              v8 = *(_DWORD *)(v9 + 16);
              *pulSize = v8;
              if ( v8 )
                v3 = (void *)(*(_QWORD *)(v6 + 24) + *(unsigned int *)(v7 + 20));
            }
          }
        }
      }
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v3;
}
