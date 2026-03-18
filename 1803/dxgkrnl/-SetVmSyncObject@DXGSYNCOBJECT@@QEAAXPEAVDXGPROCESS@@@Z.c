/*
 * XREFs of ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C01473BC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  char v4; // si
  bool v5; // al
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  v4 = 1;
  v5 = a2 && (*(_BYTE *)(a2 + 323) & 0xC) != 0;
  *((_BYTE *)this + 250) = v5;
  if ( v5 )
  {
    v6 = *(_BYTE *)(a2 + 323);
    if ( (v6 & 8) != 0 )
      v7 = *(_QWORD *)(a2 + 456);
    else
      v7 = a2 & -(__int64)((v6 & 4) != 0);
    *((_QWORD *)this + 32) = v7;
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v8 + 24) = 5299LL;
      WdLogEvent5_WdAssertion(v8);
    }
  }
  else
  {
    *((_QWORD *)this + 32) = 0LL;
  }
  if ( !a2
    || (*(_BYTE *)(a2 + 323) & 8) == 0
    || !*(_BYTE *)(a2 + 322) && (!g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled) )
  {
    v4 = 0;
  }
  *((_BYTE *)this + 251) = v4;
}
