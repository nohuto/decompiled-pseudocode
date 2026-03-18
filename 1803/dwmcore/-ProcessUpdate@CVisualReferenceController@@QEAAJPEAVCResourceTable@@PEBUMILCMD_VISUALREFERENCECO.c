/*
 * XREFs of ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180028078
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x180027FD0 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z @ 0x180034AC4 (-AddListener@CWeakReferenceBase@@QEAAJPEAVCResource@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualReferenceController::ProcessUpdate(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUALREFERENCECONTROLLER *a3)
{
  unsigned int v3; // ebx
  struct CResource *Resource; // rax
  int v7; // ebx
  int WeakReferenceBase; // eax
  struct CWeakReferenceBase *v9; // rsi
  int v10; // eax
  unsigned int v12; // eax
  struct CWeakReferenceBase *v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  CVisualReferenceController::UnRegisterNotifiers((CVisualReferenceController *)this);
  if ( v3 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v3, 151LL);
    this[7] = Resource;
    if ( !Resource )
    {
      v7 = -2003303421;
      v12 = 3336;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v12);
      CVisualReferenceController::UnRegisterNotifiers((CVisualReferenceController *)this);
      goto LABEL_8;
    }
  }
  else
  {
    this[7] = 0LL;
    Resource = 0LL;
  }
  v7 = 0;
  v13 = 0LL;
  if ( Resource )
  {
    WeakReferenceBase = CComposition::GetWeakReferenceBase(this[2], Resource, &v13);
    v7 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0x2Eu);
    }
    else
    {
      v9 = v13;
      v10 = CWeakReferenceBase::AddListener(v13, (struct CResource *)this);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2Fu);
      }
      else
      {
        v13 = 0LL;
        this[7] = 0LL;
        this[8] = v9;
      }
    }
  }
  ReleaseInterface<CWeakReference<CVisual>>(&v13);
  if ( v7 < 0 )
  {
    v12 = 3345;
    goto LABEL_15;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, this);
  return (unsigned int)v7;
}
