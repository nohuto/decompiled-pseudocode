/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x140486A00
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x140488504 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1404E8230 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDeviceId @ 0x1404E8890 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverPackage @ 0x1404E8970 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1404E9634 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14059E3E8 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140742C9C (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140742D74 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140743070 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1407431AC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140743318 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140743484 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x14074417C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140744354 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140744918 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140744A48 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140745820 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140486BA8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140486D20 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140486E48 (DrvDbGetObjectDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 a1, _QWORD *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *i; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int Tree; // eax
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v24; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h]
  __int64 v26; // [rsp+B0h] [rbp+60h]
  _DWORD *v27; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _DWORD *);
  v19 = 0LL;
  v20 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v22, (__int64 *)va, &v20);
  v8 = v20;
  v9 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v20 || (v8 = a2) != 0LL )
    {
      v10 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v19);
      v9 = v10;
      if ( v10 < 0 )
      {
        if ( v10 == -1073740697 )
          v9 = -1073741772;
        goto LABEL_9;
      }
      if ( !(_BYTE)v25 )
      {
        v11 = 0LL;
        if ( *(_QWORD *)a1 )
          v11 = **(_QWORD **)a1;
        v9 = SysCtxRegOpenKey(v11, v19, v22, 0, v24, v26);
        if ( v9 >= 0 && v27 )
          *v27 = 2;
        goto LABEL_9;
      }
      Tree = PnpCtxRegCreateTree(*(_QWORD *)a1, v19, v22, 0, v24, 0LL, v26, (__int64)v27);
      goto LABEL_33;
    }
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
    {
      v8 = i;
      v14 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v19);
      v9 = v14;
      if ( v14 == -1073740697 )
      {
        v9 = -1073741772;
      }
      else
      {
        if ( v14 < 0 )
          break;
        if ( *(_QWORD *)a1 )
          v15 = **(_QWORD **)a1;
        else
          v15 = 0LL;
        v9 = SysCtxRegOpenKey(v15, v19, v22, 0, v24, v26);
        DrvDbReleaseDatabaseNodeBaseKey(a1, i, v16, v19);
        v19 = 0LL;
        if ( v9 != -1073741772 )
          return (unsigned int)v9;
      }
    }
    if ( v9 == -1073741772 && (_BYTE)v25 )
    {
      v8 = *(_QWORD **)(a1 + 32);
      v17 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v19);
      v9 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073740697 )
          v9 = -1073741662;
        goto LABEL_9;
      }
      Tree = PnpCtxRegCreateTree(*(_QWORD *)a1, v19, v22, 0, v24, 0LL, v26, 0LL);
LABEL_33:
      v9 = Tree;
    }
  }
LABEL_9:
  if ( v19 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v8, v7, v19);
  return (unsigned int)v9;
}
