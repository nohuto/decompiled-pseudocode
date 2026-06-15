/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180013458
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800176CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E6CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180014880 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800148AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800148E0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r15
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  char *v8; // rcx
  size_t v9; // r8
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+60h] [rbp+8h]

  v2 = a2;
  v4 = 0;
  try
  {
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
      if ( (_DWORD)v5 )
      {
        v6 = *(unsigned int *)(*(_QWORD *)this - 16LL);
        v7 = ((__int64)a2 - *(_QWORD *)this) >> 1;
        if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v5)) < 0 )
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v5);
        v8 = *(char **)this;
        if ( v7 <= v6 )
        {
          a2 = (const unsigned __int16 *)&v8[2 * v7];
          v9 = 2LL * (int)v5;
          if ( !v9 )
            goto LABEL_12;
          if ( v8 && a2 )
          {
            memmove(v8, a2, v9);
            goto LABEL_12;
          }
        }
        else
        {
          v9 = 2LL * (int)v5;
          if ( !v9 )
          {
LABEL_12:
            ATL::CSimpleStringT<unsigned short,0>::SetLength(this, (unsigned int)v5, v9);
            return v4;
          }
          if ( v8 )
          {
            memcpy_0(v8, v2, v9);
            goto LABEL_12;
          }
        }
        *(_DWORD *)_o__errno(v8, a2) = 22;
        invalid_parameter_noinfo();
        goto LABEL_12;
      }
    }
    ATL::CSimpleStringT<unsigned short,0>::Empty(this);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = (int *)v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v11;
    v4 = *v11;
    if ( v13 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Initialize", 0x8Cu, v13);
  }
  return v4;
}
