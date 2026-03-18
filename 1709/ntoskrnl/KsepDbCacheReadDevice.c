/*
 * XREFs of KsepDbCacheReadDevice @ 0x1404F53B4
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1406DA8D0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     KsepCacheDeviceFree @ 0x1404F5490 (KsepCacheDeviceFree.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     KsepStringDuplicate @ 0x1405464B4 (KsepStringDuplicate.c)
 *     KseShimDatabaseOpen @ 0x140546A34 (KseShimDatabaseOpen.c)
 *     KseShimDatabaseClose @ 0x140546C0C (KseShimDatabaseClose.c)
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x14058EB9C (SdbFindNextTag.c)
 *     SdbTagRefToTagID @ 0x1405E8E4C (SdbTagRefToTagID.c)
 *     KsepDbReadKData @ 0x1406DAFBC (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x1406DB184 (KsepDbReadKFlag.c)
 *     KsepCacheDeviceInsertData @ 0x1406DB788 (KsepCacheDeviceInsertData.c)
 */

__int64 __fastcall KsepDbCacheReadDevice(__int64 a1, _QWORD *a2)
{
  char *Paged; // rax
  char *v5; // rdi
  _QWORD *v6; // rax
  int inserted; // ebx
  unsigned int DatabaseMatch; // eax
  __int64 v10; // rsi
  unsigned int i; // eax
  unsigned int v12; // r15d
  unsigned int j; // eax
  unsigned int v14; // r15d
  __int64 v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+4Ch] [rbp-24h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  unsigned int v20; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+48h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  *a2 = 0LL;
  Paged = (char *)KsepPoolAllocatePaged(0x48uLL);
  v5 = Paged;
  if ( Paged )
  {
    v6 = Paged + 56;
    v6[1] = v6;
    *v6 = v6;
    inserted = KsepStringDuplicate(v5 + 40, a1);
    if ( inserted >= 0 )
    {
      inserted = KseShimDatabaseOpen(&v21);
      if ( inserted >= 0 )
      {
        inserted = 0;
        HIDWORD(v15) = 0;
        DatabaseMatch = SdbGetDatabaseMatchEx(v21, 1LL, a1);
        if ( DatabaseMatch && (unsigned int)SdbTagRefToTagID(v21, DatabaseMatch, &v22, &v20) )
        {
          v10 = v22;
          for ( i = SdbFindFirstTag(v22, v20, 28691LL); ; i = SdbFindNextTag(v10, v20, v12) )
          {
            v12 = i;
            if ( !i )
              break;
            inserted = KsepDbReadKFlag(v10, i, &v16);
            if ( inserted < 0 )
              goto LABEL_6;
            LODWORD(v15) = v18;
            inserted = KsepCacheDeviceInsertData(v5, v16, v19, v17, v15);
            if ( inserted < 0 )
              goto LABEL_6;
          }
          for ( j = SdbFindFirstTag(v10, v20, 28712LL); ; j = SdbFindNextTag(v10, v20, v14) )
          {
            v14 = j;
            if ( !j )
              break;
            inserted = KsepDbReadKData(v10, j, &v16);
            if ( inserted < 0 )
              goto LABEL_6;
            LODWORD(v15) = v18;
            inserted = KsepCacheDeviceInsertData(v5, v16, v19, v17, v15);
            if ( inserted < 0 )
              goto LABEL_6;
          }
          *a2 = v5;
          v5 = 0LL;
        }
        else
        {
          inserted = -1073741275;
        }
      }
LABEL_6:
      if ( v21 )
        KseShimDatabaseClose(v21);
    }
    if ( v5 )
      KsepCacheDeviceFree(v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)inserted;
}
