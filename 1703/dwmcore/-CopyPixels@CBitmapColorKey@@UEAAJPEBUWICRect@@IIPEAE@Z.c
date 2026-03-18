/*
 * XREFs of ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801A1730
 * Callers:
 *     ?CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800D6610 (-CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007E324 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801A1620 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 */

__int64 __fastcall CBitmapColorKey::CopyPixels(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  const struct WICRect *v7; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]

  v17 = 0LL;
  v18 = 0LL;
  v7 = a2;
  if ( !a2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           &v16,
           (char *)&v16 + 4);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x266u);
      return v10;
    }
    v7 = (const struct WICRect *)&v17;
    v18 = v16;
  }
  v11 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 6), a3, v7, a4);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x271u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 2) + 64LL))(
            *((_QWORD *)this + 2),
            v7,
            a3,
            a4,
            a5);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x279u);
    }
    else
    {
      v14 = CBitmapColorKey::ApplyColorKeyToBuffer((CBitmapColorKey *)((char *)this - 16), v7, a3, v13, a5);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x281u);
    }
  }
  return v10;
}
