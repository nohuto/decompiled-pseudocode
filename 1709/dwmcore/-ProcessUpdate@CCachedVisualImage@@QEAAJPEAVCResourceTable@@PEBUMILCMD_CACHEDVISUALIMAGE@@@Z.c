/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18008EB90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18008E71C (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18008E788 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x18008EA30 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE *a3)
{
  struct CResource **v3; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  signed int v11; // eax
  int v12; // edi
  signed int v13; // eax
  signed int v14; // eax
  __int64 Resource; // rax
  __int64 v17; // rax
  DWORD v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-18h]

  v3 = (struct CResource **)((char *)this + 16);
  CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
  *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 8);
  v7 = *((unsigned int *)a3 + 10);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 105LL);
    *((_QWORD *)this + 20) = Resource;
    if ( !Resource )
    {
      v19 = 100;
LABEL_22:
      v18 = -2003303421;
      v12 = -2003303421;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, v19);
      CCachedVisualImage::UnRegisterNotifiers(v3);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 20) = 0LL;
  }
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 24);
  v8 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 23) = 0LL;
    goto LABEL_5;
  }
  v17 = CResourceTable::GetResource(a2, v8, 119LL);
  *((_QWORD *)this + 23) = v17;
  if ( !v17 )
  {
    v19 = 120;
    goto LABEL_22;
  }
LABEL_5:
  v9 = *((unsigned int *)a3 + 12);
  if ( !(_DWORD)v9 )
  {
    *((_QWORD *)this + 24) = 0LL;
    goto LABEL_11;
  }
  v10 = CResourceTable::GetResource(a2, v9, 134LL);
  *((_QWORD *)this + 24) = v10;
  if ( !v10 )
  {
    v19 = 139;
    goto LABEL_22;
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
LABEL_11:
  *((_DWORD *)this + 50) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 51) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 52) = *((_DWORD *)a3 + 15);
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 17);
  CCachedVisualImage::ChoosePixelFormat(this);
  v11 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 24));
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x151u);
  }
  else
  {
    v13 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 20));
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x152u);
    }
    else
    {
      v14 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 23));
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x153u);
    }
  }
  if ( v12 < 0 )
  {
    v19 = 169;
    v18 = v12;
    goto LABEL_27;
  }
LABEL_16:
  CResource::NotifyOnChanged(v3, 0LL, 0LL);
  return (unsigned int)v12;
}
