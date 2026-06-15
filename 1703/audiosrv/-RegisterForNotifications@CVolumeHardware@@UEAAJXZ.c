/*
 * XREFs of ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18003B0F0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeHardware::RegisterForNotifications(CVolumeHardware *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CVolumeHardware *))(**((_QWORD **)this + 30) + 112LL))(
         *((_QWORD *)this + 30),
         &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
         this);
  v3 = v2;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::RegisterForNotifications", 0x4E1u, v2);
  else
    *((_DWORD *)this + 68) = 1;
  return v3;
}
