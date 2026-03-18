/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800AF078
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180034E98 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800AEFD0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800C06C8 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  unsigned int v8; // edx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 Resource; // rax
  const void *v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h]

  v6 = *a3;
  v14 = a4;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( v8 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v8, 0x3Cu);
    if ( Resource )
      Resource -= 16LL;
    *((_QWORD *)this + 8) = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2E5u);
LABEL_17:
      CAtlasedRectsGroup::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 8) = 0LL;
  }
  v9 = UnmarshalResourceArray(&v14, &a5, v6.m128i_u32[3], 4LL);
  *((_QWORD *)this + 10) = v15;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2FBu);
    goto LABEL_17;
  }
  v10 = CResource::RegisterNotifier(
          this,
          (struct CResource *)((*((_QWORD *)this + 8) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                               + 8) >> 64)));
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x318u);
  }
  else
  {
    v11 = CResource::RegisterNNotifiersInternal(this, *((struct CResource ***)this + 10), *((_DWORD *)this + 18));
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x319u);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2FEu);
    goto LABEL_17;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v9;
}
