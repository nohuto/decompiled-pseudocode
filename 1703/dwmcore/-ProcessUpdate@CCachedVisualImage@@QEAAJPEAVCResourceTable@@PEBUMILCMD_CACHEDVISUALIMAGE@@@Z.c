/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800488D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x180047FFC (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180048230 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _GUID *v13; // r9
  struct CResource *v14; // rdx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  __int64 Resource; // rax
  __int64 v21; // rax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-18h]

  v3 = (struct CResource **)((char *)this + 16);
  CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this + 2);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 8);
  v7 = *((unsigned int *)a3 + 10);
  if ( (_DWORD)v7 )
  {
    Resource = CResourceTable::GetResource(a2, v7, 54LL);
    *((_QWORD *)this + 13) = Resource;
    if ( !Resource )
    {
      v23 = 99;
LABEL_22:
      v22 = -2003303421;
      v16 = -2003303421;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
      CCachedVisualImage::UnRegisterNotifiers(v3);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_OWORD *)this + 7) = *(_OWORD *)((char *)a3 + 24);
  v8 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 16) = 0LL;
    goto LABEL_5;
  }
  v21 = CResourceTable::GetResource(a2, v8, 55LL);
  *((_QWORD *)this + 16) = v21;
  if ( !v21 )
  {
    v23 = 119;
    goto LABEL_22;
  }
LABEL_5:
  v9 = *((unsigned int *)a3 + 12);
  if ( !(_DWORD)v9 )
  {
    *((_QWORD *)this + 17) = 0LL;
    goto LABEL_11;
  }
  v10 = CResourceTable::GetResource(a2, v9, 31LL);
  *((_QWORD *)this + 17) = v10;
  if ( !v10 )
  {
    v23 = 138;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 323) )
  {
    *((_BYTE *)this + 323) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this, v11, v12, v13);
  }
  if ( *((_BYTE *)this + 320) )
  {
    *((_BYTE *)this + 320) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this, v11, v12, v13);
  }
LABEL_11:
  v14 = (struct CResource *)*((_QWORD *)this + 17);
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 15);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 17);
  v15 = CResource::RegisterNotifier((CResource *)v3, v14);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x13Cu);
  }
  else
  {
    v17 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 13));
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x13Du);
    }
    else
    {
      v18 = CResource::RegisterNotifier((CResource *)v3, *((struct CResource **)this + 16));
      v16 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x13Eu);
    }
  }
  if ( v16 < 0 )
  {
    v23 = 166;
    v22 = v16;
    goto LABEL_27;
  }
LABEL_16:
  CResource::NotifyOnChanged(v3, 0LL, 0LL);
  return (unsigned int)v16;
}
