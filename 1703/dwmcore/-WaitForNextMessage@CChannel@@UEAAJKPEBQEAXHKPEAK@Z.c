/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJKPEBQEAXHKPEAK@Z @ 0x180082710
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        unsigned int a2,
        void *const *a3,
        BOOL a4,
        DWORD dwMilliseconds,
        unsigned int *a6)
{
  BOOL v6; // r12d
  __int64 v8; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  int v11; // ebp
  unsigned int v12; // r12d
  DWORD v13; // eax
  int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // edi
  signed int LastError; // eax
  signed int v19; // ebx
  HANDLE Handles[64]; // [rsp+40h] [rbp-258h] BYREF

  v6 = a4;
  v8 = a2;
  if ( a2 && !a3 || a2 > 0x3F )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x265u);
    return 2147942487LL;
  }
  else
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
    v11 = 0;
    if ( !*((_QWORD *)this + 20) )
      goto LABEL_5;
    v15 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), *((_QWORD *)this + 20), 0LL);
    if ( v15 >= 0
      || (v11 = v15 | 0x10000000, MilInstrumentationCheckHR(0x14u, 0LL, 0, v15 | 0x10000000, 0x75u), v11 >= 0) )
    {
      *((_QWORD *)this + 20) = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x173u);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x134u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1FDu);
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
      }
      LeaveCriticalSection(&g_csCompositionEngine);
      v6 = a4;
      v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
      *((_DWORD *)this + 3) = 0;
    }
    if ( v10 )
      LeaveCriticalSection(v10);
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x268u);
      return (unsigned int)v11;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    if ( *((CChannel **)this + 8) != (CChannel *)((char *)this + 64) )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
      *a6 = v8;
      return (unsigned int)v11;
    }
    ResetEvent(*((HANDLE *)this + 10));
    memcpy_0(Handles, a3, 8 * v8);
    Handles[v8] = (HANDLE)*((_QWORD *)this + 10);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    SetLastError(0);
    v13 = WaitForMultipleObjects(v8 + 1, Handles, v6, dwMilliseconds);
    *a6 = v13;
    if ( v13 != -1 )
      return (unsigned int)v11;
    LastError = GetLastError();
    v19 = LastError;
    if ( LastError > 0 )
      v19 = (unsigned __int16)LastError | 0x80070000;
    if ( v19 >= 0 )
      v19 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x286u);
    return (unsigned int)v19;
  }
}
