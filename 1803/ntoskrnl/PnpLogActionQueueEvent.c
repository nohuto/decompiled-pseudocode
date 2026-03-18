/*
 * XREFs of PnpLogActionQueueEvent @ 0x14014624C
 * Callers:
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 * Callees:
 *     McTemplateK0z @ 0x1401857E8 (McTemplateK0z.c)
 *     McTemplateK0zq @ 0x14023C3CC (McTemplateK0zq.c)
 *     McTemplateK0zqq @ 0x14023C46C (McTemplateK0zqq.c)
 */

__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 result; // rax
  void *v10; // rdx

  if ( a2 == 8 )
  {
    v6 = 0LL;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) == 0 )
          return result;
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        v10 = &KMPnPEvt_ReenumerateDeviceOnly_Start;
      }
      else
      {
        if ( (_DWORD)a3 != 2 || (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) == 0 )
          return result;
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        v10 = &KMPnPEvt_ReenumerateDeviceOnly_Stop;
      }
    }
    else
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) == 0 )
        return result;
      if ( a1 )
        v6 = *(_QWORD *)(a1 + 48);
      v10 = &KMPnPEvt_ReenumerateDeviceOnly_Queue;
    }
    return McTemplateK0z(a1, v10, a3, v6);
  }
  if ( a2 <= 8 )
    return result;
  if ( a2 <= 10 )
  {
LABEL_9:
    LODWORD(v5) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
        {
          if ( a1 )
            v5 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Start, 1, v5, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      {
        if ( a1 )
          v5 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Stop, 2, v5, a2);
      }
    }
    else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    {
      if ( a1 )
        v5 = *(_QWORD *)(a1 + 48);
      return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Queue, 0, v5, a2);
    }
    return result;
  }
  if ( a2 != 16 && a2 != 12 )
  {
    if ( a2 != 14 )
    {
      if ( a2 > 20 && a2 <= 24 )
      {
        LODWORD(v8) = 0;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000) != 0 )
            {
              if ( a1 )
                v8 = *(_QWORD *)(a1 + 48);
              return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ConfigureDevice_Start, 1, v8, a2);
            }
          }
          else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000) != 0 )
          {
            if ( a1 )
              v8 = *(_QWORD *)(a1 + 48);
            return McTemplateK0zqq(a1, (unsigned int)&KMPnPEvt_ConfigureDevice_Stop, 2, v8, a2, a4);
          }
        }
        else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000) != 0 )
        {
          if ( a1 )
            v8 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ConfigureDevice_Queue, 0, v8, a2);
        }
      }
      return result;
    }
    goto LABEL_9;
  }
  LODWORD(v7) = 0;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
      {
        if ( a1 )
          v7 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_DeviceAction_Start, 1, v7, a2);
      }
    }
    else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    {
      if ( a1 )
        v7 = *(_QWORD *)(a1 + 48);
      return McTemplateK0zqq(a1, (unsigned int)&KMPnPEvt_DeviceAction_Stop, 2, v7, a2, a4);
    }
  }
  else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
  {
    if ( a1 )
      v7 = *(_QWORD *)(a1 + 48);
    return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_DeviceAction_Queue, 0, v7, a2);
  }
  return result;
}
