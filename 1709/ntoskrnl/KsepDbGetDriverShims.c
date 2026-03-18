/*
 * XREFs of KsepDbGetDriverShims @ 0x140546B28
 * Callers:
 *     KsepGetShimsForDriver @ 0x140545FD0 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x140546A34 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x140546C0C (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x140546CFC (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x14058EB9C (SdbFindNextTag.c)
 *     KsepDbGetSdbString @ 0x1405E8DD0 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1405E8E04 (SdbReadGUIDTag.c)
 *     SdbTagRefToTagID @ 0x1405E8E4C (SdbTagRefToTagID.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v6; // r14
  _OWORD *Paged; // rsi
  _DWORD *v9; // r13
  int SdbString; // ebx
  unsigned int DatabaseMatch; // eax
  __int64 v13; // rdi
  unsigned int v14; // r14d
  unsigned int NextTag; // eax
  __int64 v16; // rbx
  __int64 v17; // r15
  unsigned int FirstTag; // r14d
  __int128 v19; // xmm6
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-60h]
  __int64 v26; // [rsp+28h] [rbp-58h]
  __int64 *v27; // [rsp+30h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v30; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v32; // [rsp+C8h] [rbp+48h]

  v32 = a4;
  v6 = a3;
  v30 = 0uLL;
  v28 = 0LL;
  Paged = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v9 = a5;
  *a4 = 0LL;
  *v9 = 0;
  SdbString = KseShimDatabaseOpen(&v28);
  if ( SdbString >= 0 )
  {
    v27 = &KsepMatchMachineInfo;
    v26 = v6;
    v25 = a2;
    DatabaseMatch = SdbGetDatabaseMatchEx(v28, 0LL, *(_QWORD *)(a1 + 8));
    if ( DatabaseMatch
      && (unsigned int)SdbTagRefToTagID(v28, DatabaseMatch, v29, &v31)
      && (v13 = v29[0], v14 = v31, (NextTag = SdbFindFirstTag(v29[0], v31, 28710)) != 0) )
    {
      LODWORD(v16) = 0;
      do
      {
        NextTag = SdbFindNextTag(v13, v14, NextTag);
        v16 = (unsigned int)(v16 + 1);
      }
      while ( NextTag );
      *v9 = v16;
      Paged = KsepPoolAllocatePaged(80 * v16);
      if ( Paged )
      {
        v17 = 0LL;
        FirstTag = SdbFindFirstTag(v13, v14, 28710);
        if ( FirstTag )
        {
          v19 = v30;
          do
          {
            if ( (unsigned int)v17 < *v9 )
            {
              v20 = SdbFindFirstTag(v13, FirstTag, 36880);
              if ( v20 )
              {
                v30 = v19;
                Paged[5 * v17] = *(_OWORD *)SdbReadGUIDTag(v29, v13, v20, &v30, v25, v26, v27);
              }
              v21 = SdbFindFirstTag(v13, FirstTag, 24577);
              if ( v21 )
              {
                SdbString = KsepDbGetSdbString(v13, v21, &Paged[5 * v17 + 1]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v22 = SdbFindFirstTag(v13, FirstTag, 24579);
              if ( v22 )
              {
                SdbString = KsepDbGetSdbString(v13, v22, &Paged[5 * v17 + 2]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v23 = SdbFindFirstTag(v13, FirstTag, 16407);
              if ( v23 )
                LODWORD(Paged[5 * v17 + 4]) = SdbReadDWORDTag(v13, v23, 0);
              v24 = SdbFindFirstTag(v13, FirstTag, 24584);
              if ( v24 )
              {
                SdbString = KsepDbGetSdbString(v13, v24, &Paged[5 * v17 + 3]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              DWORD1(Paged[5 * v17 + 4]) = 1;
            }
            v17 = (unsigned int)(v17 + 1);
            FirstTag = SdbFindNextTag(v13, v31, FirstTag);
          }
          while ( FirstTag );
        }
        SdbString = 0;
        *v32 = Paged;
        goto LABEL_7;
      }
      SdbString = -1073741801;
    }
    else
    {
      SdbString = -1073741275;
    }
  }
LABEL_6:
  KsepDbFreeDriverShims(Paged, (unsigned int)*v9);
LABEL_7:
  if ( v28 )
    KseShimDatabaseClose(v28);
  return (unsigned int)SdbString;
}
