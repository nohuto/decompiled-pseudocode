/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01343F0
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C013436C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01344C0 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01347A8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall _GhostWindow(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  _QWORD *v8; // rcx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+24h] [rbp-34h]
  unsigned int v12; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v14; // [rsp+34h] [rbp-24h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL) )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v4 = *(_QWORD *)a1;
      v5 = *(struct _KTHREAD **)v3;
      v14 = 0LL;
      v11 = v4;
      v10 = 1;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v5);
      v7 = *(struct _KTHREAD **)v3;
      v12 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v7);
      v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v10);
    }
    else
    {
      PostShellHookMessagesEx(0x33u, *(_QWORD *)a1, 0LL);
      v2 = 1;
    }
    if ( v2 )
    {
      if ( *(int *)(v3 + 464) >= 0 )
      {
        v8 = *(_QWORD **)(v3 + 400);
        v15 = 4LL;
        PsSetProcessFaultInformation(*v8, &v15);
        *(_DWORD *)(v3 + 464) |= 0x80000000;
      }
    }
    else
    {
      InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    }
  }
  return v2;
}
