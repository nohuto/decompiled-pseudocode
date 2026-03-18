/*
 * XREFs of ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x1800981F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800651D4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18008112C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetBoundsRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_SETBOUNDSRECT *a3)
{
  float *v3; // rdx
  __int64 v4; // r9
  _OWORD *v5; // rdx
  _OWORD *v6; // rcx
  CVisual *v7; // r9
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)a3 + 2)
    && operator!=((float *)(v4 + 92), v3) )
  {
    v8 = *(_QWORD *)v7;
    *v6 = *v5;
    v9 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(v8 + 64);
    if ( v9 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(v7, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))3, 0LL);
    else
      ((void (__fastcall *)(CVisual *, __int64))v9)(v7, 3LL);
  }
  return 0LL;
}
