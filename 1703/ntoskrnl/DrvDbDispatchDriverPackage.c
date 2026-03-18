/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x1404E8970
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x1404E8A88 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x140742610 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140743484 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14074380C (DrvDbGetObjectList.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407452F4 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
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
  int DriverPackageMappedProperty; // eax
  char v21; // al
  int v22; // ecx
  int v23[2]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v23 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v23);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = *(_QWORD *)v23;
  v11 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
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
LABEL_24:
        LOBYTE(v11) = (v11 & 0x40000000) != 0;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v8 <= 2 )
      {
LABEL_22:
        LOBYTE(v11) = 1;
        goto LABEL_26;
      }
      if ( v8 <= 4 )
        goto LABEL_24;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_22;
        goto LABEL_24;
      }
    }
    v11 >>= 31;
LABEL_26:
    v21 = -(char)v11;
    v9 = v21 == 0 ? 0xC0000022 : 0;
    if ( !v21 )
      return (unsigned int)v9;
  }
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverPackageMappedProperty = DrvDbValidateDriverInfFileName(v7, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                    *(__int64 *)v23,
                                    0LL,
                                    2u,
                                    a2,
                                    *(_DWORD *)a5,
                                    *((_BYTE *)a5 + 4),
                                    a5[1],
                                    a5 + 2);
LABEL_11:
    LODWORD(v9) = DriverPackageMappedProperty;
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
            DriverPackageMappedProperty = DrvDbSetDriverPackageMappedProperty(
                                            v23[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            *((_DWORD *)a5 + 6),
                                            (void *)a5[4],
                                            *((_DWORD *)a5 + 10));
          }
          else
          {
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            v23[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            a5[3],
                                            (NTSTRSAFE_PWSTR)a5[4],
                                            *((_DWORD *)a5 + 10),
                                            a5[6]);
          }
        }
        else
        {
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedPropertyKeys(
                                          *(_QWORD *)v23,
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverPackageMappedProperty = DrvDbGetObjectList(v23[0], 2, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverPackageMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v23, 2LL, a2);
    }
    goto LABEL_11;
  }
  v22 = *(_DWORD *)a5;
  v23[0] = 0;
  LODWORD(v9) = DrvDbOpenObjectRegKey(v10, 0LL, 2u, a2, v22, 1, a5 + 1, v23);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v23[0] == 1;
  return (unsigned int)v9;
}
