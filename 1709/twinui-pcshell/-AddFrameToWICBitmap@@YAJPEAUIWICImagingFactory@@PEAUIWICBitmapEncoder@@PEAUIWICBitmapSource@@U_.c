/*
 * XREFs of ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x1800E6AE0
 * Callers:
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1800E6E34 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 * Callees:
 *     ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x1800E6854 (-SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AddFrameToWICBitmap(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, char a5)
{
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-91h] BYREF
  __int64 v17; // [rsp+48h] [rbp-89h] BYREF
  __int64 v18; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v20; // [rsp+5Ch] [rbp-75h] BYREF
  __int128 v21; // [rsp+60h] [rbp-71h] BYREF
  __int64 v22; // [rsp+70h] [rbp-61h]
  __int64 v23; // [rsp+80h] [rbp-51h]
  _QWORD v24[5]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-21h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp-19h]
  unsigned int v27; // [rsp+BCh] [rbp-15h]
  __int128 v28; // [rsp+C0h] [rbp-11h] BYREF
  __int64 v29; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+7h]

  v23 = -2LL;
  v16 = 0LL;
  v18 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v16, &v18);
  if ( v9 < 0 )
    goto LABEL_31;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v29);
  if ( v9 < 0 )
    goto LABEL_31;
  if ( v29 == *(_QWORD *)&GUID_ContainerFormatBmp.Data1
    && v30 == *(_QWORD *)GUID_ContainerFormatBmp.Data4
    && (a5 & 1) != 0 )
  {
    v21 = 0uLL;
    v22 = 0LL;
    memset(v24, 0, sizeof(v24));
    LOWORD(v21) = 11;
    WORD4(v21) = -1;
    v24[2] = L"EnableV5Header32bppBGRA";
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int128 *))(*(_QWORD *)v18 + 32LL))(
            v18,
            1LL,
            v24,
            &v21);
LABEL_11:
    v9 = v10;
    goto LABEL_12;
  }
  if ( v29 == *(_QWORD *)&GUID_ContainerFormatJpeg.Data1
    && v30 == *(_QWORD *)GUID_ContainerFormatJpeg.Data4
    && (a5 & 2) != 0 )
  {
    v10 = SetJpegQuantizationTableOptions(v29, v18);
    goto LABEL_11;
  }
LABEL_12:
  if ( v9 < 0 )
    goto LABEL_31;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v18);
  if ( v9 < 0 )
    goto LABEL_31;
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)a3 + 24LL))(a3, &v19, &v20);
  if ( v9 < 0 )
    goto LABEL_31;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, v19, v20);
  if ( v9 < 0 )
    goto LABEL_31;
  v28 = *a4;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 48LL))(v16, &v28);
  if ( v9 < 0 )
    goto LABEL_31;
  v17 = 0LL;
  if ( v28 == *a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = v17;
    v17 = a3;
    if ( !v11 )
      goto LABEL_26;
  }
  else
  {
    v21 = *a4;
    v17 = 0LL;
    v25 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, &v25);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v25 + 64LL))(
             v25,
             a3,
             &v21,
             0LL,
             0LL,
             0LL,
             0);
      if ( v9 >= 0 )
        v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v25)(
               v25,
               &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
               &v17);
    }
    v11 = v25;
    if ( !v25 )
      goto LABEL_26;
    v25 = 0LL;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_26:
  if ( v9 >= 0 )
  {
    v25 = 0LL;
    v26 = v19;
    v27 = v20;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 88LL))(v16, v17, &v25);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_31:
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v9;
}
