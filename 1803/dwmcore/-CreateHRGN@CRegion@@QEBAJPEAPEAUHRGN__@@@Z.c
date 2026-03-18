/*
 * XREFs of ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800D923C
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800D8930 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800D8A3C (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801CD110 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CRegion::CreateHRGN(FastRegion::Internal::CRgnData **this, HRGN *a2)
{
  signed int v4; // ebx
  HRGN RectRgn; // rax
  HRGN v6; // rdi
  FastRegion::Internal::CRgnData *v7; // rcx
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  signed int v13; // eax
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // r8d
  signed int LastError; // eax
  int v18; // edx
  unsigned int v19; // ecx
  int v20; // r8d
  _BYTE v21[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-50h]
  LONG *v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-40h]
  int v25; // [rsp+50h] [rbp-38h]
  RECT rect; // [rsp+60h] [rbp-28h] BYREF

  v4 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  *a2 = RectRgn;
  if ( RectRgn )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*this, (struct FastRegion::CRegion::Iterator *)v21);
    while ( (unsigned __int64)v23 < v22 )
    {
      rect.top = *v23;
      rect.bottom = v23[2];
      rect.left = *(_DWORD *)(v24 + 8LL * v25);
      rect.right = *(_DWORD *)(v24 + 4LL * (2 * v25 + 1));
      SetLastError(0);
      v6 = CreateRectRgnIndirect(&rect);
      if ( !v6 )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v19, v18, v20);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x4Bu);
        goto LABEL_24;
      }
      SetLastError(0);
      if ( !CombineRgn(*a2, *a2, v6, 2) )
      {
        v13 = GetLastError();
        v4 = v13;
        if ( v13 > 0 )
          v4 = (unsigned __int16)v13 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v15, v14, v16);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x50u);
        DeleteObject(v6);
        goto LABEL_24;
      }
      DeleteObject(v6);
      FastRegion::Internal::CRgnData::StepIterator(v7, (struct FastRegion::CRegion::Iterator *)v21);
    }
  }
  else
  {
    v9 = GetLastError();
    v4 = v9;
    if ( v9 > 0 )
      v4 = (unsigned __int16)v9 | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v11, v10, v12);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x40u);
LABEL_24:
    if ( v4 < 0 && *a2 )
    {
      DeleteObject(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)v4;
}
