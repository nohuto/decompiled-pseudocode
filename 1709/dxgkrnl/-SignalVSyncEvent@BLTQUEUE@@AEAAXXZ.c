/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C007F1C0
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C00011F4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0qqqq @ 0x1C00215BC (McTemplateK0qqqq.c)
 *     McTemplateK0pqxqqipqx @ 0x1C002BF4C (McTemplateK0pqxqqipqx.c)
 *     McTemplateK0qiii @ 0x1C002C064 (McTemplateK0qiii.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  DXGPUSHLOCK *v2; // rdi
  LARGE_INTEGER v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  LONGLONG v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rdx
  bool v9; // zf
  struct _KEVENT *v10; // rcx
  __int64 v11; // rax
  struct DXGADAPTER *Adapter; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE v16[8]; // [rsp+60h] [rbp-28h] BYREF
  char *v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+70h] [rbp-18h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER v20; // [rsp+98h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 316) )
  {
    v2 = (BLTQUEUE *)((char *)this + 248);
    v17 = (char *)this + 248;
    if ( this != (BLTQUEUE *)-248LL && *((struct _KTHREAD **)this + 32) == KeGetCurrentThread() )
    {
      v11 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v11 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v11);
    }
    DXGPUSHLOCK::AcquireExclusive(v2);
    v18 = 2;
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v4 = *((unsigned int *)this + 52);
    v5 = *((unsigned int *)this + 53);
    *((LARGE_INTEGER *)this + 34) = v3;
    v6 = v4 * v3.QuadPart / v5 / PerformanceFrequency.QuadPart;
    *((_QWORD *)this + 35) = v6;
    v7 = (unsigned int)v6;
    v8 = PerformanceFrequency.QuadPart * v5 * (unsigned int)v6 % v4;
    v9 = bTracingEnabled == 0;
    *((_QWORD *)this + 36) = PerformanceFrequency.QuadPart * v5 * (unsigned int)v6 / v4;
    if ( !v9 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqq((unsigned int)v6, &EventDWMVsyncSignal, v5, *((_DWORD *)this + 58), v6, 0, 0);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qiii(v7, v8, v5, 0, *((_QWORD *)this + 35), *((_QWORD *)this + 34), *((_QWORD *)this + 36));
    }
    if ( *((_DWORD *)this + 59) )
      KePulseEvent(*((PRKEVENT *)this + 27), 0, 0);
    v10 = (struct _KEVENT *)*((_QWORD *)this + 28);
    if ( v10 && *((_DWORD *)this + 58) <= *((_DWORD *)this + 70) )
      KeSetEvent(v10, 0, 0);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  }
  if ( *((_BYTE *)this + 316) && (*((_DWORD *)this + 212) & 2) != 0 )
    KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C0060D6C), 0, 0LL);
  v9 = bTracingEnabled == 0;
  *((_DWORD *)this + 59) = 0;
  if ( !v9 )
  {
    if ( *(_QWORD *)this )
    {
      KeQueryPerformanceCounter(&v20);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
          McTemplateK0pqxqqipqx(v14, v13, v15, Adapter);
        }
      }
    }
  }
}
