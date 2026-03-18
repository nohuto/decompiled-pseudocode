/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800D8930
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180076570 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800D8A3C (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800D923C (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EB580 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CD3DDeviceLevel1 **this,
        const struct CRegion *a2,
        __int64 a3,
        char a4,
        const struct RenderTargetPresentParameters *a5)
{
  HRGN v5; // rsi
  bool v9; // r13
  void *v10; // r12
  signed int v11; // ebx
  HRGN v13; // rax
  int v14; // eax
  __int64 i; // rbx
  CD3DDeviceLevel1 *v16; // rax
  int v17; // eax
  signed int LastError; // eax
  int v19; // r9d
  int v20; // eax
  unsigned int v21; // [rsp+28h] [rbp-B1h]
  HRGN hrgn; // [rsp+38h] [rbp-A1h] BYREF
  HRGN hrgn_8[2]; // [rsp+40h] [rbp-99h] BYREF
  __int128 v24; // [rsp+50h] [rbp-89h]
  __int128 v25; // [rsp+60h] [rbp-79h]
  __int64 v26; // [rsp+70h] [rbp-69h]
  struct tagRECT v27; // [rsp+78h] [rbp-61h] BYREF
  __int128 v28; // [rsp+88h] [rbp-51h] BYREF
  __int128 v29; // [rsp+98h] [rbp-41h]
  __int128 v30; // [rsp+A8h] [rbp-31h]
  __int64 v31; // [rsp+B8h] [rbp-21h]
  __int128 v32; // [rsp+C8h] [rbp-11h] BYREF
  __int128 v33; // [rsp+D8h] [rbp-1h]
  __int128 v34; // [rsp+E8h] [rbp+Fh]
  __int64 v35; // [rsp+F8h] [rbp+1Fh]

  v5 = 0LL;
  hrgn = 0LL;
  v9 = 1;
  memset_0(&v28, 0, 0x38uLL);
  memset_0(hrgn_8, 0, 0x38uLL);
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  CD3DDeviceLevel1::Flush(this[54]);
  if ( !*((_BYTE *)a5 + 33) )
  {
    v10 = (void *)*((_QWORD *)&v24 + 1);
LABEL_4:
    v11 = CDWMOffScreenSwapChain::RemotingIndirectPresent((CDWMOffScreenSwapChain *)this, a2, v9, *((_BYTE *)a5 + 32));
    goto LABEL_5;
  }
  v13 = *(HRGN *)a5;
  v10 = (void *)*((_QWORD *)a5 + 3);
  LODWORD(hrgn_8[0]) = 0;
  v9 = 0;
  hrgn_8[1] = v13;
  LODWORD(v24) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  DWORD1(v24) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  v32 = *(_OWORD *)hrgn_8;
  *((_QWORD *)&v24 + 1) = v10;
  v34 = v25;
  v33 = v24;
  v35 = v26;
  v14 = CSwapChainBase::NotifyMetaData(this, &v32);
  v11 = v14;
  if ( v14 >= 0 )
  {
    if ( !a2 || !**(_DWORD **)a2 )
      goto LABEL_4;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v16 = this[43];
      if ( *((_DWORD *)v16 + 12 * i) == 1 )
        OffsetRect((LPRECT)v16 + 3 * i + 1, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
    }
    FastRegion::CRegion::GetBoundingRect(a2, &v27);
    v17 = CRegion::CreateHRGN(a2, &hrgn);
    v11 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2E2u);
      v5 = hrgn;
    }
    else
    {
      SetLastError(0);
      v5 = hrgn;
      if ( OffsetRgn(hrgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
      {
        *((_QWORD *)&v28 + 1) = *(_QWORD *)a5;
        *(_QWORD *)&v30 = *(_QWORD *)&v27.left;
        LODWORD(v28) = 2;
        *(_QWORD *)&v29 = v5;
        v32 = v28;
        v33 = v29;
        v34 = v30;
        v35 = v31;
        v20 = CSwapChainBase::NotifyMetaData(this, &v32);
        v11 = v20;
        if ( v20 >= 0 )
          goto LABEL_4;
        v21 = 752;
        v19 = v20;
      }
      else
      {
        LastError = GetLastError();
        v11 = LastError;
        if ( LastError > 0 )
          v11 = (unsigned __int16)LastError | 0x80070000;
        v21 = 742;
        if ( v11 >= 0 )
          v11 = -2003304445;
        v19 = v11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v21);
    }
LABEL_5:
    if ( v5 )
      DeleteObject(v5);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2CDu);
LABEL_7:
  if ( v10 )
    DeleteObject(v10);
  return (unsigned int)v11;
}
