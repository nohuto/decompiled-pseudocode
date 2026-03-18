/*
 * XREFs of ?ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z @ 0x1801AB904
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRotateTransform3D::ProcessUpdate(
        CRotateTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_ROTATETRANSFORM3D *a3)
{
  __int128 v3; // xmm2
  __int128 v4; // xmm3
  __int64 v5; // xmm0_8

  v3 = *((_OWORD *)a3 + 2);
  v4 = *((_OWORD *)a3 + 3);
  v5 = *((_QWORD *)a3 + 1);
  *((_OWORD *)this + 10) = *((_OWORD *)a3 + 1);
  *((_OWORD *)this + 11) = v3;
  *((_OWORD *)this + 12) = v4;
  *((_QWORD *)this + 19) = v5;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
