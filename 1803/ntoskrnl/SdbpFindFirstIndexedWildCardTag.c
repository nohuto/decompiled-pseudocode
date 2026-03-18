/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SdbpGetIndex @ 0x1405FCD40 (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x1405FD89C (SdbGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405FDA3C (AslStringUpcaseToMultiByteN.c)
 *     AslStringPatternMatchA @ 0x14061E11C (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x14061E1EC (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        void *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r13
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v15; // r15d
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C0h]
  _BYTE v24[272]; // [rsp+50h] [rbp-B0h] BYREF

  v21 = 0;
  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      673,
      (unsigned int)"Failed to get an index for tag 0x%lx key 0x%lx",
      a2,
      24587);
    return 0LL;
  }
  v9 = v21;
  a5[5] = v21;
  *((_WORD *)a5 + 6) = 24587;
  *((_QWORD *)a5 + 4) = a4;
  memset(v24, 0, 0x104uLL);
  v22 = 0LL;
  v23 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v24, v10, a4) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      690,
      (unsigned int)"Failed to convert name to multi-byte");
    return 0LL;
  }
  v11 = SdbpGetIndex(a1, *a5, &v21);
  if ( !v11 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      700,
      (unsigned int)"Failed to get index by tag id 0x%lx",
      *a5);
    return 0LL;
  }
  v12 = v21;
  v13 = 0LL;
  if ( !v21 )
    return 0LL;
  v15 = v9 & 2;
  while ( 1 )
  {
    v16 = (_DWORD *)(v11 + 12 * v13);
    memmove(&v21, v16, 8uLL);
    v17 = *(_QWORD *)v16;
    if ( v15 )
    {
      SdbpKeyToAnsiString(v17, (char *)&v22 + 1);
      LOBYTE(v22) = 42;
    }
    else
    {
      SdbpKeyToAnsiString(v17, &v22);
      LOBYTE(v23) = 42;
    }
    if ( (unsigned int)AslStringPatternMatchA(&v22, v24) )
    {
      v18 = v16[2];
      FirstTag = SdbFindFirstTag(a1, v18, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *((_QWORD *)a5 + 4)) )
            break;
        }
      }
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v12 )
      return 0LL;
  }
  a5[4] = v13;
  return v18;
}
