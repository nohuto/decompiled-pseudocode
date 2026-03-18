/*
 * XREFs of EtwpGetAutoLoggerProviderFilter @ 0x140629F3C
 * Callers:
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1402B2230 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1402B25C0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 */

void __fastcall EtwpGetAutoLoggerProviderFilter(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        PVOID *a4,
        _DWORD *a5,
        PVOID *a6,
        _DWORD *a7,
        _QWORD *a8,
        _DWORD *a9,
        PVOID *a10)
{
  __int64 v12; // rax
  SIZE_T v13; // rsi
  wchar_t *PoolWithTag; // rax
  WCHAR *v15; // rdi
  __int64 v16; // r14
  int RegistryValues; // ebx
  _DWORD *v18; // r13
  _DWORD *v19; // r15
  PVOID *v20; // rsi
  PVOID *v21; // rbx
  __int64 v22; // rsi
  PVOID v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  unsigned int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  __int16 v33; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v34; // [rsp+38h] [rbp-C8h]
  _DWORD *v35; // [rsp+40h] [rbp-C0h]
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  PVOID v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  PVOID *v49; // [rsp+A8h] [rbp-58h]
  PVOID *v50; // [rsp+B0h] [rbp-50h]
  PVOID *v51; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v54[2]; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING *v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING *v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING *v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+130h] [rbp+30h] BYREF
  int *v61; // [rsp+138h] [rbp+38h]
  int v62; // [rsp+140h] [rbp+40h] BYREF
  int *v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+150h] [rbp+50h] BYREF
  int *v65; // [rsp+158h] [rbp+58h]
  int v66; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v67; // [rsp+168h] [rbp+68h]
  int v68; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v69; // [rsp+178h] [rbp+78h]
  _QWORD v70[140]; // [rsp+240h] [rbp+140h] BYREF

  v34 = a5;
  v50 = a6;
  v35 = a7;
  v51 = a10;
  v40 = 0LL;
  v41 = 0LL;
  v12 = -1LL;
  v49 = a4;
  v48 = a3;
  KeyHandle = 0LL;
  do
    ++v12;
  while ( *(_WORD *)(a1 + 2 * v12) );
  v13 = (unsigned int)(2 * v12 + 18);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x50777445u);
  v15 = PoolWithTag;
  v16 = 2LL;
  if ( !PoolWithTag )
    goto LABEL_34;
  RegistryValues = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v13, L"%ws\\Filters", a1);
  if ( RegistryValues )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, v15);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues < 0 )
    goto LABEL_6;
  memset(v70, 0, sizeof(v70));
  v21 = (PVOID *)&v40;
  v44 = 0LL;
  v36 = 0;
  v22 = 2LL;
  v33 = 0;
  v45 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  do
  {
    *v21++ = ExAllocatePoolWithTag(PagedPool, 0x86uLL, 0x46777445u);
    --v22;
  }
  while ( v22 );
  *a9 = 1024;
  v23 = ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x50777445u);
  *a8 = v23;
  if ( v23 )
  {
    v24 = v40;
    LODWORD(v70[25]) = 4;
    v60 = 4;
    v70[3] = v54;
    v70[2] = L"ExeFilter";
    v70[5] = &v33;
    v70[10] = &v56;
    v70[9] = L"PackageIdFilter";
    v70[12] = &v33;
    v57 = a2 + 1;
    v70[17] = &v58;
    v70[16] = L"PackageRelativeAppIdFilter";
    v70[19] = &v33;
    v59 = a2 + 2;
    v70[24] = &v60;
    v70[23] = L"EventIdFilterIn";
    v61 = &v37;
    v70[31] = &v62;
    v70[30] = L"StackWalkFilterIn";
    v63 = &v38;
    v70[38] = &v64;
    v70[37] = L"Enabled";
    v65 = &v36;
    v25 = 3LL;
    LODWORD(v46) = *a9;
    v70[45] = &v66;
    v70[44] = L"SchematizedFilters";
    LODWORD(v70[32]) = 4;
    v62 = 4;
    LODWORD(v70[39]) = 4;
    v64 = 4;
    v47 = v23;
    v26 = 7;
    v67 = &v46;
    v70[0] = &EtwpQueryRegistryCallback;
    LODWORD(v70[4]) = 1;
    v54[0] = 1;
    v55 = a2;
    v70[7] = &EtwpQueryRegistryCallback;
    LODWORD(v70[11]) = 1;
    v56 = 1;
    v70[14] = &EtwpQueryRegistryCallback;
    LODWORD(v70[18]) = 1;
    v58 = 1;
    v70[21] = &EtwpQueryRegistryCallback;
    v70[28] = &EtwpQueryRegistryCallback;
    v70[35] = &EtwpQueryRegistryCallback;
    v70[42] = &EtwpQueryRegistryCallback;
    LODWORD(v70[46]) = 3;
    v66 = 3;
    if ( v40 )
    {
      LODWORD(v42) = 128;
      v43 = v40 + 4;
      v26 = 8;
      v70[49] = &EtwpQueryRegistryCallback;
      v70[52] = &v68;
      v70[51] = L"EventIds";
      v69 = &v42;
      LODWORD(v70[53]) = 3;
      v68 = 3;
    }
    v27 = v41;
    if ( v41 )
    {
      LODWORD(v44) = 128;
      v45 = v41 + 4;
      v28 = v26;
      v29 = 7LL * v26;
      v28 *= 16LL;
      v70[v29 + 3] = (char *)v54 + v28;
      *(_DWORD *)((char *)v54 + v28) = 3;
      *(UNICODE_STRING **)((char *)&v55 + v28) = (UNICODE_STRING *)&v44;
      v70[v29] = &EtwpQueryRegistryCallback;
      v70[v29 + 2] = L"StackWalkIds";
      LODWORD(v70[v29 + 4]) = 3;
    }
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v70, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( v24 )
      {
        *(_BYTE *)v24 = v37 != 0;
        *(_WORD *)(v24 + 2) = (unsigned int)v42 >> 1;
      }
      if ( v27 )
      {
        *(_BYTE *)v27 = v38 != 0;
        *(_WORD *)(v27 + 2) = (unsigned int)v44 >> 1;
      }
      *a9 = v46;
      if ( v36 )
      {
        v16 = 2LL;
        v30 = &v40;
        v31 = v48 - (_QWORD)&v40;
        v32 = 2LL;
        do
        {
          *(__int64 *)((char *)v30 + v31) = *v30;
          *v30++ = 0LL;
          --v32;
        }
        while ( v32 );
        v19 = v34;
        EtwpGetAutoLoggerEventNameFilter((__int64)v15, (__int64)L"EventNameFilter", v49, v34);
        v18 = v35;
        EtwpGetAutoLoggerEventNameFilter((__int64)v15, (__int64)L"StackNameFilter", v50, v35);
        EtwpGetAutoLoggerLevelKwFilter((__int64)v15, v51);
        goto LABEL_7;
      }
      do
      {
        RtlFreeAnsiString(a2++);
        --v25;
      }
      while ( v25 );
      *a9 = 0;
    }
    v16 = 2LL;
  }
  else
  {
LABEL_34:
    RegistryValues = -1073741801;
  }
LABEL_6:
  v18 = v35;
  v19 = v34;
LABEL_7:
  v20 = (PVOID *)&v40;
  do
  {
    if ( *v20 )
      ExFreePoolWithTag(*v20, 0);
    ++v20;
    --v16;
  }
  while ( v16 );
  if ( RegistryValues < 0 )
  {
    *v19 = 0;
    *v18 = 0;
    *a9 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
