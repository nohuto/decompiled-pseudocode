/*
 * XREFs of ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C0111D24
 * Callers:
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C01121B4 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 * Callees:
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C0113DCC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeHistory(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int HistoryCount; // esi
  unsigned int v11; // r12d
  CTouchProcessor *v12; // rdi
  bool v13; // zf
  char *v14; // rbp
  __int64 v15; // rbx
  unsigned int v16; // ebx

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  v11 = *((_DWORD *)a3 + 96);
  v12 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  while ( v12 != (CTouchProcessor *)(this + 15) )
  {
    v13 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_24;
    v14 = (char *)v12 - 8;
    v12 = *(CTouchProcessor **)v12;
    if ( *((_QWORD *)v14 + 8) == *((_QWORD *)a2 + 8) )
    {
      if ( v11 >= *((_DWORD *)v14 + 12) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      v15 = *((_QWORD *)v14 + 12) + 576LL * v11;
      if ( (*(_DWORD *)v15 & 0x2000) != 0 || !*(_DWORD *)(v15 + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      if ( *(_WORD *)(v15 + 236) != *((_WORD *)a3 + 118) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      if ( *(_QWORD *)(v15 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      if ( (*(_DWORD *)v15 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      v16 = *(_DWORD *)(v15 + 384);
      _InterlockedIncrement((volatile signed __int32 *)v14 + 11);
      CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v14, v11);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (struct CPointerInputFrame *)v14);
      --HistoryCount;
      v11 = v16;
    }
  }
  v13 = HistoryCount == 1;
LABEL_24:
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
}
