/*
 * XREFs of IoGetGenericIrpExtension @ 0x140134080
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14026997C (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14012C50C (IopIrpHasExtensionType.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall IoGetGenericIrpExtension(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // r9d
  unsigned __int16 v5; // r10
  void *v6; // r11
  __int64 v8; // rdx

  if ( a3 > 4u )
    return 3221225485LL;
  if ( IopIrpHasExtensionType(a1, 2u) )
  {
    v8 = v3 + 196;
    if ( *(char *)(v3 + 71) >= 0 )
      v8 = *(_QWORD *)(v3 + 200);
    memmove(v6, (const void *)(v8 + 4), v5);
    return 0;
  }
  return v4;
}
