/*
 * XREFs of ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C01E4928
 * Callers:
 *     ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C01E49C0 (--_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E4BE8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  *(_QWORD *)this = &DXGVMBUSCHANNEL::`vftable';
  DXGVMBUSCHANNEL::Cleanup(this);
  if ( *((DXGVMBUSCHANNEL **)this + 4) != (DXGVMBUSCHANNEL *)((char *)this + 32) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 154LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGVMBUSCHANNEL *)((char *)this + 96));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGVMBUSCHANNEL *)((char *)this + 56));
}
