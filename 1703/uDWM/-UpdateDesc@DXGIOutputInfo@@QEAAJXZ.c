/*
 * XREFs of ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18000FE58
 * Callers:
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18000F48C (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18000FB28 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGIOutputInfo::UpdateDesc(DXGIOutputInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 16);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2Bu);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           (char *)this + 112);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Cu);
  }
  return v3;
}
