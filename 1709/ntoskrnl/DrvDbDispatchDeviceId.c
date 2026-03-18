/*
 * XREFs of DrvDbDispatchDeviceId @ 0x1405305C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140448F74 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetObjectList @ 0x14044FDB0 (DrvDbGetObjectList.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140531474 (DrvDbGetDeviceIdMappedProperty.c)
 *     _PnpCtxGetObjectContext @ 0x14053198C (_PnpCtxGetObjectContext.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140786438 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140786AC8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbValidateDeviceIdName @ 0x1407876F4 (DrvDbValidateDeviceIdName.c)
 */

__int64 __fastcall DrvDbDispatchDeviceId(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  int v7; // r10d
  __int64 v8; // r8
  int v9; // r11d
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int DeviceIdMappedProperty; // eax
  int v20; // ecx
  int v21[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v21 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  v8 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v8;
  v9 = v21[0];
  v10 = *(unsigned int *)(*(_QWORD *)v21 + 12LL);
  if ( (v10 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v10 )
    {
      LODWORD(v8) = -1073740697;
      return (unsigned int)v8;
    }
    if ( v7 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_26:
        v10 = (unsigned int)v10 >> 30;
        LOBYTE(v10) = v10 & 1;
        goto LABEL_28;
      }
    }
    else
    {
      if ( v7 <= 2 )
      {
LABEL_24:
        LOBYTE(v10) = 1;
        goto LABEL_28;
      }
      if ( v7 <= 4 )
        goto LABEL_26;
      if ( v7 > 6 && v7 != 8 )
      {
        if ( v7 != 9 )
          goto LABEL_24;
        goto LABEL_26;
      }
    }
    v10 = (unsigned int)v10 >> 31;
LABEL_28:
    v8 = (_BYTE)v10 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v10 )
      return (unsigned int)v8;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    DeviceIdMappedProperty = DrvDbValidateDeviceIdName(v10, a2, v8);
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DeviceIdMappedProperty = DrvDbOpenObjectRegKey(
                               v21[0],
                               0,
                               5,
                               a2,
                               *a5,
                               *((_BYTE *)a5 + 4),
                               *((_QWORD *)a5 + 1),
                               (__int64)(a5 + 4));
LABEL_11:
    LODWORD(v8) = DeviceIdMappedProperty;
    return (unsigned int)v8;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              LODWORD(v8) = -1073741811;
              return (unsigned int)v8;
            }
            DeviceIdMappedProperty = DrvDbSetDeviceIdMappedProperty(
                                       v21[0],
                                       a2,
                                       *(void **)a5,
                                       *((_QWORD *)a5 + 2),
                                       a5[6],
                                       *((_QWORD *)a5 + 4),
                                       a5[10]);
          }
          else
          {
            DeviceIdMappedProperty = DrvDbGetDeviceIdMappedProperty(
                                       v21[0],
                                       a2,
                                       *(_QWORD *)a5,
                                       *((_QWORD *)a5 + 2),
                                       *((_QWORD *)a5 + 3),
                                       *((_QWORD *)a5 + 4),
                                       a5[10],
                                       *((_QWORD *)a5 + 6));
          }
        }
        else
        {
          DeviceIdMappedProperty = DrvDbGetDeviceIdMappedPropertyKeys(
                                     v21[0],
                                     a2,
                                     *(_QWORD *)a5,
                                     *((_QWORD *)a5 + 3),
                                     a5[8],
                                     *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        DeviceIdMappedProperty = DrvDbGetObjectList(
                                   *(_QWORD **)v21,
                                   5u,
                                   *(_QWORD *)a5,
                                   *((_QWORD *)a5 + 1),
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_DWORD **)a5 + 4),
                                   2);
      }
    }
    else
    {
      DeviceIdMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v21, 5LL, a2);
    }
    goto LABEL_11;
  }
  v20 = *a5;
  v21[0] = 0;
  LODWORD(v8) = DrvDbOpenObjectRegKey(v9, 0, 5, a2, v20, 1, (__int64)(a5 + 2), (__int64)v21);
  if ( (int)v8 >= 0 )
    *((_BYTE *)a5 + 16) = v21[0] == 1;
  return (unsigned int)v8;
}
