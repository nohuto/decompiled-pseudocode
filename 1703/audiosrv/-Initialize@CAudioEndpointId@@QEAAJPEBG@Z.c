/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800237F0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18001FBF4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180023600 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(
        CAudioEndpointId *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4)
{
  const unsigned __int16 *v4; // r12
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  char *v10; // rcx
  __int64 v11; // r15
  int *v13; // rbx
  ATL::CAtlException *v14; // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+60h] [rbp+8h]

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
      ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this);
      return v6;
    }
    v8 = *(unsigned int *)(*(_QWORD *)this - 16LL);
    v9 = ((__int64)a2 - *(_QWORD *)this) >> 1;
    if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v7)) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)this, v7, a3, a4);
    v10 = *(char **)this;
    if ( v9 <= v8 )
    {
      a2 = (const unsigned __int16 *)&v10[2 * v9];
      v11 = 2LL * (int)v7;
      if ( !v11 )
        goto LABEL_12;
      if ( v10 && a2 )
      {
        memmove(v10, a2, 2LL * (int)v7);
        goto LABEL_12;
      }
    }
    else
    {
      v11 = 2LL * (int)v7;
      if ( !v11 )
        goto LABEL_12;
      if ( v10 )
      {
        memcpy_0(v10, v4, 2LL * (int)v7);
        goto LABEL_12;
      }
    }
    *(_DWORD *)_o__errno(v10, a2, a3, a4) = 22;
    invalid_parameter_noinfo();
LABEL_12:
    if ( (int)v7 < 0 || (int)v7 > *(_DWORD *)(*(_QWORD *)this - 12LL) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*(_QWORD *)this - 16LL) = v7;
    *(_WORD *)(v11 + *(_QWORD *)this) = 0;
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
