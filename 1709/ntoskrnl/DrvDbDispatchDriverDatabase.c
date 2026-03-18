/*
 * XREFs of DrvDbDispatchDriverDatabase @ 0x140531320
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140459A60 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbFindDatabaseNode @ 0x140459D40 (DrvDbFindDatabaseNode.c)
 *     DrvDbGetDriverDatabaseList @ 0x14053122C (DrvDbGetDriverDatabaseList.c)
 *     _PnpCtxGetObjectContext @ 0x14053198C (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140786BA4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbValidateDriverDatabaseName @ 0x14078776C (DrvDbValidateDriverDatabaseName.c)
 *     DrvDbDestroyDatabaseNode @ 0x14078782C (DrvDbDestroyDatabaseNode.c)
 */

__int64 __fastcall DrvDbDispatchDriverDatabase(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  __int64 v6; // rcx
  int v7; // r10d
  const wchar_t *v8; // r11
  int DatabaseNode; // r8d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v17; // r10d
  int v18; // r10d
  const UNICODE_STRING *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v20; // [rsp+48h] [rbp-8h] BYREF

  v20 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, &v20);
  DatabaseNode = ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)DatabaseNode;
  v10 = v7 - 1;
  if ( !v10 )
    return (unsigned int)DrvDbValidateDriverDatabaseName(v6, v8, (unsigned int)ObjectContext);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbOpenDriverDatabaseRegKey(
                           v20,
                           v8,
                           *(_DWORD *)a5,
                           *((_BYTE *)a5 + 4),
                           a5[1],
                           (_DWORD *)a5 + 4);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverDatabaseMappedProperty(
                                   (__int64)v20,
                                   v8,
                                   (void *)*a5,
                                   a5[2],
                                   *((_DWORD *)a5 + 6),
                                   (PCWSTR)a5[4],
                                   *((_DWORD *)a5 + 10));
          }
          else
          {
            return (unsigned int)DrvDbGetDriverDatabaseMappedProperty(
                                   (__int64)v20,
                                   v8,
                                   (void *)*a5,
                                   a5[2],
                                   (_DWORD *)a5[3],
                                   (_DWORD *)a5[4],
                                   *((_DWORD *)a5 + 10),
                                   (_DWORD *)a5[6]);
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverDatabaseMappedPropertyKeys(v20, v8, *a5, a5[3], *((_DWORD *)a5 + 8), a5[5]);
        }
      }
      else
      {
        return (unsigned int)DrvDbGetDriverDatabaseList(
                               v20,
                               (unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, __int64))*a5,
                               a5[1],
                               (_WORD *)a5[2],
                               *((_DWORD *)a5 + 6),
                               (_DWORD *)a5[4]);
      }
    }
    else
    {
      v19 = 0LL;
      DatabaseNode = DrvDbFindDatabaseNode((__int64)v20, v8, &v19);
      if ( DatabaseNode < 0 )
        return (unsigned int)DatabaseNode;
      if ( ((__int64)v19[3].Buffer & 0x10) == 0 )
        return (unsigned int)-1073741790;
      return (unsigned int)DrvDbDestroyDatabaseNode(v20, v19);
    }
  }
  LODWORD(v19) = 0;
  DatabaseNode = DrvDbOpenDriverDatabaseRegKey(v20, v8, *(_DWORD *)a5, 1, (__int64)(a5 + 1), &v19);
  if ( DatabaseNode >= 0 )
    *((_BYTE *)a5 + 16) = (_DWORD)v19 == 1;
  return (unsigned int)DatabaseNode;
}
