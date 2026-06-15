/*
 * XREFs of ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003A83C
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003A8B4 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003AB60 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteHardware::Initialize(CMuteHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  signed int MuteControlForEndpoint; // ebx

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
LABEL_8:
      AudSrvTraceLoggingErrorHelper("CMuteHardware::Initialize", 0x1C4u, MuteControlForEndpoint);
      return (unsigned int)MuteControlForEndpoint;
    }
    MuteControlForEndpoint = CMuteControlBase::Initialize(this, a2);
  }
  if ( MuteControlForEndpoint < 0 )
    goto LABEL_8;
  return (unsigned int)MuteControlForEndpoint;
}
