/*
 * XREFs of DrvDbDispatchDriverFile @ 0x140745820
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x1404E8A88 (_PnpCtxGetObjectContext.c)
 *     DrvDbDeleteObjectRegKey @ 0x140742610 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140743070 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1407431AC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14074380C (DrvDbGetObjectList.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140744918 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407452F4 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, wchar_t *a2, int a3, __int64 a4, int *a5)
{
  __int64 v6; // rcx
  signed int ObjectContext; // r8d
  int v8; // r10d
  __int64 v9; // r11
  unsigned int v10; // eax
  char v11; // al
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v20; // ecx
  __int64 v22[3]; // [rsp+40h] [rbp-18h] BYREF

  v22[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  if ( ObjectContext < 0 )
    return (unsigned int)ObjectContext;
  v9 = v22[0];
  v10 = *(_DWORD *)(v22[0] + 12);
  if ( (v10 & 0x10000000) == 0 )
  {
    if ( !v10 )
      return (unsigned int)-1073740697;
    if ( v8 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_13:
        LOBYTE(v10) = (v10 & 0x40000000) != 0;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v8 <= 2 )
      {
LABEL_11:
        LOBYTE(v10) = 1;
        goto LABEL_15;
      }
      if ( v8 <= 4 )
        goto LABEL_13;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_11;
        goto LABEL_13;
      }
    }
    v10 >>= 31;
LABEL_15:
    v11 = -(char)v10;
    ObjectContext = v11 == 0 ? 0xC0000022 : 0;
    if ( !v11 )
      return (unsigned int)ObjectContext;
  }
  v12 = v8 - 1;
  if ( !v12 )
    return (unsigned int)DrvDbValidateDriverInfFileName(v6, a2);
  v13 = v12 - 1;
  if ( !v13 )
    return (unsigned int)DrvDbOpenObjectRegKey(
                           v22[0],
                           0LL,
                           4u,
                           a2,
                           *a5,
                           *((_BYTE *)a5 + 4),
                           *((_QWORD *)a5 + 1),
                           a5 + 4);
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverFileMappedProperty(
                                   v22[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   a5[10]);
          }
          else
          {
            return (unsigned int)DrvDbGetDriverFileMappedProperty(
                                   v22[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *((_QWORD *)a5 + 2),
                                   *((_DWORD **)a5 + 3),
                                   *((_WORD **)a5 + 4),
                                   a5[10],
                                   *((_DWORD **)a5 + 6));
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverFileMappedPropertyKeys(
                                 v22[0],
                                 (__int64)a2,
                                 *(void **)a5,
                                 *((_QWORD *)a5 + 3),
                                 a5[8],
                                 *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetObjectList(
                               v22[0],
                               4,
                               *(_QWORD *)a5,
                               *((_QWORD *)a5 + 1),
                               *((_QWORD *)a5 + 2),
                               a5[6],
                               *((_DWORD **)a5 + 4),
                               0);
      }
    }
    else
    {
      return (unsigned int)DrvDbDeleteObjectRegKey(v22[0], 4, a2, 0);
    }
  }
  v20 = *a5;
  LODWORD(v22[0]) = 0;
  ObjectContext = DrvDbOpenObjectRegKey(v9, 0LL, 4u, a2, v20, 1, a5 + 2, v22);
  if ( ObjectContext >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v22[0]) == 1;
  return (unsigned int)ObjectContext;
}
