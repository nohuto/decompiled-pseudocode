/*
 * XREFs of ?OnMouseRegistryKeyChange@MouseAccelerator@@AEAAXPEAUHKEY__@@@Z @ 0x18006CFC4
 * Callers:
 *     ?OnMouseRegistryKeyChangeStatic@MouseAccelerator@@SAXPEAXPEAUHKEY__@@@Z @ 0x18006CFB0 (-OnMouseRegistryKeyChangeStatic@MouseAccelerator@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18006D1B8 (-BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall MouseAccelerator::OnMouseRegistryKeyChange(MouseAccelerator *this, HKEY hKey)
{
  LSTATUS v4; // ebx
  LSTATUS v5; // edx
  signed int v6; // ecx
  signed int v7; // eax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  const WCHAR *v12; // rdx
  LSTATUS v13; // eax
  signed int v14; // ecx
  signed int v15; // eax
  struct IInputDisplay *v16; // rdx
  DWORD lpcbData; // [rsp+30h] [rbp-29h] BYREF
  DWORD Type; // [rsp+34h] [rbp-25h] BYREF
  DWORD v19; // [rsp+38h] [rbp-21h] BYREF
  DWORD cbData; // [rsp+3Ch] [rbp-1Dh] BYREF
  BYTE Data[16]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v22; // [rsp+50h] [rbp-9h]
  __int64 v23; // [rsp+60h] [rbp+7h]
  BYTE lpData[16]; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v25; // [rsp+78h] [rbp+1Fh]
  __int64 v26; // [rsp+88h] [rbp+2Fh]

  cbData = 40;
  lpcbData = 40;
  v4 = RegQueryValueExW(hKey, L"SmoothMouseXCurve", 0LL, &Type, Data, &cbData);
  v5 = RegQueryValueExW(hKey, L"SmoothMouseYCurve", 0LL, &v19, lpData, &lpcbData);
  v6 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v6 = v4;
  if ( v6 < 0 )
    goto LABEL_12;
  v7 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v7 = v5;
  if ( v7 >= 0 && Type == 3 && v19 == 3 && cbData == 40 && lpcbData == 40 )
  {
    v8 = v22;
    *(_OWORD *)this = *(_OWORD *)Data;
    v9 = v23;
    *((_OWORD *)this + 1) = v8;
    v10 = v25;
    *((_QWORD *)this + 4) = v9;
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)lpData;
    v11 = v26;
    *(_OWORD *)((char *)this + 56) = v10;
    *((_QWORD *)this + 9) = v11;
  }
  else
  {
LABEL_12:
    *(_OWORD *)this = xmmword_18010E2A8;
    *((_OWORD *)this + 1) = xmmword_18010E2B8;
    *((_QWORD *)this + 4) = qword_18010E2C8;
    *(_OWORD *)((char *)this + 40) = xmmword_18010E280;
    *(_OWORD *)((char *)this + 56) = xmmword_18010E290;
    *((_QWORD *)this + 9) = qword_18010E2A0;
  }
  v12 = (const WCHAR *)*((_QWORD *)this + 31);
  v19 = 4;
  v13 = RegQueryValueExW(hKey, v12, 0LL, &Type, (LPBYTE)&lpcbData, &v19);
  v14 = (unsigned __int16)v13 | 0x80070000;
  if ( v13 <= 0 )
    v14 = v13;
  if ( v14 >= 0 && Type == 4 )
  {
    v15 = lpcbData;
    *((_DWORD *)this + 65) = lpcbData;
    if ( v15 >= 1 )
    {
      if ( v15 > 10 )
        *((_DWORD *)this + 65) = 10;
    }
    else
    {
      *((_DWORD *)this + 65) = 1;
    }
  }
  else
  {
    *((_DWORD *)this + 65) = *((_DWORD *)this + 64);
  }
  v16 = (struct IInputDisplay *)*((_QWORD *)this + 33);
  if ( v16 )
    MouseAccelerator::BuildAccelerationCurve(this, v16);
}
