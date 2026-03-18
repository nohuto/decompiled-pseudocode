/*
 * XREFs of xxxUpdatePerUserAccessPackSettings @ 0x1C005F450
 * Callers:
 *     <none>
 * Callees:
 *     GetProcessLuid @ 0x1C0024E40 (GetProcessLuid.c)
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     FastGetProfileIntW @ 0x1C00604C0 (FastGetProfileIntW.c)
 *     RtlStringCchCopyW @ 0x1C0084D14 (RtlStringCchCopyW.c)
 *     ?CalculateMouseTable@@YAXXZ @ 0x1C0089310 (-CalculateMouseTable@@YAXXZ.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C009B5F0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?AccessTimeOutReset@@YAXXZ @ 0x1C009B790 (-AccessTimeOutReset@@YAXXZ.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C009BD20 (-MKHideMouseCursor@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C0117A20 (-MKShowMouseCursor@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0118CC0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

void __fastcall xxxUpdatePerUserAccessPackSettings(const UNICODE_STRING *a1)
{
  BOOL v2; // esi
  BOOL v3; // r14d
  BOOL v4; // r15d
  BOOL v5; // r12d
  BOOL v6; // r13d
  int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  void *v21; // rdi
  __int64 v22; // rsi
  NTSTATUS v23; // eax
  int v24; // r14d
  int v25; // ecx
  int v26; // ecx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  ULONG Value; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  BOOL v36; // [rsp+3Ch] [rbp-C4h]
  BOOL v37; // [rsp+40h] [rbp-C0h]
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  AuthenticationId = 0LL;
  GetProcessLuid(0LL, &AuthenticationId);
  v2 = AuthenticationId == 999LL;
  FastGetProfileIntW((int)a1, 15, (int)L"Flags", 0, &Value, 0);
  v3 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 14, (int)L"Flags", 0, &Value, 0);
  v4 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 16, (int)L"Flags", 0, &Value, 0);
  v5 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 17, (int)L"Flags", 0, &Value, 0);
  v6 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 27, (int)L"On", 0, &Value, 0);
  v37 = Value != 0;
  FastGetProfileIntW((int)a1, 28, (int)L"On", 0, &Value, 0);
  Length = Value != 0;
  FastGetProfileIntW((int)a1, 18, (int)L"Flags", 0, &Value, 0);
  v36 = (Value & 1) != 0;
  FastGetProfileIntW((int)a1, 29, (int)L"Flags", 0, &Value, 0);
  v7 = (Value & 1) != 0;
  v34 = v7;
  if ( v2 )
  {
    if ( v3 )
    {
      gdwPUDFlags |= 1u;
      dword_1C018F8EC |= 1u;
    }
    else
    {
      gdwPUDFlags &= ~1u;
      dword_1C018F8EC &= ~1u;
    }
    if ( (dword_1C018F8E4 & 1) != 0 && !v3 )
    {
      xxxTurnOffStickyKeys();
      v7 = v34;
    }
    if ( v4 )
    {
      v8 = gdwPUDFlags | 2;
      dword_1C018F8E4 |= 1u;
    }
    else
    {
      v8 = gdwPUDFlags & 0xFFFFFFFD;
      dword_1C018F8E4 &= ~1u;
    }
    if ( v5 )
    {
      v9 = v8 | 4;
      dword_1C018F8C4 |= 1u;
    }
    else
    {
      v9 = v8 & 0xFFFFFFFB;
      dword_1C018F8C4 &= ~1u;
    }
    if ( v6 )
    {
      v10 = v9 | 8;
      dword_1C018F8AC |= 1u;
    }
    else
    {
      v10 = v9 & 0xFFFFFFF7;
      dword_1C018F8AC &= ~1u;
    }
    if ( v36 )
    {
      v11 = v10 | 0x10;
      dword_1C018F8B4 |= 1u;
    }
    else
    {
      v11 = v10 & 0xFFFFFFEF;
      dword_1C018F8B4 &= ~1u;
    }
    if ( v37 )
    {
      gdwPUDFlags = v11 | 0x20020;
      *(_DWORD *)gpsi |= 0x80u;
    }
    else
    {
      gdwPUDFlags = v11 & 0xFFFDFFDF;
      *(_DWORD *)gpsi &= ~0x80u;
    }
    v12 = gdwPUDFlags & 0xFFFBFFBF;
    if ( Length )
      v12 = gdwPUDFlags | 0x40040;
    if ( v7 )
    {
      dword_1C018F89C |= 1u;
      v13 = v12 | 0x80;
    }
    else
    {
      dword_1C018F89C &= ~1u;
      v13 = v12 & 0xFFFFFF7F;
    }
    gdwPUDFlags = v13;
    goto LABEL_20;
  }
  if ( ((dword_1C018F8EC & 1) != 0) == ((gdwPUDFlags & 1) != 0) )
  {
    v25 = dword_1C018F8EC & 0xFFFFFFFE;
    if ( v3 )
      v25 = dword_1C018F8EC | 1;
    dword_1C018F8EC = v25;
  }
  if ( ((dword_1C018F8E4 & 1) != 0) == ((gdwPUDFlags & 2) != 0) )
  {
    if ( (dword_1C018F8E4 & 1) != 0 )
    {
      if ( !v4 )
      {
        xxxTurnOffStickyKeys();
        v7 = v34;
        goto LABEL_61;
      }
    }
    else if ( !v4 )
    {
LABEL_61:
      dword_1C018F8E4 &= ~1u;
      goto LABEL_62;
    }
    dword_1C018F8E4 |= 1u;
  }
LABEL_62:
  v26 = gdwPUDFlags;
  if ( ((dword_1C018F8C4 & 1) != 0) == ((gdwPUDFlags & 4) != 0) )
  {
    v27 = dword_1C018F8C4 & 0xFFFFFFFE;
    if ( v5 )
      v27 = dword_1C018F8C4 | 1;
    dword_1C018F8C4 = v27;
  }
  if ( ((dword_1C018F8AC & 1) != 0) == ((gdwPUDFlags & 8) != 0) )
  {
    v28 = dword_1C018F8AC & 0xFFFFFFFE;
    if ( v6 )
      v28 = dword_1C018F8AC | 1;
    dword_1C018F8AC = v28;
  }
  if ( ((dword_1C018F8B4 & 1) != 0) == ((gdwPUDFlags & 0x10) != 0) )
  {
    v29 = dword_1C018F8B4 & 0xFFFFFFFE;
    if ( v36 )
      v29 = dword_1C018F8B4 | 1;
    dword_1C018F8B4 = v29;
  }
  if ( ((gdwPUDFlags & 0x20000) != 0) == ((gdwPUDFlags & 0x20) != 0) )
  {
    v26 = gdwPUDFlags & 0xFFFDFFFF;
    if ( v37 )
      v26 = gdwPUDFlags | 0x20000;
    gdwPUDFlags = v26;
  }
  if ( ((v26 & 0x40000) != 0) == ((v26 & 0x40) != 0) )
  {
    v30 = v26;
    v26 &= ~0x40000u;
    v31 = v30 | 0x40000;
    if ( Length )
      v26 = v31;
    gdwPUDFlags = v26;
  }
  if ( ((dword_1C018F89C & 1) != 0) == ((v26 & 0x80u) != 0) )
  {
    v32 = dword_1C018F89C & 0xFFFFFFFE;
    if ( v7 )
      v32 = dword_1C018F89C | 1;
    dword_1C018F89C = v32;
  }
LABEL_20:
  FastGetProfileIntW((int)a1, 15, (int)L"Flags", 82, &Value, 0);
  v14 = Value & 0xFFFFFFFE;
  if ( (dword_1C018F8EC & 1) != 0 )
    v14 = Value | 1;
  Value = v14;
  dword_1C018F8EC = v14;
  FastGetProfileIntW((int)a1, 15, (int)L"DelayBeforeAcceptance", 1000, &::Value, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatRate", 500, &dword_1C018F8F8, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"AutoRepeatDelay", 1000, &dword_1C018F8F4, 0);
  FastGetProfileIntW((int)a1, 15, (int)L"BounceTime", 0, &dword_1C018F8FC, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"Flags", 2, &dword_1C0192CB4, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"FSTextEffect", 0, &dword_1C0192CB8, 0);
  FastGetProfileIntW((int)a1, 19, (int)L"WindowsEffect", 0, &dword_1C0192CD0, 0);
  FastGetProfileIntW((int)a1, 20, (int)L"On", 0, &Value, 0);
  v15 = gdwPUDFlags & 0xFFFF7FFF;
  if ( Value )
    v15 = gdwPUDFlags | 0x8000;
  gdwPUDFlags = v15;
  *((_DWORD *)gpsi + 540) = (v15 & 0x8000) != 0;
  FastGetProfileIntW((int)a1, 14, (int)L"Flags", 466, &Value, 0);
  v16 = Value & 0xFFFFFFFE;
  if ( (dword_1C018F8E4 & 1) != 0 )
    v16 = Value | 1;
  Value = v16;
  dword_1C018F8E4 = v16;
  FastGetProfileIntW((int)a1, 16, (int)L"Flags", 18, &Value, 0);
  v17 = Value & 0xFFFFFFFE;
  if ( (dword_1C018F8C4 & 1) != 0 )
    v17 = Value | 1;
  Value = v17;
  dword_1C018F8C4 = v17;
  FastGetProfileIntW((int)a1, 16, (int)L"MaximumSpeed", 40, &dword_1C018F8C8, 0);
  FastGetProfileIntW((int)a1, 16, (int)L"TimeToMaximumSpeed", 3000, &dword_1C018F8CC, 0);
  if ( dword_1C018F8C8 - 10 > 0x15E )
    dword_1C018F8C8 = 40;
  if ( dword_1C018F8CC - 1000 > 0xFA0 )
    dword_1C018F8CC = 3000;
  CalculateMouseTable();
  gbMKMouseMode = ((dword_1C018F8C4 & 0x80u) != 0) ^ ((*((unsigned __int8 *)&gafAsyncKeyState
                                                       + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2)) & (1 << (2 * (gNumLockVk & 3) + 1))) != 0);
  if ( (dword_1C018F8C4 & 1) != 0 )
    MKShowMouseCursor();
  else
    MKHideMouseCursor();
  FastGetProfileIntW((int)a1, 17, (int)L"Flags", 18, &Value, 0);
  v18 = Value & 0xFFFFFFFE;
  if ( (dword_1C018F8AC & 1) != 0 )
    v18 = Value | 1;
  Value = v18;
  dword_1C018F8AC = v18;
  FastGetProfileIntW((int)a1, 18, (int)L"Flags", 2, &Value, 0);
  v19 = Value & 0xFFFFFFFE;
  if ( (dword_1C018F8B4 & 1) != 0 )
    v19 = Value | 1;
  Value = v19;
  dword_1C018F8B4 = v19;
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
  FastGetProfileIntW((int)a1, 18, (int)L"TimeToWait", 300000, &dword_1C018F8B8, 0);
  FastGetProfileIntW((int)a1, 29, (int)L"Flags", 82, &Value, 0);
  v20 = Value & 0xFFFFFFFE;
  if ( (dword_1C018F89C & 1) != 0 )
    v20 = Value | 1;
  Value = v20;
  dword_1C018F89C = v20;
  v34 = gdwPolicyFlags;
  v21 = OpenCacheKeyEx(a1, 0x1Du, 0x20019u, &v34);
  if ( v21 )
  {
    while ( 1 )
    {
      Length = 268;
      v22 = Win32AllocPoolWithQuota(268LL, 0x72707355u);
      if ( !v22 )
      {
LABEL_46:
        ZwClose(v21);
        goto LABEL_53;
      }
      RtlInitUnicodeString(&DestinationString, L"High Contrast Scheme");
      v23 = ZwQueryValueKey(v21, &DestinationString, KeyValuePartialInformation, (PVOID)v22, Length, &Length);
      if ( v23 == -2147483643 || v23 >= 0 )
        break;
      Win32FreePool(v22);
      if ( !v34 )
        goto LABEL_46;
      ZwClose(v21);
      v21 = OpenCacheKeyEx(a1, 0x1Du, 0x20019u, &v34);
      if ( !v21 )
        goto LABEL_53;
    }
    v24 = 128;
    if ( *(_DWORD *)(v22 + 8) >> 1 < 0x80u )
      v24 = *(_DWORD *)(v22 + 8) >> 1;
    if ( *(_DWORD *)(v22 + 8) < 2u )
    {
      pszDest[0] = 0;
    }
    else
    {
      *(_WORD *)(v22 + 2LL * (unsigned int)(v24 - 1) + 12) = 0;
      RtlStringCchCopyW(pszDest, 0x80uLL, (NTSTRSAFE_PCWSTR)(v22 + 12));
    }
    Win32FreePool(v22);
    ZwClose(v21);
    if ( v24 )
      RtlStringCchCopyW(&gHighContrastDefaultScheme, 0x80uLL, pszDest);
  }
LABEL_53:
  gAudioDescription = 12;
  FastGetProfileIntW((int)a1, 48, (int)L"On", 0, &dword_1C018F88C, 0);
  FastGetProfileIntW((int)a1, 48, (int)L"Locale", 0, &dword_1C018F890, 0);
  AccessTimeOutReset();
  SetAccessEnabledFlag();
}
