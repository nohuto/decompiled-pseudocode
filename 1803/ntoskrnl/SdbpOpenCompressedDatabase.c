/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x1407D8690
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SdbpReadMappedData @ 0x1405FD5A8 (SdbpReadMappedData.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405FFAF0 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x1405FFB88 (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(_QWORD **a1, void *a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  __m128i *v9; // rax
  SIZE_T v10; // rcx
  PVOID v11; // rdi
  _DWORD *v12; // rax
  int v14; // [rsp+80h] [rbp+8h] BYREF

  v3 = (__int64)*a1;
  v4 = 0;
  v14 = 0;
  v5 = 0LL;
  if ( g_ExpandCallback )
  {
    if ( *(_DWORD *)(v3 + 20) >= 0x14u )
    {
      v9 = *(__m128i **)(v3 + 8);
      v10 = v9[1].m128i_u32[0];
      if ( _mm_cvtsi128_si32(_mm_srli_si128(*v9, 8)) == 1717724282 )
      {
        if ( HIDWORD(*(unsigned __int128 *)v9) == g_ExpectedAlgorithm )
        {
          v14 = v9[1].m128i_i32[0];
          v11 = AslAlloc(v10, v10);
          if ( v11 )
          {
            if ( (unsigned int)((__int64 (__fastcall *)(PVOID, int *, __int64, _QWORD))g_ExpandCallback)(
                                 v11,
                                 &v14,
                                 *(_QWORD *)(v3 + 8) + 20LL,
                                 (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
            {
              v12 = SdbpOpenDatabaseInMemory((__int64)v11, v14, a3);
              v5 = v12;
              if ( v12 )
              {
                v12[6] |= 4u;
                if ( !a2 || (unsigned int)SdbpReadMappedData((__int64)v12, 0, a2, 0xCu) )
                {
                  v5[6] |= 8u;
                  v11 = 0LL;
                  v14 = 0;
                  v4 = 1;
                }
                else
                {
                  AslLogCallPrintf(
                    1,
                    (unsigned int)"SdbpOpenCompressedDatabase",
                    210,
                    (unsigned int)"Failed to read expanded database header");
                }
              }
            }
            else
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbpOpenCompressedDatabase",
                193,
                (unsigned int)"Expand callback failed to expand SDB");
            }
            if ( v11 )
            {
              ExFreePoolWithTag(v11, 0x74705041u);
              v14 = 0;
              if ( v5 )
                *((_QWORD *)v5 + 1) = 0LL;
            }
            if ( !v4 && v5 )
            {
              SdbCloseDatabaseRead(v5);
              v5 = 0LL;
            }
          }
          else
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpOpenCompressedDatabase",
              183,
              (unsigned int)"SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory");
          }
        }
        else
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpOpenCompressedDatabase",
            164,
            (unsigned int)"SDB compression algorithm does not match callback algorithm.");
        }
      }
      else
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", 159, (unsigned int)"SDB is not compressed");
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpOpenCompressedDatabase",
        152,
        (unsigned int)"SDB file too small to be valid");
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpOpenCompressedDatabase",
      147,
      (unsigned int)"No expand callback method set. Cannot expand ZDB file.");
  }
  SdbCloseDatabaseRead(*a1);
  *a1 = v5;
  return v4;
}
