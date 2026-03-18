/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x1404F4EE0
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AslStringPatternMatchW @ 0x1404F5024 (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     AslStringPatternMatchA @ 0x140547CE0 (AslStringPatternMatchA.c)
 *     SdbpKeyToAnsiString @ 0x140547DA0 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x140547EB4 (SdbpGetIndex.c)
 *     AslStringUpcaseToMultiByteN @ 0x140548148 (AslStringUpcaseToMultiByteN.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, unsigned int *a2)
{
  __int64 v4; // r8
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
  _BYTE v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v16, 0, 0x104uLL);
  v4 = *((_QWORD *)a2 + 4);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *a2, &v12);
    if ( Index )
    {
      LODWORD(v7) = a2[4];
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v12 )
          break;
        memmove(&v13, (const void *)(Index + 12 * v7), 8uLL);
        if ( (a2[5] & 2) != 0 )
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
          FirstTag = SdbFindFirstTag(a1, v8, *((unsigned __int16 *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchW(StringTagPtr, *((_QWORD *)a2 + 4)) )
              {
                a2[4] = v7;
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
