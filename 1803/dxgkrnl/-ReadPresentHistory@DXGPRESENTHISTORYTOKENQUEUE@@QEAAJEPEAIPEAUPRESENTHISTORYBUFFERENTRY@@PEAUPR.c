/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C0011A08
 * Callers:
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  unsigned int v5; // r13d
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  if ( a3 && a4 )
  {
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      v17 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v17 + 24) = 237LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      v18 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v18 + 24) = 238LL;
      WdLogEvent5_WdAssertion(v18);
    }
    v10 = *((_DWORD *)this + 4);
    if ( v10 >= 0x800 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v19 + 24) = 239LL;
      WdLogEvent5_WdAssertion(v19);
      v10 = *((_DWORD *)this + 4);
    }
    v11 = *((_DWORD *)this + 2);
    v12 = *a3;
    if ( v11 < v10 )
    {
      v14 = 2048 - v10;
      if ( 2048 - v10 >= v12 )
        v14 = *a3;
      v16 = v12 - v14;
      if ( v11 >= v16 )
        v11 = v16;
      v5 = v11;
    }
    else
    {
      v13 = v11 - v10;
      if ( v13 >= v12 )
        v13 = *a3;
      v14 = v13;
    }
    memmove(a4, &this[v10 + 10], 8LL * v14);
    memmove(a5, (char *)this + v10 + 16464, v14);
    memmove((char *)a4 + 8 * v14, this + 10, 8LL * v5);
    memmove((char *)a5 + v14, this + 2058, v5);
    *((_DWORD *)this + 4) = ((_WORD)v14 + (_WORD)v5 + (_WORD)v10) & 0x7FF;
    *a3 = v14 + v5;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
}
