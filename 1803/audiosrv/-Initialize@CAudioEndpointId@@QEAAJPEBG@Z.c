/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180016560
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800052DC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800B768C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180030B4C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(
        CAudioEndpointId *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4)
{
  const unsigned __int16 *v4; // rdi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  char *v10; // rcx
  size_t v11; // r8
  int *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+50h] [rbp+8h]

  v4 = a2;
  v6 = 0;
  try
  {
    if ( !a2 )
      goto LABEL_22;
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    if ( !(_DWORD)v7 )
    {
LABEL_22:
      ATL::CSimpleStringT<unsigned short,0>::Empty(this);
      return v6;
    }
    v8 = *(unsigned int *)(*(_QWORD *)this - 16LL);
    v9 = ((__int64)a2 - *(_QWORD *)this) >> 1;
    if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v7)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v7);
    v10 = *(char **)this;
    v11 = 2LL * (int)v7;
    if ( v9 <= v8 )
    {
      a2 = (const unsigned __int16 *)&v10[2 * v9];
      if ( !v11 )
        goto LABEL_12;
      if ( v10 && a2 )
      {
        memmove(v10, a2, v11);
        goto LABEL_12;
      }
    }
    else
    {
      if ( !v11 )
        goto LABEL_12;
      if ( v10 )
      {
        memcpy_0(v10, v4, v11);
        goto LABEL_12;
      }
    }
    *(_DWORD *)_o__errno(v10, a2, v11, a4) = 22;
    invalid_parameter_noinfo();
LABEL_12:
    if ( (int)v7 < 0 || (int)v7 > *(_DWORD *)(*(_QWORD *)this - 12LL) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*(_QWORD *)this - 16LL) = v7;
    *(_WORD *)(*(_QWORD *)this + 2LL * (int)v7) = 0;
  }
  catch ( ATL::CAtlException *v14 )
  {
    v13 = (int *)v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    v15 = *v13;
    v6 = *v13;
    if ( v15 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 0x8Cu, v15);
  }
  return v6;
}
