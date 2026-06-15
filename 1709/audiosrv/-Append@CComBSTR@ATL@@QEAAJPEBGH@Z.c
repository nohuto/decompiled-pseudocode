/*
 * XREFs of ?Append@CComBSTR@ATL@@QEAAJPEBGH@Z @ 0x1800E917C
 * Callers:
 *     ?GetEndpointName@EndpointDevice@@UEAAJPEAPEAG@Z @ 0x1800E9520 (-GetEndpointName@EndpointDevice@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CComBSTR::Append(BSTR *this, const unsigned __int16 *a2, int a3)
{
  __int64 v4; // r12
  OLECHAR *v5; // rcx
  signed int v6; // eax
  __int64 v7; // r15
  signed int v8; // r14d
  BSTR v10; // rbx
  __int64 v11; // rdx
  BSTR v12; // r13
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  OLECHAR *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = a3;
  v5 = *this;
  if ( !v5 || a3 )
  {
    v6 = SysStringLen(v5);
    v7 = v6;
    v8 = v6 + v4;
    if ( v6 + (int)v4 < v6 )
      return 2147942414LL;
    v10 = SysAllocStringLen(0LL, v8);
    if ( !v10 )
      return 2147942414LL;
    if ( !SysStringLen(*this) )
      goto LABEL_11;
    v12 = *this;
    v13 = 2LL * v8;
    v14 = 2 * v7;
    if ( !(2 * v7) )
      goto LABEL_11;
    if ( v12 && v13 >= v14 )
    {
      memcpy_0(v10, *this, 2 * v7);
LABEL_11:
      v15 = &v10[v7];
      if ( 2 * v4 )
      {
        if ( !v15 )
        {
          *(_DWORD *)_o__errno(0LL, v11) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memcpy_0(v15, L":", 2 * v4);
      }
      v10[v8] = 0;
      SysFreeString(*this);
      *this = v10;
      return 0LL;
    }
    memset(v10, 0, 2LL * v8);
    if ( v12 )
    {
      if ( v13 >= v14 )
        goto LABEL_19;
      *(_DWORD *)_o__errno(v17, v16) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v17, v16) = 22;
    }
    invalid_parameter_noinfo();
LABEL_19:
    ATL::AtlThrowImpl(-2147024809);
  }
  return 0LL;
}
