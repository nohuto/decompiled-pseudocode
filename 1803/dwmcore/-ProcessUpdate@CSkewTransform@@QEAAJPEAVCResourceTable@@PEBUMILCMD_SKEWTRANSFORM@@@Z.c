/*
 * XREFs of ?ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z @ 0x180037E70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSkewTransform::ProcessUpdate(
        CSkewTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_SKEWTRANSFORM *a3)
{
  __int128 v3; // xmm1
  __int64 v4; // xmm2_8

  v3 = *((_OWORD *)a3 + 1);
  v4 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 22) = *((_QWORD *)a3 + 4);
  *((_QWORD *)this + 19) = v4;
  *((_OWORD *)this + 10) = v3;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
