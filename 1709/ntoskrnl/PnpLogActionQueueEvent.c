/*
 * XREFs of PnpLogActionQueueEvent @ 0x1400FFBFC
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 * Callees:
 *     McTemplateK0z @ 0x1401FEBA8 (McTemplateK0z.c)
 *     McTemplateK0zq @ 0x1401FF900 (McTemplateK0zq.c)
 *     McTemplateK0zqq @ 0x1401FF9A0 (McTemplateK0zqq.c)
 */

__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 result; // rax
  void *v10; // rdx

  if ( a2 > 8 )
  {
    if ( a2 > 10 )
    {
      if ( a2 == 16 || a2 == 12 )
      {
        LODWORD(v8) = 0;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
            {
              if ( a1 )
                v8 = *(_QWORD *)(a1 + 48);
              return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_DeviceAction_Start, 1, v8, a2);
            }
          }
          else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
          {
            if ( a1 )
              v8 = *(_QWORD *)(a1 + 48);
            return McTemplateK0zqq(a1, (unsigned int)&KMPnPEvt_DeviceAction_Stop, 2, v8, a2, a4);
          }
        }
        else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
        {
          if ( a1 )
            v8 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_DeviceAction_Queue, 0, v8, a2);
        }
        return result;
      }
      if ( a2 != 14 )
      {
        if ( a2 > 20 && a2 <= 24 )
        {
          LODWORD(v5) = 0;
          if ( (_DWORD)a3 )
          {
            if ( (_DWORD)a3 == 1 )
            {
              if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000) != 0 )
              {
                if ( a1 )
                  v5 = *(_QWORD *)(a1 + 48);
                return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ConfigureDevice_Start, 1, v5, a2);
              }
            }
            else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000) != 0 )
            {
              if ( a1 )
                v5 = *(_QWORD *)(a1 + 48);
              return McTemplateK0zqq(a1, (unsigned int)&KMPnPEvt_ConfigureDevice_Stop, 2, v5, a2, a4);
            }
          }
          else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000) != 0 )
          {
            if ( a1 )
              v5 = *(_QWORD *)(a1 + 48);
            return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ConfigureDevice_Queue, 0, v5, a2);
          }
        }
        return result;
      }
    }
    LODWORD(v6) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
        {
          if ( a1 )
            v6 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Start, 1, v6, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      {
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Stop, 2, v6, a2);
      }
    }
    else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    {
      if ( a1 )
        v6 = *(_QWORD *)(a1 + 48);
      return McTemplateK0zq(a1, (unsigned int)&KMPnPEvt_ReenumerateDeviceTree_Queue, 0, v6, a2);
    }
    return result;
  }
  if ( a2 != 8 )
    return result;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
    {
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
      {
        if ( a1 )
          v7 = *(_QWORD *)(a1 + 48);
        v10 = &KMPnPEvt_ReenumerateDeviceOnly_Start;
        return McTemplateK0z(a1, v10, a3, v7);
      }
    }
    else if ( (_DWORD)a3 == 2 && (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
    {
      if ( a1 )
        v7 = *(_QWORD *)(a1 + 48);
      v10 = &KMPnPEvt_ReenumerateDeviceOnly_Stop;
      return McTemplateK0z(a1, v10, a3, v7);
    }
  }
  else if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x8000000) != 0 )
  {
    if ( a1 )
      v7 = *(_QWORD *)(a1 + 48);
    v10 = &KMPnPEvt_ReenumerateDeviceOnly_Queue;
    return McTemplateK0z(a1, v10, a3, v7);
  }
  return result;
}
