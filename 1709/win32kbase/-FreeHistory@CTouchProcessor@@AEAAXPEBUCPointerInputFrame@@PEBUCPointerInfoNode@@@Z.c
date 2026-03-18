/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011D6C8
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C011D950 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011D9E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  unsigned int v3; // r15d
  char *v4; // rbp
  unsigned int v5; // r8d
  char *v7; // rdi
  volatile signed __int32 *v9; // rsi
  CTouchProcessor *v10; // rcx
  unsigned int v11; // ebx

  v3 = *((_DWORD *)a3 + 79);
  v4 = (char *)this + 280;
  v5 = *((_DWORD *)a3 + 100);
  v7 = (char *)*((_QWORD *)a2 + 1);
  while ( v7 != v4 && v3 > 1 )
  {
    v9 = (volatile signed __int32 *)(v7 - 8);
    v7 = *(char **)v7;
    if ( *((_QWORD *)v9 + 8) == *((_QWORD *)a2 + 8) )
    {
      v10 = (CTouchProcessor *)(608LL * v5);
      v11 = *(_DWORD *)((char *)v10 + *((_QWORD *)v9 + 12) + 400);
      _InterlockedIncrement(v9 + 11);
      CTouchProcessor::FreePointerInfoNodeInt(v10, (struct CPointerInputFrame *)v9, v5);
      CTouchProcessor::UnreferenceFrameInt(this, (struct CPointerInputFrame *)v9);
      v5 = v11;
      --v3;
    }
  }
}
