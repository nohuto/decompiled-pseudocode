/*
 * XREFs of ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x1801498BC
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180019D10 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnRotateBits(
        struct IBitmapDest *a1,
        enum DXGI_MODE_ROTATION a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  signed int v9; // eax
  unsigned int v10; // ebx
  signed int v11; // eax
  int v12; // r12d
  int v13; // eax
  signed int v14; // eax
  int v15; // ebx
  int *v16; // rax
  signed int v17; // eax
  signed int v18; // eax
  signed int v19; // eax
  signed int v20; // eax
  int v21; // edx
  int v22; // r14d
  int v23; // r8d
  char *v24; // r15
  size_t v25; // rbx
  int v26; // r12d
  int v27; // esi
  int v28; // edi
  int v29; // esi
  __int64 v31; // [rsp+30h] [rbp-51h] BYREF
  int v32; // [rsp+38h] [rbp-49h] BYREF
  int v33; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v34; // [rsp+40h] [rbp-41h] BYREF
  size_t Size; // [rsp+48h] [rbp-39h]
  int v36; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned int v38; // [rsp+58h] [rbp-29h]
  void *v39; // [rsp+60h] [rbp-21h] BYREF
  char v40[4]; // [rsp+68h] [rbp-19h] BYREF
  char v41[4]; // [rsp+6Ch] [rbp-15h] BYREF
  __int64 v42; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v43[2]; // [rsp+78h] [rbp-9h] BYREF
  int v44; // [rsp+80h] [rbp-1h]
  int v45; // [rsp+84h] [rbp+3h]
  _BYTE v46[16]; // [rsp+88h] [rbp+7h] BYREF

  v5 = *(_QWORD *)a1;
  v31 = 0LL;
  v34 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64 *))(v5 + 24))(a1, 0LL, 1LL, &v31);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x36u);
    goto LABEL_36;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v31 + 32LL))(v31, &v33, &v32);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x38u);
    goto LABEL_36;
  }
  v12 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 24LL))(v31, v46);
  v43[1] = a5;
  v43[0] = a4;
  if ( a2 != DXGI_MODE_ROTATION_ROTATE90 )
  {
    if ( a2 == DXGI_MODE_ROTATION_ROTATE180 )
    {
      v44 = v33;
      v13 = v32;
      goto LABEL_9;
    }
    if ( a2 != DXGI_MODE_ROTATION_ROTATE270 )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x4Fu);
      goto LABEL_36;
    }
  }
  v44 = v32;
  v13 = v33;
LABEL_9:
  v45 = v13;
  v14 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)a3 + 24LL))(
          a3,
          v43,
          2LL,
          &v34);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x58u);
    goto LABEL_36;
  }
  v15 = GetPixelFormatSize(v12) >> 3;
  LODWORD(Size) = v15;
  v16 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v34 + 24LL))(v34, v46);
  if ( v15 != GetPixelFormatSize(*v16) >> 3 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x63u);
    goto LABEL_36;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, v40, &v42);
  v10 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x69u);
    goto LABEL_36;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 40LL))(v31, &v36);
  v10 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x6Au);
    goto LABEL_36;
  }
  v19 = (*(__int64 (__fastcall **)(__int64, char *, void **))(*(_QWORD *)v34 + 48LL))(v34, v41, &v39);
  v10 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x6Fu);
    goto LABEL_36;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 40LL))(v34, &v37);
  v38 = v20;
  v10 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x70u);
    goto LABEL_36;
  }
  v21 = v45;
  v22 = 0;
  if ( v45 > 0 )
  {
    v23 = v44;
    v24 = (char *)v39;
    v25 = (unsigned int)Size;
    while ( 1 )
    {
      v26 = 0;
      if ( v23 <= 0 )
        goto LABEL_27;
      do
      {
        if ( a2 == DXGI_MODE_ROTATION_ROTATE90 )
        {
          v28 = v22;
          v29 = v23 - v26;
        }
        else
        {
          if ( a2 != DXGI_MODE_ROTATION_ROTATE180 )
          {
            v27 = v26;
            v28 = v21 - v22 - 1;
            goto LABEL_25;
          }
          v28 = v23 - v26 - 1;
          v29 = v21 - v22;
        }
        v27 = v29 - 1;
LABEL_25:
        memcpy_0(v24, (const void *)(v42 + (unsigned int)(v27 * v36) + (unsigned int)(v28 * v25)), v25);
        v23 = v44;
        v24 += v25;
        v21 = v45;
        ++v26;
      }
      while ( v26 < v44 );
      v24 = (char *)v39;
LABEL_27:
      ++v22;
      v24 += v37;
      v39 = v24;
      if ( v22 >= v21 )
      {
        v10 = v38;
        break;
      }
    }
  }
LABEL_36:
  ReleaseInterfaceNoNULL<CManipulationManager>(v34);
  ReleaseInterfaceNoNULL<CManipulationManager>(v31);
  return v10;
}
