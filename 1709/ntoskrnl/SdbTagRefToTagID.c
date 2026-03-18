/*
 * XREFs of SdbTagRefToTagID @ 0x1405E8E4C
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 *     SdbQueryDataEx @ 0x14076DC38 (SdbQueryDataEx.c)
 *     SdbReadEntryInformation @ 0x14076E0C4 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbpOpenLocalDatabaseEx @ 0x1407706E0 (SdbpOpenLocalDatabaseEx.c)
 */

__int64 __fastcall SdbTagRefToTagID(__int64 a1, unsigned int a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r10
  unsigned int v7; // ecx
  int v8; // esi
  __int128 *v9; // rax
  int v11; // edx
  __int128 v13; // xmm0
  unsigned int v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  v7 = 1;
  v15 = a2 >> 28;
  v16 = 0LL;
  v8 = a2 & 0xFFFFFFF;
  v9 = (__int128 *)(a1 + 32 * ((a2 >> 28) + 1LL));
  v11 = *((_DWORD *)v9 + 6);
  if ( (v11 & 2) != 0 )
  {
    v4 = *((_QWORD *)v9 + 2);
    *(_OWORD *)(v4 + 28) = *v9;
    goto LABEL_3;
  }
  if ( (v11 & 1) != 0 )
  {
    v13 = *v9;
    *((_DWORD *)v9 + 6) = 0;
    v17 = v13;
    v14 = SdbpOpenLocalDatabaseEx(a1, (unsigned int)&v17, a1, (unsigned int)&v16, (__int64)&v15);
    v4 = v16;
    v7 = v14;
LABEL_3:
    if ( v4 )
      goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  if ( a3 )
    *a3 = v4 & -(__int64)(v7 != 0);
  if ( a4 )
    *a4 = v7 != 0 ? v8 : 0;
  return v7;
}
