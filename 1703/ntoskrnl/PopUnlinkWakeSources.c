/*
 * XREFs of PopUnlinkWakeSources @ 0x1406C99C8
 * Callers:
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopFreeWakeInfo @ 0x1406C9760 (PopFreeWakeInfo.c)
 * Callees:
 *     PopFreeWakeSource @ 0x1406C9788 (PopFreeWakeSource.c)
 */

void __fastcall PopUnlinkWakeSources(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax

  v2 = (__int64 **)(a1 + 24);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    PopFreeWakeSource((__int64)v3);
    --*(_DWORD *)(a1 + 40);
  }
}
