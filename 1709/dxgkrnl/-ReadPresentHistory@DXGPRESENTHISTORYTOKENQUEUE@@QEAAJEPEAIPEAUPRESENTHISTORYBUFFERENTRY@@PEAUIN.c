/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C000DC20
 * Callers:
 *     DxgkGetPresentHistory @ 0x1C00EB0A0 (DxgkGetPresentHistory.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct INDEPENDENTFLIPBITS *a5)
{
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r12
  __int64 v15; // r15
  size_t v16; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+10h]

  if ( a3 && a4 )
  {
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v18 + 24) = 237LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      v19 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v19 + 24) = 238LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( *((_DWORD *)this + 4) >= 0x800u )
    {
      v20 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v20 + 24) = 239LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v9 = *((unsigned int *)this + 4);
    v10 = *((_DWORD *)this + 2);
    v11 = *a3;
    if ( v10 < (unsigned int)v9 )
    {
      v13 = *a3;
      if ( 2048 - (int)v9 < v11 )
        v13 = 2048 - v9;
      v14 = v11 - v13;
      if ( v10 < (unsigned int)v14 )
        v14 = v10;
    }
    else
    {
      v12 = v10 - v9;
      if ( v12 < v11 )
        v11 = v12;
      v13 = v11;
      v14 = 0LL;
    }
    v15 = v13;
    v23 = v13;
    v16 = 8LL * v13;
    memmove(a4, &this[v9 + 10], v16);
    memmove(a5, (char *)this + v9 + 16464, (unsigned int)v15);
    memmove((char *)a4 + v16, this + 10, 8 * v14);
    memmove((char *)a5 + v15, this + 2058, (unsigned int)v14);
    *((_DWORD *)this + 4) = ((_WORD)v14 + (_WORD)v23 + (_WORD)v9) & 0x7FF;
    *a3 = v14 + v23;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
}
