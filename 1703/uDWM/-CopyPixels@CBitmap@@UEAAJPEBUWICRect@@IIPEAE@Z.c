/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A2790
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x18004E070 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003FFFC (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A17BC (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A2A0C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x1800A2C34 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v9; // ebx
  int v10; // r9d
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-71h]
  unsigned int v18; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  int v21; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp-21h] BYREF
  __int64 v25; // [rsp+78h] [rbp-19h] BYREF
  int v26; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+84h] [rbp-Dh]
  struct tagRECT v28; // [rsp+88h] [rbp-9h] BYREF

  v20 = 0LL;
  v21 = 0;
  v19 = 0;
  Src = 0LL;
  v18 = 0;
  v24 = ((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64);
  if ( *(_BYTE *)(v24 + 0x30) )
    EnterCriticalSection((LPCRITICAL_SECTION)((((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64))
                                            + 8));
  if ( !a5 )
  {
    v9 = -2147024809;
    v17 = 160;
LABEL_5:
    v10 = v9;
    goto LABEL_31;
  }
  if ( !a2 )
  {
    v11 = *((_DWORD *)this + 42);
    v12 = -1;
    v25 = 0LL;
    v13 = -1;
    if ( v11 <= 0x7FFFFFFF )
      v13 = v11;
    v26 = v13;
    v9 = v11 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v11 > 0x7FFFFFFF )
    {
      v17 = 168;
      goto LABEL_5;
    }
    v14 = *((_DWORD *)this + 43);
    if ( v14 <= 0x7FFFFFFF )
      v12 = *((_DWORD *)this + 43);
    v27 = v12;
    v9 = v14 > 0x7FFFFFFF ? 0x80070216 : 0;
    if ( v14 > 0x7FFFFFFF )
    {
      v17 = 169;
      goto LABEL_5;
    }
    a2 = (const struct WICRect *)&v25;
  }
  v15 = CBitmap::HrCheckPixelRect((CBitmap *)((char *)this - 16), a2, &v28);
  v9 = v15;
  if ( v15 >= 0 )
  {
    v15 = HrCheckBufferSize(*((_DWORD *)this + 46), a3, a2, a4);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v20);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v20 + 48LL))(v20, &v21, &v19);
        v9 = v15;
        if ( v15 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 56LL))(v20, &v22);
          v9 = v15;
          if ( v15 >= 0 )
          {
            v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v20 + 64LL))(
                    v20,
                    &v18,
                    &Src);
            v9 = v15;
            if ( v15 >= 0 )
            {
              v15 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                      a2->Width,
                      v19,
                      v22,
                      v18,
                      Src,
                      a3,
                      a4,
                      a5);
              v9 = v15;
              if ( v15 >= 0 )
                goto LABEL_32;
              v17 = 199;
            }
            else
            {
              v17 = 186;
            }
          }
          else
          {
            v17 = 184;
          }
        }
        else
        {
          v17 = 183;
        }
      }
      else
      {
        v17 = 181;
      }
    }
    else
    {
      v17 = 179;
    }
  }
  else
  {
    v17 = 174;
  }
  v10 = v15;
LABEL_31:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, v17);
LABEL_32:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v24);
  return v9;
}
