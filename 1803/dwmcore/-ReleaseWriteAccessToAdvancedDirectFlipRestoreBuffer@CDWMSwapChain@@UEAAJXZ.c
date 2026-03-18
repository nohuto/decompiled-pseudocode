/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJXZ @ 0x1801EA7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 573) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 53) + 232LL))(
           *((_QWORD *)this + 53),
           0LL,
           *((unsigned int *)this + 134));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x3B7u);
    else
      *((_BYTE *)this + 573) = 0;
  }
  return v1;
}
