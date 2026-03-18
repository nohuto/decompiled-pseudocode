/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x1405AED28
 * Callers:
 *     EtwpEnableAutoLoggerProviders @ 0x1405AE838 (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0 (EtwpGetAutoLoggerEventNameFilter.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        PVOID *a4,
        _DWORD *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  _DWORD *v8; // r15
  __int64 v10; // rax
  SIZE_T v11; // rdi
  wchar_t *PoolWithTag; // rax
  WCHAR *v13; // r14
  __int64 v14; // rsi
  int RegistryValues; // ebx
  PVOID *v16; // rdi
  PVOID *v17; // rbx
  __int64 v18; // rdi
  PVOID v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  PVOID *v26; // rdx
  _DWORD *v27; // r8
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 *v30; // rcx
  _WORD v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  _DWORD *v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  PVOID v44; // [rsp+88h] [rbp-78h]
  _QWORD *v45; // [rsp+90h] [rbp-70h]
  PVOID *v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v50[2]; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING *v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING *v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING *v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+120h] [rbp+20h] BYREF
  int *v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+130h] [rbp+30h] BYREF
  int *v59; // [rsp+138h] [rbp+38h]
  int v60; // [rsp+140h] [rbp+40h] BYREF
  int *v61; // [rsp+148h] [rbp+48h]
  int v62; // [rsp+150h] [rbp+50h] BYREF
  __int64 *v63; // [rsp+158h] [rbp+58h]
  int v64; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v65; // [rsp+168h] [rbp+68h]
  _QWORD v66[140]; // [rsp+230h] [rbp+130h] BYREF

  v8 = a5;
  v45 = a6;
  v10 = -1LL;
  v46 = a4;
  v47 = a3;
  v38 = a5;
  do
    ++v10;
  while ( *(_WORD *)(a1 + 2 * v10) );
  KeyHandle = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v11 = (unsigned int)(2 * v10 + 18);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x50777445u);
  v13 = PoolWithTag;
  v14 = 2LL;
  if ( !PoolWithTag )
    goto LABEL_17;
  RegistryValues = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v11, L"%ws\\Filters", a1);
  if ( RegistryValues )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, v13);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues < 0 )
    goto LABEL_6;
  memset(v66, 0, sizeof(v66));
  v17 = (PVOID *)&v36;
  v41 = 0LL;
  v32 = 0;
  v18 = 2LL;
  v31[0] = 0;
  v42 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  do
  {
    *v17++ = ExAllocatePoolWithTag(PagedPool, 0x86uLL, 0x46777445u);
    --v18;
  }
  while ( v18 );
  *a7 = 1024;
  v19 = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x50777445u);
  *v45 = v19;
  if ( v19 )
  {
    v20 = v36;
    LODWORD(v66[25]) = 4;
    v56 = 4;
    v66[3] = v50;
    v66[2] = L"ExeFilter";
    v66[5] = v31;
    v66[10] = &v52;
    v66[9] = L"PackageIdFilter";
    v66[12] = v31;
    v53 = a2 + 1;
    v66[17] = &v54;
    v66[16] = L"PackageRelativeAppIdFilter";
    v66[19] = v31;
    v55 = a2 + 2;
    v66[24] = &v56;
    v66[23] = L"EventIdFilterIn";
    v57 = &v33;
    v66[31] = &v58;
    v66[30] = L"StackWalkFilterIn";
    v59 = &v34;
    v66[38] = &v60;
    v66[37] = L"Enabled";
    v61 = &v32;
    v21 = 3LL;
    LODWORD(v43) = *a7;
    v66[45] = &v62;
    v66[44] = L"SchematizedFilters";
    LODWORD(v66[32]) = 4;
    v58 = 4;
    LODWORD(v66[39]) = 4;
    v60 = 4;
    v22 = 7LL;
    v44 = v19;
    v63 = &v43;
    v66[0] = EtwpQueryRegistryCallback;
    LODWORD(v66[4]) = 1;
    v50[0] = 1;
    v51 = a2;
    v66[7] = EtwpQueryRegistryCallback;
    LODWORD(v66[11]) = 1;
    v52 = 1;
    v66[14] = EtwpQueryRegistryCallback;
    LODWORD(v66[18]) = 1;
    v54 = 1;
    v66[21] = EtwpQueryRegistryCallback;
    v66[28] = EtwpQueryRegistryCallback;
    v66[35] = EtwpQueryRegistryCallback;
    v66[42] = EtwpQueryRegistryCallback;
    LODWORD(v66[46]) = 3;
    v62 = 3;
    if ( v36 )
    {
      LODWORD(v39) = 128;
      v40 = v36 + 4;
      v22 = 8LL;
      v66[49] = EtwpQueryRegistryCallback;
      v66[52] = &v64;
      v66[51] = L"EventIds";
      v65 = &v39;
      LODWORD(v66[53]) = 3;
      v64 = 3;
    }
    v23 = v37;
    if ( v37 )
    {
      LODWORD(v41) = 128;
      v24 = 7 * v22;
      v42 = v37 + 4;
      v25 = 16 * v22;
      v66[v24] = EtwpQueryRegistryCallback;
      v66[v24 + 3] = &v50[(unsigned __int64)v25 / 4];
      v50[(unsigned __int64)v25 / 4] = 3;
      v66[v24 + 2] = L"StackWalkIds";
      (&v51)[(unsigned __int64)v25 / 8] = (UNICODE_STRING *)&v41;
      LODWORD(v66[v24 + 4]) = 3;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v66, 0LL);
    if ( RegistryValues < 0 )
    {
      v8 = v38;
    }
    else
    {
      if ( v20 )
      {
        *(_BYTE *)v20 = v33 != 0;
        *(_WORD *)(v20 + 2) = (unsigned int)v39 >> 1;
      }
      if ( v23 )
      {
        *(_BYTE *)v23 = v34 != 0;
        *(_WORD *)(v23 + 2) = (unsigned int)v41 >> 1;
      }
      v8 = v38;
      v26 = v46;
      v27 = v38;
      *a7 = v43;
      EtwpGetAutoLoggerEventNameFilter((__int64)v13, v26, v27);
      if ( v32 )
      {
        v14 = 2LL;
        v28 = v47 - (_QWORD)&v36;
        v29 = 2LL;
        v30 = &v36;
        do
        {
          *(__int64 *)((char *)v30 + v28) = *v30;
          *v30++ = 0LL;
          --v29;
        }
        while ( v29 );
        goto LABEL_6;
      }
      do
      {
        RtlFreeUnicodeString(a2++);
        --v21;
      }
      while ( v21 );
      *v8 = 0;
      *a7 = 0;
    }
    v14 = 2LL;
  }
  else
  {
LABEL_17:
    RegistryValues = -1073741801;
  }
LABEL_6:
  v16 = (PVOID *)&v36;
  do
  {
    if ( *v16 )
      ExFreePoolWithTag(*v16, 0);
    ++v16;
    --v14;
  }
  while ( v14 );
  if ( RegistryValues < 0 )
  {
    *v8 = 0;
    *a7 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
