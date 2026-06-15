/*
 * XREFs of ?GetHFPRenderDevice@AudioDeviceMgr@@UEAAJPEAPEAUIEndpointDevice@@@Z @ 0x1800E7440
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x1800E6BF4 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::GetHFPRenderDevice(AudioDeviceMgr *this, struct IEndpointDevice **a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    ATL::CComPtrBase<IEndpointDevice>::CopyTo((_QWORD *)this + 11, a2);
  else
    return (unsigned int)-2147467261;
  return v2;
}
