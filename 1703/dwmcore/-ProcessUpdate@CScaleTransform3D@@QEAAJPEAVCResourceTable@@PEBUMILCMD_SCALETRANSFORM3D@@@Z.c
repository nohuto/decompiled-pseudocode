/*
 * XREFs of ?ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z @ 0x18012A258
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform3D::ProcessUpdate(
        CScaleTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_SCALETRANSFORM3D *a3)
{
  __m128d v3; // xmm3
  __m128d v4; // xmm4
  __int64 v5; // xmm1_8
  __int64 v6; // xmm2_8

  v3 = (__m128d)*((_OWORD *)a3 + 1);
  v4 = (__m128d)*((_OWORD *)a3 + 2);
  v5 = *((_QWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 20) = *(_QWORD *)&v3.m128d_f64[0];
  *((_QWORD *)this + 22) = *(_QWORD *)&v4.m128d_f64[0];
  *((_QWORD *)this + 21) = *(_OWORD *)&_mm_unpackhi_pd(v3, v3);
  *((_QWORD *)this + 23) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_QWORD *)this + 19) = v6;
  *((_QWORD *)this + 24) = v5;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
