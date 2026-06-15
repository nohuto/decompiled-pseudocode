/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x1800141A8
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180017650 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CAppAudioSessionId::Copy(
        CAppAudioSessionId *this,
        const struct CAppAudioSessionId *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        CAppAudioSessionId *a12,
        const struct CAppAudioSessionId *a13,
        int a14)
{
  const struct CAppAudioSessionId *v14; // rdi
  CAppAudioSessionId *v15; // rsi
  unsigned int v16; // ebx
  ATL::CAtlException *v18; // rbx
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v21; // [rsp+30h] [rbp-28h] BYREF
  ATL::CAtlException *v22; // [rsp+38h] [rbp-20h] BYREF
  int v25; // [rsp+70h] [rbp+18h]
  int v26; // [rsp+70h] [rbp+18h]

  v14 = a2;
  v15 = this;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=(this);
  }
  catch ( ATL::CAtlException *v20 )
  {
    __eh34_catch_handler_absent(0, 0, CAppAudioSessionId::Copy_::_1_::catch_0);
    v16 = a14;
    if ( a14 < 0 )
      goto LABEL_9;
    v15 = a12;
    v14 = a13;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=((char *)v15 + 8);
  }
  catch ( ATL::CAtlException *v21 )
  {
    v18 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    v25 = *(_DWORD *)v18;
    v16 = *(_DWORD *)v18;
    if ( v25 < 0 )
      goto LABEL_9;
    v15 = this;
    v14 = a2;
  }
  *((_DWORD *)v15 + 10) = *((_DWORD *)v14 + 10);
  v16 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::operator=((char *)v15 + 32);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v19 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v26 = *(_DWORD *)v19;
    v16 = *(_DWORD *)v19;
    if ( v26 < 0 )
LABEL_9:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Copy", 0x1D6u, v16);
  }
  return v16;
}
