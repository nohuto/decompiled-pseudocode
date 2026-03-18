/*
 * XREFs of PostDeviceNotification @ 0x1C00B173C
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00B0690 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00B1514 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C00AFBF8 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 *     PostPointerEventMessage @ 0x1C00B0620 (PostPointerEventMessage.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00B11CC (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00B1960 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

unsigned __int64 __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v7; // rdx
  __int16 v9; // bp
  __int16 v10; // r15
  struct tagPROCESS_HID_TABLE *v11; // r14
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned __int64 result; // rax
  unsigned int v15; // r12d
  struct tagPROCESS_HID_REQUEST *v16; // rax
  unsigned int v17; // r8d

  v7 = *((unsigned __int8 *)a2 + 48);
  v9 = 0;
  v10 = 0;
  v11 = (struct tagPROCESS_HID_TABLE *)RawInputManagerObject::gHidRequestTable[4];
  v12 = 2;
  if ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v13 = *((_QWORD *)a2 + 57);
        v9 = *(_WORD *)(v13 + 42);
        v10 = *(_WORD *)(v13 + 40);
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
  result = *((unsigned int *)a2 + 50);
  v15 = 0;
  if ( (result & 0x80u) != 0LL )
  {
    if ( a4 == 2 )
    {
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)v7, (struct tagEDGY_LISTENER *)2);
      result = *((_QWORD *)&xmmword_1C03304B0 + 1);
      if ( *((_QWORD *)&xmmword_1C03304B0 + 1) )
      {
        if ( *((_QWORD *)&xmmword_1C03304B0 + 1) == *(_QWORD *)a2 )
        {
          *((_QWORD *)&xmmword_1C03304B0 + 1) = 0LL;
          if ( !(_DWORD)xmmword_1C03304C0 )
          {
            *(_QWORD *)&xmmword_1C03304B0 = 0LL;
            *(&gPalmRejectData + 1) = 0;
          }
        }
      }
    }
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 59), 0x238u, a4, 1);
      if ( a4 == 1 )
      {
        v15 = 712;
      }
      else if ( a4 == 2 )
      {
        v15 = 713;
      }
      result = PostMessage(-1LL, v15, a5, 0LL);
    }
  }
  if ( (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
  {
    result = a4 - 1;
    if ( a4 - 1 <= 1 )
      result = ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v10 && *((_WORD *)a1 + 8) == v9 )
      return PostHidNotification(a1, a2, v12, a4);
  }
  else
  {
    while ( 1 )
    {
      result = (unsigned __int64)&RawInputManagerObject::gHidRequestTable[4];
      if ( v11 == (struct tagPROCESS_HID_TABLE *)&RawInputManagerObject::gHidRequestTable[4] )
        break;
      v16 = InProcessDeviceTypeRequestTable(v11, v9, v10);
      if ( v16 )
        PostHidNotification(v16, a2, v17, a4);
      v11 = *(struct tagPROCESS_HID_TABLE **)v11;
    }
  }
  return result;
}
