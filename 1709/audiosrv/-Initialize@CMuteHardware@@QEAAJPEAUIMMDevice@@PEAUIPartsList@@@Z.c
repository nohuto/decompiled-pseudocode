/*
 * XREFs of ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180066D64
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800669A4 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180066D00 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 */

__int64 __fastcall CMuteHardware::Initialize(CMuteHardware *this, struct IUnknown *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  int MuteControlForEndpoint; // ebx

  v6 = UuidCreate((UUID *)((char *)this + 60));
  MuteControlForEndpoint = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      MuteControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    MuteControlForEndpoint = CMuteHardware::FindMuteControlForEndpoint(this, a2, a3);
    if ( MuteControlForEndpoint < 0 )
    {
LABEL_7:
      AudSrvTraceLoggingErrorHelper("CMuteHardware::Initialize", 452, MuteControlForEndpoint);
      return (unsigned int)MuteControlForEndpoint;
    }
    MuteControlForEndpoint = CMuteControlBase::Initialize(this, (struct IMMDevice *)a2);
  }
  if ( MuteControlForEndpoint < 0 )
    goto LABEL_7;
  return (unsigned int)MuteControlForEndpoint;
}
