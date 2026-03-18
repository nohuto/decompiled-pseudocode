/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x14053360C
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140443EA8 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140448F74 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140459A60 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140530214 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDeviceId @ 0x1405305C0 (DrvDbDispatchDeviceId.c)
 *     DrvDbDispatchDriverInfFile @ 0x140530710 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140531474 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x1405317C0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140786AC8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140786BA4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140786EA4 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140786FD4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140787140 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407872AC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1407875D4 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140787CF0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1405337FC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140533A0C (DrvDbGetObjectDatabaseNode.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 **a1, __int64 *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  __int64 *v8; // rsi
  int Tree; // ebx
  __int64 **i; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v23; // [rsp+A0h] [rbp+50h]
  __int64 v24; // [rsp+A8h] [rbp+58h]
  __int64 v25; // [rsp+B0h] [rbp+60h]
  _DWORD *v26; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _DWORD *);
  v18 = 0LL;
  v19 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v21, (__int64 *)va, &v19);
  v8 = v19;
  Tree = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v19 || (v8 = a2) != 0LL )
    {
      v15 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v18);
      Tree = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073740697 )
          Tree = -1073741772;
        goto LABEL_17;
      }
      if ( !(_BYTE)v24 )
      {
        v16 = 0LL;
        if ( *a1 )
          v16 = **a1;
        Tree = SysCtxRegOpenKey(v16, v18, v21, 0, v23, v25);
        if ( Tree >= 0 && v26 )
          *v26 = 2;
        goto LABEL_17;
      }
LABEL_24:
      Tree = PnpCtxRegCreateTree(*a1, v18, v21, 0LL, v23, 0LL);
      goto LABEL_17;
    }
    for ( i = (__int64 **)a1[2]; i != a1 + 2; i = (__int64 **)*i )
    {
      v8 = (__int64 *)i;
      v11 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v18);
      Tree = v11;
      if ( v11 == -1073740697 )
      {
        Tree = -1073741772;
      }
      else
      {
        if ( v11 < 0 )
          break;
        if ( *a1 )
          v12 = **a1;
        else
          v12 = 0LL;
        Tree = SysCtxRegOpenKey(v12, v18, v21, 0, v23, v25);
        DrvDbReleaseDatabaseNodeBaseKey(a1, i, v13, v18);
        v18 = 0LL;
        if ( Tree != -1073741772 )
          return (unsigned int)Tree;
      }
    }
    if ( Tree == -1073741772 && (_BYTE)v24 )
    {
      v8 = a1[4];
      v17 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v18);
      Tree = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073740697 )
          Tree = -1073741662;
        goto LABEL_17;
      }
      goto LABEL_24;
    }
  }
LABEL_17:
  if ( v18 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v8, v7, v18);
  return (unsigned int)Tree;
}
