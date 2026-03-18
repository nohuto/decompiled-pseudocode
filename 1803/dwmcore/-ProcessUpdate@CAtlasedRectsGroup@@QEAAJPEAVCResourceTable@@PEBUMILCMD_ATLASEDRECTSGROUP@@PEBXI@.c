/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800B337C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800B3BE0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
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
  __int64 Resource; // rax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v14; // eax
  const void *v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h]

  v6 = *a3;
  v15 = a4;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( v8 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v8, 0x4Eu);
    if ( Resource )
      Resource -= 16LL;
    *((_QWORD *)this + 7) = Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      v14 = 119;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v14);
      CAtlasedRectsGroup::UnRegisterNotifiers(this);
      goto LABEL_10;
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v10 = CResource::UnmarshalResourceArray(&v15, &a5, v6.m128i_u32[3], 7LL);
  *((_QWORD *)this + 9) = v16;
  if ( v10 < 0 )
  {
    v14 = 139;
    goto LABEL_17;
  }
  v11 = CResource::RegisterNotifier(
          this,
          (struct CResource *)((*((_QWORD *)this + 7) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                               + 7) >> 64)));
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xA1u);
  }
  else
  {
    v12 = CResource::RegisterNNotifiersInternal(this, *((struct CResource ***)this + 9), *((_DWORD *)this + 16));
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xA2u);
  }
  if ( v10 < 0 )
  {
    v14 = 142;
    goto LABEL_17;
  }
LABEL_10:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
