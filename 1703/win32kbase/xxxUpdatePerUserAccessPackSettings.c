/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C0072AD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     GetProcessLuid @ 0x1C0051060 (GetProcessLuid.c)
 *     FastGetProfileIntW @ 0x1C0073CA0 (FastGetProfileIntW.c)
 *     RtlStringCchCopyW @ 0x1C0073F2C (RtlStringCchCopyW.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0074910 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C0074940 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0074980 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C00749A0 (-CalculateMouseTable@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C0118BB0 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C011A090 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(PCUNICODE_STRING Source)
{
  char v2; // di
  BOOL v3; // esi
  BOOL v4; // r14d
  BOOL v5; // r15d
  BOOL v6; // r12d
  BOOL v7; // r13d
  BOOL v8; // r8d
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  void *v25; // rdi
  __int64 v26; // rsi
  NTSTATUS v27; // eax
  int v28; // r14d
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // edx
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh] BYREF
  BOOL v43; // [rsp+38h] [rbp-C8h]
  BOOL v44; // [rsp+3Ch] [rbp-C4h]
  BOOL v45; // [rsp+40h] [rbp-C0h]
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  AuthenticationId = 0LL;
  GetProcessLuid(0LL, &AuthenticationId);
  v2 = 1;
  v3 = AuthenticationId == 999LL;
  FastGetProfileIntW((_DWORD)Source, 15, (unsigned int)L"Flags", 0, (__int64)&v41, 0);
  v4 = (v41 & 1) != 0;
  FastGetProfileIntW((_DWORD)Source, 14, (unsigned int)L"Flags", 0, (__int64)&v41, 0);
  v5 = (v41 & 1) != 0;
  FastGetProfileIntW((_DWORD)Source, 16, (unsigned int)L"Flags", 0, (__int64)&v41, 0);
  v6 = (v41 & 1) != 0;
  FastGetProfileIntW((_DWORD)Source, 17, (unsigned int)L"Flags", 0, (__int64)&v41, 0);
  v7 = (v41 & 1) != 0;
  FastGetProfileIntW((_DWORD)Source, 27, (unsigned int)L"On", 0, (__int64)&v41, 0);
  v45 = v41 != 0;
  FastGetProfileIntW((_DWORD)Source, 28, (unsigned int)L"On", 0, (__int64)&v41, 0);
  Length = v41 != 0;
  FastGetProfileIntW((_DWORD)Source, 18, (unsigned int)L"Flags", 0, (__int64)&v41, 0);
  v44 = (v41 & 1) != 0;
  FastGetProfileIntW((_DWORD)Source, 29, (unsigned int)L"Flags", 0, (__int64)&v41, 0);
  v8 = (v41 & 1) != 0;
  v43 = v8;
  if ( v3 )
  {
    if ( v4 )
    {
      v9 = gdwPUDFlags | 1;
      dword_1C018AD6C |= 1u;
    }
    else
    {
      v9 = gdwPUDFlags & 0xFFFFFFFE;
      dword_1C018AD6C &= ~1u;
    }
    v10 = dword_1C018AD64;
    gdwPUDFlags = v9;
    if ( (dword_1C018AD64 & 1) != 0 && !v4 )
    {
      xxxTurnOffStickyKeys();
      v9 = gdwPUDFlags;
      v10 = dword_1C018AD64;
      v8 = v43;
    }
    if ( v5 )
    {
      v11 = v9 | 2;
      v12 = v10 | 1;
    }
    else
    {
      v11 = v9 & 0xFFFFFFFD;
      v12 = v10 & 0xFFFFFFFE;
    }
    dword_1C018AD64 = v12;
    if ( v6 )
    {
      v13 = v11 | 4;
      dword_1C018AD44 |= 1u;
    }
    else
    {
      v13 = v11 & 0xFFFFFFFB;
      dword_1C018AD44 &= ~1u;
    }
    if ( v7 )
    {
      v14 = v13 | 8;
      dword_1C018AD2C |= 1u;
    }
    else
    {
      v14 = v13 & 0xFFFFFFF7;
      dword_1C018AD2C &= ~1u;
    }
    if ( v44 )
    {
      v15 = v14 | 0x10;
      dword_1C018AD34 |= 1u;
    }
    else
    {
      v15 = v14 & 0xFFFFFFEF;
      dword_1C018AD34 &= ~1u;
    }
    if ( v45 )
    {
      gdwPUDFlags = v15 | 0x20020;
      *(_DWORD *)gpsi |= 0x80u;
    }
    else
    {
      gdwPUDFlags = v15 & 0xFFFDFFDF;
      *(_DWORD *)gpsi &= ~0x80u;
    }
    v16 = gdwPUDFlags & 0xFFFBFFBF;
    if ( Length )
      v16 = gdwPUDFlags | 0x40040;
    if ( v8 )
    {
      dword_1C018AD1C |= 1u;
      v17 = v16 | 0x80;
    }
    else
    {
      dword_1C018AD1C &= ~1u;
      v17 = v16 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v17;
    goto LABEL_20;
  }
  v29 = gdwPUDFlags;
  if ( ((dword_1C018AD6C & 1) != 0) == ((gdwPUDFlags & 1) != 0) )
  {
    v30 = dword_1C018AD6C & 0xFFFFFFFE;
    if ( v4 )
      v30 = dword_1C018AD6C | 1;
    dword_1C018AD6C = v30;
  }
  v31 = dword_1C018AD64;
  if ( ((dword_1C018AD64 & 1) != 0) == ((gdwPUDFlags & 2) != 0) )
  {
    if ( (dword_1C018AD64 & 1) != 0 )
    {
      if ( !v5 )
      {
        xxxTurnOffStickyKeys();
        v29 = gdwPUDFlags;
        v31 = dword_1C018AD64;
        v8 = v43;
        goto LABEL_63;
      }
    }
    else if ( !v5 )
    {
LABEL_63:
      v32 = v31 & 0xFFFFFFFE;
LABEL_64:
      dword_1C018AD64 = v32;
      goto LABEL_65;
    }
    v32 = dword_1C018AD64 | 1;
    goto LABEL_64;
  }
LABEL_65:
  if ( ((dword_1C018AD44 & 1) != 0) == ((v29 & 4) != 0) )
  {
    v33 = dword_1C018AD44 & 0xFFFFFFFE;
    if ( v6 )
      v33 = dword_1C018AD44 | 1;
    dword_1C018AD44 = v33;
  }
  if ( ((dword_1C018AD2C & 1) != 0) == ((v29 & 8) != 0) )
  {
    v34 = dword_1C018AD2C & 0xFFFFFFFE;
    if ( v7 )
      v34 = dword_1C018AD2C | 1;
    dword_1C018AD2C = v34;
  }
  if ( ((dword_1C018AD34 & 1) != 0) == ((v29 & 0x10) != 0) )
  {
    v35 = dword_1C018AD34 & 0xFFFFFFFE;
    if ( v44 )
      v35 = dword_1C018AD34 | 1;
    dword_1C018AD34 = v35;
  }
  if ( ((v29 & 0x20000) != 0) == ((v29 & 0x20) != 0) )
  {
    v36 = v29;
    v29 &= ~0x20000u;
    v37 = v36 | 0x20000;
    if ( v45 )
      v29 = v37;
    gdwPUDFlags = v29;
  }
  if ( ((v29 & 0x40000) != 0) == ((v29 & 0x40) != 0) )
  {
    v38 = v29;
    v29 &= ~0x40000u;
    v39 = v38 | 0x40000;
    if ( Length )
      v29 = v39;
    gdwPUDFlags = v29;
  }
  if ( ((dword_1C018AD1C & 1) != 0) == ((v29 & 0x80u) != 0) )
  {
    v40 = dword_1C018AD1C & 0xFFFFFFFE;
    if ( v8 )
      v40 = dword_1C018AD1C | 1;
    dword_1C018AD1C = v40;
  }
LABEL_20:
  FastGetProfileIntW((_DWORD)Source, 15, (unsigned int)L"Flags", 82, (__int64)&v41, 0);
  v18 = v41 & 0xFFFFFFFE;
  if ( (dword_1C018AD6C & 1) != 0 )
    v18 = v41 | 1;
  v41 = v18;
  dword_1C018AD6C = v18;
  FastGetProfileIntW((_DWORD)Source, 15, (unsigned int)L"DelayBeforeAcceptance", 1000, (__int64)&dword_1C018AD70, 0);
  FastGetProfileIntW((_DWORD)Source, 15, (unsigned int)L"AutoRepeatRate", 500, (__int64)&dword_1C018AD78, 0);
  FastGetProfileIntW((_DWORD)Source, 15, (unsigned int)L"AutoRepeatDelay", 1000, (__int64)&dword_1C018AD74, 0);
  FastGetProfileIntW((_DWORD)Source, 15, (unsigned int)L"BounceTime", 0, (__int64)&dword_1C018AD7C, 0);
  FastGetProfileIntW((_DWORD)Source, 19, (unsigned int)L"Flags", 2, (__int64)&dword_1C018DE04, 0);
  FastGetProfileIntW((_DWORD)Source, 19, (unsigned int)L"FSTextEffect", 0, (__int64)&unk_1C018DE08, 0);
  FastGetProfileIntW((_DWORD)Source, 19, (unsigned int)L"WindowsEffect", 0, (__int64)&unk_1C018DE20, 0);
  FastGetProfileIntW((_DWORD)Source, 20, (unsigned int)L"On", 0, (__int64)&v41, 0);
  v19 = gdwPUDFlags & 0xFFFF7FFF;
  if ( v41 )
    v19 = gdwPUDFlags | 0x8000;
  gdwPUDFlags = v19;
  *((_DWORD *)gpsi + 540) = (v19 & 0x8000) != 0;
  FastGetProfileIntW((_DWORD)Source, 14, (unsigned int)L"Flags", 466, (__int64)&v41, 0);
  v20 = v41 & 0xFFFFFFFE;
  if ( (dword_1C018AD64 & 1) != 0 )
    v20 = v41 | 1;
  v41 = v20;
  dword_1C018AD64 = v20;
  FastGetProfileIntW((_DWORD)Source, 16, (unsigned int)L"Flags", 18, (__int64)&v41, 0);
  v21 = v41 & 0xFFFFFFFE;
  if ( (dword_1C018AD44 & 1) != 0 )
    v21 = v41 | 1;
  v41 = v21;
  dword_1C018AD44 = v21;
  FastGetProfileIntW((_DWORD)Source, 16, (unsigned int)L"MaximumSpeed", 40, (__int64)&dword_1C018AD48, 0);
  FastGetProfileIntW((_DWORD)Source, 16, (unsigned int)L"TimeToMaximumSpeed", 3000, (__int64)&dword_1C018AD4C, 0);
  if ( (unsigned int)(dword_1C018AD48 - 10) > 0x15E )
    dword_1C018AD48 = 40;
  if ( (unsigned int)(dword_1C018AD4C - 1000) > 0xFA0 )
    dword_1C018AD4C = 3000;
  CalculateMouseTable();
  if ( (dword_1C018AD44 & 0x80u) == 0 )
    v2 = 0;
  gbMKMouseMode = (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & *((_BYTE *)&gafAsyncKeyState
                                                                         + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2))) != 0) ^ v2;
  if ( (dword_1C018AD44 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW((_DWORD)Source, 17, (unsigned int)L"Flags", 18, (__int64)&v41, 0);
  v22 = v41 & 0xFFFFFFFE;
  if ( (dword_1C018AD2C & 1) != 0 )
    v22 = v41 | 1;
  v41 = v22;
  dword_1C018AD2C = v22;
  FastGetProfileIntW((_DWORD)Source, 18, (unsigned int)L"Flags", 2, (__int64)&v41, 0);
  v23 = v41 & 0xFFFFFFFE;
  if ( (dword_1C018AD34 & 1) != 0 )
    v23 = v41 | 1;
  v41 = v23;
  dword_1C018AD34 = v23;
  if ( gpKbdNlsTbl )
  {
    if ( *(_DWORD *)(gpKbdNlsTbl + 16) == 16 && *(_QWORD *)(gpKbdNlsTbl + 24) )
      gpusMouseVKey = *(_QWORD *)(gpKbdNlsTbl + 24);
    if ( (*(_BYTE *)(gpKbdNlsTbl + 2) & 2) != 0 )
    {
      gNumLockVk = 36;
      gOemScrollVk = 21;
    }
  }
  FastGetProfileIntW((_DWORD)Source, 18, (unsigned int)L"TimeToWait", 300000, (__int64)&dword_1C018AD38, 0);
  FastGetProfileIntW((_DWORD)Source, 29, (unsigned int)L"Flags", 82, (__int64)&v41, 0);
  v24 = v41 & 0xFFFFFFFE;
  if ( (dword_1C018AD1C & 1) != 0 )
    v24 = v41 | 1;
  dword_1C018AD1C = v24;
  v41 = gdwPolicyFlags;
  v25 = OpenCacheKeyEx(Source, 0x1Du, 0x20019u, &v41);
  if ( v25 )
  {
    while ( 1 )
    {
      Length = 268;
      v26 = Win32AllocPoolWithQuota(268LL, 0x72707355u);
      if ( !v26 )
      {
LABEL_48:
        ZwClose(v25);
        goto LABEL_55;
      }
      RtlInitUnicodeString(&DestinationString, L"High Contrast Scheme");
      v27 = ZwQueryValueKey(v25, &DestinationString, KeyValuePartialInformation, (PVOID)v26, Length, &Length);
      if ( v27 == -2147483643 || v27 >= 0 )
        break;
      Win32FreePool(v26);
      if ( !v41 )
        goto LABEL_48;
      ZwClose(v25);
      v25 = OpenCacheKeyEx(Source, 0x1Du, 0x20019u, &v41);
      if ( !v25 )
        goto LABEL_55;
    }
    v28 = 128;
    if ( *(_DWORD *)(v26 + 8) >> 1 < 0x80u )
      v28 = *(_DWORD *)(v26 + 8) >> 1;
    if ( *(_DWORD *)(v26 + 8) < 2u )
    {
      pszDest[0] = 0;
    }
    else
    {
      *(_WORD *)(v26 + 2LL * (unsigned int)(v28 - 1) + 12) = 0;
      RtlStringCchCopyW(pszDest, 0x80uLL, (NTSTRSAFE_PCWSTR)(v26 + 12));
    }
    Win32FreePool(v26);
    ZwClose(v25);
    if ( v28 )
      RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, pszDest);
  }
LABEL_55:
  gAudioDescription = 12;
  FastGetProfileIntW((_DWORD)Source, 48, (unsigned int)L"On", 0, (__int64)&unk_1C018AD0C, 0);
  FastGetProfileIntW((_DWORD)Source, 48, (unsigned int)L"Locale", 0, (__int64)&unk_1C018AD10, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
