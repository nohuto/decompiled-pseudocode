/*
 * XREFs of NtUserKillTimer @ 0x1C0068FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00B2C1C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  int v13; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  char v20; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+44h] [rbp+Ch]

  EnterCrit(0LL, 1LL);
  v20 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v20);
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
    {
LABEL_28:
      v9 = 0LL;
      goto LABEL_20;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 0LL;
  v10 = (_QWORD *)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v8)) & 0x3F));
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 != v10 )
  {
    while ( 1 )
    {
      v12 = v11 - 14;
      if ( *(v11 - 3) == v8 && v12[12] == a2 )
      {
        v13 = *((_DWORD *)v12 + 12);
        if ( (v13 & 6) == 0 )
        {
          if ( (v13 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
          v5 = v12[3];
          if ( CurrentProcessWin32Process == *(_QWORD *)(v5 + 376) || !v8 && (v12[6] & 4) == 0 )
            break;
        }
      }
      v11 = (_QWORD *)*v11;
      if ( v11 == v10 )
        goto LABEL_28;
    }
    if ( (unsigned int)HMMarkObjectDestroy(v11 - 14) )
    {
      if ( (v12[6] & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(v11 - 14));
      v15 = v12[9];
      v16 = (_QWORD *)v12[10];
      if ( *(_QWORD **)(v15 + 8) != v12 + 9 || (_QWORD *)*v16 != v12 + 9 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v17 = (_QWORD *)*v11;
      v18 = (_QWORD *)v12[15];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v18 != v11 )
        __fastfail(3u);
      *v18 = v17;
      v17[1] = v18;
      if ( !v12[11] )
        _bittestandreset(gTimerId, *((_DWORD *)v12 + 24) - 256);
      EtwTraceKillTimer(v11 - 14);
      HMAssignmentUnlock(v12 + 11);
      HMFreeObject(v11 - 14);
    }
    v9 = 1LL;
  }
LABEL_20:
  if ( !v20 )
  {
    --gdwInAtomicOperation;
    v4 = gpAtomickCheckStacks;
    if ( gpAtomickCheckStacks )
    {
      v5 = 0LL;
      v6 = gdwAtomicCheckLogSize;
      if ( gdwAtomicCheckLogSize )
      {
        v7 = v21;
        while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v5 << 6) + gpAtomickCheckStacks) != v21 )
        {
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= gdwAtomicCheckLogSize )
            goto LABEL_26;
        }
        v5 <<= 6;
        *(_DWORD *)(v5 + gpAtomickCheckStacks) = 0;
      }
    }
  }
LABEL_26:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v9;
}
