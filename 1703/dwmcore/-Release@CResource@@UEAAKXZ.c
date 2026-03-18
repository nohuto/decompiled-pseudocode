/*
 * XREFs of ?Release@CResource@@UEAAKXZ @ 0x180034460
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18005B4EC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800BB9F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180031090 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x1800315F0 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180032360 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800581A0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800C0280 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::Release(CResource *this)
{
  unsigned __int32 v1; // ebx
  CKeyframeAnimation *(__fastcall *v3)(CKeyframeAnimation *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v1 )
    return v1;
  --*((_DWORD *)this + 2);
  v3 = *(CKeyframeAnimation *(__fastcall **)(CKeyframeAnimation *, char))(*(_QWORD *)this + 24LL);
  if ( v3 == CExpression::`vector deleting destructor' )
  {
    CExpression::`vector deleting destructor'(this, 1);
    return 0LL;
  }
  else if ( (char *)v3 == (char *)CRgnGeometry::`scalar deleting destructor' )
  {
    CRgnGeometry::`scalar deleting destructor'(this, 1u);
    return 0LL;
  }
  else if ( v3 == CPropertyBag::`scalar deleting destructor' )
  {
    CPropertyBag::`scalar deleting destructor'(this, 1);
    return 0LL;
  }
  else if ( (char *)v3 == (char *)CAtlasedRectsMesh::`vector deleting destructor' )
  {
    CAtlasedRectsMesh::`vector deleting destructor'(this, 1u);
    return 0LL;
  }
  else
  {
    if ( v3 != CKeyframeAnimation::`scalar deleting destructor' )
    {
      v3(this, 1);
      return v1;
    }
    CKeyframeAnimation::`scalar deleting destructor'(this, 1);
    return 0LL;
  }
}
