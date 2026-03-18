/*
 * XREFs of xxxDestroyThreadDDEObject @ 0x1C0121820
 * Callers:
 *     NtUserDdeInitialize @ 0x1C01188B0 (NtUserDdeInitialize.c)
 *     _CsDdeUninitialize @ 0x1C01217E0 (_CsDdeUninitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDestroyThreadDDEObject(__int64 a1, int *a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  PKDEFERRED_ROUTINE DeferredRoutine; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 i; // rax
  __int64 j; // rax

  v4 = *a2;
  v5 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v4;
  v6 = gSharedInfo[1];
  if ( *(_BYTE *)(v5 + v6 + 24) != 9
    || (*(_BYTE *)(v5 + v6 + 25) & 1) != 0
    || *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v4 + 8) != a1 )
  {
    return 0LL;
  }
  DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
  if ( a2 == (int *)WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)*((_QWORD *)a2 + 3);
  }
  else
  {
    for ( i = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredRoutine + 3); (int *)i != a2; i = *(_QWORD *)(i + 24) )
      DeferredRoutine = (PKDEFERRED_ROUTINE)i;
    *((_QWORD *)DeferredRoutine + 3) = *((_QWORD *)a2 + 3);
  }
  v8 = *(_QWORD *)(a1 + 600);
  if ( a2 == (int *)v8 )
  {
    *(_QWORD *)(a1 + 600) = *((_QWORD *)a2 + 4);
  }
  else
  {
    for ( j = *(_QWORD *)(v8 + 32); (int *)j != a2; j = *(_QWORD *)(j + 32) )
      v8 = j;
    *(_QWORD *)(v8 + 32) = *((_QWORD *)a2 + 4);
  }
  if ( (unsigned int)HMMarkObjectDestroy(a2) )
  {
    v9 = (volatile signed __int32 *)*((_QWORD *)a2 + 6);
    if ( HMAssignmentUnlock(a2 + 12) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v9, v10, v11);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1LL;
}
