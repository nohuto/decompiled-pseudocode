/*
 * XREFs of ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004C950
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CPrimitiveGroup@@WEA@EAAKXZ @ 0x1800D58E0 (-Release@CPrimitiveGroup@@WEA@EAAKXZ.c)
 * Callees:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18004C380 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::Release(CPrimitiveGroup *this)
{
  unsigned __int32 v1; // ebx
  CPrimitiveGroup *(__fastcall *v3)(CPrimitiveGroup *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CPrimitiveGroup *(__fastcall **)(CPrimitiveGroup *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CPrimitiveGroup::`vector deleting destructor' )
      CPrimitiveGroup::`vector deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
