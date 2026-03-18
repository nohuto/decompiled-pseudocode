/*
 * XREFs of ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00670AC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxImeWindowPosChanged(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *i; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  ULONG64 *v14; // rdx
  ULONG64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rsi
  struct tagSMWP *v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rax
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h]
  _QWORD v32[10]; // [rsp+58h] [rbp-50h] BYREF
  struct _KTHREAD *v34; // [rsp+B8h] [rbp+10h]

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 440);
    if ( v8 )
      v4 = *(_QWORD *)(v8 + 16);
  }
  if ( v4 )
  {
    v9 = BuildHwndList(*(_QWORD *)(v4 + 112), 2LL, gptiCurrent);
    v10 = v9;
    if ( v9 )
    {
      for ( i = (_QWORD *)(v9 + 32); *i != 1LL; ++i )
      {
        v12 = ValidateHwnd(*i);
        v13 = v12;
        if ( (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0 )
          break;
        if ( v12 && *(_QWORD *)(v12 + 16) == gptiCurrent )
        {
          if ( *(_WORD *)(*(_QWORD *)(v12 + 168) + 8LL) == *(_WORD *)(gpsi + 882LL) )
            v14 = *(_DWORD *)(v12 + 252) ? *(ULONG64 **)(v12 + 392) : *(ULONG64 **)(v12 + 384);
          else
            v14 = 0LL;
          if ( v14 )
          {
            v15 = *v14;
            if ( v15 >= MmUserProbeAddress )
              v15 = MmUserProbeAddress;
            v16 = *(_QWORD *)(v15 + 16);
            LOBYTE(v15) = 1;
            v18 = HMValidateHandleNoSecure(v16, v15);
            if ( v18 )
            {
              v32[0] = *(_QWORD *)(gptiCurrent + 392LL);
              v21 = v32[0];
              *(_QWORD *)(gptiCurrent + 392LL) = v32;
              v32[1] = v13;
              _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
              v34 = KeGetCurrentThread();
              v22 = 0LL;
              if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v17, v19, v20) )
              {
                v25 = (__int64 *)PsGetThreadWin32Thread(v34);
                if ( v25 )
                  v22 = *v25;
              }
              v30 = *(_QWORD *)(v22 + 392);
              *(_QWORD *)(v22 + 392) = &v30;
              v31 = v18;
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
              do
              {
                if ( v18 == v4 )
                  break;
                v24 = *(_QWORD *)v18;
                v23 = a1;
                v26 = *((_QWORD *)a1 + 5);
                v27 = *((_DWORD *)a1 + 7);
                while ( --v27 >= 0 )
                {
                  if ( v24 == *(_QWORD *)v26 )
                  {
                    if ( (~*(_BYTE *)(v26 + 32) & 3) != 0 )
                      xxxSendMessage(v13, 647LL, 6LL, 0LL);
                    break;
                  }
                  v26 += 168LL;
                }
                if ( v27 >= 0 )
                  break;
                v18 = *(_QWORD *)(v18 + 104);
                v24 = v31;
                v31 = v18;
                if ( v18 )
                  _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
                if ( v24 )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 8), 0xFFFFFFFF) == 1 )
                    HMUnlockObjectInternal(v24);
                }
              }
              while ( v18 );
              ThreadUnlock1(v24, v23);
              ThreadUnlock1(v29, v28);
            }
          }
        }
      }
      FreeHwndList(v10);
    }
  }
}
