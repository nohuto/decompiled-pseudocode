/*
 * XREFs of ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C010E714
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     EtwTracePointerCoalesce @ 0x1C00AC260 (EtwTracePointerCoalesce.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x1C011EEEC (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::CoalesceNodeWithPrevious(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        unsigned int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  unsigned int v31; // [rsp+40h] [rbp+8h] BYREF

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( (*(_DWORD *)a4 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v13, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  v16 = *(unsigned int *)a4;
  if ( (v16 & 0x800000) != 0 || (v16 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
    v16 = *(unsigned int *)a4;
  }
  if ( (int)v16 < 0 || (*((_DWORD *)a4 + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
    v16 = *(unsigned int *)a4;
  }
  if ( (v16 & 0x100000) != 0 && (v16 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
  if ( *((_DWORD *)a4 + 75) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
  v17 = *((_QWORD *)a4 + 2);
  if ( a6 )
  {
    if ( v17 )
      goto LABEL_27;
  }
  else if ( !v17 )
  {
    goto LABEL_27;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14);
LABEL_27:
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, a3, *((_WORD *)a4 + 118), &v31);
  if ( !ValidNodeInFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
  if ( !(unsigned int)CPointerInfoNode::IsValid(ValidNodeInFrame) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
  v23 = *(unsigned int *)ValidNodeInFrame;
  if ( (v23 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21);
    v23 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v23 & 0x800000) != 0 || (v23 & 0x8000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21);
    v23 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (int)v23 < 0 || (*((_DWORD *)ValidNodeInFrame + 1) & 8) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21);
    v23 = *(unsigned int *)ValidNodeInFrame;
  }
  if ( (v23 & 0x100000) != 0 && (v23 & 0x400000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21);
  if ( !*((_QWORD *)ValidNodeInFrame + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21);
  if ( *((_DWORD *)ValidNodeInFrame + 75) > 0x64u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21);
  CTouchProcessor::UpdateMsgData(
    (CTouchProcessor *)this,
    *((_QWORD *)ValidNodeInFrame + 2),
    *((_DWORD *)a2 + 10),
    a5,
    *((_QWORD *)a4 + 2));
  *((_QWORD *)a4 + 2) = *((_QWORD *)ValidNodeInFrame + 2);
  v26 = a6 == 0;
  *((_DWORD *)a4 + 75) = *((_DWORD *)ValidNodeInFrame + 75) + 1;
  *((_DWORD *)a4 + 96) = v31;
  if ( v26 )
  {
    v27 = *(_DWORD *)ValidNodeInFrame;
    if ( (*(_DWORD *)ValidNodeInFrame & 0x80000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
      v27 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v27 & 0x800000) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
      v27 = *(_DWORD *)ValidNodeInFrame;
    }
    if ( (v27 & 0x8000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
    if ( *(int *)a4 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
    if ( (*((_DWORD *)a4 + 1) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24);
    *(_DWORD *)a4 |= 0x80000u;
    v28 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *(_DWORD *)ValidNodeInFrame) & 0x100000;
    *(_DWORD *)a4 = v28;
    v29 = v28 ^ (v28 ^ *(_DWORD *)ValidNodeInFrame) & 0x200000;
    *(_DWORD *)a4 = v29;
    *(_DWORD *)a4 = v29 ^ (v29 ^ *(_DWORD *)ValidNodeInFrame) & 0x400000;
  }
  *(_DWORD *)ValidNodeInFrame |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a4 + 112), *((_WORD *)a4 + 118), a6);
  return *((_QWORD *)a4 + 2);
}
