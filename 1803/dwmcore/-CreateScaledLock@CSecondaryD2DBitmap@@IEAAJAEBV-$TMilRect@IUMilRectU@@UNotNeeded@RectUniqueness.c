/*
 * XREFs of ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180179D24
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800834A0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180020A04 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800B86CC (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(__int64 a1, _DWORD *a2, __int64 *a3, _QWORD *a4)
{
  struct IBitmapSource *v4; // rsi
  __int64 v6; // rax
  void (__fastcall *v9)(__int64 *, int *, int *); // rax
  struct IBitmapSource *v10; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct IUnknown *v28; // [rsp+30h] [rbp-69h]
  __int64 v29; // [rsp+40h] [rbp-59h] BYREF
  struct IWICBitmapSource *v30; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-45h] BYREF
  struct IBitmapSource *v33; // [rsp+58h] [rbp-41h] BYREF
  struct IBitmapSource *v34; // [rsp+60h] [rbp-39h] BYREF
  __int64 v35; // [rsp+68h] [rbp-31h] BYREF
  __int64 v36; // [rsp+70h] [rbp-29h] BYREF
  __int64 v37; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int8 *v38; // [rsp+80h] [rbp-19h] BYREF
  int v39; // [rsp+88h] [rbp-11h] BYREF
  int v40; // [rsp+8Ch] [rbp-Dh]
  int v41; // [rsp+90h] [rbp-9h] BYREF
  int v42; // [rsp+94h] [rbp-5h] BYREF
  _DWORD v43[4]; // [rsp+98h] [rbp-1h] BYREF
  _BYTE v44[16]; // [rsp+A8h] [rbp+Fh] BYREF

  v29 = 0LL;
  v4 = 0LL;
  *a4 = 0LL;
  v6 = *a3;
  v37 = 0LL;
  v36 = 0LL;
  v30 = 0LL;
  v9 = *(void (__fastcall **)(__int64 *, int *, int *))(v6 + 32);
  v10 = 0LL;
  v35 = 0LL;
  v39 = 0;
  v40 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v9(a3, &v41, &v42);
  v12 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64 *))(*a3 + 64))(a3, &v39, &v29);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x13Eu);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 24LL))(v29, v44);
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 40LL))(v29, &v32);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x142u);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v29 + 48LL))(
              v29,
              &v31,
              &v38);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x143u);
      }
      else
      {
        v16 = HrCreateBitmapFromMemoryEx(
                v41 - v39,
                v42 - v40,
                (const struct PixelFormatInfo *)v44,
                v32,
                v31,
                v38,
                v28,
                &v34);
        v13 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x14Fu);
          v4 = v34;
        }
        else
        {
          v4 = v34;
          v17 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v34)(
                  v34,
                  &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                  &v37);
          v13 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x151u);
          }
          else
          {
            v18 = WICCreateImagingFactory_Proxy(567LL, &v36);
            v13 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x157u);
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v36 + 88LL))(v36, &v30);
              v13 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x159u);
              }
              else
              {
                v20 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v30->lpVtbl[1].QueryInterface)(
                        v30,
                        v37,
                        *(unsigned int *)(a1 + 168),
                        *(unsigned int *)(a1 + 172),
                        3);
                v13 = v20;
                if ( v20 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x161u);
                }
                else
                {
                  v21 = HrCreateBitmapFromWICBitmapSource(v30, &v33);
                  v13 = v21;
                  if ( v21 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x166u);
                    v10 = v33;
                  }
                  else
                  {
                    v10 = v33;
                    v22 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v33)(
                            v33,
                            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                            &v35);
                    v13 = v22;
                    if ( v22 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x168u);
                    }
                    else
                    {
                      v23 = a2[1];
                      v24 = a2[2] - *a2;
                      v43[0] = *a2;
                      v43[2] = v24;
                      v25 = a2[3] - v23;
                      v43[1] = v23;
                      v43[3] = v25;
                      v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v35 + 24LL))(
                              v35,
                              v43,
                              1LL,
                              a4);
                      v13 = v26;
                      if ( v26 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x16Fu);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(v35);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v10);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v30);
  ReleaseInterfaceNoNULL<IWICBitmap>(v36);
  ReleaseInterfaceNoNULL<IWICBitmap>(v37);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v4);
  ReleaseInterfaceNoNULL<IWICBitmap>(v29);
  return v13;
}
