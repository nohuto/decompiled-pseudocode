/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C011B10C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011C7A4 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(CTouchProcessor *this, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  _BYTE *v7; // rbx

  if ( !a2 )
    return 0LL;
  v3 = 240 * a2;
  v4 = a2;
  if ( 240 * (unsigned __int64)a2 > 0xFFFFFFFF || !v3 )
    return 0LL;
  v5 = (char *)Win32AllocPoolZInit(v3, 1366324053LL);
  v6 = v5;
  if ( v5 && a2 )
  {
    v7 = v5 + 16;
    do
    {
      *((_DWORD *)v7 - 4) = -1;
      memset(v7, 0, 0xC0uLL);
      v7[192] = 0;
      v7 += 240;
      --v4;
    }
    while ( v4 );
  }
  return (struct CPointerQFrame *)v6;
}
