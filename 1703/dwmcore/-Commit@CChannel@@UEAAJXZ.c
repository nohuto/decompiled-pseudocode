/*
 * XREFs of ?Commit@CChannel@@UEAAJXZ @ 0x180082E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  int v3; // edi
  unsigned int v4; // r14d
  int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = 0;
  if ( !*((_QWORD *)this + 20) )
    goto LABEL_2;
  v6 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), *((_QWORD *)this + 20), 0LL);
  if ( v6 >= 0 || (v3 = v6 | 0x10000000, MilInstrumentationCheckHR(0x14u, 0LL, 0, v6 | 0x10000000, 0x75u), v3 >= 0) )
    *((_QWORD *)this + 20) = 0LL;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x173u);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x134u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1FDu);
  }
  else
  {
LABEL_2:
    v4 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v4 )
    {
      v7 = *((_QWORD *)this + 5);
      do
      {
        v8 = *(_DWORD *)(v7 + 12LL * v4 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v4 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v4 = v8;
      }
      while ( v8 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return (unsigned int)v3;
}
