/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x1404B54AC
 * Callers:
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 * Callees:
 *     wcsrchr @ 0x14016BD30 (wcsrchr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1404B569C (SdbFindFirstStringIndexedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x1405BB128 (SdbpCheckKObject.c)
 *     SdbTagIDToTagRef @ 0x1405D4354 (SdbTagIDToTagRef.c)
 *     SdbFindNextStringIndexedTag @ 0x14072E2F0 (SdbFindNextStringIndexedTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  void *v7; // rsi
  unsigned __int16 v10; // r14
  int v11; // r15d
  wchar_t *v12; // rax
  __int64 v13; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned int v18; // edi
  unsigned int i; // eax
  unsigned int v20; // ebx
  int v22; // r8d
  unsigned int v23[12]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF

  v7 = *(void **)(a1 + 8);
  if ( a2 )
  {
    v10 = 28698;
    v11 = 0;
    goto LABEL_10;
  }
  v10 = 28700;
  v11 = (int)a3;
  v12 = wcsrchr(a3, 0x5Cu);
  if ( !v12 )
  {
LABEL_10:
    v13 = (__int64)a3;
    goto LABEL_4;
  }
  v13 = (__int64)(v12 + 1);
LABEL_4:
  v24 = 0;
  FirstStringIndexedTag = SdbFindFirstStringIndexedTag((_DWORD)v7, v10, 24577, v13, (__int64)v23);
  v16 = a7;
  v17 = a6;
  while ( 1 )
  {
    v18 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
    {
      for ( i = SdbpFindFirstIndexedWildCardTag(v7, v10, v15, v13, v23); ; i = SdbpFindNextIndexedWildCardTag(v7, v23) )
      {
        v20 = i;
        if ( !i )
          break;
        if ( (unsigned int)SdbpCheckKObject(a1, i, v11, -1, a5, v17, v16) )
        {
          if ( (unsigned int)SdbTagIDToTagRef(a1, v7, v20, &v24) )
            return v24;
          v22 = 4662;
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
    v22 = 4638;
LABEL_19:
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatchEx",
      v22,
      (unsigned int)"Failed to convert tiKObject to trKObject");
  }
  return v24;
}
