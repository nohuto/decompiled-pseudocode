/*
 * XREFs of ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x180129E6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::ProcessUpdate(
        CArithmeticCompositeEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_ARITHMETICCOMPOSITEEFFECT *a3)
{
  int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-28h]

  v4 = *((_DWORD *)a3 + 6);
  *(_OWORD *)v6 = *(_OWORD *)a3;
  *(_QWORD *)&v6[16] = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CArithmeticCompositeEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 56) = v4;
  *((_OWORD *)this + 13) = *(_OWORD *)&v6[8];
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
