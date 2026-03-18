/*
 * XREFs of ?DoStackCapture@@YAXIJI@Z @ 0x14000874C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x140008838 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14000889C (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void __fastcall DoStackCapture(int a1, DWORD a2, DWORD a3)
{
  volatile int v6; // ecx
  __int64 v7; // rdx
  LARGE_INTEGER *v8; // rbx
  DWORD CurrentThreadId; // eax

  if ( !_InterlockedCompareExchange(&dword_14000FBEC, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3000u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (LARGE_INTEGER *)((char *)&g_StackCaptureFrames + 48 * v7);
  v8->LowPart = a2;
  CurrentThreadId = GetCurrentThreadId();
  v8[1].LowPart = a3;
  v8->HighPart = CurrentThreadId;
  QueryPerformanceCounter(v8 + 2);
  v8[3].QuadPart = 0LL;
  v8[4].QuadPart = 0LL;
  v8[5].QuadPart = 0LL;
  if ( !RtlCaptureStackBackTrace(a1 + 1, 3u, (PVOID *)&v8[3], 0LL) )
    memset(&v8[3], 224, 18);
}
