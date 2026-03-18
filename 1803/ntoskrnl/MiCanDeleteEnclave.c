/*
 * XREFs of MiCanDeleteEnclave @ 0x140263990
 * Callers:
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 * Callees:
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiFreeEnclaveModules @ 0x140752314 (MiFreeEnclaveModules.c)
 *     PsDereferenceVsmEnclave @ 0x14077F9C8 (PsDereferenceVsmEnclave.c)
 *     PsIsVsmEnclaveTerminated @ 0x14077FB70 (PsIsVsmEnclaveTerminated.c)
 *     PsReferenceVsmEnclave @ 0x14077FC08 (PsReferenceVsmEnclave.c)
 *     PsRundownVsmEnclave @ 0x14077FC2C (PsRundownVsmEnclave.c)
 */

__int64 __fastcall MiCanDeleteEnclave(ULONG_PTR BugCheckParameter3)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned int v11; // edi
  int v12; // eax

  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(void **)(BugCheckParameter3 + 72);
  PsReferenceVsmEnclave(v4);
  v8 = BugCheckParameter3 + 80;
  if ( v5 )
  {
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
      __fastfail(3u);
    *v5 = v9;
    v5[1] = v8;
    *(_QWORD *)(v9 + 8) = v5;
    *(_QWORD *)v8 = v5;
    if ( v5[1] != v8 || (v10 = *(_QWORD **)(BugCheckParameter3 + 88), *v10 != v8) )
      __fastfail(3u);
    *v10 = v5;
    v5[1] = v10;
    *(_QWORD *)(BugCheckParameter3 + 88) = BugCheckParameter3 + 80;
    *(_QWORD *)v8 = v8;
  }
  else
  {
    MiFreeEnclaveModules(v8);
  }
  MiUnlockVad((__int64)CurrentThread, BugCheckParameter3, v6, v7);
  if ( (unsigned __int8)PsIsVsmEnclaveTerminated(v4) )
  {
    v12 = PsRundownVsmEnclave(v4);
    v11 = v12;
    if ( v12 < 0 )
      KeBugCheckEx(0x1Au, 0x44417uLL, v12, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 72));
  }
  else
  {
    v11 = -1073740527;
  }
  PsDereferenceVsmEnclave(v4);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0x20000000) != 0 )
    return (unsigned int)-1073741800;
  return v11;
}
