/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C001C5F0
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0041AD0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00424C0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0042578 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0050C84 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0051310 (DrvGetDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0068250 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006CE78 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006D650 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C006E16C (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C00D5C30 (DrvSetPruneFlag.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C005BDE4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     wcschr @ 0x1C0073EA8 (wcschr.c)
 *     wcsstr @ 0x1C0073ED0 (wcsstr.c)
 *     toupper @ 0x1C0074110 (toupper.c)
 *     _wcsnicmp @ 0x1C0074174 (_wcsnicmp.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D2F68 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0142114 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
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
  __int64 v19; // rdx
  unsigned __int16 *v20; // rbx
  unsigned __int16 v21; // ax
  wchar_t *p_Length; // rbx
  __int64 v23; // rdi
  struct _UNICODE_STRING *Disposition; // r14
  __int64 v25; // rax
  int v27; // eax
  const WCHAR *v28; // rdx
  wchar_t *v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rcx
  unsigned __int16 *v32; // rcx
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  const WCHAR *v45; // rdx
  __int64 v46; // rcx
  int v47; // r12d
  __int64 v48; // r13
  signed int v49; // r14d
  unsigned __int16 *v50; // rax
  unsigned __int16 *v51; // r15
  unsigned __int64 v52; // r14
  unsigned __int16 *v53; // rcx
  char *v54; // rcx
  __int64 v55; // rdx
  char *v56; // r8
  __int16 v57; // ax
  char *v58; // rax
  __int64 v59; // rcx
  unsigned __int16 v60; // ax
  unsigned __int16 *v61; // r14
  int v62; // r14d
  __int64 v63; // rax
  wchar_t *v64; // rcx
  char *v65; // r13
  wchar_t *v66; // r15
  wchar_t v67; // ax
  __int64 v68; // rcx
  __int64 v70; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Length; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v74; // [rsp+60h] [rbp-A0h]
  wchar_t *Str1; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  int v77; // [rsp+80h] [rbp-80h]
  void *KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v80; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v81; // [rsp+C8h] [rbp-38h]
  WCHAR *v82; // [rsp+D0h] [rbp-30h]
  ULONG ResultLength; // [rsp+D8h] [rbp-28h] BYREF
  ULONG v84; // [rsp+DCh] [rbp-24h] BYREF
  size_t Size; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v86; // [rsp+E8h] [rbp-18h]
  unsigned int *v87; // [rsp+F0h] [rbp-10h]
  NTSTATUS *v88; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v89[160]; // [rsp+100h] [rbp+0h] BYREF

  v8 = a2;
  v9 = a1;
  v88 = a6;
  v87 = a3;
  v81 = a1;
  Handle = 0LL;
  v10 = 0;
  v74 = a4;
  v11 = 0LL;
  v77 = a2;
  v12 = 0LL;
  memset(v89, 0, 0x138uLL);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v14[6] = a7;
  v14[3] = v9;
  v14[4] = v8;
  v14[5] = a3;
  WdLogEvent5_WdTrace(v14);
  if ( a4 && !a5 )
  {
    v16 = -1073741811;
    goto LABEL_32;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && qword_1C01A1760
    && (PVOID)PsGetCurrentProcess() != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm(v31)
    && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
  {
    v32 = v89;
    v33 = 2LL;
    do
    {
      v32 += 64;
      v34 = *(_OWORD *)v9;
      v35 = *((_OWORD *)v9 + 1);
      v9 += 64;
      *((_OWORD *)v32 - 8) = v34;
      v36 = *((_OWORD *)v9 - 6);
      *((_OWORD *)v32 - 7) = v35;
      v37 = *((_OWORD *)v9 - 5);
      *((_OWORD *)v32 - 6) = v36;
      v38 = *((_OWORD *)v9 - 4);
      *((_OWORD *)v32 - 5) = v37;
      v39 = *((_OWORD *)v9 - 3);
      *((_OWORD *)v32 - 4) = v38;
      v40 = *((_OWORD *)v9 - 2);
      *((_OWORD *)v32 - 3) = v39;
      v41 = *((_OWORD *)v9 - 1);
      *((_OWORD *)v32 - 2) = v40;
      *((_OWORD *)v32 - 1) = v41;
      --v33;
    }
    while ( v33 );
    v42 = *((_QWORD *)v9 + 6);
    v43 = *((_OWORD *)v9 + 1);
    *(_OWORD *)v32 = *(_OWORD *)v9;
    v44 = *((_OWORD *)v9 + 2);
    v9 = v89;
    *((_OWORD *)v32 + 1) = v43;
    v81 = v89;
    *((_OWORD *)v32 + 2) = v44;
    *((_QWORD *)v32 + 6) = v42;
    StringCchCopyW(v89, 0x20uLL, word_1C01A1768);
    *(_DWORD *)&v89[80] &= ~0x4000000u;
  }
  if ( (*((_DWORD *)v9 + 40) & 8) != 0 )
    v10 = 1;
  v15 = (WCHAR *)Win32AllocPool(512LL, 1886221383LL);
  v82 = v15;
  v12 = v15;
  if ( v15 )
    memset(v15, 0, 0x200uLL);
  if ( !v12 )
  {
    v16 = -1073741670;
    goto LABEL_32;
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
      goto LABEL_32;
    }
    DestinationString.Buffer = v12;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v45 = L"vgastub";
    if ( qword_1C01A1738 )
      v45 = qword_1C01A1738;
    RtlAppendUnicodeToString(&DestinationString, v45);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v16 < 0 )
    goto LABEL_121;
  v17 = (WCHAR *)Win32AllocPool(1024LL, 1886221383LL);
  v11 = v17;
  if ( v17 )
    memset(v17, 0, 0x400uLL);
  if ( !v11 )
  {
    v16 = -1073741670;
    goto LABEL_32;
  }
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || (v18 = L"\\Device\\Video0", v10) )
    v18 = v9;
  RtlInitUnicodeString(&DestinationString, v18);
  v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v11, 0x200u, &ResultLength);
  if ( v16 < 0 )
  {
LABEL_31:
    ZwClose(KeyHandle);
    v12 = v82;
    if ( v16 >= 0 )
      goto LABEL_32;
LABEL_121:
    v70 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v70 + 24) = v16;
    WdLogEvent5_WdTrace(v70);
    goto LABEL_32;
  }
  v19 = *((unsigned int *)v11 + 2);
  v20 = (WCHAR *)((char *)v11 + v19);
  if ( (_DWORD)v8 != 3 )
  {
    v21 = *v20;
    if ( *v20 )
    {
      do
      {
        *v20++ = toupper(v21);
        v21 = *v20;
      }
      while ( *v20 );
      LODWORD(v19) = *((_DWORD *)v11 + 2);
    }
    p_Length = wcsstr((WCHAR *)((char *)v11 + (unsigned int)v19), L"\\CONTROL\\");
    if ( !p_Length )
      p_Length = wcsstr((WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), L"\\SERVICES");
    v23 = -1LL;
    if ( !v74 )
    {
      Disposition = 0LL;
      goto LABEL_26;
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
    v49 = 2 * v46 + 12;
    if ( (unsigned __int64)(2LL * (int)v46 + 12) <= 0x66 )
      v49 = 102;
    Length = v49;
    v50 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v49);
    v86 = v50;
    v51 = v50;
    if ( !v50 )
    {
      Disposition = 0LL;
      goto LABEL_115;
    }
    Size = v49;
    memset(v50, 0, v49);
    v52 = (unsigned __int64)v49 >> 1;
    StringCchCopyW(v51, v52, (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)));
    v53 = &v51[v48 - 1];
    if ( v53 <= v51 )
    {
LABEL_86:
      if ( *v53 != 92 )
      {
        Disposition = 0LL;
LABEL_113:
        Win32FreePool(v51);
LABEL_115:
        v9 = v81;
        LODWORD(v8) = v77;
        *Str1 = (unsigned __int16)Disposition;
LABEL_26:
        if ( v87 )
        {
          v68 = -1LL;
          do
            ++v68;
          while ( p_Length[v68] );
          while ( p_Length[++v23] != 0 )
            ;
          StringCchPrintfW(
            &p_Length[v23],
            512 - ((unsigned int)(p_Length - v11) >> 1) - (unsigned int)v68,
            L"\\Mon%08X",
            *v87);
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
        ObjectAttributes.RootDirectory = Disposition;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( (_DWORD)v8 == 2 )
        {
          v16 = ZwCreateKey(
                  &Handle,
                  0,
                  &ObjectAttributes,
                  0,
                  Disposition,
                  (ULONG)Disposition,
                  (PULONG)&Disposition->Length);
          if ( v16 < 0 )
            goto LABEL_120;
          while ( 1 )
          {
            v29 = wcschr(p_Length + 1, 0x5Cu);
            Disposition = (struct _UNICODE_STRING *)v29;
            if ( v29 )
              *v29 = 0;
            RtlAppendUnicodeToString(&Destination, p_Length);
            if ( Handle )
              ZwClose(Handle);
            v30 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
            v16 = v30;
            if ( v30 < 0 )
              break;
            if ( !Disposition )
              goto LABEL_55;
            Disposition->Length = 92;
            p_Length = &Disposition->Length;
          }
          Disposition = 0LL;
          Handle = 0LL;
LABEL_55:
          if ( v30 < 0 )
LABEL_120:
            Handle = Disposition;
        }
        else
        {
          RtlAppendUnicodeToString(&Destination, p_Length);
          v16 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
          if ( v16 < 0 )
            v16 = -1073741438;
        }
        goto LABEL_31;
      }
    }
    else
    {
      while ( *v53 != 92 )
      {
        if ( --v53 <= v51 )
          goto LABEL_86;
      }
    }
    Disposition = (struct _UNICODE_STRING *)(v52 - v48);
    v54 = (char *)(v53 + 1);
    if ( (unsigned __int64)&Disposition[-1].Buffer + 7 > 0x7FFFFFFE )
    {
      if ( Disposition )
      {
        Disposition = 0LL;
        *(_WORD *)v54 = 0;
      }
    }
    else
    {
      v55 = 2147483646LL - (_QWORD)Disposition;
      v56 = (char *)((char *)L"Video" - v54);
      do
      {
        if ( !(struct _UNICODE_STRING *)((char *)Disposition + v55) )
          break;
        v57 = *(_WORD *)&v56[(_QWORD)v54];
        if ( !v57 )
          break;
        *(_WORD *)v54 = v57;
        v54 += 2;
        Disposition = (struct _UNICODE_STRING *)((char *)Disposition - 1);
      }
      while ( Disposition );
      v58 = v54 - 2;
      if ( Disposition )
        v58 = v54;
      Disposition = 0LL;
      *(_WORD *)v58 = 0;
    }
    RtlInitUnicodeString(&DestinationString, v51);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = Disposition;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&v80, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Service");
      memset(v51, 0, Size);
      if ( ZwQueryValueKey(v80, &DestinationString, KeyValueFullInformation, v51, Length, &v84) >= 0 )
      {
        v59 = *((unsigned int *)v51 + 2);
        v60 = *(unsigned __int16 *)((char *)v51 + v59);
        v61 = (unsigned __int16 *)((char *)v51 + v59);
        if ( v60 )
        {
          do
          {
            *v61++ = toupper(v60);
            v60 = *v61;
          }
          while ( *v61 );
          LODWORD(v59) = *((_DWORD *)v51 + 2);
        }
        v62 = v47;
        if ( v47 )
        {
          v63 = (unsigned int)v59 - (_QWORD)v74;
          v64 = Str1;
          v65 = (char *)v51 + v63;
          v66 = Str1;
          do
          {
            v67 = *(_WORD *)&v65[(_QWORD)v64];
            --v47;
            if ( !v67 )
              break;
            *v64++ = v67;
            Str1 = v64;
            if ( v47 == v62 - 3 )
            {
              if ( !wcsnicmp(v66, L"VGA", 3uLL) )
                break;
              v64 = Str1;
            }
          }
          while ( v47 );
          v51 = v86;
        }
        Disposition = 0LL;
      }
      ZwClose(v80);
    }
    goto LABEL_113;
  }
  if ( v74 )
  {
    v27 = StringCchCopyNW(v74, a5, v20, 0x7FuLL);
    if ( (int)(v27 + 0x80000000) >= 0 && v27 != -2147024774 )
      v16 = -1073741811;
  }
  ZwClose(KeyHandle);
LABEL_32:
  if ( v88 )
    *v88 = v16;
  if ( v12 )
    Win32FreePool(v12);
  if ( v11 )
    Win32FreePool(v11);
  v25 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v25 + 24) = v16;
  WdLogEvent5_WdTrace(v25);
  return Handle;
}
