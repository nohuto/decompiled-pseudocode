/*
 * XREFs of ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18007F140
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D974 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetInformation(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  DWORD v4; // ebx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  DWORD v15; // r9d
  signed int LastError; // eax
  signed int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-60h]
  int v19; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+5Ch] [rbp-24h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp-8h]

  v4 = 0;
  if ( !a2 )
  {
    if ( a3 && *a3 >= 0x38u )
    {
      *a3 = 56;
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfGetDirtyRgn(
                           *(_QWORD *)(a1 + 24),
                           *(_QWORD *)a4,
                           *(_QWORD *)(a4 + 8),
                           *(_QWORD *)(a4 + 16),
                           *(_QWORD *)(a4 + 24),
                           *(_QWORD *)(a4 + 32),
                           *(_QWORD *)(a4 + 40),
                           a4 + 48,
                           a4 + 52) )
        return v4;
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v18 = 232;
      goto LABEL_24;
    }
    v18 = 219;
    goto LABEL_36;
  }
  v9 = a2 - 2;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      v15 = -2147024809;
      v18 = 260;
LABEL_37:
      v4 = v15;
LABEL_38:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180207360, 3u, v15, v18);
      return v4;
    }
    memset_0(&v19, 0, 0x20uLL);
    if ( a3 && *a3 >= 0x20u )
    {
      *a3 = 32;
      SetLastError(0);
      if ( (unsigned int)DwmGetRedirectionStyle(*(_QWORD *)(a1 + 24), &v19) )
      {
        *(_DWORD *)a4 = v19;
        *(_DWORD *)(a4 + 8) = v20;
        *(_DWORD *)(a4 + 12) = v21;
        *(_QWORD *)(a4 + 16) = v22;
        *(_QWORD *)(a4 + 24) = v23;
        return v4;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v18 = 249;
LABEL_24:
      if ( LastError >= 0 )
        LastError = -2003304445;
      v4 = LastError;
      v15 = LastError;
      goto LABEL_38;
    }
    v18 = 244;
LABEL_36:
    v15 = -2147024872;
    goto LABEL_37;
  }
  memset_0(&v19, 0, 0x30uLL);
  if ( !a3 || *a3 < 0x138u )
  {
    v18 = 124;
    goto LABEL_36;
  }
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  *a3 = 312;
  if ( (unsigned int)DwmGetSurfaceData(v10, &v19) )
  {
    v11 = v19;
    *(_DWORD *)(a4 + 32) = v20;
    *(_DWORD *)(a4 + 36) = v21;
    *(_DWORD *)(a4 + 40) = HIDWORD(v22);
    *(_QWORD *)(a4 + 16) = v23;
    v12 = v11 - 1;
    if ( v12 )
    {
      *(_QWORD *)(a4 + 24) = 0LL;
      if ( v12 == 1 )
      {
        v13 = v24;
        *(_DWORD *)a4 = 2;
        *(_DWORD *)(a4 + 44) = 87;
        *(_DWORD *)(a4 + 48) = 1;
        *(_QWORD *)(a4 + 56) = v13;
        *(_QWORD *)(a4 + 64) = v25;
      }
      else
      {
        *(_DWORD *)a4 = 0;
        *(_QWORD *)(a4 + 64) = 0LL;
        *(_DWORD *)(a4 + 48) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 24) = v25;
      v14 = v24;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 48) = 0;
      *(_QWORD *)(a4 + 56) = v14;
      *(_QWORD *)(a4 + 64) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_DWORD *)(a4 + 48) = 0;
    *(_QWORD *)(a4 + 64) = 0LL;
    v17 = GetLastError();
    if ( v17 > 0 )
      return (unsigned __int16)v17 | 0x80070000;
    else
      return (DWORD)v17;
  }
  return v4;
}
