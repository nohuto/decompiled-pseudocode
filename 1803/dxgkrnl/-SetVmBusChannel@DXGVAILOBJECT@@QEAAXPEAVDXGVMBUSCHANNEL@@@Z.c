/*
 * XREFs of ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0038858
 * Callers:
 *     ??1DXGVAILOBJECT@@QEAA@XZ @ 0x1C01E5AC4 (--1DXGVAILOBJECT@@QEAA@XZ.c)
 *     ?ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C01E6C10 (-ObjectInit@DXGVAILOBJECT@@SAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E67DC (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::SetVmBusChannel(DXGVAILOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    DestroyVmBusChannel(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 12) = a2;
}
