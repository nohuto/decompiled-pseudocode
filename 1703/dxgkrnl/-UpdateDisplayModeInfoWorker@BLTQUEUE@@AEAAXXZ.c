/*
 * XREFs of ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0103F08
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103DA4 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103E30 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::UpdateDisplayModeInfoWorker(BLTQUEUE *this, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 26) = *((_QWORD *)this + 52);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)this + 31, a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v13);
  v14 = 2;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v6 = *((unsigned int *)this + 52);
  v7 = *((unsigned int *)this + 106);
  *((LARGE_INTEGER *)this + 34) = v5;
  *((_QWORD *)this + 37) = PerformanceFrequency.QuadPart * *((unsigned int *)this + 53) / v6;
  v8 = 40 * (int)v7 / 0x3E8u;
  *((_DWORD *)this + 76) = v8;
  v9 = v8 + (unsigned int)v7;
  v5.LowPart = *((_DWORD *)this + 212);
  *((_DWORD *)this + 77) = v9;
  *((_DWORD *)this + 78) = v9 + 5 * (int)v7 / 0x3E8u;
  if ( (v5.LowPart & 2) != 0 && !*((_BYTE *)this + 316) )
  {
    BLTQUEUE::StopVSync(this, 1, v9, v7);
    BLTQUEUE::StartVSync(this, 1, v10, v11);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  *((_BYTE *)this + 402) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
