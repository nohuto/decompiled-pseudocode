/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x14050D160
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1405027D0 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x14050C924 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140571B6C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x1407F121C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1407F1F24 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x1407F240C (DrvDbGetObjectList.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x1407F3694 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1407F3F50 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  int v7; // r10d
  __int64 v8; // r8
  _QWORD *v9; // r11
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int DriverInfFileMappedProperty; // eax
  int v20; // ecx
  _QWORD *v21[3]; // [rsp+40h] [rbp-18h] BYREF

  v21[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  v8 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v8;
  v9 = v21[0];
  v10 = *((unsigned int *)v21[0] + 3);
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
    DriverInfFileMappedProperty = DrvDbValidateDriverInfFileName(v10, a2, v8);
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DriverInfFileMappedProperty = DrvDbOpenObjectRegKey(
                                    v21[0],
                                    0LL,
                                    3u,
                                    a2,
                                    *(_DWORD *)a5,
                                    *((_BYTE *)a5 + 4),
                                    a5[1],
                                    a5 + 2);
LABEL_11:
    LODWORD(v8) = DriverInfFileMappedProperty;
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
            DriverInfFileMappedProperty = DrvDbSetDriverInfFileMappedProperty(
                                            v21[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            *((_DWORD *)a5 + 6),
                                            a5[4],
                                            *((_DWORD *)a5 + 10));
          }
          else
          {
            DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedProperty(
                                            v21[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            a5[3],
                                            a5[4],
                                            *((_DWORD *)a5 + 10),
                                            a5[6]);
          }
        }
        else
        {
          DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedPropertyKeys(
                                          v21[0],
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverInfFileMappedProperty = DrvDbGetObjectList(v21[0], 3, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverInfFileMappedProperty = DrvDbDeleteObjectRegKey(v21[0], 3LL, a2, 0LL);
    }
    goto LABEL_11;
  }
  v20 = *(_DWORD *)a5;
  LODWORD(v21[0]) = 0;
  LODWORD(v8) = DrvDbOpenObjectRegKey(v9, 0LL, 3u, a2, v20, 1, a5 + 1, v21);
  if ( (int)v8 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v21[0]) == 1;
  return (unsigned int)v8;
}
