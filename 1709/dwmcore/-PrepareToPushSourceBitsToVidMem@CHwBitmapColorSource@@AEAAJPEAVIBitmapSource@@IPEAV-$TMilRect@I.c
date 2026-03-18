/*
 * XREFs of ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801B5BBC
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x18000ABBC (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CSystemMemoryBitmap@@SAPEAX_K@Z @ 0x180135AF4 (--2CSystemMemoryBitmap@@SAPEAX_K@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801C4124 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x1801C4628 (-UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z.c)
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
  signed int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  CSystemMemoryBitmap *v16; // rax
  unsigned int v17; // edi
  unsigned int *v18; // r14
  signed int v19; // eax
  int *v20; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-61h]
  unsigned int v25; // [rsp+20h] [rbp-61h]
  __int64 v26; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v29; // [rsp+40h] [rbp-41h] BYREF
  int v30; // [rsp+48h] [rbp-39h] BYREF
  int v31; // [rsp+4Ch] [rbp-35h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-31h] BYREF
  char v33[4]; // [rsp+54h] [rbp-2Dh] BYREF
  char v34[8]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v35; // [rsp+60h] [rbp-21h] BYREF
  int v36; // [rsp+68h] [rbp-19h]
  int v37; // [rsp+6Ch] [rbp-15h]
  __int64 *v38; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v39[16]; // [rsp+80h] [rbp-1h] BYREF

  v5 = a5;
  v36 = *(_DWORD *)(a1 + 152);
  v37 = *(_DWORD *)(a1 + 156);
  *a5 = 0LL;
  v9 = *(int (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a2;
  v38 = a5;
  v29 = 0LL;
  v11 = 0LL;
  v26 = 0LL;
  v12 = *v9;
  v35 = 0LL;
  if ( v12(a2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v29) >= 0 )
    goto LABEL_24;
  v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 32LL))(
          a2,
          &v28,
          &v27);
  v14 = v13;
  if ( v13 < 0 )
  {
    v25 = 3379;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 280);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v15 + 224) + 32LL))(v15 + 224, &v30, &v31);
      if ( v28 == v30 && v27 == v31 )
      {
LABEL_12:
        v17 = 0;
        if ( a3 )
        {
          v18 = a4;
          while ( 1 )
          {
            v19 = CSystemMemoryBitmap::UnsafeUpdateFromSource(
                    *(CSystemMemoryBitmap **)(a1 + 280),
                    a2,
                    (const struct MilRectU *)&a4[4 * v17],
                    *v18,
                    v18[1]);
            v14 = v19;
            if ( v19 < 0 )
              break;
            ++v17;
            v18 += 4;
            if ( v17 >= a3 )
            {
              v5 = v38;
              goto LABEL_17;
            }
          }
          v24 = 3428;
          goto LABEL_33;
        }
LABEL_17:
        v19 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 280))(
                *(_QWORD *)(a1 + 280),
                &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                &v29);
        v14 = v19;
        if ( v19 < 0 )
        {
          v24 = 3432;
          goto LABEL_33;
        }
LABEL_24:
        v19 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(*(_QWORD *)v29 + 24LL))(
                v29,
                &v35,
                1LL,
                &v26);
        v14 = v19;
        if ( v19 < 0 )
        {
          v24 = 3442;
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v26 + 48LL))(v26, v33, v34);
          v14 = v19;
          if ( v19 < 0 )
          {
            v24 = 3449;
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 40LL))(v26, &v32);
            v14 = v19;
            if ( v19 >= 0 )
            {
              v20 = (int *)(*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v26 + 24LL))(v26, &v38);
              PixelFormatSize = GetPixelFormatSize(*v20);
              if ( v32 % (PixelFormatSize >> 3) )
              {
                v14 = -2003292288;
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F80, 0xD93u);
              }
              else
              {
                v22 = v26;
                v26 = 0LL;
                *v5 = v22;
              }
              goto LABEL_34;
            }
            v24 = 3452;
          }
        }
LABEL_33:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, v24);
LABEL_34:
        v11 = 0LL;
        goto LABEL_35;
      }
    }
    (*(void (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v39);
    ReleaseInterface<IBitmapLock>((__int64 *)(a1 + 280));
    v16 = (CSystemMemoryBitmap *)CSystemMemoryBitmap::operator new();
    if ( v16 )
      v11 = CSystemMemoryBitmap::CSystemMemoryBitmap(v16);
    if ( !v11 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xD4Du);
      goto LABEL_35;
    }
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
    v13 = CSystemMemoryBitmap::HrInit(v11, v28, v27, (const struct PixelFormatInfo *)v39, 0);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *(_QWORD *)(a1 + 280) = v11;
      goto LABEL_12;
    }
    v25 = 3410;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v25);
LABEL_35:
  ReleaseInterfaceNoNULL<CManipulationManager>(v26);
  if ( v11 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  ReleaseInterfaceNoNULL<CManipulationManager>(v29);
  return v14;
}
