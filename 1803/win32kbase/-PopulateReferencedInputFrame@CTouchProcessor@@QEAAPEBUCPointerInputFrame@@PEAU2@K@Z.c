/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0119E20 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C011AAD4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C00ABE50 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C00ABE90 (EtwTraceEndPointerFrameCreation.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011155C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C011A6E0 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C011AD38 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C011D6A4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  struct CPointerInfoNode *v6; // rbx
  unsigned __int64 v7; // rcx
  struct CPointerInputFrame *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // r15
  unsigned int v12; // r12d
  CPointerInfoNode *v13; // r14
  CInputDest *v14; // rbp
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 Queue; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct CPointerQFrame *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct CPointerQFrame *v25; // rbx
  int v26; // eax
  const GUID *v27; // r8
  __int64 v28; // rdx
  CTouchProcessor *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // ebx
  struct CPointerInputFrame *v33; // rbx
  _BYTE v35[192]; // [rsp+30h] [rbp-108h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x2Eu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  *((_DWORD *)a2 + 20) |= 1u;
  v4 = 0;
  v5 = *((unsigned int *)a2 + 12);
  v6 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( (_DWORD)v5 )
  {
    do
    {
      v7 = *((_QWORD *)a2 + 12) + 576 * v5;
      if ( (unsigned __int64)v6 >= v7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, a2);
      if ( (*(_DWORD *)v6 & 0x1000) != 0
        || !(unsigned int)CTouchProcessor::PopulatePointerInfoNode((CTouchProcessor *)this, a2, v6) )
      {
        CTouchProcessor::FreePointerInfoNodeInt(this, a2, v4);
      }
      v5 = *((unsigned int *)a2 + 12);
      ++v4;
      v6 = (struct CPointerInfoNode *)((char *)v6 + 576);
    }
    while ( v4 < (unsigned int)v5 );
  }
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a2);
  v10 = *((unsigned int *)a2 + 12);
  v11 = v8;
  *((_DWORD *)a2 + 20) &= ~1u;
  v12 = 0;
  v13 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( (_DWORD)v10 )
  {
    v14 = (CPointerInfoNode *)((char *)v13 + 392);
    do
    {
      if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 12) + 576 * v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
      if ( (*(_DWORD *)v13 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v13) )
      {
        memset(v35, 0, 177);
        if ( CPointerInfoNode::IsForManipulationThread(v13) )
        {
          v15 = -1LL;
        }
        else
        {
          if ( *((_DWORD *)v14 + 21) )
          {
            v16 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)v14 - 34));
            Queue = CInputDest::GetQueue(v14, 2LL);
            v19 = *(_QWORD *)(v16 + 16);
            if ( Queue != *(_QWORD *)(v19 + 424) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
          }
          v15 = CInputDest::GetQueue(v14, 2LL);
          CInputDest::operator=((__int64)v35, (__int64)v14);
          if ( !v15 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
        }
        v22 = CTouchProcessor::SetupQFrame((CTouchProcessor *)this, a2, v15, (const struct CInputDest *)v35, v11 != 0LL);
        v25 = v22;
        if ( !v11 )
        {
          v24 = *((unsigned int *)v22 + 51);
          if ( (v24 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
        }
        v26 = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
          v26 = *(_DWORD *)v25;
        }
        *((_DWORD *)v14 - 96) = v26;
        ++*((_DWORD *)v25 + 50);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v25, v11, v13);
        CInputDest::SetEmpty((CInputDest *)v35);
      }
      v10 = *((unsigned int *)a2 + 12);
      v13 = (CPointerInfoNode *)((char *)v13 + 576);
      v14 = (CInputDest *)((char *)v14 + 576);
      ++v12;
    }
    while ( v12 < (unsigned int)v10 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a2, v11, 0LL);
  EtwTraceEndPointerFrameCommit((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), v27);
  EtwTraceEndPointerFrameCreation((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), 0LL);
  if ( v11 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v11);
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v29, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30);
  v32 = *((_DWORD *)a2 + 10);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, a2);
  v33 = CTouchProcessor::FindAndReferenceFrameById(this, v32);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x2Fu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  return v33;
}
