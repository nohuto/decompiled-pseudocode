/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C0114E74
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0114FA0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C011817C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 PointerInfoSize; // r15
  unsigned int v14; // r13d
  unsigned __int64 v15; // rdi
  unsigned int v16; // ebp
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v22; // [rsp+78h] [rbp+10h]

  v9 = 1;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  if ( *(_QWORD *)(v11 + 104) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  v14 = *((_DWORD *)a3 + 2);
  v22 = *((_QWORD *)a3 + 32);
  if ( v14 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  v15 = *((_QWORD *)a2 + 12);
  v16 = 0;
  v17 = 0;
  do
  {
    v18 = *((unsigned int *)a2 + 12);
    if ( v17 >= (unsigned int)v18 )
      break;
    v19 = *((_QWORD *)a2 + 12) + 576 * v18;
    if ( v15 >= v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v11);
    if ( *(_QWORD *)(v15 + 256) == v22 && *(_DWORD *)(v15 + 8) == v14 )
    {
      ++v16;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v9 = CTouchProcessor::PointerInfoCopyOutHelper(
               this,
               (struct CPointerInfoNode *)v15,
               *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 14),
               a4,
               PointerInfoSize,
               a7);
        if ( v9 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    ++v17;
    v15 += 576LL;
  }
  while ( v9 );
  if ( v9 )
    *a6 = v16;
  return v9;
}
