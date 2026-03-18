/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0177DC0
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C000EF94 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( (*((_DWORD *)this + 131) & a2) != a2 )
  {
    __debugbreak();
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2609LL;
    WdLogEvent5_WdAssertion(v4);
  }
  *((_DWORD *)this + 131) &= ~a2;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 63) + 8LL) + 896LL))(
    *((_QWORD *)this + 64),
    a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(v5, &ResumeSchedulerForVidPnSource, v6, *((_QWORD *)this + 2), a2);
}
