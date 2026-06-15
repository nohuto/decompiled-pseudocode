/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180031D94
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180034D70 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180009D40 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x1800164CC (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Copy(const void **this, char **a2)
{
  int v4; // ebx
  char *v5; // rdx
  char *v6; // rcx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // r14
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-10h] BYREF
  int v12; // [rsp+40h] [rbp+8h]

  v4 = CAudioEndpointId::Copy((CAudioEndpointId *)this, (const struct CAudioEndpointId *)a2);
  if ( v4 < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        v4 = CAppAudioSessionId::Copy((CAppAudioSessionId *)(this + 1), (const struct CAppAudioSessionId *)(a2 + 1)),
        v4 < 0) )
  {
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Copy", 0x399u, v4);
    return (unsigned int)v4;
  }
  v4 = 0;
  try
  {
    v5 = a2[9];
    v6 = v5 - 24;
    v7 = (volatile signed __int32 *)((char *)this[9] - 24);
    if ( v5 - 24 != (char *)v7 )
    {
      if ( *((int *)v7 + 4) >= 0 && *(_QWORD *)v6 == *(_QWORD *)v7 )
      {
        v8 = ATL::CSimpleStringT<unsigned short,0>::CloneData((__int64)v6);
        if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
        this[9] = (const void *)(v8 + 24);
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(this + 9, v5, *((unsigned int *)v5 - 4));
      }
    }
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v12 = *(_DWORD *)v10;
    v4 = *(_DWORD *)v10;
    if ( v12 < 0 )
      goto LABEL_13;
  }
  return (unsigned int)v4;
}
