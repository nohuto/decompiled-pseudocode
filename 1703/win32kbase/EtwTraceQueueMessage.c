/*
 * XREFs of EtwTraceQueueMessage @ 0x1C007B2B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C007B388 (EtwTraceQueueInputMessage.c)
 *     Template_cppppqq @ 0x1C00DB4A4 (Template_cppppqq.c)
 *     Template_qqsp @ 0x1C00DD840 (Template_qqsp.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebp
  int v9; // edx
  int v10; // r8d
  __int64 CurrentProcess; // r14
  char v12; // r15
  void *v13; // rdi
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rsi
  char v18; // bp
  __int64 v19; // rdi
  int v20; // r8d
  int v21; // r9d
  int v22; // ecx

  if ( !*(_DWORD *)(a1 + 24) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8 = -1;
    CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
    v12 = ThreadWin32Thread ? (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) : -1;
    v13 = &unk_1C016D198;
    v14 = CurrentProcess ? (void *)PsGetProcessImageFileName(CurrentProcess) : &unk_1C016D198;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
    {
      if ( v14 )
        v13 = v14;
      if ( ThreadWin32Thread )
      {
        v15 = *(_QWORD *)(ThreadWin32Thread + 376);
        if ( v15 )
          v8 = *(_DWORD *)(v15 + 56);
      }
      Template_qqsp((_DWORD)v14, v9, v10, v8, v12, (__int64)v13, *(_QWORD *)(a1 + 16));
    }
  }
  result = *(unsigned int *)(a1 + 100);
  if ( (result & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v16 = *(_DWORD *)(a1 + 24);
      LOBYTE(v17) = 0;
      v18 = v16;
      if ( (unsigned int)(v16 - 581) <= 2 )
        v17 = *(_QWORD *)(a1 + 40);
      else
        v18 = 0;
      LOBYTE(v19) = 0;
      if ( (unsigned int)(v16 - 581) <= 2 )
        v19 = *(_QWORD *)(a1 + 32);
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v22 = *(char *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
      else
        v22 = -1;
      LOBYTE(v21) = v22;
      return Template_cppppqq(
               v22,
               (unsigned int)&QueuePostMessage,
               v20,
               v21,
               a1,
               *(_QWORD *)(a1 + 16),
               v19,
               v17,
               v18,
               *(_DWORD *)(a1 + 48));
    }
  }
  else if ( (result & 8) != 0 )
  {
    return EtwTraceQueueInputMessage(a1);
  }
  return result;
}
