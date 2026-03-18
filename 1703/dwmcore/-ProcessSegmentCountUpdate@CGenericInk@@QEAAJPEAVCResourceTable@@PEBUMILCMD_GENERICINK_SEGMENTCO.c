/*
 * XREFs of ?ProcessSegmentCountUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTCOUNTUPDATE@@@Z @ 0x18012E704
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
 *     ?GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x18017071C (-GetIDirectInkPartner@CD2DGenericInk@@QEAAJPEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentCountUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_SEGMENTCOUNTUPDATE *a3)
{
  struct tagRECT *v3; // r15
  int v4; // r12d
  int v5; // ebx
  const struct MILCMD_GENERICINK_SEGMENTCOUNTUPDATE *v6; // r14
  unsigned int v8; // esi
  unsigned int v9; // r13d
  __int64 v10; // r14
  CD2DGenericInk *v11; // rbx
  int IDirectInkPartner; // eax
  unsigned int v14; // [rsp+20h] [rbp-69h]
  struct IDCompositionDirectInkPartner *v15; // [rsp+30h] [rbp-59h] BYREF
  const struct MILCMD_GENERICINK_SEGMENTCOUNTUPDATE *v16; // [rsp+38h] [rbp-51h]
  struct tagRECT v17; // [rsp+40h] [rbp-49h] BYREF
  void *v18[10]; // [rsp+50h] [rbp-39h] BYREF

  v3 = &v17;
  v4 = *((_DWORD *)this + 55) - *((_DWORD *)a3 + 2);
  v5 = 0;
  v16 = a3;
  v15 = 0LL;
  v6 = a3;
  *(_QWORD *)&v17.left = 0LL;
  *(_QWORD *)&v17.right = 0LL;
  if ( v4 <= 0 )
    goto LABEL_11;
  v8 = 0;
  v9 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 2) * *((_DWORD *)this + 54);
  if ( !v9 )
  {
LABEL_10:
    CResource::NotifyOnChanged(this, 3LL, 0LL);
    CResource::NotifyOnChanged(this, 1LL, (__int64)this);
LABEL_11:
    *((_DWORD *)this + 55) = *((_DWORD *)v6 + 2);
    goto LABEL_12;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(CD2DGenericInk **)(v10 + *((_QWORD *)this + 10));
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v15);
    IDirectInkPartner = CD2DGenericInk::GetIDirectInkPartner(v11, &v15);
    v5 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
      break;
    IDirectInkPartner = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkPartner *, _QWORD, struct tagRECT *))(*(_QWORD *)v15 + 64LL))(
                          v15,
                          (unsigned int)v4,
                          v3);
    v5 = IDirectInkPartner;
    if ( IDirectInkPartner < 0 )
    {
      v14 = 62;
      goto LABEL_16;
    }
    if ( v3 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v18, &v17);
      v5 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)this + 28,
             (const struct FastRegion::Internal::CRgnData **)v18);
      FastRegion::CRegion::FreeMemory(v18);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x42u);
        goto LABEL_12;
      }
    }
    v3 = 0LL;
    ++v8;
    v10 += 8LL;
    if ( v8 >= v9 )
    {
      v6 = v16;
      goto LABEL_10;
    }
  }
  v14 = 61;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, IDirectInkPartner, v14);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v5;
}
