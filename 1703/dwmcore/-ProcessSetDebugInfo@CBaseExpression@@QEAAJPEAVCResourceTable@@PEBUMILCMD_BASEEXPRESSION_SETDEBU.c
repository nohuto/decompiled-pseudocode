/*
 * XREFs of ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18012C164
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetDebugInfo(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETDEBUGINFO *a3,
        size_t *a4)
{
  int v4; // ebx
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rdi
  struct CResourceTable *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v4 = 0;
  if ( a4 )
  {
    v8 = (unsigned __int16 *)operator new(saturated_mul(*((unsigned int *)a3 + 2), 2uLL));
    v9 = v8;
    if ( v8 )
    {
      v4 = StringCchCopyW(v8, *((unsigned int *)a3 + 2), a4);
      if ( v4 < 0 )
      {
        WPF::ProcessHeapImpl::Free(v9);
        return 0;
      }
      else
      {
        v11 = (struct CResourceTable *)v9;
        if ( v9 == (unsigned __int16 *)`CBaseExpression::SetDebugInfo'::`2'::sc_defaultValue )
          *(_DWORD *)(*((_QWORD *)this + 25) + 4LL) &= ~0x80000000;
        else
          CSparseStorage::SetData((char **)this + 25, 1, 8u, &v11);
      }
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x154u);
    }
  }
  return (unsigned int)v4;
}
