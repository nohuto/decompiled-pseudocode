/*
 * XREFs of ?DoStackCapture@@YAXIJI@Z @ 0x18002BF50
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x18002BE90 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x1800466A4 (-DoStackCapture@@YAXJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoStackCapture(int a1, int a2, int a3)
{
  volatile int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  PVOID *v10; // rbx
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  void (__fastcall *v13)(volatile int *, __int64); // rbx

  if ( !_InterlockedCompareExchange(&dword_1800C1A00, 1, 0) )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
      v13 = (void (__fastcall *)(volatile int *, __int64))ProcAddress;
      if ( ProcAddress )
      {
        ((void (__fastcall *)(_DWORD *, __int64))ProcAddress)(g_StackCaptureFrames, 10240LL);
        v13(&g_nCurrentStackCaptureIndex, 4LL);
      }
    }
  }
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = 5 * v7;
  g_StackCaptureFrames[10 * v7] = a2;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[2 * v8 + 2] = a3;
  g_StackCaptureFrames[2 * v8 + 1] = CurrentThreadId;
  v10 = (PVOID *)&g_StackCaptureFrames[2 * v8];
  v10[2] = 0LL;
  v10[3] = 0LL;
  v10[4] = 0LL;
  if ( !RtlCaptureStackBackTrace(a1 + 1, 3u, v10 + 2, 0LL) )
    memset(v10 + 2, 224, 18);
}
