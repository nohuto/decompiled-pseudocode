/*
 * XREFs of ndisPreTaskOffloadQuery @ 0x1C0047CD8
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C00DEB40 (ndisOidPreTaskOffload.c)
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     ndisFillOffloadCapsInTasks @ 0x1C0044EB8 (ndisFillOffloadCapsInTasks.c)
 *     ndisGetTaskBytes @ 0x1C0045348 (ndisGetTaskBytes.c)
 */

char __fastcall ndisPreTaskOffloadQuery(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 *v6; // rdi
  _DWORD *v7; // r14
  __int64 v8; // rdi
  _DWORD *v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // r15
  unsigned int TaskBytes; // r12d
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = (__int64 *)(v2 + 32);
  if ( !v2 )
    v6 = (__int64 *)a2;
  v7 = (_DWORD *)(a2 + 40);
  v8 = *v6;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqDD(0xDFu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v8, a1, 1, *v7);
  if ( !*(_QWORD *)(v8 + 4120) )
  {
    *v7 = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v4 + 48) < 0x1Cu )
  {
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = ndisGetTaskBytes(v8);
    goto LABEL_17;
  }
  v9 = *(_DWORD **)(v4 + 40);
  if ( *v9 != 1 || v9[1] != 28 || v9[4] != 2 || (v9[5] & 1) == 0 || v9[6] != 14 )
    goto LABEL_16;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 96));
  *(_QWORD *)(v8 + 520) = KeGetCurrentThread();
  v11 = v10;
  *(_DWORD *)(v8 + 1856) = 2309951;
  TaskBytes = ndisGetTaskBytes(v8);
  if ( TaskBytes == 28 )
  {
    *(_QWORD *)(v8 + 520) = 0LL;
    *(_DWORD *)(v8 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), v11);
LABEL_16:
    *(_DWORD *)(a2 + 40) = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v4 + 48) >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks(v8, v4);
    *(_QWORD *)(v8 + 520) = 0LL;
    *(_DWORD *)(v8 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), v11);
    *(_DWORD *)(a2 + 40) = 0;
  }
  else
  {
    *(_QWORD *)(v8 + 520) = 0LL;
    *(_DWORD *)(v8 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 96), v11);
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = TaskBytes;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    LODWORD(v15) = *v7;
    LODWORD(v14) = 1;
    WPP_SF_qqDD(0xE0u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v8, a1, v14, v15);
  }
  return 1;
}
