/*
 * XREFs of ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1801CA870
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B1910 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1801B1BEC (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180193F5C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CRegion::CreateHRGN(FastRegion::Internal::CRgnData **this, HRGN *a2)
{
  signed int v4; // ebx
  HRGN RectRgn; // rax
  signed int v6; // eax
  DWORD v7; // edx
  unsigned int v8; // ecx
  DWORD v9; // r8d
  HRGN v10; // rdi
  FastRegion::Internal::CRgnData *v11; // rcx
  signed int v12; // eax
  DWORD v13; // edx
  unsigned int v14; // ecx
  DWORD v15; // r8d
  signed int LastError; // eax
  DWORD v17; // edx
  unsigned int v18; // ecx
  DWORD v19; // r8d
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
      v10 = CreateRectRgnIndirect(&rect);
      if ( !v10 )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v18, v17, v19);
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x4Bu);
        goto LABEL_23;
      }
      SetLastError(0);
      if ( !CombineRgn(*a2, *a2, v10, 2) )
      {
        v12 = GetLastError();
        v4 = v12;
        if ( v12 > 0 )
          v4 = (unsigned __int16)v12 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v14, v13, v15);
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x50u);
        DeleteObject(v10);
        goto LABEL_23;
      }
      DeleteObject(v10);
      FastRegion::Internal::CRgnData::StepIterator(v11, (struct FastRegion::CRegion::Iterator *)v21);
    }
  }
  else
  {
    v6 = GetLastError();
    v4 = v6;
    if ( v6 > 0 )
      v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v8, v7, v9);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x40u);
LABEL_23:
    if ( v4 < 0 && *a2 )
    {
      DeleteObject(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)v4;
}
