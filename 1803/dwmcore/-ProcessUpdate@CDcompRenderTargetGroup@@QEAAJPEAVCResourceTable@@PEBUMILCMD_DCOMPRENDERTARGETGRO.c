/*
 * XREFs of ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C82D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x180051ACC (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800C8260 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CDcompRenderTargetGroup::ProcessUpdate(
        CDcompRenderTargetGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGETGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v8; // eax
  struct CResource **v9; // rdx
  int v10; // ebx
  int v11; // eax
  unsigned int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-58h]
  unsigned int *v15; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v16; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v15 = a4;
  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  v8 = CResource::UnmarshalResourceArray(
         &v15,
         &a5,
         v5,
         0x2Cu,
         v14,
         (unsigned int *)this + 14,
         (void **)&v16,
         (__int64)a2,
         0);
  v9 = v16;
  v10 = v8;
  *((_QWORD *)this + 8) = v16;
  if ( v8 < 0 )
  {
    v13 = 607;
    goto LABEL_8;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 14));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x275u);
  if ( v10 < 0 )
  {
    v13 = 610;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
    CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v10;
}
