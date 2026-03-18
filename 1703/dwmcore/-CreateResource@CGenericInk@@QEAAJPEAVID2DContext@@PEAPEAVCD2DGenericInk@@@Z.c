/*
 * XREFs of ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180170108
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801702E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::CreateResource(CGenericInk *this, struct ID2DContext *a2, struct CD2DGenericInk **a3)
{
  __int64 v3; // rax
  int v6; // eax
  unsigned int v7; // edi
  int IDirectInkPartner; // eax
  struct IDCompositionDirectInkPartner *v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  struct CD2DGenericInk *v13; // rax
  CD2DGenericInk *v14; // rcx
  CD2DGenericInk *v16; // [rsp+58h] [rbp+10h] BYREF
  struct IDCompositionDirectInkPartner *v17; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = *(_QWORD *)a2;
  v16 = 0LL;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, CD2DGenericInk **))(v3 + 216))(a2, &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x103u);
  }
  else
  {
    IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v16, &v17);
    v7 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IDirectInkPartner, 0x104u);
    }
    else
    {
      v9 = v17;
      if ( *((_DWORD *)this + 42)
        && (v10 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, _QWORD))(*(_QWORD *)v17 + 40LL))(
                    v17,
                    *((_QWORD *)this + 18)),
            v7 = v10,
            v10 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x108u);
      }
      else
      {
        v11 = *((unsigned int *)this + 52);
        if ( (_DWORD)v11
          && (v12 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, _QWORD, __int64, _QWORD))(*(_QWORD *)v9 + 48LL))(
                      v9,
                      *((_QWORD *)this + 23),
                      v11,
                      0LL),
              v7 = v12,
              v12 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x10Du);
        }
        else
        {
          v13 = v16;
          v16 = 0LL;
          *a3 = v13;
          CResource::NotifyOnChanged(this, 0LL, 0LL);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v17);
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(CD2DGenericInk *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v7;
}
