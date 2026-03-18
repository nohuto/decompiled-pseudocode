/*
 * XREFs of AllocateMonitor @ 0x1C01A6A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateMonitor(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = Win32AllocPool(544LL, 2020635477LL);
  *(_QWORD *)(a1 + 288) = v2;
  if ( !v2 )
    return *(_QWORD *)(a1 + 288);
  *(_QWORD *)(*(_QWORD *)(a1 + 288) + 40LL) = Win32AllocPool(136LL, 2020635477LL);
  v3 = *(_QWORD *)(a1 + 288);
  if ( *(_QWORD *)(v3 + 40) )
    return *(_QWORD *)(a1 + 288);
  Win32FreePool(v3);
  return 0LL;
}
