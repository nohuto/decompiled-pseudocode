/*
 * XREFs of DrvDbLoadDatabaseNode @ 0x140533B00
 * Callers:
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140443CDC (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140459BE0 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenContext @ 0x1405C4F28 (DrvDbOpenContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140459A60 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     DrvDbUnloadDatabaseNode @ 0x140533D40 (DrvDbUnloadDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x140787C44 (DrvDbInitializeDatabaseNodeVersion.c)
 */

__int64 __fastcall DrvDbLoadDatabaseNode(__int64 **a1, __int64 a2)
{
  int v2; // eax
  int CachedContextBaseKey; // ebx
  __int64 v4; // r15
  void *v5; // r13
  __int64 (__fastcall *v6)(__int64 **, _QWORD, __int64); // r12
  int v9; // eax
  void **v10; // r14
  int v11; // eax
  int v12; // eax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // r8
  int *v18; // r15
  const wchar_t *v19; // rdx
  int DriverDatabaseMappedProperty; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 SecurityDescriptor; // rax
  int v24; // edx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(_DWORD *)(a2 + 56);
  CachedContextBaseKey = 0;
  v28 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v27 = 1;
  if ( (v2 & 1) == 0 )
  {
    v6 = *(__int64 (__fastcall **)(__int64 **, _QWORD, __int64))(a2 + 64);
    if ( v6 )
    {
      v9 = v6(a1, *(_QWORD *)(a2 + 24), 1LL);
      if ( v9 == -1073741822 )
      {
        v6 = 0LL;
      }
      else if ( v9 < 0 )
      {
        CachedContextBaseKey = v9;
        goto LABEL_7;
      }
    }
    v10 = (void **)(a2 + 80);
    if ( !*(_QWORD *)(a2 + 80) )
    {
      v24 = *(_DWORD *)(a2 + 32);
      if ( v24 )
      {
        CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v24, &v29);
        if ( CachedContextBaseKey < 0 )
          goto LABEL_7;
        v4 = v29;
      }
      v25 = *a1 ? **a1 : 0LL;
      CachedContextBaseKey = SysCtxRegOpenKey(v25, v4, *(_QWORD *)(a2 + 48), 0, 0x2000000u, a2 + 80);
      if ( CachedContextBaseKey < 0 )
      {
LABEL_7:
        if ( v6 )
        {
          v12 = v6(a1, *(_QWORD *)(a2 + 24), 1LL);
          if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741822 && !CachedContextBaseKey )
            CachedContextBaseKey = v12;
        }
        goto LABEL_9;
      }
    }
LABEL_6:
    v11 = *(_DWORD *)(a2 + 56);
    if ( (v11 & 8) != 0 )
      goto LABEL_7;
    v17 = *v10;
    v18 = (int *)(a2 + 60);
    v19 = *(const wchar_t **)(a2 + 24);
    *(_DWORD *)(a2 + 56) = v11 | 8;
    DriverDatabaseMappedProperty = DrvDbGetDriverDatabaseMappedProperty(
                                     (__int64)a1,
                                     v19,
                                     v17,
                                     (__int64)&DEVPKEY_DriverDatabase_Version,
                                     &v27,
                                     (_DWORD *)(a2 + 60),
                                     4u,
                                     &v28);
    CachedContextBaseKey = DriverDatabaseMappedProperty;
    if ( DriverDatabaseMappedProperty == -1073741275 )
    {
      v26 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)(v26 - 1) <= 0xFFFFFFFD )
      {
        *v18 = v26;
        DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_52:
        CachedContextBaseKey = 0;
LABEL_28:
        v21 = *v18;
        if ( *v18 )
        {
          if ( v21 == -1 || (v22 = v21 & 0xFFFF0000, v22 < 0x6020000) || v22 > ((_DWORD)a1[1] & 0xFFFF0000) )
          {
            DrvDbUnloadDatabaseNode(a1, a2);
            *(_DWORD *)(a2 + 56) |= 4u;
            CachedContextBaseKey = -1073740697;
          }
        }
        goto LABEL_7;
      }
    }
    else if ( DriverDatabaseMappedProperty >= 0 )
    {
      if ( v27 != 7 || v28 != 4 )
        *v18 = -1;
      goto LABEL_28;
    }
    *v18 = 0;
    goto LABEL_52;
  }
  v10 = (void **)(a2 + 80);
  if ( *(_QWORD *)(a2 + 80) )
    goto LABEL_9;
  if ( a1[4] )
  {
    CachedContextBaseKey = -1073741811;
    goto LABEL_9;
  }
  v14 = *(_DWORD *)(a2 + 32);
  if ( v14 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*a1, v14, &v29);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_9;
    v4 = v29;
  }
  if ( *a1 )
    v15 = **a1;
  else
    v15 = 0LL;
  v16 = SysCtxRegOpenKey(v15, v4, *(_QWORD *)(a2 + 48), 0, 0x2000000u, (__int64)v10);
  CachedContextBaseKey = v16;
  if ( v16 != -1073741772 )
  {
    if ( v16 < 0 )
      goto LABEL_9;
    goto LABEL_23;
  }
  SecurityDescriptor = DrvDbGetSecurityDescriptor();
  v5 = (void *)SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    CachedContextBaseKey = -1073741595;
    goto LABEL_9;
  }
  CachedContextBaseKey = PnpCtxRegCreateTree(*a1, v4, *(_QWORD *)(a2 + 48), 0LL, 0x2000000, SecurityDescriptor);
  if ( CachedContextBaseKey >= 0 )
  {
    DrvDbInitializeDatabaseNodeVersion(a1, a2);
LABEL_23:
    a1[4] = (__int64 *)a2;
    goto LABEL_6;
  }
LABEL_9:
  *(_DWORD *)(a2 + 144) = CachedContextBaseKey;
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)CachedContextBaseKey;
}
