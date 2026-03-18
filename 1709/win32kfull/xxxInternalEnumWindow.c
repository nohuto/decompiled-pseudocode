/*
 * XREFs of xxxInternalEnumWindow @ 0x1C0054338
 * Callers:
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01405C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxTurnOffCompositing @ 0x1C01C56BC (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x1C020C114 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxInternalEnumWindow(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  _QWORD *v11; // rdi
  unsigned int v12; // r14d
  unsigned __int64 v13; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rbx
  struct _KTHREAD *v19; // r14
  __int64 v20; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-48h]
  _QWORD v25[3]; // [rsp+28h] [rbp-40h] BYREF

  result = BuildHwndList(a1, a4, 0LL);
  v24 = result;
  v10 = result;
  if ( result )
  {
    v11 = (_QWORD *)(result + 32);
    v12 = 1;
    v13 = *(_QWORD *)(result + 32);
    if ( v13 != 1 )
    {
      do
      {
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8, v9) )
          PsGetThreadWin32Thread(CurrentThread);
        v8 = (unsigned __int16)v13;
        v7 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
        {
          v15 = v13 >> 16;
          v6 = gSharedInfo[1];
          v16 = v6 + (unsigned int)(v8 * LODWORD(gSharedInfo[2]));
          v17 = 3 * ((__int64)(unsigned int)(v8 * LODWORD(gSharedInfo[2])) >> 5);
          if ( ((_WORD)v15 == *(_WORD *)(v16 + 26)
             || (_WORD)v15 == 0xFFFF
             || !(_WORD)v15 && PsGetCurrentProcessWow64Process())
            && (*(_BYTE *)(v16 + 25) & 1) == 0
            && *(_BYTE *)(v16 + 24) == 1 )
          {
            v18 = *(_QWORD *)(gpKernelHandleTable + 8 * v17);
            if ( v18 )
            {
              v19 = KeGetCurrentThread();
              v20 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6, v8, v9) )
              {
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v19);
                if ( ThreadWin32Thread )
                  v20 = *ThreadWin32Thread;
              }
              v25[0] = *(_QWORD *)(v20 + 392);
              *(_QWORD *)(v20 + 392) = v25;
              v25[1] = v18;
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
              v12 = a2(v18, a3);
              ThreadUnlock1(v23, v22);
              if ( !v12 )
                break;
            }
          }
        }
        v13 = *++v11;
      }
      while ( *v11 != 1LL );
      v10 = v24;
    }
    FreeHwndList(v10);
    return v12;
  }
  return result;
}
