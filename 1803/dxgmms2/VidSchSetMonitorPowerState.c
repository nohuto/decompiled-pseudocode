/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C007AE10
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0056C4C (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  struct _ERESOURCE *v9; // r15
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v17; // rax
  int v18; // eax

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
LABEL_13:
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 40) )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = v5;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    goto LABEL_13;
  }
  v9 = (struct _ERESOURCE *)(a1 + 1264);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1264), 1u);
  v11 = 1 << v5;
  v12 = *(_DWORD *)(a1 + 2008);
  if ( !a3 )
  {
    v18 = v12 & ~v11;
    *(_DWORD *)(a1 + 2008) = v18;
    if ( v18 )
      goto LABEL_7;
    v10 = 0LL;
    v13 = 2;
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 2008) = v11 | v12;
  if ( *(_DWORD *)(a1 + 1988) )
  {
    v13 = 65538;
    LOBYTE(v10) = 1;
LABEL_6:
    VidSchiControlVSync(a1, v10, v13);
  }
LABEL_7:
  v14 = *(_DWORD *)(a4 + 20);
  if ( v14 )
  {
    v15 = *(_DWORD *)(a4 + 16) / v14;
    if ( v15 )
      v4 = 0x3E8 / v15;
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v5 + 3032) + 65428LL), v4);
  ExReleaseResourceLite(v9);
  return 0LL;
}
