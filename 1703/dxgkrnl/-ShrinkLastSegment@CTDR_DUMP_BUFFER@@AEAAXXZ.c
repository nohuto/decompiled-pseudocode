/*
 * XREFs of ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0191628
 * Callers:
 *     ??_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z @ 0x1C01912EC (--_GCTDR_DUMP_BUFFER@@QEAAPEAXI@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C01913C0 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01918D0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0192440 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTDR_DUMP_BUFFER::ShrinkLastSegment(CTDR_DUMP_BUFFER *this)
{
  __int16 v1; // ax
  __int64 v3; // rdx
  int v4; // r9d
  unsigned int v5; // r10d
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // edx

  v1 = *((_WORD *)this + 10);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 1);
    v4 = 1;
    v5 = *(_DWORD *)(v3 + 8LL * (unsigned __int16)(v1 - 1) + 8);
    v6 = *((_DWORD *)this + 6) - v5;
    v7 = v3 + v5;
    if ( v7 && v6 )
    {
      v8 = v6 - 1;
      if ( v6 != 1 )
      {
        do
        {
          if ( *(_BYTE *)(v8 + v7) )
            break;
          v9 = (_DWORD)v8 == 1;
          v8 = (unsigned int)(v8 - 1);
        }
        while ( !v9 );
      }
      v10 = *(_BYTE *)(v8 + v7) != 0 ? v8 + 1 : 0;
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
