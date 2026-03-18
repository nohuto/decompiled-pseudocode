/*
 * XREFs of ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18018228C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z @ 0x180182340 (-SetDebugInfo@CBaseExpression@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetDebugInfo(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETDEBUGINFO *a3,
        size_t *a4)
{
  unsigned int v4; // ebx
  unsigned __int16 *v8; // rax
  const unsigned __int16 *v9; // rdi
  int v10; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( a4 )
  {
    v8 = (unsigned __int16 *)operator new(saturated_mul(*((unsigned int *)a3 + 2), 2uLL));
    v9 = v8;
    if ( v8 )
    {
      v10 = StringCchCopyW(v8, *((unsigned int *)a3 + 2), a4);
      if ( v10 < 0 )
        ModuleFailFastForHRESULT(v10, retaddr);
      CBaseExpression::SetDebugInfo(this, v9);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x16Du);
    }
  }
  return v4;
}
