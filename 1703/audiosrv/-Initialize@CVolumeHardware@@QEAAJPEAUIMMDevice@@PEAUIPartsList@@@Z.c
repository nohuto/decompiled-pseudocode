/*
 * XREFs of ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003B13C
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003AF20 (-Initialize@CVolumeControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003B204 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeHardware::Initialize(UUID *this, struct IMMDevice *a2, struct IPartsList *a3)
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
      goto LABEL_13;
    VolumeControlForEndpoint = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(**(_QWORD **)this[15].Data4 + 24LL))(
                                 *(_QWORD *)this[15].Data4,
                                 &this[17].Data2);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_13;
    VolumeControlForEndpoint = CVolumeControlBase::Initialize((CVolumeControlBase *)this, (struct IUnknown *)a2);
    if ( VolumeControlForEndpoint >= 0
      && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, this);
    }
  }
  if ( VolumeControlForEndpoint < 0 )
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::Initialize", 0x4BDu, VolumeControlForEndpoint);
  return (unsigned int)VolumeControlForEndpoint;
}
