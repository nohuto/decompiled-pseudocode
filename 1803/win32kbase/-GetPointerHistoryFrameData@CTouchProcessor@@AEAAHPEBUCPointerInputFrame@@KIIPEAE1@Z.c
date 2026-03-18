/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01153BC
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0114FA0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C0111948 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C011817C (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        struct tagPOINTER_INFO *a7)
{
  unsigned int v7; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 PointerInfoSize; // r15
  unsigned int v13; // r12d
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int i; // r13d
  unsigned __int8 *v18; // rdx
  int v19; // esi
  unsigned __int16 *v20; // rdx
  int v21; // r8d
  CTouchProcessor *v22; // rsi

  v7 = a4;
  if ( *((_QWORD *)this + 13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v13 = a5;
  v14 = 1;
  if ( v7 > *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v15 = v7 * (unsigned int)PointerInfoSize;
  if ( (_DWORD)v15 != v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10);
  v16 = 0;
  for ( i = 0; v14 && i < v7; ++i )
  {
    a5 = v16 < *((_DWORD *)a2 + 12) ? v16 : 0;
    v18 = a6 + 4;
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v18 = (unsigned __int8 *)MmUserProbeAddress;
    v19 = *(_DWORD *)v18;
    if ( !*(_DWORD *)v18 || HIWORD(v19) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v18);
    v16 = a5;
    v20 = (unsigned __int16 *)(*((_QWORD *)a2 + 12) + 576LL * a5);
    if ( v20[118] == v19 )
    {
      v22 = this;
    }
    else
    {
      v21 = v19;
      v22 = this;
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(this, a2, v21, &a5) )
        return 0;
      v16 = a5;
      v20 = (unsigned __int16 *)(*((_QWORD *)a2 + 12) + 576LL * a5);
    }
    if ( v13 >= (unsigned int)PointerInfoSize )
    {
      v14 = CTouchProcessor::PointerInfoCopyOutHelper(
              v22,
              (struct CPointerInfoNode *)v20,
              *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 14),
              a3,
              PointerInfoSize,
              a7);
      if ( v14 )
      {
        a6 += PointerInfoSize;
        a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
        v13 -= PointerInfoSize;
        ++v16;
      }
    }
    v7 = a4;
  }
  return v14;
}
