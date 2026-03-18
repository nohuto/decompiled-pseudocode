/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18012E434
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CopyBytesIntoBuffer@CGenericInk@@AEAAJAEAV?$DynArray@E$0A@@@IPEBEI@Z @ 0x180170060 (-CopyBytesIntoBuffer@CGenericInk@@AEAAJAEAV-$DynArray@E$0A@@@IPEBEI@Z.c)
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_SEGMENTUPDATE *a3,
        char *a4,
        unsigned int a5)
{
  struct tagRECT *v5; // r15
  unsigned int v6; // r9d
  const struct MILCMD_GENERICINK_SEGMENTUPDATE *v7; // r13
  unsigned int v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  __int64 v13; // r12
  CD2DGenericInk *v14; // rbx
  int IDirectInkPartner; // eax
  __int64 v16; // rdx
  struct IDCompositionDirectInkPartner *v17; // rbx
  unsigned int v18; // ecx
  unsigned int v19; // r13d
  int v20; // r9d
  unsigned int v22; // [rsp+20h] [rbp-91h]
  struct IDCompositionDirectInkPartner *v23; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-71h]
  char *v25; // [rsp+48h] [rbp-69h]
  const struct MILCMD_GENERICINK_SEGMENTUPDATE *v26; // [rsp+50h] [rbp-61h]
  struct tagRECT v27; // [rsp+58h] [rbp-59h] BYREF
  void *v28[10]; // [rsp+70h] [rbp-41h] BYREF

  v23 = 0LL;
  v5 = &v27;
  v25 = a4;
  v6 = a5;
  *(_QWORD *)&v27.left = 0LL;
  v7 = a3;
  *(_QWORD *)&v27.right = 0LL;
  v26 = a3;
  v9 = a5 / *((_DWORD *)a3 + 3);
  if ( !v9 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x163u);
    v10 = -2147024809;
LABEL_6:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x60u);
    goto LABEL_35;
  }
  v11 = *((_DWORD *)this + 54);
  if ( v11 )
  {
    if ( v9 != v11 )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x16Bu);
      goto LABEL_6;
    }
  }
  else
  {
    *((_DWORD *)this + 54) = v9;
  }
  v12 = 0;
  v24 = *((_DWORD *)this + 26);
  if ( v24 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(CD2DGenericInk **)(v13 + *((_QWORD *)this + 10));
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v23);
      IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v14, &v23);
      v10 = IDirectInkPartner;
      if ( IDirectInkPartner < 0 )
        break;
      v16 = *((unsigned int *)v7 + 2);
      v17 = v23;
      v18 = *((_DWORD *)this + 52) - *((_DWORD *)this + 54) * *((_DWORD *)v7 + 2);
      v19 = a5;
      if ( v18 < a5 )
        v19 = v18;
      v11 = a5 - v19;
      if ( v19 )
      {
        IDirectInkPartner = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, __int64, char *, _QWORD, struct tagRECT *))(*(_QWORD *)v23 + 56LL))(
                              v23,
                              v16,
                              v25,
                              v19,
                              v5);
        v10 = IDirectInkPartner;
        if ( IDirectInkPartner < 0 )
        {
          v22 = 113;
          goto LABEL_33;
        }
        if ( v5 )
        {
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v28, &v27);
          v10 = FastRegion::CRegion::Union(
                  (const struct FastRegion::Internal::CRgnData **)this + 28,
                  (const struct FastRegion::Internal::CRgnData **)v28);
          FastRegion::CRegion::FreeMemory(v28);
          if ( v10 < 0 )
          {
            v22 = 116;
LABEL_27:
            v20 = v10;
            goto LABEL_34;
          }
        }
        v11 = a5 - v19;
      }
      if ( v11 )
      {
        IDirectInkPartner = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, char *, _QWORD, struct tagRECT *))(*(_QWORD *)v17 + 48LL))(
                              v17,
                              &v25[v19],
                              v11,
                              &v27);
        v10 = IDirectInkPartner;
        if ( IDirectInkPartner < 0 )
        {
          v22 = 122;
          goto LABEL_33;
        }
        if ( v5 )
        {
          FastRegion::CRegion::CRegion((FastRegion::CRegion *)v28, &v27);
          v10 = FastRegion::CRegion::Union(
                  (const struct FastRegion::Internal::CRgnData **)this + 28,
                  (const struct FastRegion::Internal::CRgnData **)v28);
          FastRegion::CRegion::FreeMemory(v28);
          if ( v10 < 0 )
          {
            v22 = 125;
            goto LABEL_27;
          }
        }
      }
      v7 = v26;
      v5 = 0LL;
      ++v12;
      v13 += 8LL;
      if ( v12 >= v24 )
      {
        v6 = a5;
        goto LABEL_24;
      }
    }
    v22 = 106;
  }
  else
  {
LABEL_24:
    IDirectInkPartner = CGenericInk::CopyBytesIntoBuffer(
                          v11,
                          (int)this + 184,
                          *((_DWORD *)this + 54) * *((_DWORD *)v7 + 2),
                          (_DWORD)v25,
                          v6);
    v10 = IDirectInkPartner;
    if ( IDirectInkPartner >= 0 )
    {
      CResource::NotifyOnChanged(this, 3LL, 0LL);
      CResource::NotifyOnChanged(this, 1LL, (__int64)this);
      goto LABEL_35;
    }
    v22 = 133;
  }
LABEL_33:
  v20 = IDirectInkPartner;
LABEL_34:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v22);
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v23);
  return (unsigned int)v10;
}
