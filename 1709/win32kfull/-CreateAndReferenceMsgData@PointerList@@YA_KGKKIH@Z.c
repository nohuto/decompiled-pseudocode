/*
 * XREFs of ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01F58CC
 * Callers:
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01A5EFC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 * Callees:
 *     ?AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z @ 0x1C01F5790 (-AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

unsigned __int64 __fastcall PointerList::CreateAndReferenceMsgData(
        PointerList *this,
        int a2,
        int a3,
        unsigned int a4,
        char a5)
{
  __int16 v8; // bp
  int v9; // edi
  struct tagINPUTPOINTERNODE *NodeById; // rsi
  unsigned __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // rax
  __int64 v15; // rcx

  v8 = (__int16)this;
  v9 = 0;
  NodeById = FindNodeById((unsigned __int16)this, 0, 0);
  if ( !NodeById )
    return 0LL;
  v12 = Win32AllocPoolZInit(56LL, 1685091157LL);
  v13 = v12;
  if ( !v12 )
    return 0LL;
  *(_WORD *)(v12 + 16) = v8;
  *(_DWORD *)(v12 + 28) = a2;
  *(_DWORD *)(v12 + 32) = a3;
  LOBYTE(v9) = (a4 & 0x40004) == 0;
  *(_DWORD *)(v12 + 36) = *(_DWORD *)(v12 + 36) & 0xFFFFFFF0 | (4 * (a5 & 1)) | v9 & 0xFFFFFFF1 | ((a4 & 0x2000 | (a4 >> 5) & 0x800) >> 10);
  AssignPointerCaptureData(NodeById, (struct tagPOINTERMSGDATA *)v12);
  v14 = (unsigned __int64 *)((char *)NodeById + 112);
  v15 = *((_QWORD *)NodeById + 14);
  if ( *(struct tagINPUTPOINTERNODE **)(v15 + 8) != (struct tagINPUTPOINTERNODE *)((char *)NodeById + 112) )
    __fastfail(3u);
  *(_QWORD *)v13 = v15;
  *(_QWORD *)(v13 + 8) = v14;
  *(_QWORD *)(v15 + 8) = v13;
  *v14 = v13;
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 24));
  *(_DWORD *)(v13 + 36) |= 0x20u;
  result = v13;
  ++*(_BYTE *)(v13 + 49);
  return result;
}
