/*
 * XREFs of ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004ABC4
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004A190 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18004AA90 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004AC10 (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 */

__int64 __fastcall CMeterHardware::Initialize(CMeterHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  int MeterControlForEndpoint; // ebx

  MeterControlForEndpoint = CMeterHardware::FindMeterControlForEndpoint(this, a2, a3);
  if ( MeterControlForEndpoint < 0
    || (MeterControlForEndpoint = CMeterControlBase::Initialize(this, a2), MeterControlForEndpoint < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterHardware::Initialize", 380, MeterControlForEndpoint);
  }
  return (unsigned int)MeterControlForEndpoint;
}
