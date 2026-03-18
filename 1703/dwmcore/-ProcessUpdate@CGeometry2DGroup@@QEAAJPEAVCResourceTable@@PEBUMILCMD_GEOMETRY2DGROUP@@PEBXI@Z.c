/*
 * XREFs of ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180128994
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180034E98 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800C06C8 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x180174E90 (-UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ.c)
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
  __int64 v13; // [rsp+20h] [rbp-58h]
  unsigned int *v14; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v14 = a4;
  CGeometry2DGroup::UnRegisterNotifiers(this);
  v8 = UnmarshalResourceArray(&v14, &a5, v5, 1u, v13, (unsigned int *)this + 24, (void **)&v15, (__int64)a2, 1);
  v9 = v15;
  v10 = v8;
  *((_QWORD *)this + 13) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1D4u);
    goto LABEL_7;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 24));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1F1u);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1D7u);
LABEL_7:
    CGeometry2DGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
