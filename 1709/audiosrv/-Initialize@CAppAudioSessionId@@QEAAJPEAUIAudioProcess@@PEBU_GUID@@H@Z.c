/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x180014208
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800176CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x1800142B0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAppAudioSessionId::Initialize(GUID *this, struct IAudioProcess *a2, const struct _GUID *a3, int a4)
{
  __int64 v7; // rax
  GUID v8; // xmm0
  int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( a4 )
  {
    if ( !a3 )
      goto LABEL_11;
    v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v7 )
    {
LABEL_11:
      v9 = -2147024809;
LABEL_21:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v9);
      return (unsigned int)v9;
    }
  }
  if ( a3 )
    v8 = *a3;
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  this[1] = v8;
  if ( !a4 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    v12 = -1LL;
    if ( v11 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(v11 + 2 * v13) );
    }
    else
    {
      LODWORD(v13) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(this->Data4, v11, (unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v14 )
    {
      do
        ++v12;
      while ( *(_WORD *)(v14 + 2 * v12) );
    }
    else
    {
      LODWORD(v12) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(this, v14, (unsigned int)v12);
  }
  *(_DWORD *)this[2].Data4 = a4;
  v9 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)this);
  if ( v9 < 0 )
    goto LABEL_21;
  return (unsigned int)v9;
}
