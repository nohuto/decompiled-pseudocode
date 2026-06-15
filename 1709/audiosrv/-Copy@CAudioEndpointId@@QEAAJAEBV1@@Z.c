/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180013438
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180017650 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, const struct CAudioEndpointId *a2)
{
  unsigned int v2; // ebx
  ATL::CAtlException *v4; // [rsp+28h] [rbp-10h] BYREF
  int v5; // [rsp+40h] [rbp+8h]

  v2 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=(this);
  }
  catch ( ATL::CAtlException *v4 )
  {
    __eh34_catch_handler_absent(0, 0, CAudioEndpointId::Copy_::_1_::catch_0);
    v2 = v5;
    if ( v5 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Copy", 0x9Du, v5);
  }
  return v2;
}
