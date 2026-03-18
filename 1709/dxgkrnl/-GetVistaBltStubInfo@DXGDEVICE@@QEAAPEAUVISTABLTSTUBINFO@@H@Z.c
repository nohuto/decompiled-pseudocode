/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C001D50C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2)
{
  void *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 217) )
    {
      v3 = operator new(0x10uLL, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 217) = v3;
      if ( !v3 )
      {
        v5 = WdLogNewEntry5_WdLowResource(v4);
        *(_QWORD *)(v5 + 24) = 1074LL;
        WdLogEvent5_WdLowResource(v5);
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 217);
}
