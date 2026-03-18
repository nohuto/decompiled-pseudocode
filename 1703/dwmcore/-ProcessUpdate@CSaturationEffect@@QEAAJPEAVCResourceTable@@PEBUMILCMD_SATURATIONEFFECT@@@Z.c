/*
 * XREFs of ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z @ 0x180129A94
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaturationEffect::ProcessUpdate(
        CSaturationEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_SATURATIONEFFECT *a3)
{
  int v5; // [rsp+28h] [rbp-10h]

  v5 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CSaturationEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 52) = v5;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
