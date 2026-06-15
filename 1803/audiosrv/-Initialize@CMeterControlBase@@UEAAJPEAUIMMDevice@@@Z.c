/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18004AA90
 * Callers:
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18004A970 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18004ABC4 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x18004A920 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  unsigned int *v4; // rdx
  __int64 (__fastcall *v5)(CMeterSoftware *, unsigned int *); // rax
  int ChannelCount; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 16);
  if ( v3 < 0
    || ((v4 = (unsigned int *)((char *)this + 24),
         v5 = *(__int64 (__fastcall **)(CMeterSoftware *, unsigned int *))(*(_QWORD *)this + 40LL),
         v5 != CMeterSoftware::GetChannelCount)
      ? (ChannelCount = v5(this, v4))
      : (ChannelCount = CMeterSoftware::GetChannelCount(this, v4)),
        v3 = ChannelCount,
        ChannelCount < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::Initialize", 163, v3);
  }
  return (unsigned int)v3;
}
