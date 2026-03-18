/*
 * XREFs of ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C001DE60
 * Callers:
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0015594 (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C001A838 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

void __fastcall DirectComposition::CLinearObjectTableBase::ReleaseHandle(
        DirectComposition::CLinearObjectTableBase *this,
        int a2)
{
  unsigned __int64 v2; // r9
  size_t v4; // r8
  __int64 Src; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v2 = (unsigned int)(a2 - 1);
    if ( v2 < *((_QWORD *)this + 4) )
    {
      v4 = *((_QWORD *)this + 5);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 1) + v2 * v4), &Src, v4);
      --*((_QWORD *)this + 6);
    }
  }
}
