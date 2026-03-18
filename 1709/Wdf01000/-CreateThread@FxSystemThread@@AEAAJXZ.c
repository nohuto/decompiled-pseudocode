/*
 * XREFs of ?CreateThread@FxSystemThread@@AEAAJXZ @ 0x1C00A5678
 * Callers:
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00A5A54 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 */

__int64 __fastcall FxSystemThread::CreateThread(FxSystemThread *this)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  void *threadHandle; // [rsp+58h] [rbp+10h] BYREF

  FxObject::AddRef(
    this,
    FxSystemThread::StaticThreadThunk,
    154,
    "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp");
  v2 = PsCreateSystemThread(&threadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FxSystemThread::StaticThreadThunk, this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v3 = ObReferenceObjectByHandle(threadHandle, 0x1FFFFFu, 0LL, 0, &this->m_ThreadPtr, 0LL);
    ZwClose(threadHandle);
  }
  else
  {
    this->m_Initialized = 0;
    WPP_IFR_SF_d(this->m_Globals, 2u, 0x12u, 0xCu, WPP_FxSystemThread_cpp_Traceguids, v2);
    this->Release(
      this,
      FxSystemThread::StaticThreadThunk,
      174,
      "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp");
  }
  return v3;
}
