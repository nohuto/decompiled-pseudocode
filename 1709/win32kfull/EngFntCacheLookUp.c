/*
 * XREFs of EngFntCacheLookUp @ 0x1C0041230
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0041020 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     bLoadFontFile @ 0x1C0228AE4 (bLoadFontFile.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C00B6CD0 (SearchFNTCacheHlink.c)
 */

PVOID __stdcall EngFntCacheLookUp(ULONG FastCheckSum, ULONG *pulSize)
{
  void *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  ULONG v6; // eax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  *pulSize = 0;
  v8 = 0LL;
  if ( !FastCheckSum )
    return 0LL;
  if ( (dword_1C0327740 & 1) != 0 )
  {
    v4 = qword_1C0327748;
    if ( qword_1C0327748 )
    {
      if ( *(_QWORD *)qword_1C0327748 )
      {
        SearchFNTCacheHlink(FastCheckSum, &v8);
        v5 = v8;
        if ( v8 )
        {
          if ( (*(_DWORD *)(v8 + 24) & 1) == 0 )
          {
            v6 = *(_DWORD *)(v8 + 16);
            *pulSize = v6;
            if ( v6 )
              return (PVOID)(*(_QWORD *)(v4 + 24) + *(unsigned int *)(v5 + 20));
          }
        }
      }
    }
  }
  return v2;
}
