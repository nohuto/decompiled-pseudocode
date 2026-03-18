/*
 * XREFs of ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x180082970
 * Callers:
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800656E8 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, void *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // ebp
  unsigned int v6; // r14d
  int v8; // eax
  __int64 v9; // r15
  unsigned int v10; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = 0;
  if ( !*((_QWORD *)this + 20) )
    goto LABEL_2;
  v8 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), *((_QWORD *)this + 20), a2);
  if ( v8 >= 0 || (v5 = v8 | 0x10000000, MilInstrumentationCheckHR(0x14u, 0LL, 0, v8 | 0x10000000, 0x75u), v5 >= 0) )
    *((_QWORD *)this + 20) = 0LL;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x173u);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x134u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1FDu);
  }
  else
  {
LABEL_2:
    v6 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v6 )
    {
      v9 = *((_QWORD *)this + 5);
      do
      {
        v10 = *(_DWORD *)(v9 + 12LL * v6 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v6 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v6 = v10;
      }
      while ( v10 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v5;
}
