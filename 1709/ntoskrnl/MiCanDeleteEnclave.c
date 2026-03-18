/*
 * XREFs of MiCanDeleteEnclave @ 0x140229428
 * Callers:
 *     MiFreeVadRange @ 0x140032AC0 (MiFreeVadRange.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiFreeEnclaveModules @ 0x1406E8898 (MiFreeEnclaveModules.c)
 *     PsDereferenceVsmEnclave @ 0x14071BE9C (PsDereferenceVsmEnclave.c)
 *     PsIsVsmEnclaveTerminated @ 0x14071C044 (PsIsVsmEnclaveTerminated.c)
 *     PsReferenceVsmEnclave @ 0x14071C0D8 (PsReferenceVsmEnclave.c)
 *     PsRundownVsmEnclave @ 0x14071C0FC (PsRundownVsmEnclave.c)
 */

__int64 __fastcall MiCanDeleteEnclave(ULONG_PTR BugCheckParameter3)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  unsigned int v9; // edi
  int v10; // eax

  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(void **)(BugCheckParameter3 + 72);
  PsReferenceVsmEnclave(v4);
  if ( v5 )
  {
    v6 = (_QWORD *)(BugCheckParameter3 + 80);
    v7 = *(_QWORD *)(BugCheckParameter3 + 80);
    if ( *(_QWORD *)(v7 + 8) != BugCheckParameter3 + 80 )
      __fastfail(3u);
    *v5 = v7;
    v5[1] = v6;
    *(_QWORD *)(v7 + 8) = v5;
    *v6 = v5;
    if ( (_QWORD *)v5[1] != v6 || (v8 = *(_QWORD **)(BugCheckParameter3 + 88), (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v5;
    v5[1] = v8;
    *(_QWORD *)(BugCheckParameter3 + 88) = BugCheckParameter3 + 80;
    *v6 = v6;
  }
  else
  {
    MiFreeEnclaveModules(BugCheckParameter3 + 80, 0LL);
  }
  MiUnlockVad((__int64)CurrentThread, BugCheckParameter3);
  if ( (unsigned __int8)PsIsVsmEnclaveTerminated(v4) )
  {
    v10 = PsRundownVsmEnclave(v4);
    v9 = v10;
    if ( v10 < 0 )
      KeBugCheckEx(0x1Au, 0x44417uLL, v10, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 72));
  }
  else
  {
    v9 = -1073740527;
  }
  PsDereferenceVsmEnclave(v4);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0x80000) != 0 )
    return (unsigned int)-1073741800;
  return v9;
}
