/*
 * XREFs of ?ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCESTRINGS@@PEBXI@Z @ 0x1801626C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180076E2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?SetReferenceStrings@CExpression@@QEAAXPEAG@Z @ 0x180162A54 (-SetReferenceStrings@CExpression@@QEAAXPEAG@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceStrings(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETREFERENCESTRINGS *a3,
        size_t *a4)
{
  unsigned __int16 *v7; // rsi
  int v8; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v7 = (unsigned __int16 *)operator new(saturated_mul(*((unsigned int *)a3 + 2), 2uLL));
  v8 = StringCchCopyW(v7, *((unsigned int *)a3 + 2), a4);
  if ( v8 < 0 )
    ModuleFailFastForHRESULT(v8, retaddr);
  CExpression::SetReferenceStrings(this, v7);
  return 0LL;
}
