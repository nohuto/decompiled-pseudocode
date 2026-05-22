/*
 * XREFs of ?UpdateDisplayCalibration@GazeProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18004374C
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180043370 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180043710 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::UpdateDisplayCalibration(GazeProcessor *this, struct DeviceInfo *a2)
{
  _QWORD *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r9d
  int v11; // eax

  v4 = (_QWORD *)((char *)this + 48);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v6 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *, char *))(*(_QWORD *)v5 + 88LL))(
         v5,
         a2,
         (char *)this + 48);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = *((_DWORD *)a2 + 241);
    if ( v11 && *((_DWORD *)a2 + 242) )
    {
      *((_DWORD *)this + 14) = v11;
      *((_DWORD *)this + 15) = *((_DWORD *)a2 + 242);
      return v9;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v4 + 40LL))(
           *v4,
           (char *)this + 56,
           (char *)this + 60);
    v9 = v7;
    if ( v7 >= 0 )
    {
      *((_DWORD *)this + 14) *= 1000;
      *((_DWORD *)this + 15) *= 1000;
      return v9;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 227;
      goto LABEL_6;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 218;
LABEL_6:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v10, v7);
  }
  return v9;
}
