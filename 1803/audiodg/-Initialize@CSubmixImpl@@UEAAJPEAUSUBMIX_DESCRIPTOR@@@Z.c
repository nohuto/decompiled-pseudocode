/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005F00
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140002280 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140002560 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140002F60 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140003300 (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140006B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x1400089A0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009F30 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000A5F0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B290 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FCC4 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140033634 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::Initialize(CSubmixImpl *this, struct SUBMIX_DESCRIPTOR *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rdi
  char *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  _WORD *v10; // rax
  _WORD *v11; // r10
  int v12; // r12d
  unsigned __int64 v13; // rcx
  _WORD *v14; // rdx
  int v15; // r8d
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  signed __int64 v18; // rdi
  __int16 v19; // ax
  unsigned __int64 v20; // rsi
  LPVOID v21; // rbx
  void *v22; // rcx
  unsigned int v23; // eax
  void **v24; // rdi
  LPVOID v25; // rbx
  void *v26; // rcx
  HRESULT Instance; // ebx
  __int64 v28; // rcx
  char *v29; // rdi
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // edi
  CPipeInstance *v33; // rdi
  __int64 v34; // rbx
  __int64 i; // rcx
  struct ATL::CAtlPlex *v36; // r8
  __int64 *v37; // r8
  int v38; // edx
  __int64 v39; // rax
  ATL::CAtlException *v41; // rbx
  DWORD LastError; // ebx
  __int64 v43; // rdx
  int v44; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *v46; // rsi
  __int64 v47; // rdx
  int ppv; // [rsp+20h] [rbp-78h]
  LPVOID v49[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v50; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v52; // [rsp+50h] [rbp-48h] BYREF
  int v53; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v49[1] = (LPVOID)-2LL;
  v4 = ValidateSubmixDescriptor(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    return v5;
  }
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 54) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 273) = *((_BYTE *)a2 + 13);
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v6);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 1) = 0LL;
  v7 = (char *)*((_QWORD *)a2 + 4);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&v7[2 * v8] );
  *((_QWORD *)this + 1) = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v12 = -2147024362;
    goto LABEL_94;
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !is_mul_ok(v9, 2uLL) )
  {
    v12 = -2147024362;
    goto LABEL_21;
  }
  v10 = CoTaskMemAlloc(2 * v9);
  v11 = v10;
  *((_QWORD *)this + 1) = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    goto LABEL_94;
  }
  v12 = 0;
  if ( v9 > 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
    goto LABEL_66;
  }
  if ( v8 >= 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
LABEL_66:
    *v10 = 0;
    goto LABEL_21;
  }
  if ( !v7 )
  {
    v7 = (char *)&unk_14006B264;
    v8 = 0LL;
  }
  if ( v9 )
  {
    v13 = v9;
    v14 = v10;
    v15 = 0;
    v16 = 0LL;
    v17 = v8 - v9;
    v18 = v7 - (char *)v10;
    while ( v17 + v13 )
    {
      v19 = *(_WORD *)((char *)v14 + v18);
      if ( !v19 )
        break;
      *v14++ = v19;
      ++v16;
      if ( !--v13 )
      {
        --v14;
        --v16;
        v15 = -2147024774;
        break;
      }
    }
    *v14 = 0;
    v20 = v9 - v16;
    if ( v15 >= 0 && v20 > 1 && 2 * v20 > 2 )
      memset_0(&v11[v16 + 1], 0, 2 * v20 - 2);
  }
LABEL_21:
  if ( v12 < 0 )
  {
LABEL_94:
    v43 = 405LL;
    goto LABEL_95;
  }
  v21 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v22 = (void *)*((_QWORD *)this + 22);
  if ( v21 != v22 )
  {
    if ( v22 )
      CoTaskMemFree(v22);
    *((_QWORD *)this + 22) = v21;
    v22 = v21;
  }
  if ( !v22 )
  {
    v12 = -2147024882;
    v43 = 408LL;
    goto LABEL_95;
  }
  memcpy_0(v22, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  v23 = *((_DWORD *)a2 + 4);
  v24 = (void **)((char *)this + 184);
  if ( v23 )
  {
    v25 = CoTaskMemAlloc(v23);
    v26 = *v24;
    if ( v25 != *v24 )
    {
      if ( v26 )
        CoTaskMemFree(v26);
      *v24 = v25;
      v26 = v25;
    }
    if ( v26 )
    {
      memcpy_0(v26, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      goto LABEL_34;
    }
    v12 = -2147024882;
    v43 = 414LL;
LABEL_95:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12,
      ppv);
    return (unsigned int)v12;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v52 = 0LL;
  LOBYTE(v53) = 1;
  v44 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 22), &v52);
  if ( (_BYTE)v53 )
  {
    DebugInfo = lpCriticalSection->DebugInfo;
    v46 = (struct _RTL_CRITICAL_SECTION_DEBUG *)v52;
    if ( v52 != (struct tWAVEFORMATEX *)lpCriticalSection->DebugInfo )
    {
      if ( DebugInfo )
        CoTaskMemFree(DebugInfo);
      lpCriticalSection->DebugInfo = v46;
    }
  }
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v44,
      ppv);
    return (unsigned int)v44;
  }
LABEL_34:
  if ( !*((_BYTE *)this + 273) )
  {
    v49[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                 0LL,
                 0x17u,
                 &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
                 v49);
    if ( Instance < 0 )
    {
      v47 = 427LL;
    }
    else
    {
      lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 7);
      v28 = *((_QWORD *)this + 22);
      *(float *)&v52 = (float)*(int *)(v28 + 4);
      HIDWORD(v52) = *(unsigned __int16 *)(v28 + 2);
      v53 = *((unsigned __int8 *)a2 + 12);
      v29 = (char *)v49[0];
      v30 = *((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = 0LL;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      v31 = (*(__int64 (__fastcall **)(char *, _QWORD, LPCRITICAL_SECTION *, char *))(*(_QWORD *)v29 + 24LL))(
              v29,
              *((_QWORD *)a2 + 4),
              &lpCriticalSection,
              (char *)this + 224);
      v32 = v31;
      if ( v31 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B3,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v31,
          ppv);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v49);
        return v32;
      }
      if ( !*((_BYTE *)a2 + 84) )
        goto LABEL_45;
      Instance = CPipeInstance::CreateSubmixPipeInstance(
                   *((struct IDeviceGraphObjectCache **)this + 28),
                   a2,
                   (struct CPipeInstance **)this + 3);
      if ( Instance < 0 )
      {
        v47 = 441LL;
      }
      else
      {
        Instance = CPipeInstance::Initialize(*((CPipeInstance **)this + 3));
        if ( Instance < 0 )
        {
          v47 = 442LL;
        }
        else
        {
          v33 = (CPipeInstance *)*((_QWORD *)this + 3);
          Instance = CPipeInstance::CreateAPOConnectionList(v33);
          if ( Instance >= 0 )
          {
            Instance = CPipeInstance::InitializeAPOInterfaces(v33);
            if ( Instance >= 0 )
            {
              Instance = CPipeInstance::CreateAPOConnections(v33);
              if ( Instance >= 0 )
              {
LABEL_45:
                if ( v49[0] )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v49[0] + 16LL))(v49[0]);
                goto LABEL_47;
              }
            }
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38LL,
              &WPP_0100469152753b0964101f667eb0634c_Traceguids,
              (unsigned int)Instance);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::ConnectAPOs", 0xB78u, Instance);
          v47 = 443LL;
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v49);
    return (unsigned int)Instance;
  }
LABEL_47:
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  LOBYTE(v52) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    v34 = SubmixList;
    i = qword_140087770;
    if ( !qword_140087770 )
    {
      v36 = ATL::CAtlPlex::Create(&qword_140087768, (unsigned int)dword_140087778, 0x18uLL);
      if ( !v36 )
        ATL::AtlThrowImpl(-2147024882);
      v37 = (__int64 *)((char *)v36 + 24 * (unsigned int)(dword_140087778 - 1) + 8);
      v38 = dword_140087778 - 1;
      for ( i = qword_140087770; v38 >= 0; --v38 )
      {
        *v37 = i;
        i = (__int64)v37;
        qword_140087770 = (__int64)v37;
        v37 -= 3;
      }
    }
    v49[0] = (LPVOID)i;
    v39 = *(_QWORD *)i;
    *(_QWORD *)(i + 16) = this;
    qword_140087770 = v39;
    *(_QWORD *)(i + 8) = 0LL;
    *(_QWORD *)i = v34;
    ++qword_140087760;
    if ( SubmixList )
      *(_QWORD *)(SubmixList + 8) = i;
    else
      qword_140087758 = i;
    SubmixList = i;
  }
  catch ( ATL::CAtlException *v50 )
  {
    v41 = v50;
    if ( *(_DWORD *)v50 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v49[0]) = *(_DWORD *)v41;
    Instance = (HRESULT)v49[0];
    if ( SLODWORD(v49[0]) < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C4,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)LODWORD(v49[0]),
        ppv);
      if ( (_BYTE)v52 )
        LeaveCriticalSection(lpCriticalSection);
      return (unsigned int)Instance;
    }
  }
  if ( (_BYTE)v52 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
