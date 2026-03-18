/*
 * XREFs of FreeProcessMessageFilter @ 0x1C00FF370
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C00FF39C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeProcessMessageFilter(__int64 a1)
{
  MsgLookupTableCleanUp(*(void ***)(a1 + 800));
  *(_QWORD *)(a1 + 800) = 0LL;
}
