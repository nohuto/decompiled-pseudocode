/*
 * XREFs of ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400534F0
 * Callers:
 *     ?UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z @ 0x1400534B0 (-UpdateRegistry@CCrossProcessClientInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x1400534C0 (-UpdateRegistry@CCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z @ 0x1400534D0 (-UpdateRegistry@CCrossProcessServerInputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z @ 0x1400534E0 (-UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x140058DE0 (-UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z.c)
 *     ?UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z @ 0x140058DF0 (-UpdateRegistry@CSpatialCrossProcessServerInputEndpoint@@SAJH@Z.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x14001CFB4 (__report_rangecheckfailure.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140045BEC (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14004A260 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x140050554 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x140050CE0 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x1400529B0 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x1400538C4 (-ocslen@@YAHPEBG@Z.c)
 *     memcpy_s @ 0x1400538DC (memcpy_s.c)
 */

__int64 __fastcall ATL::CAtlModule::UpdateRegistryFromResourceS(
        ATL::CAtlModule *this,
        unsigned __int16 a2,
        int a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  CAudioDGModule *v4; // rbx
  int v7; // eax
  __int64 v8; // rax
  int Error; // ebx
  HMODULE v10; // rbx
  DWORD ModuleFileNameW; // eax
  WCHAR *v12; // rdx
  unsigned int i; // ecx
  unsigned __int16 v14; // r8
  unsigned __int16 *v15; // r8
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // eax
  _QWORD *v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  struct _RTL_CRITICAL_SECTION v25; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+88h] [rbp-78h]
  WCHAR Filename[264]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 Source[520]; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned __int16 v29; // [rsp+6B0h] [rbp+5B0h] BYREF
  _BYTE Destination[1054]; // [rsp+6B2h] [rbp+5B2h] BYREF

  v4 = ATL::_pAtlModule;
  v23[0] = &ATL::CRegObject::`vftable';
  v23[1] = 0LL;
  v23[2] = 0LL;
  v24 = 0;
  memset(&v25, 0, sizeof(v25));
  v26 = 0;
  v7 = ATL::CComCriticalSection::Init(&v25);
  if ( v7 < 0 )
  {
    Error = v7;
    goto LABEL_29;
  }
  v8 = *(_QWORD *)v4;
  v26 = 1;
  Error = (*(__int64 (__fastcall **)(CAudioDGModule *, _QWORD *))(v8 + 40))(v4, v23);
  if ( Error >= 0 )
  {
    v10 = hModule;
    v21 = 0LL;
    ModuleFileNameW = GetModuleFileNameW(hModule, Filename, 0x104u);
    if ( ModuleFileNameW )
    {
      if ( ModuleFileNameW == 260 )
      {
        ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v21);
        Error = -2147024774;
        goto LABEL_29;
      }
      v12 = Filename;
      for ( i = 0; i < 0x207; ++i )
      {
        v14 = *v12;
        if ( !*v12 )
          break;
        Source[i] = v14;
        if ( v14 == 39 && i < 0x206 )
          Source[++i] = 39;
        ++v12;
      }
      Source[i] = 0;
      if ( !v10 || v10 == GetModuleHandleW(0LL) )
      {
        v29 = 34;
        v16 = ocslen(Source);
        if ( memcpy_s(Destination, 0x414uLL, Source, 2LL * (v16 + 1)) )
        {
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v21);
          Error = -2147467259;
          goto LABEL_29;
        }
        v17 = ocslen(&v29);
        *(_WORD *)&Destination[2 * v17 - 2] = 34;
        v18 = 2LL * v17 + 2;
        if ( v18 >= 0x418 )
          _report_rangecheckfailure();
        *(_WORD *)&Destination[v18 - 2] = 0;
        v15 = &v29;
      }
      else
      {
        v15 = Source;
      }
      Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v23, L"Module", v15);
      if ( Error >= 0 )
      {
        Error = ATL::CRegObject::AddReplacement((ATL::CRegObject *)v23, L"Module_Raw", Source);
        if ( Error >= 0 )
        {
          v22 = 0LL;
          if ( a3 )
            v19 = ATL::CRegObject::RegisterFromResource(
                    (ATL::CRegObject *)v23,
                    Filename,
                    (const unsigned __int16 *)a2,
                    L"REGISTRY",
                    1);
          else
            v19 = ATL::CRegObject::RegisterFromResource(
                    (ATL::CRegObject *)v23,
                    Filename,
                    (const unsigned __int16 *)a2,
                    L"REGISTRY",
                    0);
          Error = v19;
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v22);
        }
      }
    }
    else
    {
      Error = ATL::AtlHresultFromLastError();
    }
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(&v21);
  }
LABEL_29:
  ATL::CRegObject::~CRegObject((ATL::CRegObject *)v23);
  return (unsigned int)Error;
}
