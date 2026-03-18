/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x140781540
 * Callers:
 *     _CmMoveBaseContainer @ 0x1407817A0 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumValue @ 0x14058469C (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 *a1, __int64 a2, __int64 a3, PVOID *a4)
{
  _WORD *v8; // r14
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edi
  PVOID PoolWithTag; // rax
  __int64 v16; // rcx
  unsigned int i; // r15d
  int v19; // eax
  PVOID v20; // rax
  int v21; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v23; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v24; // [rsp+58h] [rbp-8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 9, &v25);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *a1;
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v25, a2, 0, 1u, (__int64)&v24);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *a1;
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v24, (__int64)L"BaseContainers", 0, 1u, (__int64)&v23);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *a1;
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v23, a3, 0, 3u, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, Handle, 0LL, 0LL, &v21, (unsigned int *)&v25);
          if ( CachedContextBaseKey >= 0 )
          {
            v14 = v21 * (v25 + 1) + 1;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v14, 0x52504E50u);
            *a4 = PoolWithTag;
            v8 = PoolWithTag;
            if ( !PoolWithTag )
            {
              CachedContextBaseKey = -1073741801;
LABEL_14:
              if ( !*a4 )
                goto LABEL_17;
              ExFreePoolWithTag(*a4, 0);
              goto LABEL_16;
            }
            for ( i = 0; ; ++i )
            {
              LODWORD(v25) = v14 - 1;
              v19 = PnpCtxRegEnumValue(v16, (__int64)Handle, i, (__int64)v8, (__int64)&v25, 0LL, 0LL, 0LL);
              CachedContextBaseKey = v19;
              if ( v19 == -2147483622 )
                break;
              if ( v19 < 0 )
                goto LABEL_29;
              v16 = (unsigned int)(v25 + 1);
              v14 -= v16;
              v8 += v16;
            }
            CachedContextBaseKey = 0;
          }
        }
      }
    }
  }
LABEL_29:
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
  if ( CachedContextBaseKey < 0 )
    goto LABEL_14;
  if ( *a4 )
  {
    *v8 = 0;
  }
  else
  {
    v20 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x52504E50u);
    *a4 = v20;
    if ( v20 )
    {
LABEL_16:
      *a4 = 0LL;
      goto LABEL_17;
    }
    CachedContextBaseKey = -1073741801;
  }
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  if ( v24 )
    ZwClose(v24);
  return (unsigned int)CachedContextBaseKey;
}
