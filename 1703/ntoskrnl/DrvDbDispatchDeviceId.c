/*
 * XREFs of DrvDbDispatchDeviceId @ 0x1404E8890
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140488504 (DrvDbGetDeviceIdMappedProperty.c)
 *     _PnpCtxGetObjectContext @ 0x1404E8A88 (_PnpCtxGetObjectContext.c)
 *     DrvDbDeleteObjectRegKey @ 0x140742610 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140742C9C (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14074380C (DrvDbGetObjectList.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x14074417C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbValidateDeviceIdName @ 0x140745218 (DrvDbValidateDeviceIdName.c)
 */

__int64 __fastcall DrvDbDispatchDeviceId(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // r11
  unsigned int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DeviceIdMappedProperty; // eax
  char v21; // al
  int v22; // ecx
  __int64 v23[3]; // [rsp+40h] [rbp-18h] BYREF

  v23[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v23);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v23[0];
  v11 = *(_DWORD *)(v23[0] + 12);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    if ( v8 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_23:
        LOBYTE(v11) = (v11 & 0x40000000) != 0;
        goto LABEL_25;
      }
    }
    else
    {
      if ( v8 <= 2 )
      {
LABEL_21:
        LOBYTE(v11) = 1;
        goto LABEL_25;
      }
      if ( v8 <= 4 )
        goto LABEL_23;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_21;
        goto LABEL_23;
      }
    }
    v11 >>= 31;
LABEL_25:
    v21 = -(char)v11;
    v9 = v21 == 0 ? 0xC0000022 : 0;
    if ( !v21 )
      return (unsigned int)v9;
  }
  v12 = v8 - 1;
  if ( !v12 )
  {
    DeviceIdMappedProperty = DrvDbValidateDeviceIdName(v7, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    DeviceIdMappedProperty = DrvDbOpenObjectRegKey(
                               v23[0],
                               0LL,
                               5u,
                               a2,
                               *a5,
                               *((_BYTE *)a5 + 4),
                               *((_QWORD *)a5 + 1),
                               a5 + 4);
LABEL_11:
    LODWORD(v9) = DeviceIdMappedProperty;
    return (unsigned int)v9;
  }
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
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DeviceIdMappedProperty = DrvDbSetDeviceIdMappedProperty(
                                       v23[0],
                                       a2,
                                       *(_QWORD *)a5,
                                       *((_QWORD *)a5 + 2),
                                       a5[6],
                                       *((_QWORD *)a5 + 4),
                                       a5[10]);
          }
          else
          {
            DeviceIdMappedProperty = DrvDbGetDeviceIdMappedProperty(
                                       v23[0],
                                       a2,
                                       *(HANDLE *)a5,
                                       *((_QWORD *)a5 + 2),
                                       *((_DWORD **)a5 + 3),
                                       *((_QWORD *)a5 + 4),
                                       a5[10],
                                       *((int **)a5 + 6));
          }
        }
        else
        {
          DeviceIdMappedProperty = DrvDbGetDeviceIdMappedPropertyKeys(
                                     v23[0],
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
                                   v23[0],
                                   5,
                                   *(_QWORD *)a5,
                                   *((_QWORD *)a5 + 1),
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   2);
      }
    }
    else
    {
      DeviceIdMappedProperty = DrvDbDeleteObjectRegKey(v23[0], 5LL, a2);
    }
    goto LABEL_11;
  }
  v22 = *a5;
  LODWORD(v23[0]) = 0;
  LODWORD(v9) = DrvDbOpenObjectRegKey(v10, 0LL, 5u, a2, v22, 1, a5 + 2, v23);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v23[0]) == 1;
  return (unsigned int)v9;
}
