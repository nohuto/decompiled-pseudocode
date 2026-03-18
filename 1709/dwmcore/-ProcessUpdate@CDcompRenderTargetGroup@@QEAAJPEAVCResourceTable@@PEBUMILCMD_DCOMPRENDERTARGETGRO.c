/*
 * XREFs of ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C0220
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z @ 0x1800A9AB4 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@I@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800B5D70 (-UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResou.c)
 *     ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800C02E0 (-UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CDcompRenderTargetGroup::ProcessUpdate(
        CDcompRenderTargetGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_DCOMPRENDERTARGETGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  signed int v8; // eax
  struct CResource **v9; // rdx
  signed int v10; // ebx
  signed int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-58h]
  unsigned int *v14; // [rsp+80h] [rbp+8h] BYREF
  struct CResource **v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = *((_DWORD *)a3 + 2);
  v14 = a4;
  CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  v8 = CResource::UnmarshalResourceArray(
         &v14,
         (int *)&a5,
         v5,
         0x27u,
         v13,
         (unsigned int *)this + 14,
         (void **)&v15,
         (__int64)a2,
         0);
  v9 = v15;
  v10 = v8;
  *((_QWORD *)this + 8) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x258u);
    goto LABEL_8;
  }
  v11 = CResource::RegisterNNotifiersInternal(this, v9, *((_DWORD *)this + 14));
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x26Du);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x25Bu);
LABEL_8:
    CDcompRenderTargetGroup::UnRegisterNotifiers(this);
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
