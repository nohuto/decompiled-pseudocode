/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x18006A540
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x18006ADE0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A9AB4 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800B5D70 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 */

__int64 __fastcall CAtlasedRectsGroup::ProcessUpdate(
        CAtlasedRectsGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 Resource; // rax
  const void *v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h]

  v6 = *a3;
  v14 = a4;
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  v8 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  if ( (_DWORD)v8 )
  {
    Resource = CResourceTable::GetResource(a2, v8, 72LL);
    if ( Resource )
      Resource -= 16LL;
    *((_QWORD *)this + 7) = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x75u);
LABEL_17:
      CAtlasedRectsGroup::UnRegisterNotifiers(this);
      goto LABEL_8;
    }
  }
  else
  {
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = CResource::UnmarshalResourceArray(&v14, &a5, v6.m128i_u32[3], 7LL);
  *((_QWORD *)this + 9) = v15;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x89u);
    goto LABEL_17;
  }
  v10 = CResource::RegisterNotifier(
          this,
          (struct CResource *)((*((_QWORD *)this + 7) + 16LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                               + 7) >> 64)));
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Eu);
  }
  else
  {
    v11 = CResource::RegisterNNotifiersInternal(this, *((struct CResource ***)this + 9), *((_DWORD *)this + 16));
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x9Fu);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Cu);
    goto LABEL_17;
  }
LABEL_8:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v9;
}
