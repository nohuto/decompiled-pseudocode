/*
 * XREFs of PopFxAcpiForwardRequestCommon @ 0x14024D150
 * Callers:
 *     PopFxRequestCommon @ 0x14023EFE0 (PopFxRequestCommon.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PopFxAcpiForwardRequestCommon(int a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 0x20uLL);
  LODWORD(v5[0]) = 1;
  LODWORD(v5[2]) = a1;
  if ( a1 != 1 )
    return 3221225659LL;
  v5[3] = a2;
  return ((__int64 (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v5);
}
