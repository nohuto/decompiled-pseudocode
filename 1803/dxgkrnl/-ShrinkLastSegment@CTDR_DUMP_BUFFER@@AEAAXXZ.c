/*
 * XREFs of ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0198884
 * Callers:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C0198538 (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0198610 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0198B30 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01996A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTDR_DUMP_BUFFER::ShrinkLastSegment(CTDR_DUMP_BUFFER *this)
{
  __int16 v1; // ax
  __int64 v3; // r8
  int v4; // r10d
  unsigned int v5; // r11d
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // edx

  v1 = *((_WORD *)this + 10);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 1);
    v4 = 1;
    v5 = *(_DWORD *)(v3 + 4LL * (2 * (unsigned int)(unsigned __int16)(v1 - 1) + 2));
    v6 = v3 + v5;
    if ( v6 && (v7 = *((_DWORD *)this + 6) - v5) != 0 )
    {
      v8 = v7 - 1;
      if ( (_DWORD)v8 )
      {
        do
        {
          if ( *(_BYTE *)(v8 + v6) )
            break;
          v9 = (_DWORD)v8 == 1;
          v8 = (unsigned int)(v8 - 1);
        }
        while ( !v9 );
      }
      v10 = *(_BYTE *)(v8 + v6) != 0 ? v8 + 1 : 0;
    }
    else
    {
      v10 = 0;
    }
    if ( v10 )
      v4 = v10;
    *((_DWORD *)this + 6) = v4 + v5;
  }
}
