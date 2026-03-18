/*
 * XREFs of ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01196A0
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C011A1C0 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C011A6E0 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01096A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1C0120034 (WPP_RECORDER_SF_qdqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessEnterLeave(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3)
{
  unsigned int v6; // ebx
  struct CPointerInfoNode *v7; // rdi
  __int64 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  CTouchProcessor *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PDEVICE_OBJECT v15; // rcx
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  char v22; // al
  __int64 v23; // rcx
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  bool v29; // cf
  int v30; // r9d
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v36; // [rsp+20h] [rbp-E0h]
  unsigned int v37[44]; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+100h] [rbp+0h]
  _BYTE v39[192]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v40[12]; // [rsp+1D0h] [rbp+D0h] BYREF
  _OWORD v41[12]; // [rsp+290h] [rbp+190h] BYREF

  v6 = 0;
  v7 = 0LL;
  memset(v39, 0, 177);
  memset(v37, 0, sizeof(v37));
  v38 = 0;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xAFu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v12 = (CTouchProcessor *)*(unsigned int *)a3;
  if ( (*(_DWORD *)a3 & 0x400) == 0 && (*(_DWORD *)a3 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10);
    v12 = (CTouchProcessor *)*(unsigned int *)a3;
  }
  if ( ((unsigned __int16)v12 & 0x400) == 0 && !*((_DWORD *)a3 + 6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10);
  if ( !a2 )
  {
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    if ( !CPointerInfoNode::IsForManipulationThread(a3) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xB0u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 177;
LABEL_38:
        WPP_RECORDER_SF_(
          (__int64)v15->DeviceExtension,
          5u,
          0xBu,
          v16,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        goto LABEL_58;
      }
      goto LABEL_58;
    }
LABEL_32:
    if ( (*(_DWORD *)a3 & 0x400) != 0 )
    {
      v21 = CInputDest::CInputDest(v41, *((_QWORD *)a3 + 32), *((_DWORD *)a3 + 119));
      CInputDest::operator=((__int64)v39, v21);
      CInputDest::SetEmpty((CInputDest *)v41);
    }
    else
    {
      CInputDest::operator=((__int64)v39, (__int64)a3 + 24);
    }
    v22 = CInputDest::operator==(v37, (__int64)v39);
    v23 = *((_QWORD *)this + 1);
    if ( v22 )
    {
      WPP_RECORDER_SF_(v23, 4u, 0xBu, 0xB4u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v15 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v16 = 181;
        goto LABEL_38;
      }
    }
    else
    {
      WPP_RECORDER_SF_(v23, 4u, 0xCu, 0xB6u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      if ( (*((_DWORD *)a3 + 1) & 0x200) != 0
        && ((v26 = *((_DWORD *)a3 + 61), (v26 & 4) != 0) || (v26 & 0x40000) != 0)
        && (v26 & 0x10000) == 0 )
      {
        v27 = *(_DWORD *)a3 | 0x40;
        *(_DWORD *)a3 = v27;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x20u;
          v27 = *(_DWORD *)a3;
          v28 = -__CFSHR__(*(_DWORD *)v7, 6);
        }
        else
        {
          LOBYTE(v28) = 0;
        }
        v29 = __CFSHR__(v27, 7);
        v30 = 184;
      }
      else
      {
        v31 = *(_DWORD *)a3 | 8;
        *(_DWORD *)a3 = v31;
        if ( v7 )
        {
          *(_DWORD *)v7 |= 0x10u;
          v31 = *(_DWORD *)a3;
          v28 = -__CFSHR__(*(_DWORD *)v7, 5);
        }
        else
        {
          LOBYTE(v28) = 0;
        }
        v29 = __CFSHR__(v31, 4);
        v30 = 183;
      }
      WPP_RECORDER_SF_qdqd(*((_QWORD *)this + 1), v24, v25, v30, v36, (char)a3, -v29, (char)v7, v28);
      if ( v7 )
      {
        v34 = *((unsigned int *)v7 + 2);
        if ( (unsigned int)v34 >= *((_DWORD *)a2 + 12) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
          v34 = *((unsigned int *)v7 + 2);
        }
        *(_DWORD *)(224 * v34 + *((_QWORD *)a2 + 13) + 204) &= ~1u;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0xB9u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v6 = 1;
    }
    goto LABEL_58;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v12, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
  ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 118), 0LL);
  v7 = ValidNodeInFrame;
  if ( ValidNodeInFrame )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v7 = 0LL;
    if ( v7 )
    {
      if ( (*(_DWORD *)v7 & 4) != 0 || (*(_DWORD *)v7 & 0x400) != 0 )
      {
        v20 = CInputDest::CInputDest(v40, *((_QWORD *)v7 + 32), *((_DWORD *)v7 + 119));
        CInputDest::operator=((__int64)v37, v20);
        CInputDest::SetEmpty((CInputDest *)v40);
      }
      else
      {
        CInputDest::operator=((__int64)v37, (__int64)v7 + 24);
      }
    }
    goto LABEL_32;
  }
  if ( CPointerInfoNode::IsForManipulationThread(a3) )
    goto LABEL_32;
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 1),
    4u,
    0xBu,
    0xB2u,
    (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids,
    *((unsigned __int16 *)a3 + 118));
  v15 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v16 = 179;
    goto LABEL_38;
  }
LABEL_58:
  CInputDest::SetEmpty((CInputDest *)v37);
  CInputDest::SetEmpty((CInputDest *)v39);
  return v6;
}
