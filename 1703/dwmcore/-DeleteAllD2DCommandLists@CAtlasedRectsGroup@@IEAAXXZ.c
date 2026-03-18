/*
 * XREFs of ?DeleteAllD2DCommandLists@CAtlasedRectsGroup@@IEAAXXZ @ 0x1800AEF38
 * Callers:
 *     ?OnChanged@CAtlasedRectsGroup@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AEFB0 (-OnChanged@CAtlasedRectsGroup@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800AF034 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CAtlasedRectsGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180178880 (-NotifyInvalidResource@CAtlasedRectsGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsGroup::DeleteAllD2DCommandLists(CAtlasedRectsGroup *this)
{
  __int64 i; // rsi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
  {
    CD2DResource::RemoveResourceNotifier(
      (CD2DResource *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL),
      (CAtlasedRectsGroup *)((char *)this + 56));
    v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 88, 8u);
}
