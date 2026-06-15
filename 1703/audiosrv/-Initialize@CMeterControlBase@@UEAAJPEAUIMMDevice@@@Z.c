/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003A740
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003A428 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180083C50 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x18003A480 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  unsigned int *v4; // rdx
  __int64 (__fastcall *v5)(CMeterHardware *, unsigned int *); // rax
  int ChannelCount; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 24);
  if ( v3 < 0
    || ((v4 = (unsigned int *)((char *)this + 32),
         v5 = *(__int64 (__fastcall **)(CMeterHardware *, unsigned int *))(*(_QWORD *)this + 40LL),
         v5 != CMeterHardware::GetChannelCount)
      ? (ChannelCount = v5(this, v4))
      : (ChannelCount = CMeterHardware::GetChannelCount(this, v4)),
        v3 = ChannelCount,
        ChannelCount < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::Initialize", 0xA4u, v3);
  }
  return (unsigned int)v3;
}
