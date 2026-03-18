/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C0074A30
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0071FE0 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rbp
  struct _ERESOURCE *v8; // r14
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v14; // edi
  bool v15; // zf
  __int64 v16; // rax

  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdAssertion(v16);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = v4;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    goto LABEL_16;
  }
  v8 = (struct _ERESOURCE *)(a1 + 1248);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1248), 1u);
  if ( a3 )
  {
    *(_DWORD *)(a1 + 1992) |= 1 << v4;
    if ( !*(_DWORD *)(a1 + 1972) )
      goto LABEL_7;
    v10 = 65538;
    LOBYTE(v9) = 1;
    goto LABEL_6;
  }
  v14 = ~(1 << v4);
  v15 = (v14 & *(_DWORD *)(a1 + 1992)) == 0;
  *(_DWORD *)(a1 + 1992) &= v14;
  if ( v15 )
  {
    v9 = 0LL;
    v10 = 2;
LABEL_6:
    VidSchiControlVSync(a1, v9, v10);
  }
LABEL_7:
  v11 = *(_DWORD *)(a4 + 20);
  if ( v11 && (v12 = *(_DWORD *)(a4 + 16) / v11) != 0 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v4 + 3008) + 60948LL), 0x3E8 / v12);
  else
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v4 + 3008) + 60948LL), 0);
  ExReleaseResourceLite(v8);
  return 0LL;
}
