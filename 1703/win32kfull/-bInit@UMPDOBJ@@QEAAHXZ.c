/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0097D40
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C0038D90 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0097CFC (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C009800C (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C0098538 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rbp
  _QWORD *v6; // rsi
  _QWORD *ThreadWin32Thread; // rax
  int v8; // eax
  UMPDOBJ *v9; // rcx
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 *v11; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct _UMPDHEAP *v18; // rax
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  memset(this, 0, 0x1B8uLL);
  *((_DWORD *)this + 9) = 1886221639;
  v4 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
  v6 = 0LL;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = (_QWORD *)*ThreadWin32Thread;
  if ( !CurrentProcessWin32Process || !v6 )
    return 0LL;
  v8 = bSandboxedCurrentProcess();
  *((_DWORD *)this + 109) = v8;
  if ( v8 )
  {
    v16 = v6[8];
    if ( v16 )
    {
      *((_QWORD *)this + 49) = v16;
      *(_DWORD *)(v16 + 48) = 0;
    }
    else
    {
      PROXYPORT::PROXYPORT((PROXYPORT *)&v19);
      v17 = v19;
      if ( !v19 )
        return 0LL;
      *((_QWORD *)this + 49) = v19;
      v6[8] = v17;
    }
    *((_QWORD *)this + 3) = v6;
    goto LABEL_11;
  }
  if ( (_QWORD *)v6[5] != v6 + 5 )
  {
    UMPDHeap = UMPDOBJ::CreateUMPDHeap(v9);
    goto LABEL_9;
  }
  UMPDHeap = (struct _UMPDHEAP *)v6[7];
  if ( UMPDHeap )
  {
    *((_DWORD *)UMPDHeap + 6) = 0;
LABEL_9:
    *((_QWORD *)this + 7) = UMPDHeap;
    goto LABEL_10;
  }
  v18 = UMPDOBJ::CreateUMPDHeap(v9);
  *((_QWORD *)this + 7) = v18;
  v6[7] = v18;
LABEL_10:
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
LABEL_11:
  if ( HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 109) )
    {
      v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v11 )
        v4 = *v11;
      v12 = (__int64 *)(v4 + 40);
      v13 = (_QWORD *)((char *)this + 40);
      v14 = *v12;
      if ( *(__int64 **)(*v12 + 8) != v12 )
        __fastfail(3u);
      *v13 = v14;
      *((_QWORD *)this + 6) = v12;
      *(_QWORD *)(v14 + 8) = v13;
      *v12 = (__int64)v13;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 3);
    LODWORD(v4) = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  return (unsigned int)v4;
}
