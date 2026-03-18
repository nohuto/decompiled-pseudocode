/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1801B1910
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800216F4 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1801B1BEC (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801B2C8C (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1801CA870 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CD3DDeviceLevel1 **this,
        const struct CRegion *a2,
        __int64 a3,
        char a4,
        struct RenderTargetPresentParameters *a5)
{
  HRGN v5; // rsi
  bool v9; // r13
  __int64 v11; // rax
  void *v12; // r12
  signed int v13; // eax
  signed int v14; // ebx
  __int64 i; // rbx
  CD3DDeviceLevel1 *v16; // rax
  signed int v17; // eax
  signed int LastError; // eax
  signed int v19; // eax
  HRGN hrgn; // [rsp+38h] [rbp-A1h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-99h] BYREF
  __int128 v22; // [rsp+50h] [rbp-89h] BYREF
  __int128 v23; // [rsp+60h] [rbp-79h]
  __int128 v24; // [rsp+70h] [rbp-69h]
  __int64 v25; // [rsp+80h] [rbp-59h]
  __int128 v26; // [rsp+88h] [rbp-51h] BYREF
  __int128 v27; // [rsp+98h] [rbp-41h]
  __int128 v28; // [rsp+A8h] [rbp-31h]
  __int64 v29; // [rsp+B8h] [rbp-21h]
  __int128 v30; // [rsp+C8h] [rbp-11h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-1h]
  __int128 v32; // [rsp+E8h] [rbp+Fh]
  __int64 v33; // [rsp+F8h] [rbp+1Fh]

  v5 = 0LL;
  hrgn = 0LL;
  v9 = 1;
  memset_0(&v26, 0, 0x38uLL);
  memset_0(&v22, 0, 0x38uLL);
  *(_QWORD *)&v21.left = 0LL;
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  CD3DDeviceLevel1::Flush(this[53]);
  if ( !*((_BYTE *)a5 + 33) )
  {
    v12 = (void *)*((_QWORD *)&v23 + 1);
    goto LABEL_24;
  }
  v11 = *(_QWORD *)a5;
  v12 = (void *)*((_QWORD *)a5 + 3);
  LODWORD(v22) = 0;
  v9 = 0;
  *((_QWORD *)&v22 + 1) = v11;
  LODWORD(v23) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  DWORD1(v23) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  v30 = v22;
  *((_QWORD *)&v23 + 1) = v12;
  v32 = v24;
  v31 = v23;
  v33 = v25;
  v13 = CSwapChainBase::NotifyMetaData(this, &v30);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( a2 && **(_DWORD **)a2 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
      {
        v16 = this[43];
        if ( *((_DWORD *)v16 + 12 * i) == 1 )
          OffsetRect((LPRECT)v16 + 3 * i + 1, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
      }
      FastRegion::CRegion::GetBoundingRect(a2, &v21);
      v17 = CRegion::CreateHRGN(a2, &hrgn);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x2E4u);
        v5 = hrgn;
        goto LABEL_25;
      }
      SetLastError(0);
      v5 = hrgn;
      if ( !OffsetRgn(hrgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
      {
        LastError = GetLastError();
        v14 = LastError;
        if ( LastError > 0 )
          v14 = (unsigned __int16)LastError | 0x80070000;
        if ( v14 >= 0 )
          v14 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x2E9u);
        goto LABEL_25;
      }
      *((_QWORD *)&v26 + 1) = *(_QWORD *)a5;
      *(_QWORD *)&v28 = *(_QWORD *)&v21.left;
      LODWORD(v26) = 2;
      *(_QWORD *)&v27 = v5;
      v30 = v26;
      v31 = v27;
      v32 = v28;
      v33 = v29;
      v19 = CSwapChainBase::NotifyMetaData(this, &v30);
      v14 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x2F8u);
        goto LABEL_25;
      }
    }
LABEL_24:
    v14 = CDWMOffScreenSwapChain::RemotingIndirectPresent((CDWMOffScreenSwapChain *)this, a2, v9, *((_BYTE *)a5 + 32));
LABEL_25:
    if ( v5 )
      DeleteObject(v5);
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x2CEu);
LABEL_27:
  if ( v12 )
    DeleteObject(v12);
  return (unsigned int)v14;
}
