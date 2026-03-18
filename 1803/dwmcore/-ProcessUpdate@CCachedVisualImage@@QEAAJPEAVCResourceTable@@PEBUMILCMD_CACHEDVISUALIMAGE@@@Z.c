/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800B4E90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800B49F0 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800B4A5C (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800B4D20 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE *a3)
{
  struct CResource **v3; // rsi
  unsigned int v7; // edx
  __int64 Resource; // rax
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v3 = (struct CResource **)((char *)this + 16);
  CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
  *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 8);
  v7 = *((_DWORD *)a3 + 10);
  if ( v7 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v7, 0x75u);
    *((_QWORD *)this + 20) = Resource;
    if ( !Resource )
    {
      v9 = -2003303421;
      v10 = 110;
LABEL_25:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10);
      CCachedVisualImage::UnRegisterNotifiers(v3);
      goto LABEL_26;
    }
  }
  else
  {
    *((_QWORD *)this + 20) = 0LL;
  }
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 24);
  v11 = *((_DWORD *)a3 + 11);
  if ( v11 )
  {
    v12 = CResourceTable::GetResource((__int64)a2, v11, 0x84u);
    *((_QWORD *)this + 23) = v12;
    if ( !v12 )
    {
      v9 = -2003303421;
      v10 = 130;
      goto LABEL_25;
    }
  }
  else
  {
    *((_QWORD *)this + 23) = 0LL;
  }
  v13 = *((_DWORD *)a3 + 12);
  if ( v13 )
  {
    v14 = CResourceTable::GetResource((__int64)a2, v13, 0x97u);
    *((_QWORD *)this + 24) = v14;
    if ( !v14 )
    {
      v9 = -2003303421;
      v10 = 149;
      goto LABEL_25;
    }
    if ( *((_BYTE *)this + 378) )
    {
      *((_BYTE *)this + 378) = 0;
      CCachedVisualImage::MarkAllTargetsDirty(this);
    }
    if ( *((_BYTE *)this + 376) )
    {
      *((_BYTE *)this + 376) = 0;
      CCachedVisualImage::MarkAllTargetsDirty(this);
    }
  }
  else
  {
    *((_QWORD *)this + 24) = 0LL;
  }
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 15);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 17);
  CCachedVisualImage::ChoosePixelFormat(this);
  v15 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 24));
  v9 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x147u);
  }
  else
  {
    v16 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 20));
    v9 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x148u);
    }
    else
    {
      v17 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 23));
      v9 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x149u);
    }
  }
  if ( v9 < 0 )
  {
    v10 = 179;
    goto LABEL_25;
  }
LABEL_26:
  CResource::NotifyOnChanged((CVisual *)v3, 0LL, 0LL);
  return (unsigned int)v9;
}
