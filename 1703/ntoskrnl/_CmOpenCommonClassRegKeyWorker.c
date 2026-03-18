/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x1404E2728
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x1404E25D8 (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1404E290C (_CmGetCommonClassRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned int v12; // r14d
  SIZE_T i; // rdx
  wchar_t *pszDest; // rdi
  int CommonClassRegKeyPath; // ebx
  __int64 v16; // r14
  HANDLE v17; // rdx
  __int64 v18; // rcx
  int Tree; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v26; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF

  v26 = 0LL;
  Handle = 0LL;
  v12 = (a3 & 0x200) != 0 ? 320 : 200;
  for ( i = v12; ; i = (unsigned int)v21 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = v12 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v12 >> 1, a2, a3, a4, v23, pszDest, cchDest, (__int64)&v28);
    if ( CommonClassRegKeyPath != -1073741789 )
      goto LABEL_4;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v21 = 2LL * (unsigned int)v28;
    if ( v21 > 0xFFFFFFFF )
    {
      CommonClassRegKeyPath = -1073741675;
      goto LABEL_20;
    }
    v12 = 2 * v28;
  }
  CommonClassRegKeyPath = -1073741801;
LABEL_4:
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_20;
  if ( (a3 & 0x100) != 0 )
  {
    v16 = (__int64)pszDest;
    if ( a1 )
      v22 = *a1;
    else
      v22 = 0LL;
    CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v22, 0LL, 0x2000000LL, &Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_20;
    v17 = Handle;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_20;
    if ( DestinationString.Length >= v12
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_20;
    }
    v16 = (__int64)(pszDest + 25);
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v26);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_20;
    v17 = v26;
  }
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, (__int64)v17, v16, 0LL, a5, 0LL);
  }
  else
  {
    if ( a1 )
      v18 = *a1;
    else
      v18 = 0LL;
    Tree = SysCtxRegOpenKey(v18, (__int64)v17, v16, 0, a5, a7);
    if ( Tree >= 0 )
      *a8 = 2;
  }
  if ( Tree == -1073741444 )
  {
    CommonClassRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    CommonClassRegKeyPath = Tree;
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
