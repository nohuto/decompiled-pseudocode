/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180128700
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180034E98 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800C06C8 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801746B4 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180174ED0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::ProcessUpdate(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v5; // xmm0
  unsigned __int64 v9; // xmm0_8
  int v11; // eax
  struct CResource **v12; // rdx
  int v13; // ebx
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+20h] [rbp-58h]
  unsigned int *v18; // [rsp+90h] [rbp+18h] BYREF
  struct CResource **v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = *a3;
  v18 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CGeometryGroup::UnRegisterNotifiers(this);
    v11 = UnmarshalResourceArray(&v18, &a5, v9, 0x46u, v16, (unsigned int *)this + 32, (void **)&v19, (__int64)a2, 0);
    v12 = v19;
    v13 = v11;
    *((_QWORD *)this + 17) = v19;
    if ( v11 < 0 )
    {
      v17 = 3334;
LABEL_10:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v17);
      goto LABEL_11;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 32));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xDA2u);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD09u);
LABEL_11:
      CGeometryGroup::UnRegisterNotifiers(this);
      goto LABEL_12;
    }
  }
  v11 = CGeometryGroup::ProcessAppend(this, a2, (const struct MILCMD_GEOMETRYGROUP *)a3, a4, a5);
  v13 = v11;
  if ( v11 < 0 )
  {
    v17 = 3346;
    goto LABEL_10;
  }
LABEL_12:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
