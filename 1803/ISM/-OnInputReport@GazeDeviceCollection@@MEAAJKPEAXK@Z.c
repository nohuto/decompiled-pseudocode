/*
 * XREFs of ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074170
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007548C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x180075D80 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeDeviceCollection::OnInputReport(GazeDeviceCollection *this, int a2, char *a3, unsigned int *a4)
{
  unsigned int v5; // r14d
  int DeviceId; // ebx
  struct _HIDP_CAPS *v8; // r11
  struct RIMDevice *v9; // rsi
  struct _HIDP_CAPS *v10; // rdi
  int HIDCapabilities; // eax
  unsigned int InputReportByteLength; // ecx
  __int64 v13; // r12
  int InputInfoForReport; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  bool v19[8]; // [rsp+30h] [rbp-20h] BYREF
  struct RIMDevice *v20; // [rsp+38h] [rbp-18h] BYREF
  struct _HIDP_CAPS *v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v20 = 0LL;
  v21[0] = 0LL;
  v5 = (unsigned int)a4;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v20, a4);
  if ( DeviceId >= 0 )
  {
    v9 = v20;
    v10 = (struct _HIDP_CAPS *)((char *)v20 + 60);
    if ( *((_WORD *)v20 + 30) == (_WORD)v8 )
    {
      HIDCapabilities = HIDDevice::GetHIDCapabilities(v20, v21);
      v10 = v21[0];
      DeviceId = HIDCapabilities;
      v8 = 0LL;
    }
    else
    {
      DeviceId = (int)v8;
    }
    if ( DeviceId >= 0 )
    {
      InputReportByteLength = v10->InputReportByteLength;
      v13 = *((_QWORD *)v9 + 4);
      if ( v5 >= InputReportByteLength )
      {
        do
        {
          v19[0] = (char)v8;
          v21[0] = v8;
          InputInfoForReport = GazeHidDevice::GetInputInfoForReport(
                                 v9,
                                 a3,
                                 (unsigned __int16)InputReportByteLength,
                                 (struct InputInfo **)v21,
                                 v19);
          v8 = 0LL;
          if ( InputInfoForReport < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xD5,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
              (const char *)(unsigned int)InputInfoForReport);
            v8 = 0LL;
          }
          if ( v19[0] )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(
                    *((_QWORD *)this + 2),
                    v13);
            v8 = 0LL;
            DeviceId = v15;
            if ( v15 < 0 )
              break;
          }
          if ( v21[0] )
          {
            v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
            v8 = 0LL;
            DeviceId = v16;
            if ( v16 < 0 )
              break;
          }
          v17 = v10->InputReportByteLength;
          v5 -= v17;
          a3 += v17;
          LOWORD(InputReportByteLength) = v10->InputReportByteLength;
        }
        while ( v5 >= (unsigned int)v17 );
      }
    }
  }
  return (unsigned int)DeviceId;
}
