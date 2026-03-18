/*
 * XREFs of ProcessEvalObj @ 0x1C0002A90
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     DumpObject @ 0x1C004C888 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 ObjectPath; // rax
  void *v9; // rdx
  void *v10; // rsi
  __int64 v11; // rdx

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v9 = &unk_1C005B1F0;
    v10 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v9) = ObjectPath;
    PrintDebugMessage(45, (_DWORD)v9, 0, 0, 0LL);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v11, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v6 + 8);
  HeapFree(v6);
  return a3;
}
