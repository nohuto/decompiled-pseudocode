/*
 * XREFs of PostDeviceNotification @ 0x1C00C7F8C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00C6E80 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00C7D64 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C00C69EC (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 *     PostPointerEventMessage @ 0x1C00C6E10 (PostPointerEventMessage.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00C7A24 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00C81B8 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C01DFEC0 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C01E0B44 (WPP_RECORDER_SF_q.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r8
  __int16 v9; // bp
  __int16 v10; // r14
  struct tagPROCESS_HID_TABLE *v11; // rsi
  __int64 v12; // rax
  unsigned int v13; // r12d
  struct tagPROCESS_HID_REQUEST *v14; // rax
  unsigned int v15; // r8d
  int v16; // edx
  __int64 v17; // r15
  PalmRejection *v18; // rcx

  v5 = *((unsigned __int8 *)a2 + 48);
  v9 = 0;
  v10 = 0;
  v11 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  if ( *((_BYTE *)a2 + 48) )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v12 = *((_QWORD *)a2 + 57);
        v9 = *(_WORD *)(v12 + 42);
        v10 = *(_WORD *)(v12 + 40);
      }
    }
    else
    {
      v9 = 1;
      v10 = 6;
    }
  }
  else
  {
    v9 = 1;
    v10 = 2;
  }
  v13 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
    {
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)1, (struct tagEDGY_LISTENER *)v5);
      v17 = *(_QWORD *)a2;
      if ( *((_QWORD *)&xmmword_1C032BA30 + 1) )
      {
        if ( *((_QWORD *)&xmmword_1C032BA30 + 1) == v17 )
        {
          WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v16, v5, 16);
          DWORD1(xmmword_1C032BA40) = 0;
          *((_QWORD *)&xmmword_1C032BA30 + 1) = 0LL;
          if ( !(_DWORD)xmmword_1C032BA40 )
          {
            *(_QWORD *)&xmmword_1C032BA30 = 0LL;
            *(&gPalmRejectData + 1) = 0;
          }
        }
      }
      if ( (_QWORD)xmmword_1C032BA30 && (_QWORD)xmmword_1C032BA30 == v17 )
      {
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v16, v5, 17);
        LODWORD(xmmword_1C032BA40) = 0;
        *(_QWORD *)&xmmword_1C032BA30 = 0LL;
        if ( *(&gPalmRejectData + 1) == 1 )
        {
          FindTimer(0, *(&gPalmRejectData + 2), 4, 1, 0LL);
          *(&gPalmRejectData + 1) = 0LL;
          PalmRejection::DispatchBufferedInputFrames(v18);
        }
        if ( *(&gPalmRejectData + 1) == 2 && !DWORD1(xmmword_1C032BA40) )
        {
          *((_QWORD *)&xmmword_1C032BA30 + 1) = 0LL;
          *(&gPalmRejectData + 1) = 0;
        }
      }
    }
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 59), 0x238u, a4, 1);
      if ( a4 == 1 )
      {
        v13 = 712;
      }
      else if ( a4 == 2 )
      {
        v13 = 713;
      }
      PostMessage(-1LL, v13, a5, 0LL);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v10 && *((_WORD *)a1 + 8) == v9 )
      PostHidNotification(a1, a2, v5, a4);
  }
  else
  {
    while ( v11 != (struct tagPROCESS_HID_TABLE *)&RawInputManagerObject::gHidRequestTable[4] )
    {
      v14 = InProcessDeviceTypeRequestTable(v11, v9, v10);
      if ( v14 )
        PostHidNotification(v14, a2, v15, a4);
      v11 = *(struct tagPROCESS_HID_TABLE **)v11;
    }
  }
}
