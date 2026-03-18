/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1405027D0
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x14050C810 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x14050D160 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140571B6C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x1405D79A0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1405D7A7C (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1406480AC (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1407F1894 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1407F1978 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x1407F1C88 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1407F1DB8 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1407F1F24 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407F2090 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x1407F2DB4 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1407F2F8C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1407F3574 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x1407F3694 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x1407F44B0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbGetObjectDatabaseNode @ 0x140501AF4 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x140502738 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140502990 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(_QWORD *a1, __int64 a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // ebx
  _QWORD *i; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int Tree; // eax
  void *v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  wchar_t *v23; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v25; // [rsp+A0h] [rbp+50h]
  __int64 v26; // [rsp+A8h] [rbp+58h]
  __int64 v27; // [rsp+B0h] [rbp+60h]
  _DWORD *v28; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, wchar_t *);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _DWORD *);
  v20 = 0LL;
  v21 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode((__int64)a1, v23, (wchar_t **)va, &v21);
  v8 = v21;
  v9 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v21 || (v8 = a2) != 0 )
    {
      v15 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v20);
      v9 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073740697 )
          v9 = -1073741772;
        goto LABEL_17;
      }
      v16 = *a1;
      if ( !(_BYTE)v26 )
      {
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 224);
        else
          LODWORD(v17) = 0;
        v9 = SysCtxRegOpenKey(v17, (_DWORD)v20, (_DWORD)v23, 0, v25, v27);
        if ( v9 >= 0 && v28 )
          *v28 = 2;
        goto LABEL_17;
      }
      Tree = PnpCtxRegCreateTree(v16, (_DWORD)v20, (_DWORD)v23, 0, v25, 0LL, v27, (__int64)v28);
LABEL_34:
      v9 = Tree;
      goto LABEL_17;
    }
    for ( i = (_QWORD *)a1[2]; i != a1 + 2; i = (_QWORD *)*i )
    {
      v8 = (__int64)i;
      v11 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v20);
      v9 = v11;
      if ( v11 == -1073740697 )
      {
        v9 = -1073741772;
      }
      else
      {
        if ( v11 < 0 )
          break;
        if ( *a1 )
          v12 = *(_QWORD *)(*a1 + 224LL);
        else
          LODWORD(v12) = 0;
        v9 = SysCtxRegOpenKey(v12, (_DWORD)v20, (_DWORD)v23, 0, v25, v27);
        DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, (__int64)i, v13, v20);
        v20 = 0LL;
        if ( v9 != -1073741772 )
          return (unsigned int)v9;
      }
    }
    if ( v9 == -1073741772 && (_BYTE)v26 )
    {
      v8 = a1[4];
      v18 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v20);
      v9 = v18;
      if ( v18 < 0 )
      {
        if ( v18 == -1073740697 )
          v9 = -1073741662;
        goto LABEL_17;
      }
      Tree = PnpCtxRegCreateTree(*a1, (_DWORD)v20, (_DWORD)v23, 0, v25, 0LL, v27, 0LL);
      goto LABEL_34;
    }
  }
LABEL_17:
  if ( v20 )
    DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, v8, v7, v20);
  return (unsigned int)v9;
}
