/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C003F8E0
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0043750 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0044268 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044514 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C005D670 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetDisplayDriverParameters @ 0x1C005EAEC (DrvGetDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0083650 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C008A654 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008A6E4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C008A820 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C009B248 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C00FA440 (DrvSetPruneFlag.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0076C6C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0083230 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E6B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     wcschr @ 0x1C009D228 (wcschr.c)
 *     wcsstr @ 0x1C009D250 (wcsstr.c)
 *     toupper @ 0x1C009D46C (toupper.c)
 *     _wcsnicmp @ 0x1C009D4D0 (_wcsnicmp.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
  WCHAR *v15; // rax
  NTSTATUS v16; // edi
  WCHAR *v17; // rax
  const WCHAR *v18; // rdx
  _WORD *v19; // rbx
  wchar_t *v20; // rbx
  __int64 v21; // rdi
  wchar_t *v22; // r14
  __int64 v23; // rax
  int v25; // eax
  const WCHAR *v26; // rdx
  const WCHAR *v27; // rdx
  unsigned __int16 *v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  wchar_t *v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rcx
  int v44; // r12d
  __int64 v45; // r14
  signed int Length; // r13d
  unsigned __int16 *v47; // rax
  unsigned __int16 *v48; // r15
  unsigned __int16 *v49; // rcx
  char *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  char *v53; // r9
  __int16 v54; // ax
  _WORD *i; // r14
  int v56; // r13d
  wchar_t *v57; // r14
  wchar_t *v58; // rcx
  wchar_t *v59; // r15
  __int64 v60; // rcx
  __int64 v62; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *Str1; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  int v67; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v68; // [rsp+78h] [rbp-88h]
  void *KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v71; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 *v72; // [rsp+C0h] [rbp-40h]
  WCHAR *v73; // [rsp+C8h] [rbp-38h]
  ULONG ResultLength; // [rsp+D0h] [rbp-30h] BYREF
  ULONG v75; // [rsp+D4h] [rbp-2Ch] BYREF
  unsigned __int16 *v76; // [rsp+D8h] [rbp-28h]
  unsigned int *v77; // [rsp+E0h] [rbp-20h]
  NTSTATUS *v78; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v79[160]; // [rsp+F0h] [rbp-10h] BYREF

  v8 = a2;
  v9 = a1;
  v78 = a6;
  v77 = a3;
  v72 = a1;
  Handle = 0LL;
  v10 = 0;
  v68 = a4;
  v11 = 0LL;
  v67 = a2;
  v12 = 0LL;
  memset(v79, 0, sizeof(v79));
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v14[6] = a7;
  v14[3] = v9;
  v14[4] = v8;
  v14[5] = a3;
  WdLogEvent5_WdTrace(v14);
  if ( a4 && !a5 )
  {
    v16 = -1073741811;
    goto LABEL_31;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C018C350
    && (PVOID)PsGetCurrentProcess() != gpepCSRSS
    && !UserIsCurrentProcessDwm()
    && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
  {
    v28 = v79;
    v29 = 2LL;
    do
    {
      v28 += 64;
      v30 = *(_OWORD *)v9;
      v31 = *((_OWORD *)v9 + 1);
      v9 += 64;
      *((_OWORD *)v28 - 8) = v30;
      v32 = *((_OWORD *)v9 - 6);
      *((_OWORD *)v28 - 7) = v31;
      v33 = *((_OWORD *)v9 - 5);
      *((_OWORD *)v28 - 6) = v32;
      v34 = *((_OWORD *)v9 - 4);
      *((_OWORD *)v28 - 5) = v33;
      v35 = *((_OWORD *)v9 - 3);
      *((_OWORD *)v28 - 4) = v34;
      v36 = *((_OWORD *)v9 - 2);
      *((_OWORD *)v28 - 3) = v35;
      v37 = *((_OWORD *)v9 - 1);
      *((_OWORD *)v28 - 2) = v36;
      *((_OWORD *)v28 - 1) = v37;
      --v29;
    }
    while ( v29 );
    v38 = *((_OWORD *)v9 + 1);
    *(_OWORD *)v28 = *(_OWORD *)v9;
    v39 = *((_OWORD *)v9 + 2);
    *((_OWORD *)v28 + 1) = v38;
    v40 = *((_OWORD *)v9 + 3);
    v9 = v79;
    *((_OWORD *)v28 + 2) = v39;
    v72 = v79;
    *((_OWORD *)v28 + 3) = v40;
    StringCchCopyW(v79, 0x20uLL, word_1C018C358);
    *(_DWORD *)&v79[80] &= ~0x4000000u;
  }
  if ( (*((_DWORD *)v9 + 40) & 8) != 0 )
    v10 = 1;
  v15 = (WCHAR *)Win32AllocPool(512LL, 0x706D7447u);
  v73 = v15;
  v12 = v15;
  if ( v15 )
    memset(v15, 0, 0x200uLL);
  if ( !v12 )
  {
    v16 = -1073741670;
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
      v16 = -1073741766;
      goto LABEL_31;
    }
    DestinationString.Buffer = v12;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v27 = qword_1C018C328;
    if ( !qword_1C018C328 )
      v27 = L"vgastub";
    RtlAppendUnicodeToString(&DestinationString, v27);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v16 < 0 )
    goto LABEL_123;
  v17 = (WCHAR *)Win32AllocPool(1024LL, 0x706D7447u);
  v11 = v17;
  if ( v17 )
    memset(v17, 0, 0x400uLL);
  if ( !v11 )
  {
    v16 = -1073741670;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v10 )
    v18 = v9;
  else
    v18 = L"\\Device\\Video0";
  RtlInitUnicodeString(&DestinationString, v18);
  v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v11, 0x200u, &ResultLength);
  if ( v16 < 0 )
  {
LABEL_30:
    ZwClose(KeyHandle);
    v12 = v73;
    if ( v16 >= 0 )
      goto LABEL_31;
LABEL_123:
    v62 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v62 + 24) = v16;
    WdLogEvent5_WdTrace(v62);
    goto LABEL_31;
  }
  v19 = (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2));
  if ( (_DWORD)v8 != 3 )
  {
    for ( ; *v19; ++v19 )
      *v19 = toupper((unsigned __int16)*v19);
    v20 = wcsstr((WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), L"\\CONTROL\\");
    if ( !v20 )
      v20 = wcsstr((WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), L"\\SERVICES");
    v21 = -1LL;
    if ( !v68 )
    {
      v22 = 0LL;
      goto LABEL_25;
    }
    v43 = -1LL;
    Str1 = v68;
    v44 = a5 - 1;
    if ( a5 - 1 > 0x1F )
      v44 = 31;
    do
      ++v43;
    while ( *(WCHAR *)((char *)&v11[v43] + *((unsigned int *)v11 + 2)) );
    v45 = (int)v43;
    if ( (unsigned __int64)(2LL * (int)v43 + 12) <= 0x66 )
      Length = 102;
    else
      Length = 2 * v43 + 12;
    v47 = (unsigned __int16 *)PALLOCMEM2((unsigned int)Length, 1936876615LL, 1);
    v76 = v47;
    v48 = v47;
    if ( !v47 )
    {
      v22 = 0LL;
      goto LABEL_92;
    }
    memset(v47, 0, Length);
    StringCchCopyW(v48, (unsigned __int64)Length >> 1, (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)));
    v49 = &v48[v45 - 1];
    if ( v49 <= v48 )
    {
LABEL_98:
      if ( *v49 != 92 )
      {
        v22 = 0LL;
LABEL_91:
        Win32FreePool(v48);
LABEL_92:
        v9 = v72;
        LODWORD(v8) = v67;
        *Str1 = 0;
LABEL_25:
        if ( v77 )
        {
          v60 = -1LL;
          do
            ++v60;
          while ( v20[v60] );
          while ( v20[++v21] != 0 )
            ;
          StringCchPrintfW(&v20[v21], 512 - ((unsigned int)(v20 - v11) >> 1) - (unsigned int)v60, L"\\Mon%08X", *v77);
        }
        *(_DWORD *)&Destination.Length = 33423360;
        Destination.Buffer = v11 + 256;
        RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
        if ( (unsigned int)(v8 - 1) <= 1 )
        {
          if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
            v26 = L"\\Hardware Profiles\\UnitedVideo";
          else
            v26 = L"\\Hardware Profiles\\Current\\System\\CurrentControlSet";
          RtlAppendUnicodeToString(&Destination, v26);
        }
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( (_DWORD)v8 == 2 )
        {
          v16 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
          if ( v16 < 0 )
            goto LABEL_122;
          while ( 1 )
          {
            v41 = wcschr(v20 + 1, 0x5Cu);
            v22 = v41;
            if ( v41 )
              *v41 = 0;
            RtlAppendUnicodeToString(&Destination, v20);
            if ( Handle )
              ZwClose(Handle);
            v42 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
            v16 = v42;
            if ( v42 < 0 )
              break;
            if ( !v22 )
              goto LABEL_69;
            *v22 = 92;
            v20 = v22;
          }
          v22 = 0LL;
          Handle = 0LL;
LABEL_69:
          if ( v42 < 0 )
LABEL_122:
            Handle = v22;
        }
        else
        {
          RtlAppendUnicodeToString(&Destination, v20);
          v16 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v16 < 0 )
            v16 = -1073741438;
        }
        goto LABEL_30;
      }
    }
    else
    {
      while ( *v49 != 92 )
      {
        if ( --v49 <= v48 )
          goto LABEL_98;
      }
    }
    v50 = (char *)(v49 + 1);
    v51 = ((unsigned __int64)Length >> 1) - v45;
    if ( (unsigned __int64)(v51 - 1) > 0x7FFFFFFE )
    {
      v22 = 0LL;
      if ( !v51 )
      {
LABEL_90:
        RtlInitUnicodeString(&DestinationString, v48);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v71, 0x20019u, &ObjectAttributes) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Service");
          memset(v48, 0, Length);
          if ( ZwQueryValueKey(v71, &DestinationString, KeyValueFullInformation, v48, Length, &v75) >= 0 )
          {
            for ( i = (unsigned __int16 *)((char *)v48 + *((unsigned int *)v48 + 2)); *i; ++i )
              *i = toupper((unsigned __int16)*i);
            v56 = v44;
            v57 = (unsigned __int16 *)((char *)v48 + *((unsigned int *)v48 + 2));
            if ( v44 )
            {
              v58 = Str1;
              v59 = Str1;
              do
              {
                --v44;
                if ( !*v57 )
                  break;
                *v58 = *v57++;
                Str1 = ++v58;
                if ( v44 == v56 - 3 )
                {
                  if ( !wcsnicmp(v59, L"VGA", 3uLL) )
                    break;
                  v58 = Str1;
                }
              }
              while ( v44 );
              v48 = v76;
            }
            v22 = 0LL;
          }
          ZwClose(v71);
        }
        goto LABEL_91;
      }
    }
    else
    {
      v52 = 2147483646 - v51;
      v53 = (char *)((char *)L"Video" - v50);
      while ( v51 + v52 )
      {
        v54 = *(_WORD *)&v53[(_QWORD)v50];
        if ( !v54 )
          break;
        *(_WORD *)v50 = v54;
        v50 += 2;
        if ( !--v51 )
          goto LABEL_100;
      }
      if ( v51 )
        goto LABEL_88;
LABEL_100:
      v50 -= 2;
LABEL_88:
      v22 = 0LL;
    }
    *(_WORD *)v50 = 0;
    goto LABEL_90;
  }
  if ( v68 )
  {
    v25 = StringCchCopyNW(v68, a5, (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), 0x7FuLL);
    if ( (int)(v25 + 0x80000000) >= 0 && v25 != -2147024774 )
      v16 = -1073741811;
  }
  ZwClose(KeyHandle);
LABEL_31:
  if ( v78 )
    *v78 = v16;
  if ( v12 )
    Win32FreePool(v12);
  if ( v11 )
    Win32FreePool(v11);
  v23 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v23 + 24) = v16;
  WdLogEvent5_WdTrace(v23);
  return Handle;
}
