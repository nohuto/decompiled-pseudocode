/*
 * XREFs of ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x1801298E8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrightnessEffect::ProcessUpdate(CBrightnessEffect *this, struct CResourceTable *a2, __m128d *a3)
{
  __m128d v4; // xmm6
  double v5; // xmm7_8

  v4 = *a3;
  v5 = a3[1].m128d_f64[0];
  (*(void (__fastcall **)(CBrightnessEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_QWORD *)this + 26) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((double *)this + 27) = v5;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
