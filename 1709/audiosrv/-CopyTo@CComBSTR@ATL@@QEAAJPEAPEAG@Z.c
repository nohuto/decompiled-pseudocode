/*
 * XREFs of ?CopyTo@CComBSTR@ATL@@QEAAJPEAPEAG@Z @ 0x1800E92C4
 * Callers:
 *     ?GetAdapterDeviceId@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E9460 (-GetAdapterDeviceId@EndpointDevice@@UEAAJPEAPEAG@Z.c)
 *     ?GetTopologyName@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E96A0 (-GetTopologyName@EndpointDevice@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComBSTR::CopyTo(LPCSTR *this, unsigned __int16 **a2)
{
  CHAR *v5; // rcx
  unsigned __int16 *v6; // rax
  UINT v7; // eax

  if ( !a2 )
    return 2147500035LL;
  v5 = (CHAR *)*this;
  if ( v5 )
  {
    v7 = SysStringByteLen((BSTR)v5);
    v6 = SysAllocStringByteLen(*this, v7);
  }
  else
  {
    v6 = 0LL;
  }
  *a2 = v6;
  if ( v6 || !*this )
    return 0LL;
  else
    return 2147942414LL;
}
