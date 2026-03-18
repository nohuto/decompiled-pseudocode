/*
 * XREFs of UsbhResetNotifyCompletion @ 0x1C0046CB8
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00199D8 (UsbhSetPdo_AllowIo.c)
 *     WPP_RECORDER_SF_q @ 0x1C003C2E0 (WPP_RECORDER_SF_q.c)
 */

_DWORD *__fastcall UsbhResetNotifyCompletion(__int64 a1)
{
  unsigned int i; // esi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx

  FdoExt(a1)[1316] = 0;
  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v5 = *(_QWORD *)(PortData + 392);
    if ( v5 )
    {
      v6 = PdoExt(*(_QWORD *)(PortData + 392));
      v8 = v6;
      if ( *((_BYTE *)v6 + 2716) )
      {
        if ( *((_QWORD *)v6 + 345) )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v7,
              3u,
              0x14u,
              (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
              a1);
          Log(a1, 4, 1380860721, 0LL, a1);
          UsbhSetPdo_AllowIo(v9, v5);
          *(_DWORD *)(*((_QWORD *)v8 + 345) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v8 + 345), 0);
          *((_QWORD *)v8 + 345) = 0LL;
        }
        else if ( (v6[353] & 4) != 0 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v7,
              3u,
              0x15u,
              (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
              a1);
          Log(a1, 4, 1380860722, 0LL, a1);
          UsbhSetPdo_AllowIo(v10, v5);
          *(_DWORD *)(*((_QWORD *)v8 + 346) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v8 + 346), 0);
        }
        else if ( v6[196] == 2 )
        {
          *((_BYTE *)v6 + 2717) = 1;
        }
      }
    }
  }
  return result;
}
