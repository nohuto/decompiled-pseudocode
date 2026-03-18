/*
 * XREFs of ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0124804 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01249BC (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z @ 0x1C0124C0C (-ProcessInputWithoutHitTest@CTouchProcessor@@QEAAXPEAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z @ 0x1C0124E98 (-ProcessMouseInput@CTouchProcessor@@QEAAXPEAX0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C00D9EA0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C00D9EE0 (EtwTraceEndPointerFrameCreation.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01220E0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C012557C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0127CE4 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0128010 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceInputFrame(
        CTouchProcessor *this,
        void *a2,
        struct CPointerInputFrame *a3)
{
  unsigned int v6; // ebx
  struct CPointerInfoNode *i; // rsi
  CTouchProcessor *v8; // rcx
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  const struct CPointerInputFrame *v10; // rbx
  unsigned int v11; // r15d
  CPointerInfoNode *v12; // rsi
  CInputDest *v13; // r14
  unsigned __int64 Queue; // r12
  struct CPointerQFrame *v15; // rax
  int v16; // r8d
  int v17; // ebx
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v19; // rbx
  _BYTE v20[208]; // [rsp+30h] [rbp-118h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      34,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  if ( !a3 )
    return 0LL;
  *((_DWORD *)a3 + 20) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)a3 + 11);
  v6 = 0;
  for ( i = (struct CPointerInfoNode *)*((_QWORD *)a3 + 12);
        v6 < *((_DWORD *)a3 + 12);
        i = (struct CPointerInfoNode *)((char *)i + 608) )
  {
    if ( !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, a3, i) )
      CTouchProcessor::FreePointerInfoNodeInt(v8, a3, v6);
    ++v6;
  }
  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, a3);
  v10 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
  *((_DWORD *)a3 + 20) &= ~1u;
  v11 = 0;
  v12 = (CPointerInfoNode *)*((_QWORD *)a3 + 12);
  if ( *((_DWORD *)a3 + 12) )
  {
    v13 = (CPointerInfoNode *)((char *)v12 + 408);
    do
    {
      if ( (unsigned int)CPointerInfoNode::IsValid(v12) )
      {
        memset(v20, 0, 193);
        if ( CPointerInfoNode::IsForManipulationThread(v12) )
        {
          Queue = 0xFFFFFFFFLL;
        }
        else
        {
          Queue = CInputDest::GetQueue(v13, 3);
          CInputDest::operator=((__int64)v20, (__int64)v13);
        }
        v15 = CTouchProcessor::SetupQFrame(this, a3, Queue, (const struct CInputDest *)v20, v10 != 0LL);
        *((_DWORD *)v13 - 100) = *(_DWORD *)v15;
        ++*((_DWORD *)v15 + 54);
        CTouchProcessor::ProcessQFrameNode(this, v15, v10, v12);
        CInputDest::SetEmpty((CInputDest *)v20);
      }
      ++v11;
      v12 = (CPointerInfoNode *)((char *)v12 + 608);
      v13 = (CInputDest *)((char *)v13 + 608);
    }
    while ( v11 < *((_DWORD *)a3 + 12) );
  }
  CTouchProcessor::TryCoalesceQFrame(this, a3, v10, 0LL);
  EtwTraceEndPointerFrameCommit(*((_DWORD *)a3 + 10), *((_DWORD *)a3 + 12), v16);
  EtwTraceEndPointerFrameCreation(*((_DWORD *)a3 + 10), *((_DWORD *)a3 + 12), 0);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt(this, v10);
  v17 = *((_DWORD *)a3 + 10);
  CTouchProcessor::UnreferenceFrameInt(this, a3);
  FrameById = CTouchProcessor::FindFrameById(this, v17);
  v19 = FrameById;
  if ( FrameById )
    _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
  else
    v19 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      35,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  return v19;
}
