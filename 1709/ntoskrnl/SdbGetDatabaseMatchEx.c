/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x140547A18
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 * Callees:
 *     wcsrchr @ 0x140160610 (wcsrchr.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1404F4EE0 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x140541718 (SdbpCheckKObject.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140547B48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14054A6A4 (SdbFindFirstStringIndexedTag.c)
 *     SdbTagIDToTagRef @ 0x1405E8EF4 (SdbTagIDToTagRef.c)
 *     SdbFindNextStringIndexedTag @ 0x140771CB8 (SdbFindNextStringIndexedTag.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rsi
  int v8; // edi
  unsigned __int16 v10; // r14
  __int64 v11; // r15
  wchar_t *v12; // rax
  int v13; // ebx
  unsigned int FirstStringIndexedTag; // eax
  int v15; // r8d
  _QWORD *v16; // r12
  __int64 v17; // r13
  unsigned int v18; // edi
  unsigned int i; // eax
  unsigned int v20; // ebx
  int v22; // r8d
  unsigned int v23[12]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = (int)a3;
  if ( a2 )
  {
    v10 = 28698;
    v11 = 0LL;
    goto LABEL_10;
  }
  v10 = 28700;
  v11 = (__int64)a3;
  v12 = wcsrchr(a3, 0x5Cu);
  if ( !v12 )
  {
LABEL_10:
    v13 = v8;
    goto LABEL_4;
  }
  v13 = (_DWORD)v12 + 2;
LABEL_4:
  v24 = 0;
  FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v7, v10, 24577, v13, (__int64)v23);
  v16 = a7;
  v17 = a6;
  while ( 1 )
  {
    v18 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
    {
      for ( i = SdbpFindFirstIndexedWildCardTag(v7, v10, v15, v13, (__int64)v23);
            ;
            i = SdbpFindNextIndexedWildCardTag(v7, v23) )
      {
        v20 = i;
        if ( !i )
          break;
        if ( (unsigned int)SdbpCheckKObject(a1, i, v11, -1, a5, v17, v16) )
        {
          if ( (unsigned int)SdbTagIDToTagRef(a1, v7, v20, &v24) )
            return v24;
          v22 = 4766;
          goto LABEL_19;
        }
      }
      return v24;
    }
    if ( (unsigned int)SdbpCheckKObject(a1, FirstStringIndexedTag, v11, -1, a5, v17, v16) )
      break;
    FirstStringIndexedTag = SdbFindNextStringIndexedTag(v7, v23);
  }
  if ( !(unsigned int)SdbTagIDToTagRef(a1, v7, v18, &v24) )
  {
    v22 = 4742;
LABEL_19:
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatchEx",
      v22,
      (unsigned int)"Failed to convert tiKObject to trKObject");
  }
  return v24;
}
