/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800CE700
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180078E14 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800CE8F4 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18019E030 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CDWMOffScreenSwapChain *this,
        HRGN hrgn,
        __int64 a3,
        char a4,
        struct RenderTargetPresentParameters *a5)
{
  HRGN RectRgn; // rsi
  bool v9; // r13
  HGDIOBJ v11; // r15
  signed int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 i; // rbx
  __int64 v16; // rax
  signed int v17; // eax
  int v18; // r9d
  signed int LastError; // eax
  int v20; // edx
  unsigned int v21; // ecx
  int v22; // r8d
  signed int v23; // eax
  int v24; // edx
  unsigned int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  signed int v28; // eax
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-C1h]
  unsigned int v31; // [rsp+20h] [rbp-C1h]
  __int128 v32; // [rsp+30h] [rbp-B1h] BYREF
  HGDIOBJ ho[2]; // [rsp+40h] [rbp-A1h]
  __int128 v34; // [rsp+50h] [rbp-91h]
  __int64 v35; // [rsp+60h] [rbp-81h]
  __int128 v36; // [rsp+68h] [rbp-79h] BYREF
  __int128 v37; // [rsp+78h] [rbp-69h]
  __int128 v38; // [rsp+88h] [rbp-59h]
  __int64 v39; // [rsp+98h] [rbp-49h]
  __int128 v40; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-31h]
  __int128 v42; // [rsp+C0h] [rbp-21h]
  __int64 v43; // [rsp+D0h] [rbp-11h]
  struct tagRECT rc; // [rsp+E0h] [rbp-1h] BYREF

  RectRgn = 0LL;
  v9 = 1;
  memset_0(&v36, 0, 0x38uLL);
  memset_0(&v32, 0, 0x38uLL);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  CD3DDeviceLevel1::Flush(*((CD3DDeviceLevel1 **)this + 38));
  if ( !*((_BYTE *)a5 + 33) )
  {
    v11 = ho[1];
LABEL_5:
    v12 = CDWMOffScreenSwapChain::PresentInternalExport(this, hrgn, v9, *((_BYTE *)a5 + 32));
    goto LABEL_6;
  }
  v13 = *(_QWORD *)a5;
  v11 = (HGDIOBJ)*((_QWORD *)a5 + 3);
  LODWORD(v32) = 0;
  v9 = 0;
  *((_QWORD *)&v32 + 1) = v13;
  LODWORD(ho[0]) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  HIDWORD(ho[0]) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  v40 = v32;
  ho[1] = v11;
  v42 = v34;
  v41 = *(_OWORD *)ho;
  v43 = v35;
  v14 = CSwapChainBase::NotifyMetaData(this, &v40);
  v12 = v14;
  if ( v14 < 0 )
  {
    v30 = 804;
    v18 = v14;
    goto LABEL_26;
  }
  if ( !hrgn )
    goto LABEL_5;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 64); i = (unsigned int)(i + 1) )
  {
    v16 = *((_QWORD *)this + 29);
    if ( *(_DWORD *)(48 * i + v16) == 1 )
      OffsetRect((LPRECT)(v16 + 16 + 48 * i), -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
  }
  SetLastError(0);
  if ( GetRgnBox(*((HRGN *)this + 27), &rc) )
  {
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( !RectRgn )
    {
      LastError = GetLastError();
      v12 = LastError;
      if ( LastError > 0 )
        v12 = (unsigned __int16)LastError | 0x80070000;
      if ( v12 >= 0 )
        v12 = CheckGUIHandleQuota(v21, v20, v22);
      v30 = 829;
      goto LABEL_24;
    }
    SetLastError(0);
    if ( CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 27), 2) )
    {
      SetLastError(0);
      if ( OffsetRgn(RectRgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
      {
        *((_QWORD *)&v36 + 1) = *(_QWORD *)a5;
        *(_QWORD *)&v38 = *(_QWORD *)&rc.left;
        LODWORD(v36) = 2;
        *(_QWORD *)&v37 = RectRgn;
        v40 = v36;
        v41 = v37;
        v42 = v38;
        v43 = v39;
        v29 = CSwapChainBase::NotifyMetaData(this, &v40);
        v12 = v29;
        if ( v29 >= 0 )
          goto LABEL_5;
        v31 = 858;
        v27 = v29;
LABEL_41:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v31);
LABEL_6:
        if ( RectRgn )
          DeleteObject(RectRgn);
        goto LABEL_8;
      }
      v28 = GetLastError();
      v12 = v28;
      if ( v28 > 0 )
        v12 = (unsigned __int16)v28 | 0x80070000;
      v31 = 842;
      if ( v12 >= 0 )
        v12 = -2003304445;
    }
    else
    {
      v23 = GetLastError();
      v12 = v23;
      if ( v23 > 0 )
        v12 = (unsigned __int16)v23 | 0x80070000;
      if ( v12 >= 0 )
        v12 = CheckGUIHandleQuota(v25, v24, v26);
      v31 = 834;
    }
    v27 = v12;
    goto LABEL_41;
  }
  v17 = GetLastError();
  v12 = v17;
  if ( v17 > 0 )
    v12 = (unsigned __int16)v17 | 0x80070000;
  v30 = 821;
  if ( v12 >= 0 )
    v12 = -2003304445;
LABEL_24:
  v18 = v12;
LABEL_26:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v30);
LABEL_8:
  if ( v11 )
    DeleteObject(v11);
  return (unsigned int)v12;
}
