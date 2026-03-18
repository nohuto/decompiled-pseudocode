/*
 * XREFs of W32pProcessCallout @ 0x1C00F4680
 * Callers:
 *     <none>
 * Callees:
 *     AllocateW32Process @ 0x1C00F4800 (AllocateW32Process.c)
 *     DereferenceW32Process @ 0x1C00F48E0 (DereferenceW32Process.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 *a1)
{
  int v1; // eax
  __int64 v2; // rbp
  bool v3; // r14
  __int64 ProcessWin32Process; // rbx
  __int64 v6; // rcx
  int W32Process; // eax
  int v8; // edi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax

  v1 = *((_DWORD *)a1 + 2);
  v2 = *a1;
  v3 = 1;
  ProcessWin32Process = 0LL;
  v6 = *a1;
  if ( (v1 & 1) != 0 )
  {
    W32Process = AllocateW32Process(v6);
    v8 = W32Process;
    if ( W32Process >= 0 )
    {
      v3 = W32Process != 1073741851;
      ProcessWin32Process = PsGetProcessWin32Process(v2);
      *(_DWORD *)(ProcessWin32Process + 56) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      result = xxxUserProcessCallout(ProcessWin32Process, a1);
      v8 = result;
      if ( (_DWORD)result == 1073741851 )
        return result;
      if ( (int)result >= 0 )
      {
        LOBYTE(v10) = 1;
        v8 = GdiProcessCallout(ProcessWin32Process, v10);
        if ( v8 < 0 )
        {
          xxxUserProcessCallout(ProcessWin32Process, 0LL);
        }
        else
        {
          LOBYTE(v11) = 1;
          v8 = DCompositionProcessCallout(ProcessWin32Process, v11);
          if ( v8 < 0 )
          {
            xxxUserProcessCallout(ProcessWin32Process, 0LL);
            GdiProcessCallout(ProcessWin32Process, 0LL);
          }
        }
      }
    }
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(v6);
    ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
    xxxUserProcessCallout(ProcessWin32Process, 0LL);
    DCompositionProcessCallout(ProcessWin32Process, 0LL);
    GdiProcessCallout(ProcessWin32Process, 0LL);
    v8 = 0;
  }
  if ( (a1[1] & 1) == 0 || v8 < 0 )
  {
    if ( ProcessWin32Process )
    {
      GdiUnmapGDIW32PIDLockedBitmaps(ProcessWin32Process);
      if ( v3 )
      {
        vMarkFreeW32Process(ProcessWin32Process);
        DereferenceW32Process(ProcessWin32Process);
      }
    }
  }
  return (unsigned int)v8;
}
