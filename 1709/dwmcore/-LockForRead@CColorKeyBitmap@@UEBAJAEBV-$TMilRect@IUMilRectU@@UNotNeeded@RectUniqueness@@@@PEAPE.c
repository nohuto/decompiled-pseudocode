/*
 * XREFs of ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801D1850
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801360E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAB50 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::LockForRead(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r15
  int v4; // eax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  const struct PixelFormatInfo *v12; // rax
  signed int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-49h]
  unsigned int v16; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-35h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h] BYREF
  struct IBitmapDest *v19; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v23[4]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v24[4]; // [rsp+6Ch] [rbp+3h] BYREF
  _BYTE v25[16]; // [rsp+70h] [rbp+7h] BYREF

  v3 = a1 - 8;
  v4 = a2[2] - *a2;
  v19 = 0LL;
  v18 = 0LL;
  v21[0] = 0;
  v21[1] = 0;
  v17 = 0;
  v20 = 0LL;
  v16 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v21[2] = v4;
  v8 = a2[3] - a2[1];
  *a3 = 0LL;
  v21[3] = v8;
  (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v23, v24);
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)v22, (__int64)a2) )
  {
    v10 = a2[3] - a2[1];
    v11 = a2[2] - *a2;
    v12 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 24LL))(v3, v25);
    v13 = HrCreateDestBitmap(v11, v10, v12, &v19);
    v9 = v13;
    if ( v13 < 0 )
    {
      v15 = 236;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)v19 + 24LL))(
              v19,
              v21,
              1LL,
              &v18);
      v9 = v13;
      if ( v13 < 0 )
      {
        v15 = 240;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 40LL))(v18, &v17);
        v9 = v13;
        if ( v13 < 0 )
        {
          v15 = 242;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v16, &v20);
          v9 = v13;
          if ( v13 < 0 )
          {
            v15 = 243;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 56LL))(
                    *(_QWORD *)(a1 + 16),
                    a2,
                    v17,
                    v16,
                    v20);
            v9 = v13;
            if ( v13 < 0 )
            {
              v15 = 249;
            }
            else
            {
              ReleaseInterface<IBitmapLock>(&v18);
              v13 = CBitmapColorKey::ApplyColorKeyToBitmap(v19, (const struct CColorKey *)(a1 + 24));
              v9 = v13;
              if ( v13 < 0 )
              {
                v15 = 253;
              }
              else
              {
                v13 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v19 + 24LL))(
                        v19,
                        v21,
                        1LL,
                        a3);
                v9 = v13;
                if ( v13 >= 0 )
                  goto LABEL_18;
                v15 = 256;
              }
            }
          }
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v15);
    goto LABEL_18;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xE5u);
LABEL_18:
  ReleaseInterfaceNoNULL<CManipulationManager>(v18);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v19);
  return v9;
}
