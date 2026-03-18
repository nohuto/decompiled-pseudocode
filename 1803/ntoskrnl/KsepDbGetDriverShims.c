/*
 * XREFs of KsepDbGetDriverShims @ 0x1405FC67C
 * Callers:
 *     KsepGetShimsForDriver @ 0x1405FC594 (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x140161A68 (KsepPoolAllocatePaged.c)
 *     KseShimDatabaseClose @ 0x1405FC764 (KseShimDatabaseClose.c)
 *     KsepDbFreeDriverShims @ 0x1405FC854 (KsepDbFreeDriverShims.c)
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x1405FCFD8 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     KseShimDatabaseOpen @ 0x1405FDD48 (KseShimDatabaseOpen.c)
 *     SdbTagRefToTagID @ 0x14061FFD8 (SdbTagRefToTagID.c)
 *     KsepDbGetSdbString @ 0x140744DB4 (KsepDbGetSdbString.c)
 *     SdbReadGUIDTag @ 0x1407D7374 (SdbReadGUIDTag.c)
 */

__int64 __fastcall KsepDbGetDriverShims(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  _DWORD *Paged; // rsi
  _DWORD *v7; // r12
  int SdbString; // ebx
  unsigned int DatabaseMatch; // eax
  __int64 v11; // rdi
  unsigned int NextTag; // eax
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned int FirstTag; // r15d
  __int128 v16; // xmm6
  unsigned int v17; // eax
  __int64 v18; // r12
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // eax
  char *v22; // r14
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD *v31; // [rsp+C8h] [rbp+48h]

  v31 = a4;
  v28 = 0uLL;
  v27 = 0LL;
  Paged = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  v7 = a5;
  *a4 = 0LL;
  *v7 = 0;
  SdbString = KseShimDatabaseOpen(&v27);
  if ( SdbString >= 0 )
  {
    DatabaseMatch = SdbGetDatabaseMatchEx(v27, 0LL, *(_QWORD *)(a1 + 8));
    if ( DatabaseMatch
      && (unsigned int)SdbTagRefToTagID(v27, DatabaseMatch, &v26, &v30)
      && (v11 = v26, (NextTag = SdbFindFirstTag(v26, v30, 28710LL)) != 0) )
    {
      LODWORD(v13) = 0;
      do
      {
        NextTag = SdbFindNextTag(v11, v30, NextTag);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( NextTag );
      *v7 = v13;
      Paged = KsepPoolAllocatePaged(80 * v13);
      if ( Paged )
      {
        v14 = 0LL;
        FirstTag = SdbFindFirstTag(v11, v30, 28710LL);
        LODWORD(v26) = 0;
        if ( FirstTag )
        {
          v16 = v28;
          do
          {
            if ( (unsigned int)v14 < *v7 )
            {
              v17 = SdbFindFirstTag(v11, FirstTag, 36880LL);
              v18 = (unsigned int)v14;
              v19 = 20 * v14;
              if ( v17 )
              {
                v28 = v16;
                *(_OWORD *)&Paged[v19] = *(_OWORD *)SdbReadGUIDTag(v29, v11, v17, &v28);
              }
              v20 = SdbFindFirstTag(v11, FirstTag, 24577LL);
              if ( v20 )
              {
                v19 = 20 * v14;
                SdbString = KsepDbGetSdbString(v11, v20, &Paged[20 * v14 + 4]);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v21 = SdbFindFirstTag(v11, FirstTag, 24579LL);
              v22 = (char *)&Paged[v19];
              if ( v21 )
              {
                SdbString = KsepDbGetSdbString(v11, v21, v22 + 32);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              v23 = SdbFindFirstTag(v11, FirstTag, 16407LL);
              if ( v23 )
              {
                v22 = (char *)&Paged[20 * v18];
                *((_DWORD *)v22 + 16) = SdbReadDWORDTag(v11, v23, 0LL);
              }
              v24 = SdbFindFirstTag(v11, FirstTag, 24584LL);
              if ( v24 )
              {
                SdbString = KsepDbGetSdbString(v11, v24, v22 + 48);
                if ( SdbString < 0 )
                  goto LABEL_6;
              }
              LODWORD(v14) = v26;
              v25 = 5 * v18;
              v7 = a5;
              Paged[4 * v25 + 17] = 1;
            }
            v14 = (unsigned int)(v14 + 1);
            FirstTag = SdbFindNextTag(v11, v30, FirstTag);
            LODWORD(v26) = v14;
          }
          while ( FirstTag );
        }
        SdbString = 0;
        *v31 = Paged;
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
  KsepDbFreeDriverShims(Paged, *a5);
LABEL_7:
  if ( v27 )
    KseShimDatabaseClose(v27);
  return (unsigned int)SdbString;
}
