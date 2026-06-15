/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180066D00
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180066D64 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180066DF0 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(CMuteControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 32);
  if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(CMuteControlBase *))(*(_QWORD *)this + 112LL))(this), v3 < 0) )
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::Initialize", 175, v3);
  return (unsigned int)v3;
}
