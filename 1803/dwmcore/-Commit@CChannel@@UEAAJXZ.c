/*
 * XREFs of ?Commit@CChannel@@UEAAJXZ @ 0x180087A50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rdx
  int v4; // edi
  unsigned int v5; // r14d
  int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = *((_QWORD *)this + 20);
  v4 = 0;
  if ( !v3 )
    goto LABEL_2;
  v7 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), v3, 0LL);
  if ( v7 < 0 )
  {
    v4 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7 | 0x10000000, 0x75u);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x173u);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x133u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1FCu);
  }
  else
  {
LABEL_2:
    v5 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v5 )
    {
      v8 = *((_QWORD *)this + 5);
      do
      {
        v9 = *(_DWORD *)(v8 + 12LL * v5 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v5 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v5 = v9;
      }
      while ( v9 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return (unsigned int)v4;
}
