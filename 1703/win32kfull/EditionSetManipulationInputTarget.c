/*
 * XREFs of EditionSetManipulationInputTarget @ 0x1C01D6740
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ResolveInputSinkToPwnd @ 0x1C01A0DB8 (ResolveInputSinkToPwnd.c)
 */

__int64 __fastcall EditionSetManipulationInputTarget(int a1, struct tagWND *a2, unsigned int a3, void *Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  struct _LIST_ENTRY *FrameById; // rax
  int Blink; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v28; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+34h] [rbp-54h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+48h] [rbp-40h]
  _QWORD v32[3]; // [rsp+58h] [rbp-30h] BYREF

  v5 = a3;
  v8 = 0LL;
  v30 = 0LL;
  v28 = 0;
  v29 = 0;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (_DWORD)v5 )
    {
      FrameById = FindFrameById(a1);
      if ( FrameById )
      {
        _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
        Blink = (int)FrameById[5].Blink[3].Blink;
        v31 = Blink;
        UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)FrameById);
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v14, v16, v17);
        ProbeForRead(Src, 4 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
        v19 = Win32AllocPoolWithQuota(4 * v5, 1851878741LL);
        v8 = (void *)v19;
        v30 = v19;
        if ( v19 )
        {
          PushW32ThreadLock(v19, v32, (__int64)Win32FreePool);
          memmove(v8, Src, 4 * v5);
          v25 = (__int64 *)ResolveInputSinkToPwnd(a2, Blink, &v28);
          if ( v25 )
            v26 = *v25;
          else
            v26 = 0LL;
          v20 = xxxSetManipulationInputTarget(a1, v26, v5, (__int64)v8, a2, v28);
        }
        else
        {
          v20 = 0;
          v29 = 0;
          UserSetLastError(8LL);
        }
        goto LABEL_13;
      }
    }
    v11 = 87LL;
  }
  else
  {
    v11 = 5LL;
  }
  v20 = 0;
  UserSetLastError(v11);
LABEL_13:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v32);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v20;
}
