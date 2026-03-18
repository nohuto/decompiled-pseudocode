/*
 * XREFs of ?GetVistaBltStubInfo@DXGDEVICE@@QEAAPEAUVISTABLTSTUBINFO@@H@Z @ 0x1C0023B48
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct VISTABLTSTUBINFO *__fastcall DXGDEVICE::GetVistaBltStubInfo(DXGDEVICE *this, int a2)
{
  PVOID v3; // rax
  __int64 v4; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)this + 219) )
    {
      v3 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 219) = v3;
      if ( !v3 )
      {
        v4 = WdLogNewEntry5_WdLowResource();
        *(_QWORD *)(v4 + 24) = 1071LL;
        WdLogEvent5_WdLowResource(v4);
      }
    }
  }
  return (struct VISTABLTSTUBINFO *)*((_QWORD *)this + 219);
}
