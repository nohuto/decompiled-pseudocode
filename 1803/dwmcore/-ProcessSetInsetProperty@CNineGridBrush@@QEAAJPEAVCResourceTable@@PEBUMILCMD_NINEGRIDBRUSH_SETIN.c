/*
 * XREFs of ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x180029C14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x180029A68 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetInsetProperty(
        CNineGridBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *a3)
{
  unsigned int v4; // edi
  float *InsetFieldPointer; // rax
  CResource *v6; // rcx
  __int64 v7; // r8
  float v8; // xmm0_4
  void (__fastcall *v10)(CNineGridBrush *, __int64, CNineGridBrush *); // rax

  v4 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, *((_DWORD *)a3 + 2));
  if ( InsetFieldPointer && (v8 = *(float *)(v7 + 12), v8 >= 0.0) )
  {
    if ( v8 != *InsetFieldPointer )
    {
      *InsetFieldPointer = v8;
      CResource::InvalidateAnimationSources(v6, *(_DWORD *)(v7 + 8));
      v10 = *(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(*(_QWORD *)this + 64LL);
      if ( (char *)v10 == (char *)CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(this, 6LL, this);
      else
        v10(this, 6LL, this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x13Du);
  }
  return v4;
}
