/*
 * XREFs of ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801F56A4
 * Callers:
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801F55C4 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801F5868 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1801F5CD4 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801F6448 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmapWorker(
        CBitmapColorKey *this,
        __int64 (__fastcall ***a2)(struct IBitmapDest *, GUID *, __int64 *),
        const struct CColorKey *a3)
{
  __int64 (__fastcall **v3)(struct IBitmapDest *, GUID *, __int64 *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int inited; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r9d
  int v16; // eax
  struct IPixelFormat *v18; // [rsp+30h] [rbp-50h] BYREF
  INT v19; // [rsp+38h] [rbp-48h] BYREF
  INT v20; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  char v23[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 *v24; // [rsp+58h] [rbp-28h] BYREF
  struct WICRect v25; // [rsp+60h] [rbp-20h] BYREF

  v3 = *a2;
  v22 = 0LL;
  v18 = 0LL;
  v7 = (*v3)((struct IBitmapDest *)a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xFFu);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, INT *, INT *))(*(_QWORD *)v22 + 32LL))(v22, &v19, &v20);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x101u);
    }
    else
    {
      v25.X = 0;
      v25.Y = 0;
      v25.Width = v19;
      v25.Height = v20;
      v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *), struct WICRect *, __int64, struct IPixelFormat **))(*a2)[3])(
              a2,
              &v25,
              2LL,
              &v18);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x10Cu);
      }
      else
      {
        inited = CBitmapColorKey::InitPixelFormatInfo(this, v18);
        v8 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0x10Eu);
        }
        else
        {
          v12 = CBitmapColorKey::InitColorKey(this, a3);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x10Fu);
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(struct IPixelFormat *, char *, unsigned __int8 **))(*(_QWORD *)v18 + 48LL))(
                    v18,
                    v23,
                    &v24);
            v8 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x111u);
            }
            else
            {
              v14 = (*(__int64 (__fastcall **)(struct IPixelFormat *, unsigned int *))(*(_QWORD *)v18 + 40LL))(
                      v18,
                      &v21);
              v8 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x112u);
              }
              else
              {
                v16 = CBitmapColorKey::ApplyColorKeyToBuffer(this, &v25, v21, v15, v24);
                v8 = v16;
                if ( v16 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x125u);
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v18);
  ReleaseInterfaceNoNULL<IBitmapSource>(v22);
  return v8;
}
