/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJKPEBQEAXHKPEAK@Z @ 0x18000EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        unsigned int a2,
        void *const *a3,
        BOOL a4,
        DWORD dwMilliseconds,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  void *const *v7; // r13
  __int64 v9; // r15
  struct _RTL_CRITICAL_SECTION *v10; // r14
  int v11; // edi
  unsigned int v12; // r12d
  DWORD v13; // eax
  int v15; // eax
  __int64 v16; // r13
  unsigned int v17; // ebx
  signed int LastError; // eax
  unsigned int v19; // [rsp+20h] [rbp-288h]
  HANDLE Handles[64]; // [rsp+50h] [rbp-258h] BYREF

  v6 = a6;
  v7 = a3;
  v9 = a2;
  if ( a2 && !a3 || a2 > 0x3F )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x265u);
    return (unsigned int)v11;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = 0;
  if ( !*((_QWORD *)this + 20) )
    goto LABEL_5;
  v15 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), *((_QWORD *)this + 20), 0LL);
  if ( v15 >= 0
    || (v11 = v15 | 0x10000000, MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15 | 0x10000000, 0x75u),
                                v11 >= 0) )
  {
    *((_QWORD *)this + 20) = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x173u);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x134u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1FDu);
  }
  else
  {
LABEL_5:
    v12 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v12 )
    {
      v16 = *((_QWORD *)this + 5);
      do
      {
        v17 = *(_DWORD *)(v16 + 12LL * v12 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v12 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v12 = v17;
      }
      while ( v17 );
      v7 = a3;
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
    v6 = a6;
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v11 < 0 )
  {
    v19 = 616;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v19);
    return (unsigned int)v11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((CChannel **)this + 8) != (CChannel *)((char *)this + 64) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    *v6 = v9;
    return (unsigned int)v11;
  }
  ResetEvent(*((HANDLE *)this + 10));
  memcpy_0(Handles, v7, 8 * v9);
  Handles[v9] = (HANDLE)*((_QWORD *)this + 10);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SetLastError(0);
  v13 = WaitForMultipleObjects(v9 + 1, Handles, a4, dwMilliseconds);
  *v6 = v13;
  if ( v13 == -1 )
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    v19 = 646;
    if ( v11 >= 0 )
      v11 = -2003304445;
    goto LABEL_30;
  }
  return (unsigned int)v11;
}
