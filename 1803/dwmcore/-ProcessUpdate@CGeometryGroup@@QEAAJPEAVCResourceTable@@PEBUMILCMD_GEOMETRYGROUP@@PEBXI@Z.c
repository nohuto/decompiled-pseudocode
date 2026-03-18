/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AB13C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AA790 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801AC210 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
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
  unsigned int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-58h]
  unsigned int *v18; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v19; // [rsp+90h] [rbp+18h] BYREF

  v5 = *a3;
  v18 = a4;
  v9 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( !HIDWORD(v9) )
  {
    CGeometryGroup::UnRegisterNotifiers(this);
    v11 = CResource::UnmarshalResourceArray(
            &v18,
            &a5,
            v9,
            0x3Cu,
            v17,
            (unsigned int *)this + 40,
            (void **)&v19,
            (__int64)a2,
            0);
    v12 = v19;
    v13 = v11;
    *((_QWORD *)this + 21) = v19;
    if ( v11 < 0 )
    {
      v15 = 835;
      goto LABEL_10;
    }
    v14 = CResource::RegisterNNotifiersInternal(this, v12, *((_DWORD *)this + 40));
    v13 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x3C4u);
    if ( v13 < 0 )
    {
      v15 = 838;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v15);
      CGeometryGroup::UnRegisterNotifiers(this);
      goto LABEL_11;
    }
  }
  v13 = CGeometryGroup::ProcessAppend(this, a2, a3, a4, a5);
  if ( v13 < 0 )
  {
    v15 = 841;
    goto LABEL_10;
  }
LABEL_11:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
