/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0119EE8
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011B604 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(CTouchProcessor *this, unsigned int a2)
{
  __int64 v3; // rsi
  size_t v4; // rcx
  char *v5; // rax
  char *v6; // rdi
  _BYTE *v7; // rbx

  if ( !a2 )
    return 0LL;
  v3 = a2;
  if ( 240 * (unsigned __int64)a2 > 0xFFFFFFFF )
    return 0LL;
  v4 = 240 * a2;
  if ( !(_DWORD)v4 )
    return 0LL;
  v5 = (char *)Win32AllocPoolZInit(v4, 1366324053LL);
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
      --v3;
    }
    while ( v3 );
  }
  return (struct CPointerQFrame *)v6;
}
