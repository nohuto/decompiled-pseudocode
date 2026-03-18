/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C003EEB0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0059068 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0061784 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0063F4C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0069AC0 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetDisplayDriverParameters @ 0x1C006AF2C (DrvGetDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C008AA14 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092450 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0092598 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4D44 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C00FA67C (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0070360 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C008B024 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0096620 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     wcschr @ 0x1C00A7308 (wcschr.c)
 *     wcsstr @ 0x1C00A7330 (wcsstr.c)
 *     toupper @ 0x1C00A7568 (toupper.c)
 *     _wcsnicmp @ 0x1C00A75CC (_wcsnicmp.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        NTSTATUS *a6,
        unsigned __int16 a7)
{
  __int64 v8; // r13
  unsigned __int16 *v9; // r15
  int v10; // ebx
  WCHAR *v11; // rsi
  WCHAR *v12; // r14
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  WCHAR *v17; // rax
  NTSTATUS v18; // edi
  WCHAR *v19; // rax
  const WCHAR *v20; // rdx
  _WORD *v21; // rbx
  wchar_t *v22; // rbx
  __int64 v23; // rdi
  wchar_t *v24; // r14
  __int64 v25; // rax
  int v27; // eax
  const WCHAR *v28; // rdx
  const WCHAR *v29; // rdx
  unsigned __int16 *v30; // rcx
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  wchar_t *v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  int v47; // r12d
  __int64 v48; // r13
  signed int v49; // r14d
  unsigned __int16 *v50; // rax
  unsigned __int16 *v51; // r15
  unsigned __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned __int16 *v55; // rcx
  char *v56; // rcx
  __int64 v57; // rdx
  char *v58; // r8
  __int16 v59; // ax
  _WORD *i; // r14
  int v61; // r13d
  wchar_t *v62; // r14
  wchar_t *v63; // rcx
  wchar_t *v64; // r15
  __int64 v65; // rcx
  __int64 v67; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Length; // [rsp+58h] [rbp-A8h]
  wchar_t *Str1; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  int v73; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v74; // [rsp+80h] [rbp-80h]
  void *KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v77; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v78; // [rsp+C8h] [rbp-38h]
  WCHAR *v79; // [rsp+D0h] [rbp-30h]
  ULONG ResultLength; // [rsp+D8h] [rbp-28h] BYREF
  ULONG v81; // [rsp+DCh] [rbp-24h] BYREF
  size_t Size; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v83; // [rsp+E8h] [rbp-18h]
  unsigned int *v84; // [rsp+F0h] [rbp-10h]
  NTSTATUS *v85; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v86[168]; // [rsp+100h] [rbp+0h] BYREF

  v8 = a2;
  v9 = a1;
  v85 = a6;
  v84 = a3;
  v78 = a1;
  Handle = 0LL;
  v10 = 0;
  v74 = a4;
  v11 = 0LL;
  v73 = a2;
  v12 = 0LL;
  memset(v86, 0, 0x148uLL);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v14[6] = a7;
  v14[3] = v9;
  v14[4] = v8;
  v14[5] = a3;
  WdLogEvent5_WdTrace(v14);
  if ( a4 && !a5 )
  {
    v18 = -1073741811;
    goto LABEL_31;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && Object
    && (PVOID)PsGetCurrentProcess() != gpepCSRSS
    && !UserIsCurrentProcessDwm()
    && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
  {
    v30 = v86;
    v31 = 2LL;
    do
    {
      v30 += 64;
      v32 = *(_OWORD *)v9;
      v33 = *((_OWORD *)v9 + 1);
      v9 += 64;
      *((_OWORD *)v30 - 8) = v32;
      v34 = *((_OWORD *)v9 - 6);
      *((_OWORD *)v30 - 7) = v33;
      v35 = *((_OWORD *)v9 - 5);
      *((_OWORD *)v30 - 6) = v34;
      v36 = *((_OWORD *)v9 - 4);
      *((_OWORD *)v30 - 5) = v35;
      v37 = *((_OWORD *)v9 - 3);
      *((_OWORD *)v30 - 4) = v36;
      v38 = *((_OWORD *)v9 - 2);
      *((_OWORD *)v30 - 3) = v37;
      v39 = *((_OWORD *)v9 - 1);
      *((_OWORD *)v30 - 2) = v38;
      *((_OWORD *)v30 - 1) = v39;
      --v31;
    }
    while ( v31 );
    v40 = *((_QWORD *)v9 + 8);
    v41 = *((_OWORD *)v9 + 1);
    *(_OWORD *)v30 = *(_OWORD *)v9;
    v42 = *((_OWORD *)v9 + 2);
    *((_OWORD *)v30 + 1) = v41;
    v43 = *((_OWORD *)v9 + 3);
    v9 = v86;
    *((_OWORD *)v30 + 2) = v42;
    v78 = v86;
    *((_OWORD *)v30 + 3) = v43;
    *((_QWORD *)v30 + 8) = v40;
    StringCchCopyW(v86, 0x20uLL, word_1C0191088);
    *(_DWORD *)&v86[80] &= ~0x4000000u;
  }
  if ( (*((_DWORD *)v9 + 40) & 8) != 0 )
    v10 = 1;
  v17 = (WCHAR *)Win32AllocPool(512LL, 0x706D7447u);
  v79 = v17;
  v12 = v17;
  if ( v17 )
    memset(v17, 0, 0x200uLL);
  if ( !v12 )
  {
    v18 = -1073741670;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v10 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(v8 - 1) <= 1 )
    {
      v18 = -1073741766;
      goto LABEL_31;
    }
    DestinationString.Buffer = v12;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v29 = qword_1C0191058;
    if ( !qword_1C0191058 )
      v29 = L"vgastub";
    RtlAppendUnicodeToString(&DestinationString, v29);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v18 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v18 < 0 )
    goto LABEL_123;
  v19 = (WCHAR *)Win32AllocPool(1024LL, 0x706D7447u);
  v11 = v19;
  if ( v19 )
    memset(v19, 0, 0x400uLL);
  if ( !v11 )
  {
    v18 = -1073741670;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v10 )
    v20 = v9;
  else
    v20 = L"\\Device\\Video0";
  RtlInitUnicodeString(&DestinationString, v20);
  v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v11, 0x200u, &ResultLength);
  if ( v18 < 0 )
  {
LABEL_30:
    ZwClose(KeyHandle);
    v12 = v79;
    if ( v18 >= 0 )
      goto LABEL_31;
LABEL_123:
    v67 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v67 + 24) = v18;
    WdLogEvent5_WdTrace(v67);
    goto LABEL_31;
  }
  v21 = (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2));
  if ( (_DWORD)v8 != 3 )
  {
    for ( ; *v21; ++v21 )
      *v21 = toupper((unsigned __int16)*v21);
    v22 = wcsstr((WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), L"\\CONTROL\\");
    if ( !v22 )
      v22 = wcsstr((WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), L"\\SERVICES");
    v23 = -1LL;
    if ( !v74 )
    {
      v24 = 0LL;
      goto LABEL_25;
    }
    v46 = -1LL;
    Str1 = v74;
    v47 = a5 - 1;
    if ( a5 - 1 > 0x1F )
      v47 = 31;
    do
      ++v46;
    while ( *(WCHAR *)((char *)&v11[v46] + *((unsigned int *)v11 + 2)) );
    v48 = (int)v46;
    if ( (unsigned __int64)(2LL * (int)v46 + 12) <= 0x66 )
      v49 = 102;
    else
      v49 = 2 * v46 + 12;
    Length = v49;
    v50 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v49, 1936876615LL, 1);
    v83 = v50;
    v51 = v50;
    if ( !v50 )
    {
      v24 = 0LL;
      goto LABEL_91;
    }
    Size = v49;
    memset(v50, 0, v49);
    v52 = (unsigned __int64)v49 >> 1;
    StringCchCopyW(v51, v52, (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)));
    v55 = &v51[v48 - 1];
    if ( v55 <= v51 )
    {
LABEL_97:
      if ( *v55 != 92 )
      {
        v24 = 0LL;
LABEL_90:
        Win32FreePool(v51, v53, v54);
LABEL_91:
        v9 = v78;
        LODWORD(v8) = v73;
        *Str1 = 0;
LABEL_25:
        if ( v84 )
        {
          v65 = -1LL;
          do
            ++v65;
          while ( v22[v65] );
          while ( v22[++v23] != 0 )
            ;
          StringCchPrintfW(&v22[v23], 512 - ((unsigned int)(v22 - v11) >> 1) - (unsigned int)v65, L"\\Mon%08X", *v84);
        }
        *(_DWORD *)&Destination.Length = 33423360;
        Destination.Buffer = v11 + 256;
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
        if ( (unsigned int)(v8 - 1) <= 1 )
        {
          if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
            v28 = L"\\Hardware Profiles\\UnitedVideo";
          else
            v28 = L"\\Hardware Profiles\\Current\\System\\CurrentControlSet";
          RtlAppendUnicodeToString(&Destination, v28);
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( (_DWORD)v8 == 2 )
        {
          v18 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
          if ( v18 < 0 )
            goto LABEL_122;
          while ( 1 )
          {
            v44 = wcschr(v22 + 1, 0x5Cu);
            v24 = v44;
            if ( v44 )
              *v44 = 0;
            RtlAppendUnicodeToString(&Destination, v22);
            if ( Handle )
              ZwClose(Handle);
            v45 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
            v18 = v45;
            if ( v45 < 0 )
              break;
            if ( !v24 )
              goto LABEL_69;
            *v24 = 92;
            v22 = v24;
          }
          v24 = 0LL;
          Handle = 0LL;
LABEL_69:
          if ( v45 < 0 )
LABEL_122:
            Handle = v24;
        }
        else
        {
          RtlAppendUnicodeToString(&Destination, v22);
          v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v18 < 0 )
            v18 = -1073741438;
        }
        goto LABEL_30;
      }
    }
    else
    {
      while ( *v55 != 92 )
      {
        if ( --v55 <= v51 )
          goto LABEL_97;
      }
    }
    v24 = (wchar_t *)(v52 - v48);
    v56 = (char *)(v55 + 1);
    if ( (unsigned __int64)v24 - 1 > 0x7FFFFFFE )
    {
      if ( v24 )
      {
        v24 = 0LL;
        *(_WORD *)v56 = 0;
      }
    }
    else
    {
      v57 = 2147483646LL - (_QWORD)v24;
      v58 = (char *)((char *)L"Video" - v56);
      while ( (wchar_t *)((char *)v24 + v57) )
      {
        v59 = *(_WORD *)&v58[(_QWORD)v56];
        if ( !v59 )
          break;
        *(_WORD *)v56 = v59;
        v56 += 2;
        v24 = (wchar_t *)((char *)v24 - 1);
        if ( !v24 )
          goto LABEL_99;
      }
      if ( v24 )
        goto LABEL_88;
LABEL_99:
      v56 -= 2;
LABEL_88:
      v24 = 0LL;
      *(_WORD *)v56 = 0;
    }
    RtlInitUnicodeString(&DestinationString, v51);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&v77, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Service");
      memset(v51, 0, Size);
      if ( ZwQueryValueKey(v77, &DestinationString, KeyValueFullInformation, v51, Length, &v81) >= 0 )
      {
        for ( i = (unsigned __int16 *)((char *)v51 + *((unsigned int *)v51 + 2)); *i; ++i )
          *i = toupper((unsigned __int16)*i);
        v61 = v47;
        v62 = (unsigned __int16 *)((char *)v51 + *((unsigned int *)v51 + 2));
        if ( v47 )
        {
          v63 = Str1;
          v64 = Str1;
          do
          {
            --v47;
            if ( !*v62 )
              break;
            *v63 = *v62++;
            Str1 = ++v63;
            if ( v47 == v61 - 3 )
            {
              if ( !wcsnicmp(v64, L"VGA", 3uLL) )
                break;
              v63 = Str1;
            }
          }
          while ( v47 );
          v51 = v83;
        }
        v24 = 0LL;
      }
      ZwClose(v77);
    }
    goto LABEL_90;
  }
  if ( v74 )
  {
    v27 = StringCchCopyNW(v74, a5, (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), 0x7FuLL);
    if ( (int)(v27 + 0x80000000) >= 0 && v27 != -2147024774 )
      v18 = -1073741811;
  }
  ZwClose(KeyHandle);
LABEL_31:
  if ( v85 )
    *v85 = v18;
  if ( v12 )
    Win32FreePool(v12, v15, v16);
  if ( v11 )
    Win32FreePool(v11, v15, v16);
  v25 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v25 + 24) = v18;
  WdLogEvent5_WdTrace(v25);
  return Handle;
}
