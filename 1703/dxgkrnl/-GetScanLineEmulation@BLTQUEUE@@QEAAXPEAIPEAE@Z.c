/*
 * XREFs of ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C01B47CC
 * Callers:
 *     DxgkGetScanLine @ 0x1C017BCF0 (DxgkGetScanLine.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01A3B24 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::GetScanLineEmulation(struct _KTHREAD **this, unsigned int *a2, bool *a3, __int64 a4)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  LONGLONG v10; // rax
  char v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 31, (__int64)a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v12);
  v13 = 2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (__int64)this[37];
  if ( v8 )
  {
    v9 = *((unsigned int *)this + 78);
    v10 = v9 * (PerformanceCounter.QuadPart - (__int64)this[34]) / v8;
    if ( ((_DWORD)this[106] & 2) != 0 )
    {
      if ( (unsigned int)v10 >= (unsigned int)v9 )
        LODWORD(v10) = *((_DWORD *)this + 78);
    }
    else
    {
      LODWORD(v10) = (unsigned int)v10 % (unsigned int)v9;
    }
    *a3 = (unsigned int)v10 < *((_DWORD *)this + 76) || (unsigned int)v10 > *((_DWORD *)this + 77);
    *a2 = v10;
  }
  else
  {
    *a2 = 0;
    *a3 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
