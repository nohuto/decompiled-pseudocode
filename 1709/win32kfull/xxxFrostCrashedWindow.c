/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C01D760C
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C01E48C0 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D7300 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01D7528 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 */

unsigned __int64 __fastcall xxxFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _KTHREAD **v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  unsigned int ThreadProcessId; // eax
  PETHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  unsigned __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r9
  int v26; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+24h] [rbp-34h]
  unsigned int v28; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v29; // [rsp+30h] [rbp-28h]
  __int64 v30; // [rsp+34h] [rbp-24h]
  unsigned __int64 v31; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v31 = 0LL;
    v26 = 2;
    v7 = *v5;
    v27 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v28 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v29 = ThreadId;
    v30 = a2;
    v12 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v26);
    LOBYTE(v13) = 1;
    v14 = v12;
    v17 = HMValidateHandleNoSecure(v11, v13, v15, v16);
    if ( v14 )
    {
      if ( v17 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v17) )
        {
          if ( GetProp(v18, *(_WORD *)(gpsi + 1362LL), 1) )
          {
            v22 = v31;
            if ( v31 )
            {
              LOBYTE(v19) = v20;
              v23 = HMValidateHandleNoSecure(v31, v19, v20, v21);
              if ( v23 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v23) && GetProp(v24, *(_WORD *)(gpsi + 1362LL), 1) )
                  return v22;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
