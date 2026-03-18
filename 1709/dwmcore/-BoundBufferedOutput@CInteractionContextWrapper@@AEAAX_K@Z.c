/*
 * XREFs of ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x18019DDA4
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18019DC50 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x18019EB20 (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 */

void __fastcall CInteractionContextWrapper::BoundBufferedOutput(CInteractionContextWrapper *this, __int64 a2)
{
  char *v4; // rbx
  void *v5; // rsi
  char *v6; // rcx
  __int64 v7; // rax
  char *v8; // rbx
  void *v9; // rdi
  char *v10; // rcx
  __int64 v11; // rax
  void *lpMem; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 138) >= 0x7D0u )
  {
    v4 = (char *)this + 536;
    do
    {
      v5 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      v6 = *(char **)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v4 = v7;
      *(_QWORD *)(v7 + 8) = v4;
      if ( v6 != v4 )
      {
        v5 = (void *)*((_QWORD *)v6 + 2);
        WPF::ProcessHeapImpl::Free(v6);
        --*((_DWORD *)v4 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      lpMem = v5;
      WPF::ProcessHeapImpl::Free(v5);
    }
    while ( *((_DWORD *)this + 138) >= 0x7D0u );
  }
  v8 = (char *)this + 536;
  while ( CQueue<CBufferedInteractionOutput *>::PeekFirst(v8, a2, &lpMem) )
  {
    v9 = lpMem;
    if ( (unsigned __int64)(a2 - *(_QWORD *)lpMem) <= 0x1E8480 )
      break;
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
    v10 = *(char **)v8;
    if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v11 = *(_QWORD *)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *(_QWORD *)v8 = v11;
    *(_QWORD *)(v11 + 8) = v8;
    if ( v10 != v8 )
    {
      WPF::ProcessHeapImpl::Free(v10);
      --*((_DWORD *)v8 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 24));
    WPF::ProcessHeapImpl::Free(v9);
  }
}
