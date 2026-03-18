/*
 * XREFs of ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x180129B90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFloodEffect::ProcessUpdate(
        CFloodEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLOODEFFECT *a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-28h]

  *(_OWORD *)v5 = *(_OWORD *)a3;
  *(_QWORD *)&v5[16] = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CFloodEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_OWORD *)this + 13) = *(_OWORD *)&v5[8];
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
