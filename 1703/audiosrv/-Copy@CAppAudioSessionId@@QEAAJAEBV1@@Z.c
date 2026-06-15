/*
 * XREFs of ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18001EE28
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18001FB34 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppAudioSessionId::Copy(CAppAudioSessionId *this, const struct CAppAudioSessionId *a2)
{
  const struct CAppAudioSessionId *v2; // rsi
  CAppAudioSessionId *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r15
  unsigned int v12; // ebx
  _QWORD *v13; // r14
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rsi
  ATL::CAtlException *v19; // rbx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v23; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v24; // [rsp+38h] [rbp-30h] BYREF
  int v27; // [rsp+80h] [rbp+18h]
  int v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+80h] [rbp+18h]

  v2 = a2;
  v3 = this;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  try
  {
    v4 = *(_QWORD *)a2;
    v5 = (_QWORD *)(v4 - 24);
    v6 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
    if ( (volatile signed __int32 *)(v4 - 24) != v6 )
    {
      if ( *((int *)v6 + 4) >= 0 && *v5 == *(_QWORD *)v6 )
      {
        v7 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v5);
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *(_QWORD *)v3 = v7 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v3, v4, *(unsigned int *)(v4 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v22 )
  {
    v19 = v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v27 = *(_DWORD *)v19;
    v12 = *(_DWORD *)v19;
    if ( v27 < 0 )
      goto LABEL_30;
    v3 = this;
    v2 = a2;
  }
  try
  {
    v8 = *((_QWORD *)v2 + 1);
    v9 = (_QWORD *)(v8 - 24);
    v10 = (volatile signed __int32 *)(*((_QWORD *)v3 + 1) - 24LL);
    if ( (volatile signed __int32 *)(v8 - 24) != v10 )
    {
      if ( *((int *)v10 + 4) >= 0 && *v9 == *(_QWORD *)v10 )
      {
        v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v9);
        if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10, v10);
        *((_QWORD *)v3 + 1) = v11 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString((char *)v3 + 8, v8, *(unsigned int *)(v8 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v23 )
  {
    v20 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v28 = *(_DWORD *)v20;
    v12 = *(_DWORD *)v20;
    if ( v28 < 0 )
      goto LABEL_30;
    v3 = this;
    v2 = a2;
  }
  *((_DWORD *)v3 + 10) = *((_DWORD *)v2 + 10);
  v12 = 0;
  try
  {
    v13 = (_QWORD *)((char *)v3 + 32);
    v14 = *((_QWORD *)v2 + 4);
    v15 = (_QWORD *)(v14 - 24);
    v16 = (volatile signed __int32 *)(*((_QWORD *)v3 + 4) - 24LL);
    if ( (volatile signed __int32 *)(v14 - 24) != v16 )
    {
      if ( *((int *)v16 + 4) >= 0 && *v15 == *(_QWORD *)v16 )
      {
        v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v15);
        if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16, v16);
        *v13 = v17 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(v13, v14, *(unsigned int *)(v14 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v24 )
  {
    v21 = v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _o__resetstkoflw();
    v29 = *(_DWORD *)v21;
    v12 = *(_DWORD *)v21;
    if ( v29 < 0 )
LABEL_30:
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Copy", 0x1D6u, v12);
  }
  return v12;
}
