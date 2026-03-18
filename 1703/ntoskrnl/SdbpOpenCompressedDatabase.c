/*
 * XREFs of SdbpOpenCompressedDatabase @ 0x14072DB9C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SdbCloseDatabaseRead @ 0x140453518 (SdbCloseDatabaseRead.c)
 *     SdbpReadMappedData @ 0x140487024 (SdbpReadMappedData.c)
 *     SdbpOpenDatabaseInMemory @ 0x1404AFAE0 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenCompressedDatabase(__int64 *a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  __int64 v5; // rbx
  const char *v9; // r9
  int v10; // r8d
  __m128i *v11; // rax
  SIZE_T v12; // rcx
  PVOID v13; // rdi
  const char *v14; // r9
  int v15; // r8d
  _DWORD *v16; // rax
  int v18; // [rsp+80h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v18 = 0;
  v5 = 0LL;
  if ( !g_ExpandCallback )
  {
    v9 = "No expand callback method set. Cannot expand ZDB file.";
    v10 = 147;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", v10, (_DWORD)v9);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(v3 + 20) < 0x14u )
  {
    v9 = "SDB file too small to be valid";
    v10 = 152;
    goto LABEL_3;
  }
  v11 = *(__m128i **)(v3 + 8);
  v12 = v11[1].m128i_u32[0];
  if ( _mm_cvtsi128_si32(_mm_srli_si128(*v11, 8)) != 1717724282 )
  {
    v9 = "SDB is not compressed";
    v10 = 159;
    goto LABEL_3;
  }
  if ( HIDWORD(*(unsigned __int128 *)v11) != g_ExpectedAlgorithm )
  {
    v9 = "SDB compression algorithm does not match callback algorithm.";
    v10 = 164;
    goto LABEL_3;
  }
  v18 = v11[1].m128i_i32[0];
  v13 = AslAlloc(v12, v12);
  if ( !v13 )
  {
    v9 = "SdbpOpenCompressedDatabase failed to allocate expanded buffer - out of memory";
    v10 = 183;
    goto LABEL_3;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(PVOID, int *, __int64, _QWORD))g_ExpandCallback)(
                        v13,
                        &v18,
                        *(_QWORD *)(v3 + 8) + 20LL,
                        (unsigned int)(*(_DWORD *)(v3 + 20) - 20)) )
  {
    v14 = "Expand callback failed to expand SDB";
    v15 = 193;
LABEL_14:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenCompressedDatabase", v15, (_DWORD)v14);
    goto LABEL_20;
  }
  v16 = SdbpOpenDatabaseInMemory((__int64)v13, v18, a3);
  v5 = (__int64)v16;
  if ( v16 )
  {
    v16[6] |= 4u;
    if ( a2 && !(unsigned int)SdbpReadMappedData((__int64)v16, 0, a2, 0xCu) )
    {
      v14 = "Failed to read expanded database header";
      v15 = 210;
      goto LABEL_14;
    }
    v13 = 0LL;
    v4 = 1;
    v18 = 0;
  }
LABEL_20:
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x74705041u);
    v18 = 0;
    if ( v5 )
      *(_QWORD *)(v5 + 8) = 0LL;
  }
  if ( !v4 && v5 )
  {
    SdbCloseDatabaseRead(v5);
    v5 = 0LL;
  }
LABEL_26:
  SdbCloseDatabaseRead(*a1);
  *a1 = v5;
  return v4;
}
