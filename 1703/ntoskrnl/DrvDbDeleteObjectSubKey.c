/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x140742778
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x140742610 (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140081B60 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     wcsrchr @ 0x14016BD30 (wcsrchr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1404E660C (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumValue @ 0x1404E67DC (_PnpCtxRegEnumValue.c)
 *     _PnpDeletePropertyWorker @ 0x1405757E8 (_PnpDeletePropertyWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
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
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r8
  wchar_t *v30; // rax
  bool v31; // zf
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned int v36; // edi
  __int64 v37; // rcx
  PVOID v38; // rsi
  HANDLE v39; // r14
  __int64 dwFlags; // [rsp+28h] [rbp-38h]
  unsigned int v42; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+58h] BYREF

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
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle, 0LL, 0, 0LL, 0, &v46);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (__int64)Handle, 0LL, 0, (__int64)PoolWithTag, v17, &v46) )
  {
    inited = i;
    if ( i != -1073741789 )
      break;
    v17 = v46;
    if ( v46 <= v5 )
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
      v19 = PnpDeletePropertyWorker(*a1, (__int64)Handle, 0LL, (__int64)PoolWithTag + 20 * j, 0, dwFlags, 0);
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
    if ( *a1 && (v32 = **a1) != 0 )
      v33 = *(_QWORD *)(v32 + 8);
    else
      v33 = 0LL;
    inited = RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v33);
    if ( inited == -1073741444 )
    {
      inited = 0;
      goto LABEL_83;
    }
    if ( inited != -1073741535 )
      goto LABEL_83;
    inited = PnpCtxRegQueryInfoKey(v34, Handle, 0LL, v35, &v46, &v42);
    if ( inited < 0 )
      goto LABEL_83;
    v36 = v42 + 1;
    if ( !v46 )
      goto LABEL_83;
    v38 = ExAllocatePoolWithTag(PagedPool, 2LL * v36, 0x42444450u);
    if ( v38 )
    {
      while ( 1 )
      {
        v46 = v36;
        inited = PnpCtxRegEnumValue(v37, Handle, 0, v38, &v46, 0LL, 0LL, 0LL);
        if ( inited < 0 )
          break;
        v39 = Handle;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v38);
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(v39, &DestinationString);
        if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741772 )
          goto LABEL_80;
      }
      if ( inited == -2147483622 )
        inited = 0;
LABEL_80:
      ExFreePoolWithTag(v38, 0);
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
        v31 = v25 == -1073741444;
        goto LABEL_59;
      }
      inited = PnpCtxRegQueryInfoKey(v26, Handle, &v42, v27, &v46, 0LL);
      if ( inited < 0 || v42 || v46 )
        goto LABEL_81;
      k = (char *)Handle;
    }
    if ( *a1 && (v28 = **a1) != 0 )
      v29 = *(_QWORD *)(v28 + 8);
    else
      v29 = 0LL;
    inited = RegRtlDeleteKeyTransacted(k, 0LL, v29);
    if ( inited == -1073741444 )
    {
      inited = 0;
      goto LABEL_56;
    }
    if ( inited < 0 )
      break;
LABEL_56:
    v30 = wcsrchr(v6, 0x5Cu);
    if ( !v30 )
      goto LABEL_81;
    *v30 = 0;
    ZwClose(Handle);
    Handle = 0LL;
  }
  v31 = inited == -1073741535;
LABEL_59:
  if ( v31 )
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
