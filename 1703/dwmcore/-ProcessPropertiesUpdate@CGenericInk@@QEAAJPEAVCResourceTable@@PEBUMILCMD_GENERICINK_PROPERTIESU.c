/*
 * XREFs of ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x18012E2C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyBytesIntoBuffer@CGenericInk@@AEAAJAEAV?$DynArray@E$0A@@@IPEBEI@Z @ 0x180170060 (-CopyBytesIntoBuffer@CGenericInk@@AEAAJAEAV-$DynArray@E$0A@@@IPEBEI@Z.c)
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessPropertiesUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_PROPERTIESUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  int IDirectInkPartner; // eax
  unsigned int v10; // ebp
  unsigned int v11; // esi
  __int64 v12; // r14
  CD2DGenericInk *v13; // rbx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct IDCompositionDirectInkPartner *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v6 = a5;
  if ( a5 )
  {
    v8 = *((_DWORD *)this + 44);
    if ( v8 )
    {
      if ( a5 != v8 )
      {
        v7 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x150u);
        goto LABEL_6;
      }
    }
    else
    {
      *((_DWORD *)this + 44) = a5;
    }
    IDirectInkPartner = CGenericInk::CopyBytesIntoBuffer(v8, (int)this + 144, 0, (_DWORD)a4, v6);
    v7 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
    {
      v15 = 24;
    }
    else
    {
      v10 = *((_DWORD *)this + 26);
      v11 = 0;
      if ( !v10 )
      {
LABEL_14:
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        goto LABEL_19;
      }
      v12 = 0LL;
      while ( 1 )
      {
        v13 = *(CD2DGenericInk **)(v12 + *((_QWORD *)this + 10));
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v16);
        IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v13, &v16);
        v7 = IDirectInkPartner;
        if ( IDirectInkPartner < 0 )
          break;
        IDirectInkPartner = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, _QWORD, _QWORD))(*(_QWORD *)v16 + 40LL))(
                              v16,
                              *((_QWORD *)this + 18),
                              *((unsigned int *)this + 42));
        v7 = IDirectInkPartner;
        if ( IDirectInkPartner < 0 )
        {
          v15 = 32;
          goto LABEL_18;
        }
        ++v11;
        v12 += 8LL;
        if ( v11 >= v10 )
          goto LABEL_14;
      }
      v15 = 31;
    }
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, IDirectInkPartner, v15);
    goto LABEL_19;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x148u);
  v7 = -2147024809;
LABEL_6:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x17u);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v16);
  return v7;
}
