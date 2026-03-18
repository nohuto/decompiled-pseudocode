/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C01F6A40
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01F6B30 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007774 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  if ( !*((_QWORD *)this + 5) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v8);
    }
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(*(DXGADAPTER ***)(v6 + 8), v7);
    v10 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v6 + 8), v10);
    v13 = *((_DWORD *)this + 6);
    if ( !*(_QWORD *)(v6 + 8) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v14);
    }
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v6 + 8), v13);
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 6) = 0;
  }
}
