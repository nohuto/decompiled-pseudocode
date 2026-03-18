/*
 * XREFs of ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B678
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C011BE70 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C012557C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0047FC4 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0118184 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011E704 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0122124 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C013B2E4 (ApiSetEditionIsPointerQueuedMessageCoalescable.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceNodeWithPrevious(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        struct tagQMSG *a4,
        struct CPointerQFrame *a5,
        enum CPointerCoalesce *a6)
{
  const struct CPointerInputFrame *v7; // r12
  CTouchProcessor *v9; // rcx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  int v13; // eax
  unsigned int v14; // r15d
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  int v16; // edx
  struct CPointerInfoNode *v17; // rsi
  __int64 v18; // rbp
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  struct tagWND *v22; // rax
  CInputDest *Queue; // rax
  int v24; // edx
  int v25; // edx
  int v26; // edx
  PDEVICE_OBJECT v27; // rcx
  int v28; // r9d
  int v29; // r9d
  int v30; // r8d
  int v31; // eax
  __int64 v32; // rax
  int v33; // edx
  int v34; // edx
  int v36; // [rsp+28h] [rbp-200h]
  int v37; // [rsp+30h] [rbp-1F8h] BYREF
  struct tagQMSG *v38; // [rsp+38h] [rbp-1F0h]
  _OWORD v39[12]; // [rsp+40h] [rbp-1E8h] BYREF
  _OWORD v40[13]; // [rsp+100h] [rbp-128h] BYREF

  v7 = a2;
  v38 = a4;
  v9 = (CTouchProcessor *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      235,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( !*((_DWORD *)a5 + 27) )
  {
    *(_DWORD *)a6 = 23;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)this + 1),
      (_DWORD)a2,
      11,
      236,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 237;
LABEL_63:
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(v11->DeviceExtension, v10, 11, v12, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  v13 = *(_DWORD *)a3;
  v14 = 1;
  if ( (*(_DWORD *)a3 & 1) != 0 )
  {
    if ( (v13 & 8) != 0 || (v13 & 0x10) != 0 || (v13 & 0x40) != 0 || (v13 & 0x20) != 0 )
    {
      *(_DWORD *)a6 = 16;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        (_DWORD)a2,
        11,
        240,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 241;
        goto LABEL_63;
      }
      return 0LL;
    }
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(v9, v7, *((_WORD *)a3 + 126), 0LL);
    v17 = ValidNodeInFrame;
    if ( !ValidNodeInFrame )
    {
      *(_DWORD *)a6 = 3;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 242, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 243;
        goto LABEL_63;
      }
      return 0LL;
    }
    v18 = *((_QWORD *)v7 + 13) + 240LL * *((unsigned int *)ValidNodeInFrame + 2);
    if ( !*((_QWORD *)a5 + 29) )
      *((_QWORD *)a5 + 29) = v18;
    v19 = *(_DWORD *)(v18 + 220);
    if ( (v19 & 1) == 0 )
    {
      *(_DWORD *)a6 = 12;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 244, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 245;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( (v19 & 8) != 0 )
    {
      *(_DWORD *)a6 = 11;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 246, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 247;
        goto LABEL_63;
      }
      return 0LL;
    }
    v20 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x800000) != 0
      || (v20 & 0x8000000) != 0
      || v20 < 0
      || (*((_DWORD *)a3 + 1) & 8) != 0
      || (v21 = *(_DWORD *)v17, (*(_DWORD *)v17 & 0x800000) != 0)
      || (v21 & 0x8000000) != 0
      || v21 < 0
      || (*((_DWORD *)v17 + 1) & 8) != 0 )
    {
      *(_DWORD *)a6 = 16;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 248, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 249;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( (v21 & 0x100000) != 0 && (v21 & 0x400000) == 0 )
    {
      *(_DWORD *)a6 = 21;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 250, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 251;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v17 + 65) != *((_DWORD *)a3 + 65) )
    {
      *(_DWORD *)a6 = 5;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 252, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 253;
        goto LABEL_63;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v17 + 79) == 100 )
    {
      *(_DWORD *)a6 = 6;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v16, 11, 254, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 255;
        goto LABEL_63;
      }
      return 0LL;
    }
    v22 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a3 + 34), 1);
    CInputDest::CInputDest((CInputDest *)v40, v22);
    Queue = CPointerInfoNode::GetQueue(v17, &v37);
    if ( Queue && CInputDest::IsEqualByQ(Queue, (const struct CInputDest *)v40) )
    {
      if ( CInputDest::IsEqualByQ((CInputDest *)v40, (const struct CInputDest *)(v18 + 16)) )
      {
        if ( *((_QWORD *)a5 + 29) == v18 )
        {
          v29 = *((_DWORD *)a3 + 64);
          v30 = *((_DWORD *)v7 + 10);
          v39[0] = v40[0];
          v39[1] = v40[1];
          v39[2] = v40[2];
          v39[3] = v40[3];
          v39[4] = v40[4];
          v39[5] = v40[5];
          v39[6] = v40[6];
          v39[7] = v40[7];
          v39[8] = v40[8];
          v39[9] = v40[9];
          v31 = *((_DWORD *)a3 + 62);
          v39[10] = v40[10];
          v36 = v31;
          v32 = *((_QWORD *)v17 + 2);
          v39[11] = v40[11];
          if ( (unsigned int)ApiSetEditionIsPointerQueuedMessageCoalescable(
                               (unsigned int)v39,
                               (_DWORD)v38,
                               v30,
                               v29,
                               v32,
                               v36) )
          {
            LOBYTE(v33) = 4;
            WPP_RECORDER_SF_(
              *((_QWORD *)this + 1),
              v33,
              11,
              262,
              (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v34) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v34,
                11,
                263,
                (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
            }
            goto LABEL_58;
          }
          *(_DWORD *)a6 = 7;
        }
        else
        {
          *(_DWORD *)a6 = 4;
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)this + 1),
            v25,
            11,
            260,
            (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
          v27 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v28 = 261;
            goto LABEL_56;
          }
        }
      }
      else
      {
        *(_DWORD *)a6 = 4;
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_(*((_QWORD *)this + 1), v25, 11, 258, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        v27 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v28 = 259;
LABEL_56:
          LOBYTE(v26) = 5;
          WPP_RECORDER_SF_(
            v27->DeviceExtension,
            v26,
            11,
            v28,
            (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
        }
      }
    }
    else
    {
      *(_DWORD *)a6 = 4;
      LOBYTE(v24) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)this + 1), v24, 11, 256, (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
      v27 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v28 = 257;
        goto LABEL_56;
      }
    }
    v14 = 0;
LABEL_58:
    CInputDest::SetEmpty((CInputDest *)v40);
    return v14;
  }
  *(_DWORD *)a6 = 2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(
    *((_QWORD *)this + 1),
    (_DWORD)a2,
    11,
    238,
    (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = 239;
    goto LABEL_63;
  }
  return 0LL;
}
