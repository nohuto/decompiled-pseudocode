/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C015BDE0
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001A1C0 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8

  v4 = *((unsigned int *)this + 135);
  if ( (a2 & (unsigned int)v4) != a2 )
  {
    __debugbreak();
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 2885LL;
    WdLogEvent5_WdAssertion(v5);
    LODWORD(v4) = *((_DWORD *)this + 135);
  }
  *((_DWORD *)this + 135) = v4 & ~a2;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 1016LL))(
    *((_QWORD *)this + 66),
    a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(v6, &ResumeSchedulerForVidPnSource, v7, *((_QWORD *)this + 2), a2);
}
