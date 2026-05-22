/*
 * XREFs of ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x18006ABE8
 * Callers:
 *     ?Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006AB20 (-Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x180070D68 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileTouchProcessor::Initialize(MobileTouchProcessor *this, struct InputProcessorCreateParams *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r9d
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // rcx
  LSTATUS v19; // eax
  unsigned int v20; // eax
  signed int v21; // eax
  LSTATUS v22; // eax
  signed int v23; // ecx
  int v24; // eax
  unsigned int v25; // r14d
  int v26; // eax
  unsigned int v27; // r8d
  __int64 v28; // rcx
  _DWORD *v29; // rdx
  PHKEY phkResult; // [rsp+20h] [rbp-E0h]
  DWORD cbData; // [rsp+30h] [rbp-D0h] BYREF
  DWORD Type; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  BYTE Data[4]; // [rsp+40h] [rbp-C0h] BYREF
  BYTE v36[4]; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  BYTE v39[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  WCHAR SubKey[264]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(v42) = -1;
  BYTE4(v42) = 1;
  hKey = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v4 = PointerProcessor::Initialize(this);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 340;
      goto LABEL_101;
    }
    goto LABEL_102;
  }
  v8 = *((_OWORD *)a2 + 1);
  v9 = *((_QWORD *)this + 24);
  v40 = *(_OWORD *)a2;
  v42 = *((_QWORD *)a2 + 4);
  *((_QWORD *)&v41 + 1) = *((_QWORD *)&v8 + 1);
  *(_QWORD *)&v41 = this;
  if ( v9 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v4 = CreateChildInputProcessor(8, &v40, (__int64)this + 192);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 348;
      goto LABEL_101;
    }
    goto LABEL_102;
  }
  v10 = *((_QWORD *)this + 5);
  if ( !v10 )
  {
    v6 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_102;
    McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 708, 3);
    goto LABEL_17;
  }
  v37 = 0;
  v38 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v10 + 32LL))(v10, &v37, &v38);
  v6 = v11;
  if ( v11 >= 0 )
  {
    *((_DWORD *)this + 50) = v37;
    *((_DWORD *)this + 51) = v38;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 715, v11);
  }
  if ( v6 < 0 )
  {
LABEL_17:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_102;
    v12 = 364;
LABEL_19:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v12, v6);
    goto LABEL_102;
  }
  v13 = *((__int16 *)this + 100);
  *((_DWORD *)this + 64) = 0x7FFFFFFF;
  v14 = (unsigned __int64)(1431655766LL * v13) >> 32;
  LOWORD(v13) = *((_WORD *)this + 102);
  *((_BYTE *)this + 260) = 0;
  LOWORD(v13) = v13 + 50;
  *((_DWORD *)this + 52) = 2;
  v15 = v14 + (v14 >> 31);
  *((_WORD *)this + 107) = v13;
  *((_DWORD *)this + 56) = 1;
  *((_WORD *)this + 115) = v13;
  v16 = (__int16)(v14 + (v14 >> 31)) / 2;
  *((_WORD *)this + 106) = v16;
  v17 = v15 + v16;
  *((_WORD *)this + 114) = v17;
  *((_WORD *)this + 122) = v15 + v17;
  *((_DWORD *)this + 60) = 3;
  *((_WORD *)this + 123) = v13;
  if ( *((_QWORD *)this + 23) )
  {
    *(_QWORD *)&v40 = *((_QWORD *)this + 23);
    v18 = *((_QWORD *)this + 21);
    *((_QWORD *)&v40 + 1) = *((_QWORD *)this + 3);
    if ( v18 )
    {
      *((_QWORD *)this + 21) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v4 = CreateChildInputProcessor(128, &v40, (__int64)this + 168);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 425;
        goto LABEL_101;
      }
      goto LABEL_102;
    }
  }
  v19 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\Touch\\Buttons", 0, 0x20019u, &hKey);
  v6 = (unsigned __int16)v19 | 0x80070000;
  if ( v19 <= 0 )
    v6 = v19;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_102;
    v12 = 442;
    goto LABEL_19;
  }
  cbData = 4;
  v20 = RegQueryValueExW(hKey, L"Count", 0LL, &Type, Data, &cbData);
  v5 = v20;
  if ( v20 == 2 )
  {
    *(_DWORD *)Data = 0;
  }
  else
  {
    v21 = (unsigned __int16)v20 | 0x80070000;
    if ( (int)v5 <= 0 )
      v21 = v5;
    if ( v21 < 0 || *(_DWORD *)Data > 3u || Type != 4 )
    {
      LOBYTE(v4) = -1;
      v6 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 469;
        goto LABEL_101;
      }
LABEL_102:
      if ( hKey )
        RegCloseKey(hKey);
      return (unsigned int)v6;
    }
  }
  cbData = 4;
  v22 = RegQueryValueExW(hKey, L"Vibrate", 0LL, &Type, v39, &cbData);
  v23 = (unsigned __int16)v22 | 0x80070000;
  if ( v22 <= 0 )
    v23 = v22;
  if ( v23 >= 0 && Type == 4 )
  {
    v24 = *(_DWORD *)v39;
  }
  else
  {
    v24 = 0;
    *(_DWORD *)v39 = 0;
  }
  *((_BYTE *)this + 260) = v24 && !*(_DWORD *)Data;
  RegCloseKey(hKey);
  v25 = 0;
  hKey = 0LL;
  if ( *(_DWORD *)Data )
  {
    while ( 1 )
    {
      LODWORD(phkResult) = v25;
      v4 = StringCchPrintfW(SubKey, 260LL, L"%s\\%d", L"System\\Touch\\Buttons", phkResult);
      v6 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_102;
        v7 = 520;
LABEL_101:
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
        goto LABEL_102;
      }
      if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) > 0 )
        v6 = (unsigned __int16)RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) | 0x80070000;
      else
        v6 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_102;
        v12 = 527;
        goto LABEL_19;
      }
      cbData = 4;
      if ( RegQueryValueExW(hKey, L"VKey", 0LL, &Type, v36, &cbData) > 0 )
        v6 = (unsigned __int16)RegQueryValueExW(hKey, L"VKey", 0LL, &Type, v36, &cbData) | 0x80070000;
      else
        v6 = RegQueryValueExW(hKey, L"VKey", 0LL, &Type, v36, &cbData);
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_102;
        v12 = 537;
        goto LABEL_19;
      }
      if ( Type != 4 )
      {
        LOBYTE(v4) = -1;
        v6 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_102;
        v7 = 541;
        goto LABEL_101;
      }
      if ( *(_DWORD *)v36 <= 0x77u )
        break;
      switch ( *(_DWORD *)v36 )
      {
        case 0x78:
          v26 = 5;
          break;
        case 0x79:
          v26 = 6;
          break;
        case 0x7A:
          v26 = 0;
          break;
        case 0x7C:
          v26 = 9;
          break;
        case 0x87:
          v26 = 11;
          break;
        default:
          goto LABEL_77;
      }
LABEL_83:
      v6 = 0;
      v27 = 0;
      v28 = 0LL;
      v29 = (_DWORD *)((char *)this + 208);
      while ( v29[3] || *v29 != v26 )
      {
        ++v27;
        ++v28;
        v29 += 4;
        if ( v27 >= 3 )
          goto LABEL_89;
      }
      *((_DWORD *)this + 4 * v28 + 55) = 1;
LABEL_89:
      RegCloseKey(hKey);
      ++v25;
      hKey = 0LL;
      if ( v25 >= *(_DWORD *)Data )
        return (unsigned int)v6;
    }
    switch ( *(_DWORD *)v36 )
    {
      case 0x77:
        v26 = 10;
        goto LABEL_83;
      case 0x1B:
        v26 = 2;
        goto LABEL_83;
      case 0x71:
        v26 = 1;
        goto LABEL_83;
      case 0x72:
        v26 = 3;
        goto LABEL_83;
      case 0x75:
        v26 = 8;
        goto LABEL_83;
      case 0x76:
        v26 = 7;
        goto LABEL_83;
    }
LABEL_77:
    v26 = 0x7FFFFFFF;
    goto LABEL_83;
  }
  return (unsigned int)v6;
}
