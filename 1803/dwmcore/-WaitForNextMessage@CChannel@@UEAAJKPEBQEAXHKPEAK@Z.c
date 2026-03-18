/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJKPEBQEAXHKPEAK@Z @ 0x180087370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
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
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // r12d
  DWORD v14; // eax
  int v16; // eax
  __int64 v17; // r13
  unsigned int v18; // ebx
  signed int LastError; // eax
  unsigned int v20; // [rsp+20h] [rbp-288h]
  HANDLE Handles[64]; // [rsp+50h] [rbp-258h] BYREF

  v6 = a6;
  v7 = a3;
  v9 = a2;
  if ( a2 && !a3 || a2 > 0x3F )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x264u);
    return (unsigned int)v12;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( !v11 )
    goto LABEL_5;
  v16 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), v11, 0LL);
  if ( v16 < 0 )
  {
    v12 = v16 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16 | 0x10000000, 0x75u);
  }
  else
  {
    v12 = 0;
  }
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x173u);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x133u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1FCu);
  }
  else
  {
LABEL_5:
    v13 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v13 )
    {
      v17 = *((_QWORD *)this + 5);
      do
      {
        v18 = *(_DWORD *)(v17 + 12LL * v13 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v13 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v13 = v18;
      }
      while ( v18 );
      v7 = a3;
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
    v6 = a6;
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v12 < 0 )
  {
    v20 = 615;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v20);
    return (unsigned int)v12;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((CChannel **)this + 8) != (CChannel *)((char *)this + 64) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    *v6 = v9;
    return (unsigned int)v12;
  }
  ResetEvent(*((HANDLE *)this + 10));
  memcpy_0(Handles, v7, 8 * v9);
  Handles[v9] = (HANDLE)*((_QWORD *)this + 10);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SetLastError(0);
  v14 = WaitForMultipleObjects(v9 + 1, Handles, a4, dwMilliseconds);
  *v6 = v14;
  if ( v14 == -1 )
  {
    LastError = GetLastError();
    v12 = LastError;
    if ( LastError > 0 )
      v12 = (unsigned __int16)LastError | 0x80070000;
    v20 = 645;
    if ( v12 >= 0 )
      v12 = -2003304445;
    goto LABEL_32;
  }
  return (unsigned int)v12;
}
