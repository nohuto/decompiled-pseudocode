/*
 * XREFs of ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C01E4BE8
 * Callers:
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C01E4928 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E67DC (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::Cleanup(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGVMBUSCHANNEL *)((char *)this + 96), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      VmbChannelDisable();
      v2 = *((_QWORD *)this + 2);
      *((_BYTE *)this + 24) = 0;
    }
    VmbChannelCleanup(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
