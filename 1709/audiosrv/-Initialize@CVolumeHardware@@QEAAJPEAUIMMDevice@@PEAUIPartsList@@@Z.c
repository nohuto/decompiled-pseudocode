/*
 * XREFs of ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180068FFC
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180068168 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180068F00 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::Initialize(UUID *this, struct IUnknown *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  int VolumeControlForEndpoint; // ebx

  v6 = UuidCreate(this + 16);
  VolumeControlForEndpoint = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      VolumeControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    VolumeControlForEndpoint = CVolumeHardware::FindVolumeControlForEndpoint((CVolumeHardware *)this, a2, a3);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_12;
    VolumeControlForEndpoint = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(**(_QWORD **)this[15].Data4 + 24LL))(
                                 *(_QWORD *)this[15].Data4,
                                 &this[17].Data2);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_12;
    VolumeControlForEndpoint = CVolumeControlBase::Initialize((CVolumeControlBase *)this, a2);
    if ( VolumeControlForEndpoint >= 0
      && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
    }
  }
  if ( VolumeControlForEndpoint < 0 )
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::Initialize", 1213, VolumeControlForEndpoint);
  return (unsigned int)VolumeControlForEndpoint;
}
