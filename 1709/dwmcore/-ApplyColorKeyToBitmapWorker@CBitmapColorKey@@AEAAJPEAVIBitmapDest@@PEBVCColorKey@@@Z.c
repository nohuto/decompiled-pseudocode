/*
 * XREFs of ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAC30
 * Callers:
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAB50 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801BADF4 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x1801BB244 (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801BB9A4 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmapWorker(
        CBitmapColorKey *this,
        __int64 (__fastcall ***a2)(struct IBitmapDest *, GUID *, __int64 *),
        const struct CColorKey *a3)
{
  __int64 (__fastcall **v3)(struct IBitmapDest *, GUID *, __int64 *); // rax
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed int v10; // eax
  signed int inited; // eax
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  unsigned int v15; // r9d
  signed int v16; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xFFu);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, INT *, INT *))(*(_QWORD *)v22 + 32LL))(v22, &v19, &v20);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x101u);
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x10Cu);
      }
      else
      {
        inited = CBitmapColorKey::InitPixelFormatInfo(this, v18);
        v8 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, inited, 0x10Eu);
        }
        else
        {
          v12 = CBitmapColorKey::InitColorKey(this, a3);
          v8 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x10Fu);
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
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x111u);
            }
            else
            {
              v14 = (*(__int64 (__fastcall **)(struct IPixelFormat *, unsigned int *))(*(_QWORD *)v18 + 40LL))(
                      v18,
                      &v21);
              v8 = v14;
              if ( v14 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x112u);
              }
              else
              {
                v16 = CBitmapColorKey::ApplyColorKeyToBuffer(this, &v25, v21, v15, v24);
                v8 = v16;
                if ( v16 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x125u);
              }
            }
          }
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v18);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v22);
  return v8;
}
