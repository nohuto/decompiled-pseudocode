/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18001FB34
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180015990 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18001EE28 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18002376C (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionInstanceId::Copy(
        CAudioSessionInstanceId *this,
        const struct CAudioSessionInstanceId *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // r14
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-10h] BYREF
  int v12; // [rsp+40h] [rbp+8h]

  v4 = CAudioEndpointId::Copy(this, a2);
  if ( v4 < 0
    || (*((_DWORD *)this + 14) = *((_DWORD *)a2 + 14),
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15),
        *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16),
        v4 = CAppAudioSessionId::Copy(
               (CAudioSessionInstanceId *)((char *)this + 8),
               (const struct CAudioSessionInstanceId *)((char *)a2 + 8)),
        v4 < 0) )
  {
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Copy", 0x395u, v4);
    return (unsigned int)v4;
  }
  v4 = 0;
  try
  {
    v5 = *((_QWORD *)a2 + 9);
    v6 = (_QWORD *)(v5 - 24);
    v7 = (volatile signed __int32 *)(*((_QWORD *)this + 9) - 24LL);
    if ( (volatile signed __int32 *)(v5 - 24) != v7 )
    {
      if ( *((int *)v7 + 4) >= 0 && *v6 == *(_QWORD *)v7 )
      {
        v8 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v6);
        if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
        *((_QWORD *)this + 9) = v8 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 72, v5, *(unsigned int *)(v5 - 16));
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
