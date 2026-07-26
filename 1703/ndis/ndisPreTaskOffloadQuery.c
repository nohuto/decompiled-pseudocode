/*
 * XREFs of ndisPreTaskOffloadQuery @ 0x1C004967C
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C00D2620 (ndisOidPreTaskOffload.c)
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     ndisFillOffloadCapsInTasks @ 0x1C0046BD8 (ndisFillOffloadCapsInTasks.c)
 *     ndisGetTaskBytes @ 0x1C0046F80 (ndisGetTaskBytes.c)
 */

char __fastcall ndisPreTaskOffloadQuery(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rdi
  _DWORD *v8; // rcx
  KIRQL v9; // al
  KIRQL v10; // r14
  unsigned int TaskBytes; // r15d
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = (__int64 *)(v2 + 32);
  if ( !v2 )
    v6 = (__int64 *)a2;
  v7 = *v6;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqDD(0xD0u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v7, a1, 1, *(_DWORD *)(a2 + 40));
  if ( !*(_QWORD *)(v7 + 4120) )
    goto LABEL_15;
  if ( *(_DWORD *)(v4 + 48) < 0x1Cu )
  {
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = ndisGetTaskBytes(v7);
    goto LABEL_16;
  }
  v8 = *(_DWORD **)(v4 + 40);
  if ( *v8 != 1 || v8[1] != 28 || v8[4] != 2 || (v8[5] & 1) == 0 || v8[6] != 14 )
    goto LABEL_15;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
  *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
  v10 = v9;
  *(_DWORD *)(v7 + 1856) = 2309537;
  TaskBytes = ndisGetTaskBytes(v7);
  if ( TaskBytes == 28 )
  {
    *(_QWORD *)(v7 + 520) = 0LL;
    *(_DWORD *)(v7 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v10);
LABEL_15:
    *(_DWORD *)(a2 + 40) = -1073741637;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v4 + 48) >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks(v7, v4);
    *(_QWORD *)(v7 + 520) = 0LL;
    *(_DWORD *)(v7 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v10);
    *(_DWORD *)(a2 + 40) = 0;
  }
  else
  {
    *(_QWORD *)(v7 + 520) = 0LL;
    *(_DWORD *)(v7 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v10);
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = TaskBytes;
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    LODWORD(v14) = *(_DWORD *)(a2 + 40);
    LODWORD(v13) = 1;
    WPP_SF_qqDD(0xD1u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v7, a1, v13, v14);
  }
  return 1;
}
