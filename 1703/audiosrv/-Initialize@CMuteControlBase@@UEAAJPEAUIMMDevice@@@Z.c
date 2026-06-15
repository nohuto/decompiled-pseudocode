/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003AB60
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003A83C (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180083F80 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x18003AAE0 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(CMuteControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  __int64 (__fastcall *v4)(CMuteHardware *); // rax
  int LevelData; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 32);
  if ( v3 < 0
    || ((v4 = *(__int64 (__fastcall **)(CMuteHardware *))(*(_QWORD *)this + 112LL), v4 != CMuteHardware::GetLevelData)
      ? (LevelData = v4(this))
      : (LevelData = CMuteHardware::GetLevelData(this)),
        v3 = LevelData,
        LevelData < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::Initialize", 0xAFu, v3);
  }
  return (unsigned int)v3;
}
