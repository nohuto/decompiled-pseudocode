/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x14050C810
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1405027D0 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x14050C924 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x1407F121C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407F2090 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x1407F240C (DrvDbGetObjectList.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407F3F50 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  int v7; // r10d
  __int64 v8; // r8
  _QWORD *v9; // r11
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10d
  int DriverPackageMappedProperty; // eax
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // ecx
  int v21[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v21 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  v8 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v8;
  v9 = *(_QWORD **)v21;
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
LABEL_24:
        v10 = (unsigned int)v10 >> 30;
        LOBYTE(v10) = v10 & 1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v7 <= 2 )
      {
LABEL_22:
        LOBYTE(v10) = 1;
        goto LABEL_26;
      }
      if ( v7 <= 4 )
        goto LABEL_24;
      if ( v7 > 6 && v7 != 8 )
      {
        if ( v7 != 9 )
          goto LABEL_22;
        goto LABEL_24;
      }
    }
    v10 = (unsigned int)v10 >> 31;
LABEL_26:
    v8 = (_BYTE)v10 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v10 )
      return (unsigned int)v8;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    DriverPackageMappedProperty = DrvDbValidateDriverInfFileName(v10, a2, v8);
    goto LABEL_6;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                    *(_QWORD **)v21,
                                    0LL,
                                    2u,
                                    a2,
                                    *(_DWORD *)a5,
                                    *((_BYTE *)a5 + 4),
                                    a5[1],
                                    a5 + 2);
LABEL_6:
    LODWORD(v8) = DriverPackageMappedProperty;
    return (unsigned int)v8;
  }
  v15 = v12 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 2;
          if ( v19 )
          {
            if ( v19 != 1 )
            {
              LODWORD(v8) = -1073741811;
              return (unsigned int)v8;
            }
            DriverPackageMappedProperty = DrvDbSetDriverPackageMappedProperty(
                                            v21[0],
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
                                            v21[0],
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
                                          *(_QWORD *)v21,
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverPackageMappedProperty = DrvDbGetObjectList(v21[0], 2, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverPackageMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v21, 2LL, a2, 0LL);
    }
    goto LABEL_6;
  }
  v20 = *(_DWORD *)a5;
  v21[0] = 0;
  LODWORD(v8) = DrvDbOpenObjectRegKey(v9, 0LL, 2u, a2, v20, 1, a5 + 1, v21);
  if ( (int)v8 >= 0 )
    *((_BYTE *)a5 + 16) = v21[0] == 1;
  return (unsigned int)v8;
}
