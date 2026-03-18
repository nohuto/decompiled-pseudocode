/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800AFD60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800AFEA4 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800AFF8C (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800B0004 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(DWORD *this)
{
  int v2; // eax
  signed int v3; // ebx
  HANDLE FileMappingW; // rax
  int Bits; // eax
  int v6; // eax
  unsigned int v7; // ebx
  signed int LastError; // eax
  int v10; // r9d
  int v11; // r9d
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-18h]
  DWORD dwMaximumSizeLowa; // [rsp+20h] [rbp-18h]

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((CaptureBitsResponse *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    dwMaximumSizeLow = 335;
    v10 = v2;
  }
  else
  {
    SetLastError(0);
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, this[32], 0LL);
    *((_QWORD *)this + 14) = FileMappingW;
    if ( FileMappingW )
      goto LABEL_3;
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    dwMaximumSizeLow = 345;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v10 = v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, dwMaximumSizeLow);
LABEL_3:
  if ( v3 < 0 )
  {
    dwMaximumSizeLowa = 120;
    v11 = v3;
  }
  else
  {
    Bits = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v3 = Bits;
    if ( Bits < 0 )
    {
      dwMaximumSizeLowa = 122;
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v3 = Bits;
      if ( Bits >= 0 )
        goto LABEL_6;
      dwMaximumSizeLowa = 128;
    }
    v11 = Bits;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, dwMaximumSizeLowa);
LABEL_6:
  v6 = (*(__int64 (__fastcall **)(DWORD *, _QWORD))(*(_QWORD *)this + 32LL))(this, (unsigned int)v3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x83u);
  return v7;
}
