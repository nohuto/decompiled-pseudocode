/*
 * XREFs of PopUnlinkWakeSources @ 0x1406FAA04
 * Callers:
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopFreeWakeInfo @ 0x1406FA5C0 (PopFreeWakeInfo.c)
 * Callees:
 *     PopFreeWakeSource @ 0x1406FA5E8 (PopFreeWakeSource.c)
 */

void __fastcall PopUnlinkWakeSources(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rcx
  __int64 v4; // rax

  v2 = a1 + 24;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(_DWORD **)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(_DWORD **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    PopFreeWakeSource(v3);
    --*(_DWORD *)(a1 + 40);
  }
}
