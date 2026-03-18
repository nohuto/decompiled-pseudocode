/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C010D3F8
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C010F43C (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(struct _KTHREAD **this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  char *v4; // rax
  char *v5; // rdi
  _BYTE *v6; // rbx

  v2 = (unsigned int)a2;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(_DWORD)v2 )
    return 0LL;
  v3 = v2;
  if ( (unsigned __int64)(224 * v2) > 0xFFFFFFFF || !(224 * (_DWORD)v2) )
    return 0LL;
  v4 = (char *)Win32AllocPoolZInit((unsigned int)(224 * v2), 0x51707355u);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4 + 16;
    do
    {
      *((_DWORD *)v6 - 4) = -1;
      memset(v6, 0, 0xB0uLL);
      v6[176] = 0;
      v6 += 224;
      --v3;
    }
    while ( v3 );
  }
  return (struct CPointerQFrame *)v5;
}
