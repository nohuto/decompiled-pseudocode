/*
 * XREFs of ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18002376C
 * Callers:
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18001FB34 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioEndpointId::Copy(CAudioEndpointId *this, char **a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  char *v6; // rdx
  char *v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r14
  int *v11; // rbx
  ATL::CAtlException *v12; // [rsp+28h] [rbp-10h] BYREF
  int v13; // [rsp+40h] [rbp+8h]

  v5 = 0;
  try
  {
    v6 = *a2;
    v7 = v6 - 24;
    v8 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
    if ( v6 - 24 != (char *)v8 )
    {
      if ( *((int *)v8 + 4) >= 0 && *(_QWORD *)v7 == *(_QWORD *)v8 )
      {
        v9 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v7);
        if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8, v8);
        *(_QWORD *)this = v9 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(this, v6, *((_DWORD *)v6 - 4), a4);
      }
    }
  }
  catch ( ATL::CAtlException *v12 )
  {
    v11 = (int *)v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v11;
    v5 = *v11;
    if ( v13 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::Copy", 0x9Du, v13);
  }
  return v5;
}
