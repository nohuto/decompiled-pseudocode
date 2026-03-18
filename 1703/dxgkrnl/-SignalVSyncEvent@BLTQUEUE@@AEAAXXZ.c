/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C0103C8C
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002744 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_qqqq @ 0x1C0023228 (Template_qqqq.c)
 *     Template_pqxqqipqx @ 0x1C003BBF8 (Template_pqxqqipqx.c)
 *     Template_qiii @ 0x1C003BD18 (Template_qiii.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  LONGLONG v9; // rax
  char v10; // r10
  LONGLONG v11; // rdx
  struct _KEVENT *v12; // rcx
  bool v13; // zf
  char v14; // al
  struct DXGADAPTER *Adapter; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+70h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v23; // [rsp+98h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 316) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)this + 31, a3, a4);
    DXGPUSHLOCK::AcquireExclusive(v20);
    v21 = 2;
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v6 = *((unsigned int *)this + 52);
    v7 = *((unsigned int *)this + 53);
    v8 = v5.QuadPart * v6;
    *((LARGE_INTEGER *)this + 34) = v5;
    LOBYTE(v8) = bTracingEnabled;
    v9 = v5.QuadPart * v6 / v7 / PerformanceFrequency.QuadPart;
    *((_QWORD *)this + 35) = v9;
    v10 = v9;
    v11 = PerformanceFrequency.QuadPart * v7 * (unsigned int)v9 % v6;
    *((_QWORD *)this + 36) = PerformanceFrequency.QuadPart * v7 * (unsigned int)v9 / v6;
    if ( (_BYTE)v8 )
    {
      v14 = Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        Template_qqqq(v8, &EventDWMVsyncSignal, v7, *((_DWORD *)this + 58), v10, 0, 0);
        LOBYTE(v8) = bTracingEnabled;
        v14 = Microsoft_Windows_DxgKrnlEnableBits;
      }
      if ( (_BYTE)v8 && (v14 & 0x40) != 0 )
        Template_qiii(v8, v11, v7, 0, *((_QWORD *)this + 35), *((_QWORD *)this + 34), *((_QWORD *)this + 36));
    }
    if ( *((_DWORD *)this + 59) )
      KePulseEvent(*((PRKEVENT *)this + 27), 0, 0);
    v12 = (struct _KEVENT *)*((_QWORD *)this + 28);
    if ( v12 && *((_DWORD *)this + 58) <= *((_DWORD *)this + 70) )
      KeSetEvent(v12, 0, 0);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  }
  if ( *((_BYTE *)this + 316) && (*((_DWORD *)this + 212) & 2) != 0 )
    KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C006FEEC), 0, 0LL);
  v13 = bTracingEnabled == 0;
  *((_DWORD *)this + 59) = 0;
  if ( !v13 )
  {
    if ( *(_QWORD *)this )
    {
      KeQueryPerformanceCounter(&v23);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          Template_pqxqqipqx(v17, v16, v18, Adapter);
        }
      }
    }
  }
}
