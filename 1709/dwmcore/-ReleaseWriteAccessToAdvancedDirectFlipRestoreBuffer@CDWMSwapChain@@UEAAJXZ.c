/*
 * XREFs of ?ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJXZ @ 0x1801B07E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::ReleaseWriteAccessToAdvancedDirectFlipRestoreBuffer(CDWMSwapChain *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 581) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 52) + 232LL))(
           *((_QWORD *)this + 52),
           0LL,
           *((unsigned int *)this + 132));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x3D3u);
    else
      *((_BYTE *)this + 581) = 0;
  }
  return v1;
}
