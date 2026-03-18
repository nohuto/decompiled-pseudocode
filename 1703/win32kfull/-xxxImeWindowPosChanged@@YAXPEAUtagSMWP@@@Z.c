/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0068444
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // r12
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  _QWORD *i; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+38h] [rbp-70h] BYREF
  __int64 v22; // [rsp+40h] [rbp-68h]
  _QWORD v23[11]; // [rsp+50h] [rbp-58h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 416);
    if ( v5 )
      v2 = *(_QWORD *)(v5 + 16);
  }
  if ( v2 )
  {
    v6 = BuildHwndList(*(_QWORD *)(v2 + 112), 2LL, gptiCurrent);
    v7 = v6;
    if ( v6 )
    {
      for ( i = (_QWORD *)(v6 + 32); *i != 1LL; ++i )
      {
        v9 = ValidateHwnd(*i);
        v10 = v9;
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
          break;
        if ( v9 && *(_QWORD *)(v9 + 16) == gptiCurrent )
        {
          if ( *(_WORD *)(*(_QWORD *)(v9 + 168) + 8LL) == *(_WORD *)(gpsi + 882LL) )
            v11 = *(_DWORD *)(v9 + 252) ? *(unsigned __int64 **)(v9 + 392) : *(unsigned __int64 **)(v9 + 384);
          else
            v11 = 0LL;
          if ( v11 )
          {
            v12 = *v11;
            if ( v12 >= W32UserProbeAddress )
              v12 = W32UserProbeAddress;
            v13 = HMValidateHandleNoSecure(*(_QWORD *)(v12 + 16), 1);
            if ( v13 )
            {
              v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v23;
              v23[1] = v10;
              ++*(_DWORD *)(v10 + 8);
              v14 = gptiCurrent;
              v15 = gptiCurrent;
              v21 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v21;
              v22 = v13;
              ++*(_DWORD *)(v13 + 8);
              while ( v13 && v13 != v2 )
              {
                v14 = *(_QWORD *)v13;
                v16 = *((_QWORD *)v1 + 5);
                v17 = *((_DWORD *)v1 + 7);
                while ( --v17 >= 0 )
                {
                  if ( v14 == *(_QWORD *)v16 )
                  {
                    if ( (~*(_BYTE *)(v16 + 32) & 3) != 0 )
                      xxxSendMessage(v10, 647, 6, 0);
                    break;
                  }
                  v16 += 168LL;
                }
                if ( v17 >= 0 )
                  break;
                v13 = *(_QWORD *)(v13 + 104);
                v14 = v22;
                v22 = v13;
                if ( v13 )
                  ++*(_DWORD *)(v13 + 8);
                v1 = a1;
                if ( v14 )
                {
                  if ( (*(_DWORD *)(v14 + 8))-- == 1 )
                  {
                    HMUnlockObjectInternal(v14);
                    v1 = a1;
                  }
                }
              }
              ThreadUnlock1(v14, v15);
              ThreadUnlock1(v20, v19);
            }
          }
        }
        v1 = a1;
      }
      FreeHwndList(v7);
    }
  }
}
