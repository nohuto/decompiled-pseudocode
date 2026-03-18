/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x14061DFD8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SdbpGetIndex @ 0x1405FCD40 (SdbpGetIndex.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405FDA3C (AslStringUpcaseToMultiByteN.c)
 *     AslStringPatternMatchA @ 0x14061E11C (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x14061E1EC (SdbpKeyToAnsiString.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rdx
  __int64 Index; // r15
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+38h] [rbp-C8h]
  char v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v16, 0, 0x104uLL);
  v4 = *(const WCHAR **)(a2 + 32);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *(_DWORD *)a2, &v12);
    if ( Index )
    {
      LODWORD(v7) = *(_DWORD *)(a2 + 16);
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v12 )
          break;
        memmove(&v13, (const void *)(Index + 12 * v7), 8uLL);
        if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
        {
          SdbpKeyToAnsiString(v13, (char *)&v14 + 1);
          LOBYTE(v14) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(v13, &v14);
          LOBYTE(v15) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchA(&v14, v16) )
        {
          v8 = *(_DWORD *)(Index + 12 * v7 + 8);
          FirstTag = SdbFindFirstTag(a1, v8, *(_WORD *)(a2 + 12));
          if ( FirstTag )
          {
            StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *(_QWORD *)(a2 + 32)) )
              {
                *(_DWORD *)(a2 + 16) = v7;
                return v8;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
