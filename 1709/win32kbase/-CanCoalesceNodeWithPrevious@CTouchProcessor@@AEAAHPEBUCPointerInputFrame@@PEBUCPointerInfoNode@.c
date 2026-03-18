/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011A408
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011ACDC (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124B58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0017338 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011D4CC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01216F4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C013A5A8 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  CTouchProcessor *v9; // rcx
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  int v12; // eax
  unsigned int v13; // r15d
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v15; // rdx
  struct CPointerInfoNode *v16; // rsi
  __int64 v17; // rbp
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  struct tagWND *v21; // rax
  CInputDest *Queue; // rax
  PDEVICE_OBJECT v23; // rcx
  unsigned __int16 v24; // r9
  int v25; // r9d
  int v26; // r8d
  int v27; // eax
  __int64 v28; // rax
  int v30; // [rsp+28h] [rbp-200h]
  int v31; // [rsp+30h] [rbp-1F8h] BYREF
  struct tagQMSG *v32; // [rsp+38h] [rbp-1F0h]
  _OWORD v33[12]; // [rsp+40h] [rbp-1E8h] BYREF
  _OWORD v34[13]; // [rsp+100h] [rbp-128h] BYREF

  v32 = a4;
  v9 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xEBu,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( !*((_DWORD *)a5 + 27) )
  {
    *(_DWORD *)a6 = 23;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xECu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v11 = 237;
LABEL_63:
      WPP_RECORDER_SF_(
        (__int64)v10->DeviceExtension,
        5u,
        0xBu,
        v11,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  v12 = *(_DWORD *)a3;
  v13 = 1;
  if ( (*(_DWORD *)a3 & 1) != 0 )
  {
    if ( (v12 & 8) != 0 || (v12 & 0x10) != 0 || (v12 & 0x40) != 0 || (v12 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xF0u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 241;
        goto LABEL_63;
      }
      return 0LL;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v9, a2, *((_WORD *)a3 + 126), 0LL);
    v16 = ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xF2u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 243;
        goto LABEL_63;
      }
      return 0LL;
    }
    v17 = *((_QWORD *)a2 + 13) + 240LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 29) )
      *((_QWORD *)a5 + 29) = v17;
    v18 = *(_DWORD *)(v17 + 220);
    if ( (v18 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xF4u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 245;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( (v18 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xF6u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 247;
        goto LABEL_63;
      }
      return 0LL;
    }
    v19 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v19 & 0x8000000) != 0
      || v19 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v20 = *(_DWORD *)v16, (*(_DWORD *)v16 & 0x800000) != 0)
      || (v20 & 0x8000000) != 0
      || v20 < 0
      || (*((_DWORD *)v16 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xF8u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 249;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( (v20 & 0x100000) != 0 && (v20 & 0x400000) == 0 )
    {
      *(_DWORD *)a6 = 21;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xFAu,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 251;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v16 + 65) != *((_DWORD *)a3 + 65) )
    {
      *(_DWORD *)a6 = 5;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xFCu,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 253;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v16 + 79) == 100 )
    {
      *(_DWORD *)a6 = 6;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        4u,
        0xBu,
        0xFEu,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 255;
        goto LABEL_63;
      }
      return 0LL;
    }
    LOBYTE(v15) = 1;
    v21 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a3 + 34), v15, 0x800000LL, 0x8000000LL);
    CInputDest::CInputDest((CInputDest *)v34, v21);
    Queue = CPointerInfoNode::GetQueue(v16, &v31);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v34) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v34, (const struct CInputDest *)(v17 + 16)) )
      {
        if ( *((_QWORD *)a5 + 29) == v17 )
        {
          v25 = *((_DWORD *)a3 + 64);
          v26 = *((_DWORD *)a2 + 10);
          v33[0] = v34[0];
          v33[1] = v34[1];
          v33[2] = v34[2];
          v33[3] = v34[3];
          v33[4] = v34[4];
          v33[5] = v34[5];
          v33[6] = v34[6];
          v33[7] = v34[7];
          v33[8] = v34[8];
          v33[9] = v34[9];
          v27 = *((_DWORD *)a3 + 62);
          v33[10] = v34[10];
          v30 = v27;
          v28 = *((_QWORD *)v16 + 2);
          v33[11] = v34[11];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v33,
                               (_DWORD)v32,
                               v26,
                               v25,
                               v28,
                               v30) )
          {
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              4u,
              0xBu,
              0x106u,
              (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                0xBu,
                0x107u,
                (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
            goto LABEL_58;
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
            0x104u,
            (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
          v23 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v24 = 261;
            goto LABEL_56;
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
          0x102u,
          (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
        v23 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v24 = 259;
LABEL_56:
          WPP_RECORDER_SF_(
            (__int64)v23->DeviceExtension,
            5u,
            0xBu,
            v24,
            (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
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
        0x100u,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
      v23 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v24 = 257;
        goto LABEL_56;
      }
    }
    v13 = 0;
LABEL_58:
    CInputDest::SetEmpty((CInputDest *)v34);
    return v13;
  }
  *(_DWORD *)a6 = 2;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xEEu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = 239;
    goto LABEL_63;
  }
  return 0LL;
}
