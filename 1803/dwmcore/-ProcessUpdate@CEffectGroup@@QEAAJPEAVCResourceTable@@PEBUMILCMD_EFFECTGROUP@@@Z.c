/*
 * XREFs of ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x18009F3EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CEffectGroup::ProcessUpdate(
        CEffectGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTGROUP *a3)
{
  CCompositionSurfaceBitmap *v3; // rbx
  struct CResource *v5; // rdx
  unsigned int v8; // ebp
  char v9; // si
  unsigned int v10; // edx
  struct CResource *Resource; // rax
  int v13; // eax

  v3 = 0LL;
  *((_QWORD *)this + 9) = *((_QWORD *)a3 + 1);
  v5 = (struct CResource *)*((_QWORD *)this + 11);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 4);
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    CResource::UnRegisterNotifierInternal(this, v5);
    *((_QWORD *)this + 11) = 0LL;
    v9 = 1;
  }
  v10 = *((_DWORD *)a3 + 5);
  if ( v10 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v10, 0x8Fu);
    *((_QWORD *)this + 11) = Resource;
    if ( Resource )
    {
      v13 = CResource::RegisterNotifier(this, Resource);
      v8 = v13;
      if ( v13 >= 0 )
      {
        v9 = 1;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2Fu);
    }
    else
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x2Bu);
    }
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( v9 )
LABEL_7:
    v3 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 11);
  CResource::NotifyOnChanged(
    this,
    v9 != 0 ? (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))2 : 0,
    v3);
  return v8;
}
