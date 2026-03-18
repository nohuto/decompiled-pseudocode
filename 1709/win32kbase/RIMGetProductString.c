/*
 * XREFs of RIMGetProductString @ 0x1C000E9E0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     wcscmp_0 @ 0x1C00AA9E5 (wcscmp_0.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  size_t Information; // r8
  void *v13; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 1802531666LL);
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
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          18,
          21,
          (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids,
          Status);
      }
      else if ( IoStatusBlock.Information > 0x200 )
      {
        Status = -1073741811;
      }
      else
      {
        v11 = Win32AllocPool(IoStatusBlock.Information + 2, 2003071826LL);
        *(_QWORD *)(a1 + 288) = v11;
        if ( v11 )
        {
          *(_WORD *)(v11 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v13 = *(void **)(a1 + 288);
          *(_WORD *)(a1 + 280) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 282) = Information + 2;
          memmove(v13, OutputBuffer, Information);
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 288), L"VHidPen") )
            *(_DWORD *)(a1 + 276) |= 0x10000u;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        18,
        20,
        (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids);
    }
    Win32FreePool(OutputBuffer, v9, v10);
  }
  return Status;
}
