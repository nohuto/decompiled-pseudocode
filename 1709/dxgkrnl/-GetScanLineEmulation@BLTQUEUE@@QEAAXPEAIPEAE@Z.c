/*
 * XREFs of ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C01CE140
 * Callers:
 *     DxgkGetScanLine @ 0x1C00FDDF0 (DxgkGetScanLine.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01BD6DC (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::GetScanLineEmulation(struct _KTHREAD **this, unsigned int *a2, bool *a3)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  LONGLONG v9; // rax
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 31);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v12 = 2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = (__int64)this[37];
  if ( v7 )
  {
    v8 = *((unsigned int *)this + 78);
    v9 = v8 * (PerformanceCounter.QuadPart - (__int64)this[34]) / v7;
    if ( ((_DWORD)this[106] & 2) != 0 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        LODWORD(v9) = *((_DWORD *)this + 78);
    }
    else
    {
      LODWORD(v9) = (unsigned int)v9 % (unsigned int)v8;
    }
    *a3 = (unsigned int)v9 < *((_DWORD *)this + 76) || (unsigned int)v9 > *((_DWORD *)this + 77);
    *a2 = v9;
  }
  else
  {
    *a2 = 0;
    *a3 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
