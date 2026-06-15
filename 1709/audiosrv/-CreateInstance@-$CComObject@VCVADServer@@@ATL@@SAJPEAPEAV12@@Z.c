/*
 * XREFs of ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x18002B120
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??0CVADServer@@QEAA@XZ @ 0x180027D84 (--0CVADServer@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18002B200 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComObject<CVADServer>::CreateInstance(CVADServer **a1)
{
  CVADServer **v1; // rsi
  unsigned int v2; // edi
  CVADServer *v3; // rax
  CVADServer *v4; // rbx
  int v5; // eax
  CVADServer *v8; // [rsp+60h] [rbp+18h]

  v1 = a1;
  if ( !a1 )
    return 2147500035LL;
  *a1 = 0LL;
  v2 = -2147024882;
  try
  {
    v3 = (CVADServer *)operator new(0x1C8uLL);
    v4 = v3;
    if ( v3 )
    {
      CVADServer::CVADServer(v3);
      *(_QWORD *)v4 = &ATL::CComObject<CVADServer>::`vftable';
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v4 = 0LL;
    }
    v8 = v4;
  }
  catch ( ... )
  {
    v1 = a1;
    v2 = -2147024882;
    v4 = v8;
  }
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    v5 = ATL::CComCriticalSection::Init((CVADServer *)((char *)v4 + 16));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v4 + 56) = 1;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, v4);
      }
      v5 = 0;
    }
    v2 = 0;
    if ( v5 < 0 )
      v2 = v5;
    _InterlockedDecrement((volatile signed __int32 *)v4 + 2);
    if ( v2 )
    {
      (*(void (__fastcall **)(CVADServer *, __int64))(*(_QWORD *)v4 + 192LL))(v4, 1LL);
      v4 = 0LL;
    }
  }
  *v1 = v4;
  return v2;
}
