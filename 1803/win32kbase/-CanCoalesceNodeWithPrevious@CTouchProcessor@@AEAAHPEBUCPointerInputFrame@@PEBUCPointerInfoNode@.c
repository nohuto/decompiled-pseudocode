/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C010DA58
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C011A6E0 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0037000 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01096A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0111A30 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0116850 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C013ED28 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  PDEVICE_OBJECT v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebp
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v19; // rdx
  __int64 *v20; // r14
  __int64 v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  CInputDest *Queue; // rax
  PDEVICE_OBJECT v26; // rcx
  unsigned __int16 v27; // r9
  int v28; // r8d
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v35; // [rsp+28h] [rbp-1E0h]
  int v36; // [rsp+30h] [rbp-1D8h] BYREF
  struct tagQMSG *v37; // [rsp+38h] [rbp-1D0h]
  _OWORD v38[11]; // [rsp+40h] [rbp-1C8h] BYREF
  _OWORD v39[12]; // [rsp+F0h] [rbp-118h] BYREF

  v37 = a4;
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xFEu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2);
  if ( !*((_DWORD *)a5 + 25) )
  {
    *(_DWORD *)a6 = 23;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xFFu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 256;
LABEL_77:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( !*((_QWORD *)a3 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v13, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
  v16 = *(_DWORD *)a3;
  v17 = 1;
  if ( (*(_DWORD *)a3 & 1) != 0 )
  {
    if ( (v16 & 8) != 0 || (v16 & 0x10) != 0 || (v16 & 0x40) != 0 || (v16 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x103u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 260;
        goto LABEL_77;
      }
      return 0LL;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *((_WORD *)a3 + 118), 0LL);
    v20 = (__int64 *)ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x105u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 262;
        goto LABEL_77;
      }
      return 0LL;
    }
    v21 = *((_QWORD *)a2 + 13) + 224LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 27) )
      *((_QWORD *)a5 + 27) = v21;
    v22 = *(_DWORD *)(v21 + 204);
    if ( (v22 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x107u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 264;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( (v22 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x109u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 266;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( (*(_DWORD *)v20 & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v19);
    v23 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v23 & 0x8000000) != 0
      || v23 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v24 = *(unsigned int *)v20, (v24 & 0x800000) != 0)
      || (v24 & 0x8000000) != 0
      || (v24 & 0x80000000) != 0
      || (*((_DWORD *)v20 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x10Bu,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 268;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( (v24 & 0x100000) != 0 && (v24 & 0x400000) == 0 )
    {
      if ( (v24 & 0x200000) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, 0x800000LL);
      *(_DWORD *)a6 = 21;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x10Du,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v11 = 270;
      goto LABEL_77;
    }
    if ( *((_DWORD *)v20 + 61) != *((_DWORD *)a3 + 61) )
    {
      *(_DWORD *)a6 = 5;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x10Fu,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 272;
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v20 + 75) == 100 )
    {
      *(_DWORD *)a6 = 6;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x111u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 274;
        goto LABEL_77;
      }
      return 0LL;
    }
    CInputDest::CInputDest(v39, *((_QWORD *)a3 + 32), *((_DWORD *)a3 + 119));
    Queue = CPointerInfoNode::GetQueue((CPointerInfoNode *)v20, &v36);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v39) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v39, (const struct CInputDest *)(v21 + 16)) )
      {
        if ( *((_QWORD *)a5 + 27) == v21 )
        {
          v28 = *((_DWORD *)a2 + 10);
          v38[0] = v39[0];
          v38[1] = v39[1];
          v38[2] = v39[2];
          v38[3] = v39[3];
          v38[4] = v39[4];
          v38[5] = v39[5];
          v38[6] = v39[6];
          v38[7] = v39[7];
          v38[8] = v39[8];
          v29 = *((_DWORD *)a3 + 58);
          v30 = *((_DWORD *)a3 + 60);
          v38[9] = v39[9];
          v35 = v29;
          v31 = v20[2];
          v38[10] = v39[10];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v38,
                               (_DWORD)v37,
                               v28,
                               v30,
                               v31,
                               v35) )
          {
            if ( *(_DWORD *)a6 != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              4u,
              0xBu,
              0x119u,
              (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                0xBu,
                0x11Au,
                (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
            goto LABEL_72;
          }
          *(_DWORD *)a6 = 7;
        }
        else
        {
          *(_DWORD *)a6 = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)this + 1),
            4u,
            0xBu,
            0x117u,
            (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
          v26 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v27 = 280;
            goto LABEL_70;
          }
        }
      }
      else
      {
        *(_DWORD *)a6 = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)this + 1),
          4u,
          0xBu,
          0x115u,
          (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        v26 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v27 = 278;
LABEL_70:
          WPP_RECORDER_SF_(
            (__int64)v26->DeviceExtension,
            5u,
            0xBu,
            v27,
            (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        }
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0x113u,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v26 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v27 = 276;
        goto LABEL_70;
      }
    }
    v17 = 0;
LABEL_72:
    CInputDest::SetEmpty((CInputDest *)v39);
    return v17;
  }
  *(_DWORD *)a6 = 2;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0x101u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = 258;
    goto LABEL_77;
  }
  return 0LL;
}
