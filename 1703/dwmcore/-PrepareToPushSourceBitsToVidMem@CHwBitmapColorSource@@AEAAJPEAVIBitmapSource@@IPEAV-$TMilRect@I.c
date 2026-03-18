/*
 * XREFs of ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004447C
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18007DCC8 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180145AF4 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x1801A9010 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 *     ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x1801A95A4 (-UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
        __int64 a1,
        struct IBitmapSource *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  int (__fastcall **v9)(struct IBitmapSource *, GUID *, __int64 *); // rax
  CSystemMemoryBitmap *v11; // rdi
  int (__fastcall *v12)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  CSystemMemoryBitmap *v20; // rax
  unsigned int v21; // edi
  unsigned int *v22; // r14
  unsigned int v23; // [rsp+20h] [rbp-61h]
  unsigned int v24; // [rsp+20h] [rbp-61h]
  __int64 v25; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v28; // [rsp+40h] [rbp-41h] BYREF
  int v29; // [rsp+48h] [rbp-39h] BYREF
  int v30; // [rsp+4Ch] [rbp-35h] BYREF
  enum DXGI_FORMAT v31; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-2Dh] BYREF
  char v33[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v34; // [rsp+60h] [rbp-21h]
  char v35[8]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v36; // [rsp+70h] [rbp-11h] BYREF
  int v37; // [rsp+78h] [rbp-9h]
  __int64 v38; // [rsp+80h] [rbp-1h] BYREF
  int v39; // [rsp+88h] [rbp+7h]
  int v40; // [rsp+8Ch] [rbp+Bh]

  v5 = a5;
  v39 = *(_DWORD *)(a1 + 144);
  v40 = *(_DWORD *)(a1 + 148);
  *a5 = 0LL;
  v9 = *(int (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a2;
  v34 = a5;
  v28 = 0LL;
  v11 = 0LL;
  v25 = 0LL;
  v12 = *v9;
  v38 = 0LL;
  if ( v12(a2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v28) >= 0 )
    goto LABEL_2;
  v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v27,
          &v26);
  v14 = v17;
  if ( v17 < 0 )
  {
    v24 = 3393;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 272);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v18 + 224) + 24LL))(v18 + 224, &v29, &v30);
      if ( v27 == v29 && v26 == v30 )
      {
LABEL_23:
        v21 = 0;
        if ( a3 )
        {
          v22 = a4;
          while ( 1 )
          {
            v13 = CSystemMemoryBitmap::UnsafeUpdateFromSource(
                    *(CSystemMemoryBitmap **)(a1 + 272),
                    a2,
                    (const struct MilRectU *)&a4[4 * v21],
                    *v22,
                    v22[1]);
            v14 = v13;
            if ( v13 < 0 )
              break;
            ++v21;
            v22 += 4;
            if ( v21 >= a3 )
            {
              v5 = v34;
              goto LABEL_28;
            }
          }
          v23 = 3446;
          goto LABEL_40;
        }
LABEL_28:
        v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 272))(
                *(_QWORD *)(a1 + 272),
                &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                &v28);
        v14 = v13;
        if ( v13 < 0 )
        {
          v23 = 3450;
          goto LABEL_40;
        }
LABEL_2:
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)v28 + 24LL))(
                v28,
                &v38,
                1LL,
                &v25);
        v14 = v13;
        if ( v13 < 0 )
        {
          v23 = 3460;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v25 + 64LL))(v25, v33, v35);
          v14 = v13;
          if ( v13 < 0 )
          {
            v23 = 3467;
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 56LL))(v25, &v32);
            v14 = v13;
            if ( v13 < 0 )
            {
              v23 = 3470;
            }
            else
            {
              v13 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v25 + 24LL))(v25, &v31);
              v14 = v13;
              if ( v13 >= 0 )
              {
                if ( v32 % (GetPixelFormatSize(v31) >> 3) )
                {
                  v14 = -2003292288;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0xDA6u);
                }
                else
                {
                  v15 = v25;
                  v25 = 0LL;
                  *v5 = v15;
                }
                goto LABEL_8;
              }
              v23 = 3473;
            }
          }
        }
LABEL_40:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v23);
LABEL_8:
        v11 = 0LL;
        goto LABEL_9;
      }
    }
    v36 = 0LL;
    v37 = 0;
    v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v36);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 3413;
    }
    else
    {
      HIDWORD(v36) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
      v37 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
      ReleaseInterface<IBitmapLock>(a1 + 272);
      v20 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new(v19);
      if ( v20 )
        v11 = CSystemMemoryBitmap::CSystemMemoryBitmap(v20);
      if ( !v11 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD5Fu);
        goto LABEL_9;
      }
      (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
      v17 = CSystemMemoryBitmap::HrInit(v11, v27, v26, (const struct PixelFormatInfo *)&v36, 0);
      v14 = v17;
      if ( v17 >= 0 )
      {
        *(_QWORD *)(a1 + 272) = v11;
        goto LABEL_23;
      }
      v24 = 3428;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v24);
LABEL_9:
  ReleaseInterfaceNoNULL<CD2DPencil>(v25);
  if ( v11 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  ReleaseInterfaceNoNULL<CD2DPencil>(v28);
  return v14;
}
