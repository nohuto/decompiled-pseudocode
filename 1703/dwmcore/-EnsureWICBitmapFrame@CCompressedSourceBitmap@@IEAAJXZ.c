/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA994
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA78C (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1801AABB0 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // r14
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)this + 240);
  v9 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 30) )
    return v1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 112LL))(*((_QWORD *)this + 34), &v9);
  v1 = v4;
  if ( v4 < 0 )
  {
    v8 = 253;
    goto LABEL_16;
  }
  if ( !v9 )
  {
    v5 = -2147024890;
    v8 = 254;
    v1 = -2147024890;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v8);
    goto LABEL_18;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 128LL))(
         v9,
         *((_QWORD *)this + 32),
         *((unsigned int *)this + 66));
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x101u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, 0LL, 0LL, 0LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, _QWORD, __int64 *))(**((_QWORD **)this + 34) + 32LL))(
           *((_QWORD *)this + 34),
           v9,
           &GUID_VendorMicrosoft,
           0LL,
           &v10);
    v1 = v4;
    if ( v4 < 0 )
    {
      v8 = 264;
      goto LABEL_16;
    }
    if ( !v10 )
    {
      v5 = -2147024890;
      v8 = 265;
      v1 = -2147024890;
      goto LABEL_17;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v10 + 104LL))(v10, 0LL, v2);
    v1 = v4;
    if ( v4 < 0 )
    {
      v8 = 267;
      goto LABEL_16;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           (char *)this + 168,
           (char *)this + 172);
    v1 = v4;
    if ( v4 < 0 )
    {
      v8 = 272;
LABEL_16:
      v5 = v4;
      goto LABEL_17;
    }
  }
LABEL_18:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v1;
}
