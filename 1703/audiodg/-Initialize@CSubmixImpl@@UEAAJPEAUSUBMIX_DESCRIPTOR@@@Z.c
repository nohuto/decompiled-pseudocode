/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x1400022A0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140002580 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140003F00 (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ??$out_param@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@0@AEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x140003F70 (--$out_param@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140009850 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000ADE0 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000B350 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000BAE0 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ??_ECProcessNode@@UEAAPEAXI@Z @ 0x14000E260 (--_ECProcessNode@@UEAAPEAXI@Z.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012AD0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140034F50 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  unsigned int v13; // r13d
  unsigned __int64 v14; // rcx
  _WORD *v15; // rdx
  int v16; // r8d
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  signed __int64 v19; // rdi
  __int16 v20; // ax
  unsigned __int64 v21; // rsi
  LPVOID v22; // rbx
  void *v23; // rcx
  void *v24; // rcx
  unsigned int v25; // eax
  LPVOID v26; // rbx
  void *v27; // rcx
  void *v28; // rcx
  HRESULT Instance; // ebx
  __int64 v30; // rcx
  char *v31; // rdi
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rbx
  _QWORD *v35; // rdi
  _QWORD *v36; // r9
  CProcessNode *v37; // r14
  __int64 *v38; // r10
  CPipeInstance *v39; // rdi
  __int64 v40; // rbx
  __int64 i; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 *v44; // rax
  int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  void *(__fastcall *v50)(CProcessNode *__hidden, unsigned int); // rax
  ATL::CAtlException *v52; // rbx
  DWORD LastError; // ebx
  __int64 v54; // rax
  int v55; // ebx
  struct _RTL_CRITICAL_SECTION_DEBUG *v56; // rdi
  LPCRITICAL_SECTION v57; // rsi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  int ppv; // [rsp+20h] [rbp-78h]
  LPVOID v62[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v63; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v65; // [rsp+50h] [rbp-48h]
  int v66; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v62[1] = (LPVOID)-2LL;
  v4 = ValidateSubmixDescriptor(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18A,
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
    v13 = -2147024362;
    goto LABEL_127;
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !is_mul_ok(v9, 2uLL) )
  {
    v12 = -2147024362;
    v13 = -2147024362;
    goto LABEL_21;
  }
  v10 = CoTaskMemAlloc(2 * v9);
  v11 = v10;
  *((_QWORD *)this + 1) = v10;
  if ( !v10 )
  {
    v13 = -2147024882;
    goto LABEL_127;
  }
  v12 = 0;
  v13 = 0;
  if ( v9 > 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
    goto LABEL_85;
  }
  if ( v8 >= 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
LABEL_85:
    *v10 = 0;
    goto LABEL_21;
  }
  if ( !v7 )
  {
    v7 = (char *)&unk_14006B308;
    v8 = 0LL;
  }
  if ( v9 )
  {
    v14 = v9;
    v15 = v10;
    v16 = 0;
    v17 = 0LL;
    v18 = v8 - v9;
    v19 = v7 - (char *)v10;
    while ( v14 + v18 )
    {
      v20 = *(_WORD *)((char *)v15 + v19);
      if ( !v20 )
        break;
      *v15++ = v20;
      ++v17;
      if ( !--v14 )
      {
        --v15;
        --v17;
        v16 = -2147024774;
        break;
      }
    }
    *v15 = 0;
    v21 = v9 - v17;
    if ( v16 >= 0 && v21 > 1 && 2 * v21 > 2 )
      memset(&v11[v17 + 1], 0, 2 * v21 - 2);
  }
LABEL_21:
  if ( v12 < 0 )
  {
LABEL_127:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x192,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v13,
      ppv);
    return v13;
  }
  v22 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v23 = (void *)*((_QWORD *)this + 22);
  if ( v22 != v23 )
  {
    if ( v23 )
      CoTaskMemFree(v23);
    *((_QWORD *)this + 22) = v22;
  }
  v24 = (void *)*((_QWORD *)this + 22);
  if ( !v24 )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x195,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      ppv);
    return v13;
  }
  memcpy_0(v24, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  v25 = *((_DWORD *)a2 + 4);
  if ( v25 )
  {
    v26 = CoTaskMemAlloc(v25);
    v27 = (void *)*((_QWORD *)this + 23);
    if ( v26 != v27 )
    {
      if ( v27 )
        CoTaskMemFree(v27);
      *((_QWORD *)this + 23) = v26;
    }
    v28 = (void *)*((_QWORD *)this + 23);
    if ( v28 )
    {
      memcpy_0(v28, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      goto LABEL_34;
    }
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      ppv);
    return v13;
  }
  v54 = wil::out_param<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
          (__int64)&lpCriticalSection,
          (__int64)this + 184);
  v55 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 22), (struct tWAVEFORMATEX **)(v54 + 8));
  if ( (_BYTE)v66 )
  {
    v56 = v65;
    v57 = lpCriticalSection;
    DebugInfo = lpCriticalSection->DebugInfo;
    if ( v65 != lpCriticalSection->DebugInfo )
    {
      if ( DebugInfo )
        CoTaskMemFree(DebugInfo);
      v57->DebugInfo = v56;
    }
  }
  if ( v55 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v55,
      ppv);
    return (unsigned int)v55;
  }
LABEL_34:
  if ( *((_BYTE *)this + 273) )
    goto LABEL_54;
  v62[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
               0LL,
               0x17u,
               &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
               v62);
  if ( Instance < 0 )
  {
    v59 = 424LL;
    goto LABEL_96;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 7);
  v30 = *((_QWORD *)this + 22);
  *(float *)&v65 = (float)*(int *)(v30 + 4);
  HIDWORD(v65) = *(unsigned __int16 *)(v30 + 2);
  v66 = *((unsigned __int8 *)a2 + 12);
  v31 = (char *)v62[0];
  v32 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v33 = (*(__int64 (__fastcall **)(char *, _QWORD, LPCRITICAL_SECTION *, char *))(*(_QWORD *)v31 + 24LL))(
          v31,
          *((_QWORD *)a2 + 4),
          &lpCriticalSection,
          (char *)this + 224);
  if ( v33 < 0 )
  {
    v60 = 432LL;
LABEL_99:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v60,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v33,
      ppv);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v62);
    return (unsigned int)v33;
  }
  if ( *((_BYTE *)a2 + 84) )
  {
    Instance = CPipeInstance::CreateSubmixPipeInstance(
                 *((struct IDeviceGraphObjectCache **)this + 28),
                 a2,
                 (struct CPipeInstance **)this + 3);
    if ( Instance < 0 )
    {
      v59 = 438LL;
    }
    else
    {
      v34 = *((_QWORD *)this + 3);
      if ( (*(_QWORD *)v34 || *(_DWORD *)(v34 + 8))
        && (*(_DWORD *)(v34 + 112) == 3 || *(_DWORD *)(v34 + 128) || (*(_BYTE *)(v34 + 132) & 8) != 0) )
      {
        v33 = CPipeInstance::ResolveFormatConflictsLeftRight(*((CPipeInstance **)this + 3));
        if ( v33 < 0 )
          goto LABEL_108;
      }
      else
      {
        v33 = CPipeInstance::ResolveFormatConflictsRightLeft(*((CPipeInstance **)this + 3));
        if ( v33 < 0 )
        {
LABEL_108:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              36LL,
              &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
              (unsigned int)v33);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::Initialize", 0x94Eu, v33);
          v60 = 439LL;
          goto LABEL_99;
        }
      }
      v35 = *(_QWORD **)(v34 + 24);
      while ( v35 )
      {
        v36 = v35;
        v37 = (CProcessNode *)v35[2];
        v38 = v35 + 1;
        v35 = (_QWORD *)v35[1];
        if ( *((_DWORD *)v37 + 10) == 4 )
        {
          v47 = *v36;
          if ( v36 == *(_QWORD **)(v34 + 16) )
            *(_QWORD *)(v34 + 16) = v47;
          else
            *v35 = v47;
          v48 = *v38;
          if ( v36 == *(_QWORD **)(v34 + 24) )
            *(_QWORD *)(v34 + 24) = v48;
          else
            *(_QWORD *)(*v36 + 8LL) = v48;
          *v36 = *(_QWORD *)(v34 + 48);
          *(_QWORD *)(v34 + 48) = v36;
          if ( (*(_QWORD *)(v34 + 32))-- == 1LL )
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(v34 + 16);
          v50 = **(void *(__fastcall ***)(CProcessNode *__hidden, unsigned int))v37;
          if ( v50 == CProcessNode::`vector deleting destructor' )
            CProcessNode::`vector deleting destructor'(v37, 1u);
          else
            v50(v37, 1u);
        }
      }
      v33 = CPipeInstance::FixupStreamPipe((CPipeInstance *)v34);
      if ( v33 < 0 )
        goto LABEL_108;
      v39 = (CPipeInstance *)*((_QWORD *)this + 3);
      Instance = CPipeInstance::CreateAPOConnectionList(v39);
      if ( Instance >= 0 )
      {
        Instance = CPipeInstance::InitializeAPOInterfaces(v39);
        if ( Instance >= 0 )
        {
          Instance = CPipeInstance::CreateAPOConnections(v39);
          if ( Instance >= 0 )
            goto LABEL_52;
        }
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          40LL,
          &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
          (unsigned int)Instance);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::ConnectAPOs", 0xB1Du, Instance);
      v59 = 440LL;
    }
LABEL_96:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v59,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v62);
    return (unsigned int)Instance;
  }
LABEL_52:
  if ( v62[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v62[0] + 16LL))(v62[0]);
LABEL_54:
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  LOBYTE(v65) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    v40 = SubmixList;
    i = qword_140085770;
    if ( qword_140085770 )
    {
LABEL_63:
      v62[0] = (LPVOID)i;
      v46 = *(_QWORD *)i;
      *(_QWORD *)(i + 16) = this;
      qword_140085770 = v46;
      *(_QWORD *)(i + 8) = 0LL;
      *(_QWORD *)i = v40;
      ++qword_140085760;
      if ( SubmixList )
        *(_QWORD *)(SubmixList + 8) = i;
      else
        qword_140085758 = i;
      SubmixList = i;
      goto LABEL_134;
    }
    if ( dword_140085778 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_140085778 < 0x18 )
        goto LABEL_121;
      v42 = 24LL * (unsigned int)dword_140085778;
    }
    else
    {
      v42 = 0LL;
    }
    if ( (unsigned __int64)~v42 >= 8 )
    {
      v43 = malloc(v42 + 8);
      if ( v43 )
      {
        *v43 = qword_140085768;
        qword_140085768 = (__int64)v43;
        v44 = &v43[3 * (unsigned int)(dword_140085778 - 1) + 1];
        v45 = dword_140085778 - 1;
        for ( i = qword_140085770; v45 >= 0; --v45 )
        {
          *v44 = i;
          i = (__int64)v44;
          qword_140085770 = (__int64)v44;
          v44 -= 3;
        }
        goto LABEL_63;
      }
    }
LABEL_121:
    ATL::AtlThrowImpl(-2147024882);
  }
  catch ( ATL::CAtlException *v63 )
  {
    v52 = v63;
    if ( *(_DWORD *)v63 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v62[0]) = *(_DWORD *)v52;
    Instance = (HRESULT)v62[0];
    if ( SLODWORD(v62[0]) < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1C1,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)LODWORD(v62[0]),
        ppv);
      if ( (_BYTE)v65 )
        LeaveCriticalSection(lpCriticalSection);
      return (unsigned int)Instance;
    }
  }
LABEL_134:
  if ( (_BYTE)v65 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
