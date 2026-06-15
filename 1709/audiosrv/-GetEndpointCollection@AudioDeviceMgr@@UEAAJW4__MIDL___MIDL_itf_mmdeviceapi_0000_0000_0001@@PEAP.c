/*
 * XREFs of ?GetEndpointCollection@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x1800E73F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x1800E6BF4 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::GetEndpointCollection(
        AudioDeviceMgr *this,
        unsigned int a2,
        struct IEndpointCollection **a3)
{
  unsigned int v3; // ebx
  char *v4; // rcx

  v3 = 0;
  if ( a2 <= 1 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      if ( a2 )
        v4 = (char *)this + 72;
      else
        v4 = (char *)this + 64;
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(v4, a3);
    }
    else
    {
      return (unsigned int)-2147467261;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
