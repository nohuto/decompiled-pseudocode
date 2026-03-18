/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C01DE020
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01DE110 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B5B4 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000B644 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // edi
  __int64 v22; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( v8 )
  {
    v9 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(*(DXGADAPTER ***)(v8 + 8), v9);
    v15 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      WdLogEvent5_WdAssertion(v16);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v8 + 8), v15, v13, v14);
    v21 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v8 + 8) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v22);
    }
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v8 + 8), v21, v19, v20);
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 6) = 0;
  }
}
