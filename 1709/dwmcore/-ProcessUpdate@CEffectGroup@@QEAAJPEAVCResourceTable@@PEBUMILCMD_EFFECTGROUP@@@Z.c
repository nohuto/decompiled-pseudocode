/*
 * XREFs of ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x180092ADC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CEffectGroup::ProcessUpdate(
        CEffectGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTGROUP *a3)
{
  unsigned int v3; // edi
  char v4; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  struct CResource *Resource; // rax
  signed int v13; // eax

  v3 = 0;
  v4 = 0;
  *((_QWORD *)this + 9) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 4);
  if ( *((_QWORD *)this + 11) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
    v4 = 1;
  }
  v8 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v8 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v8, 128LL);
    *((_QWORD *)this + 11) = Resource;
    if ( Resource )
    {
      v13 = CResource::RegisterNotifier(this, Resource);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_12;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x2Fu);
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x2Bu);
    }
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
  }
  if ( v4 )
  {
LABEL_12:
    v9 = *((_QWORD *)this + 11);
    v10 = 2LL;
    goto LABEL_7;
  }
  v9 = 0LL;
  v10 = 0LL;
LABEL_7:
  CResource::NotifyOnChanged(this, v10, v9);
  return v3;
}
