/*
 * XREFs of ?ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z @ 0x1801AB9CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform3D::ProcessUpdate(
        CScaleTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_SCALETRANSFORM3D *a3)
{
  __int64 v3; // xmm1_8
  __int128 v4; // xmm3
  __int64 v5; // xmm2_8

  v3 = *((_QWORD *)a3 + 6);
  v4 = *((_OWORD *)a3 + 1);
  v5 = *((_QWORD *)a3 + 1);
  *((_OWORD *)this + 11) = *((_OWORD *)a3 + 2);
  *((_QWORD *)this + 24) = v3;
  *((_QWORD *)this + 19) = v5;
  *((_OWORD *)this + 10) = v4;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
