/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x1407865A0
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x140786438 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x140160420 (wcschr.c)
 *     wcsrchr @ 0x140160610 (wcsrchr.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _PnpCtxRegEnumValue @ 0x14058469C (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpDeletePropertyWorker @ 0x14059B510 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 **a1, char *a2, const WCHAR *a3, unsigned int a4)
{
  PVOID PoolWithTag; // r13
  unsigned int v5; // r15d
  wchar_t *v6; // r12
  __int64 v8; // r14
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  int inited; // ebx
  __int64 v14; // rcx
  int v15; // eax
  signed int i; // eax
  __int64 v17; // rbx
  __int64 j; // r14
  int v19; // eax
  __int64 v20; // rbx
  size_t v21; // rbx
  wchar_t *v22; // rax
  char *k; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  wchar_t *v29; // rax
  bool v30; // zf
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // edi
  __int64 v35; // rcx
  WCHAR *v36; // rsi
  HANDLE v37; // r14
  __int64 dwFlags; // [rsp+28h] [rbp-38h]
  unsigned int v40; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+58h] BYREF

  Handle = 0LL;
  PoolWithTag = 0LL;
  v5 = 0;
  v6 = 0LL;
  v8 = (__int64)a2;
  if ( a4 <= 1 )
  {
    if ( *a1 && (v10 = **a1) != 0 )
      v11 = *(_QWORD *)(v10 + 8);
    else
      v11 = 0LL;
    v12 = RegRtlDeleteTreeInternal(a2, a3, v11, 0);
    inited = 0;
    if ( v12 != -1073741444 )
      inited = v12;
    goto LABEL_85;
  }
  if ( *a1 )
    v14 = **a1;
  else
    v14 = 0LL;
  v15 = SysCtxRegOpenKey(v14, (__int64)a2, (__int64)a3, 0, 0x3001Fu, (__int64)&Handle);
  inited = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -1073741444 )
      inited = 0;
    goto LABEL_85;
  }
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (int)Handle, 0LL, 0, 0LL, 0, &v44);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (int)Handle, 0LL, 0, (__int64)PoolWithTag, v17, &v44) )
  {
    inited = i;
    if ( i != -1073741789 )
      break;
    v17 = v44;
    if ( v44 <= v5 )
    {
      inited = -1073741595;
      goto LABEL_83;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v5 = v17;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v17, 0x42444450u);
    if ( !PoolWithTag )
    {
      inited = -1073741801;
      break;
    }
  }
  if ( inited != -1073741275 )
  {
    if ( inited < 0 )
      goto LABEL_83;
    for ( j = 0LL; (unsigned int)j < v5; j = (unsigned int)(j + 1) )
    {
      v19 = PnpDeletePropertyWorker(*a1, (int)Handle, 0LL, (__int64)PoolWithTag + 20 * j, 0, dwFlags, 0);
      inited = v19;
      if ( v19 == -1073741275 || v19 == -1073741790 )
      {
        inited = 0;
      }
      else if ( v19 < 0 )
      {
        goto LABEL_83;
      }
    }
    if ( inited < 0 )
      goto LABEL_83;
    v8 = (__int64)a2;
  }
  if ( !wcschr(a3, 0x5Cu) )
  {
    if ( *a1 && (v31 = **a1) != 0 )
      v32 = *(_QWORD *)(v31 + 8);
    else
      v32 = 0LL;
    inited = RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v32);
    if ( inited == -1073741444 )
    {
      inited = 0;
      goto LABEL_83;
    }
    if ( inited != -1073741535 )
      goto LABEL_83;
    inited = PnpCtxRegQueryInfoKey(v33, Handle, 0LL, 0LL, &v44, &v40);
    if ( inited < 0 )
      goto LABEL_83;
    v34 = v40 + 1;
    if ( !v44 )
      goto LABEL_83;
    v36 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v34, 0x42444450u);
    if ( v36 )
    {
      while ( 1 )
      {
        v44 = v34;
        inited = PnpCtxRegEnumValue(v35, (__int64)Handle, 0, (__int64)v36, (__int64)&v44, 0LL, 0LL, 0LL);
        if ( inited < 0 )
          break;
        v37 = Handle;
        inited = RtlInitUnicodeStringEx(&DestinationString, v36);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v37, &DestinationString);
        if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741772 )
          goto LABEL_80;
      }
      if ( inited == -2147483622 )
        inited = 0;
LABEL_80:
      ExFreePoolWithTag(v36, 0);
      goto LABEL_81;
    }
LABEL_39:
    inited = -1073741801;
    goto LABEL_83;
  }
  v20 = -1LL;
  do
    ++v20;
  while ( a3[v20] );
  v21 = v20 + 1;
  v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v21, 0x42444450u);
  v6 = v22;
  if ( !v22 )
    goto LABEL_39;
  RtlStringCchCopyExW(v22, v21, a3, 0LL, 0LL, 0x900u);
  for ( k = (char *)Handle; ; k = 0LL )
  {
    if ( !k )
    {
      v24 = 0LL;
      if ( *a1 )
        v24 = **a1;
      v25 = SysCtxRegOpenKey(v24, v8, (__int64)v6, 0, 0x3001Fu, (__int64)&Handle);
      inited = v25;
      if ( v25 < 0 )
      {
        v30 = v25 == -1073741444;
        goto LABEL_59;
      }
      inited = PnpCtxRegQueryInfoKey(v26, Handle, &v40, 0LL, &v44, 0LL);
      if ( inited < 0 || v40 || v44 )
        goto LABEL_81;
      k = (char *)Handle;
    }
    if ( *a1 && (v27 = **a1) != 0 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    inited = RegRtlDeleteKeyTransacted(k, 0LL, v28);
    if ( inited == -1073741444 )
    {
      inited = 0;
      goto LABEL_56;
    }
    if ( inited < 0 )
      break;
LABEL_56:
    v29 = wcsrchr(v6, 0x5Cu);
    if ( !v29 )
      goto LABEL_81;
    *v29 = 0;
    ZwClose(Handle);
    Handle = 0LL;
  }
  v30 = inited == -1073741535;
LABEL_59:
  if ( v30 )
    inited = 0;
LABEL_81:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_83:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_85:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
