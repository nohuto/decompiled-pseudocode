/*
 * XREFs of ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1801AB050
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801AC1D0 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometry2DGroup::ProcessUpdate(
        CGeometry2DGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_GEOMETRY2DGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // eax
  struct CResource **v9; // rdx
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-58h]
  unsigned int *v15; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v16; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v15 = a4;
  CGeometry2DGroup::UnRegisterNotifiers(this);
  v8 = CResource::UnmarshalResourceArray(
         &v15,
         &a5,
         v5,
         0x3Du,
         v14,
         (unsigned int *)this + 24,
         (void **)&v16,
         (__int64)a2,
         1);
  v9 = v16;
  v10 = v8;
  *((_QWORD *)this + 13) = v16;
  if ( v8 < 0 )
  {
    v12 = 761;
    goto LABEL_7;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 24));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x30Fu);
  if ( v10 < 0 )
  {
    v12 = 764;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v12);
    CGeometry2DGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
