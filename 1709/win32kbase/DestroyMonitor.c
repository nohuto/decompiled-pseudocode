/*
 * XREFs of DestroyMonitor @ 0x1C0071210
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0019860 (-GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z.c)
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     HMFreeObject @ 0x1C003E4A0 (HMFreeObject.c)
 *     ??4?$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0061F88 (--4-$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@P.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 *     ??4?$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C00734F8 (--4-$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEA.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00973E0 (RawInputManagerObjectCreateKernelHandle.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C00FFAB4 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall DestroyMonitor(struct tagMONITOR *BaseAddress)
{
  int KernelHandleToRimObj; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagMONITOR *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  PDEVICE_OBJECT v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  HBRUSH v12; // rcx
  HBRUSH *v13; // rdi
  __int64 v14; // rsi
  _QWORD *i; // rdx
  __int64 v16; // r8
  signed __int32 v17[8]; // [rsp+0h] [rbp-38h] BYREF
  HANDLE *p_Handle; // [rsp+20h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
  if ( (gdwMitConfig & 4) != 0 )
  {
    KernelHandleToRimObj = CHidInput::GetKernelHandleToRimObj((CHidInput *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, &Handle);
  }
  else
  {
    if ( !qword_1C01885D8 )
      goto LABEL_5;
    p_Handle = &Handle;
    KernelHandleToRimObj = RawInputManagerObjectCreateKernelHandle(qword_1C01885D8, 3LL, 0LL);
  }
  if ( KernelHandleToRimObj >= 0 )
  {
    rimOnCheckPointerDeviceMonitors(Handle, BaseAddress);
    ZwClose(Handle);
  }
LABEL_5:
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
  if ( BaseAddress == (struct tagMONITOR *)gpMonitorMouse )
    gpMonitorMouse = 0LL;
  v5 = *(struct tagMONITOR **)(gpDispInfo + 96);
  if ( v5 )
  {
    if ( v5 == BaseAddress )
    {
      tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorFirst<tagMONITOR>::operator=(
        gpDispInfo + 96,
        *((_QWORD *)BaseAddress + 7),
        v3,
        v4);
    }
    else
    {
      for ( i = (_QWORD *)((char *)v5 + 56); *i; i = (_QWORD *)(*i + 56LL) )
      {
        if ( (struct tagMONITOR *)*i == BaseAddress )
        {
          v16 = *((_QWORD *)BaseAddress + 7);
          if ( v16 )
            *(_QWORD *)(*(i - 2) + 16LL) = *(_QWORD *)(v16 + 48);
          else
            *(_QWORD *)(*(i - 2) + 16LL) = 0LL;
          *i = v16;
          break;
        }
      }
    }
  }
  v6 = (_QWORD *)(gpDispInfo + 88);
  if ( BaseAddress == *(struct tagMONITOR **)(gpDispInfo + 88) )
    tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorPrimary<tagMONITOR>::operator=(v6, *(_QWORD *)(gpDispInfo + 96));
  *(_QWORD *)(*((_QWORD *)BaseAddress + 5) + 16LL) = 0LL;
  *((_QWORD *)BaseAddress + 7) = 0LL;
  if ( (int)IsUpdateCursorSizesSupported(v6) >= 0 )
    UpdateCursorSizes(v7);
  _InterlockedOr(v17, 0);
  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x16u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionHandleMoveSizeDataOnDestroyMonitorSupported(v8) >= 0 )
    EditionHandleMoveSizeDataOnDestroyMonitor(BaseAddress);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x17u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  result = HMMarkObjectDestroy(BaseAddress);
  if ( (_DWORD)result )
  {
    v12 = (HBRUSH)*((_QWORD *)BaseAddress + 9);
    if ( v12 )
    {
      GreDeleteObject(v12);
      *((_QWORD *)BaseAddress + 9) = 0LL;
    }
    v13 = (HBRUSH *)((char *)BaseAddress + 80);
    v14 = 18LL;
    do
    {
      if ( *v13 )
      {
        GreDeleteObject(*v13);
        *v13 = 0LL;
      }
      ++v13;
      --v14;
    }
    while ( v14 );
    return HMFreeObject(BaseAddress, v10, v11);
  }
  return result;
}
