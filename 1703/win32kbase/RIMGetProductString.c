/*
 * XREFs of RIMGetProductString @ 0x1C00585D0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     wcscmp_0 @ 0x1C00A1566 (wcscmp_0.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  __int64 v9; // rax
  size_t Information; // r8
  void *v11; // rcx
  __int64 OutputBufferLength; // [rsp+28h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 0x6B707352u);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    if ( v8 )
    {
      v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      Status = IofCallDriver(a2, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        LODWORD(OutputBufferLength) = Status;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0x17u,
          (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids,
          OutputBufferLength);
      }
      else if ( IoStatusBlock.Information > 0x200 )
      {
        Status = -1073741811;
      }
      else
      {
        v9 = Win32AllocPool(IoStatusBlock.Information + 2, 0x77647352u);
        *(_QWORD *)(a1 + 304) = v9;
        if ( v9 )
        {
          *(_WORD *)(v9 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v11 = *(void **)(a1 + 304);
          *(_WORD *)(a1 + 296) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 298) = Information + 2;
          memmove(v11, OutputBuffer, Information);
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 304), L"VHidPen") )
            *(_DWORD *)(a1 + 260) |= 0x20000u;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        18,
        22,
        (__int64)&WPP_bd227b2273003448e4b8964f44fc5eca_Traceguids);
    }
    Win32FreePool((__int64)OutputBuffer);
  }
  return Status;
}
