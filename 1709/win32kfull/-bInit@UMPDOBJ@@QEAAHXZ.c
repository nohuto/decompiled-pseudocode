/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00BA100
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C00BA0AC (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C00BA37C (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00BA618 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00BAB2C (--0PROXYPORT@@QEAA@_K@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // edi
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *ThreadWin32Thread; // rax
  int v13; // eax
  unsigned __int64 v14; // rdx
  UMPDOBJ *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct _UMPDHEAP *v18; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v27; // [rsp+40h] [rbp+8h] BYREF

  memset(this, 0, 0x1B8uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = CurrentProcessWin32Process;
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v6 || !v7 )
    return 0LL;
  v13 = bSandboxedCurrentProcess();
  *((_DWORD *)this + 109) = v13;
  if ( !v13 )
  {
    if ( (_QWORD *)v7[5] == v7 + 5 )
    {
      v18 = (struct _UMPDHEAP *)v7[7];
      if ( !v18 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v15);
        *((_QWORD *)this + 7) = UMPDHeap;
        v7[7] = UMPDHeap;
        goto LABEL_18;
      }
      *((_DWORD *)v18 + 6) = 0;
    }
    else
    {
      v18 = UMPDOBJ::CreateUMPDHeap(v15);
    }
    *((_QWORD *)this + 7) = v18;
LABEL_18:
    if ( *((_QWORD *)this + 7) )
      goto LABEL_19;
    return 0LL;
  }
  v16 = v7[8];
  if ( v16 )
  {
    *((_QWORD *)this + 49) = v16;
    *(_DWORD *)(v16 + 48) = 0;
    goto LABEL_11;
  }
  PROXYPORT::PROXYPORT((PROXYPORT *)&v27, v14);
  v17 = v27;
  if ( !v27 )
    return 0LL;
  *((_QWORD *)this + 49) = v27;
  v7[8] = v17;
LABEL_11:
  *((_QWORD *)this + 3) = v7;
LABEL_19:
  if ( HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 109) )
    {
      v23 = (_QWORD *)((char *)this + 40);
      v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 40;
      v25 = *(_QWORD *)v24;
      if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
        __fastfail(3u);
      *v23 = v25;
      *((_QWORD *)this + 6) = v24;
      *(_QWORD *)(v25 + 8) = v23;
      *(_QWORD *)v24 = v23;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 3);
    return 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  return v5;
}
