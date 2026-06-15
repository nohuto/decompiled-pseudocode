/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140007700
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140007950 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140012250 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140014890 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003BD2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1400404C4 (-Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  __int64 v4; // rdi
  HRESULT v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, _QWORD); // rax
  int v10; // r12d
  unsigned int v11; // esi
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  int ppv; // [rsp+20h] [rbp-79h]
  int ppva; // [rsp+20h] [rbp-79h]
  char *v21; // [rsp+28h] [rbp-71h]
  int v22; // [rsp+30h] [rbp-69h]
  int v23; // [rsp+38h] [rbp-61h]
  int v24; // [rsp+40h] [rbp-59h]
  int v25; // [rsp+48h] [rbp-51h]
  int v26; // [rsp+50h] [rbp-49h]
  int v27; // [rsp+58h] [rbp-41h]
  int v28; // [rsp+60h] [rbp-39h]
  int v29; // [rsp+68h] [rbp-31h]
  int v30; // [rsp+70h] [rbp-29h]
  _QWORD v31[2]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v32; // [rsp+90h] [rbp-9h]
  __int128 v33; // [rsp+A0h] [rbp+7h]
  char v34; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  __int64 v36; // [rsp+100h] [rbp+67h] BYREF
  __int64 v37; // [rsp+110h] [rbp+77h] BYREF
  LPVOID v38; // [rsp+118h] [rbp+7Fh] BYREF

  v31[1] = -2LL;
  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( *(_DWORD *)(v6 + 40) == 2 )
      break;
LABEL_11:
    if ( !v4 )
      return 0LL;
  }
  v36 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)&v32 = &v36;
  *((_QWORD *)&v32 + 1) = this;
  v33 = v32;
  v34 = 1;
  v7 = *(_QWORD *)(v36 + 40);
  v31[0] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_QWORD *)this + 18);
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 56LL);
  if ( *((_DWORD *)this + 3) == 1 )
  {
    ppv = 1;
    v10 = v9(v8, a2, v7, 0LL);
    if ( v10 < 0 )
    {
      v15 = v36;
      v30 = *(unsigned __int8 *)(v36 + 23);
      v29 = *(unsigned __int8 *)(v36 + 22);
      v16 = 2991LL;
      goto LABEL_27;
    }
    goto LABEL_8;
  }
  ppv = 0;
  v10 = v9(v8, a2, v7, 0LL);
  if ( v10 >= 0 )
  {
LABEL_8:
    v11 = *(_DWORD *)(v36 + 4);
    if ( v11 )
    {
      v13 = *((_QWORD *)this + 23);
      v38 = 0LL;
      v37 = 0LL;
      if ( (unsigned int)GetClassFromEndpointId(v13) != 3 )
      {
        v5 = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &v38);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v38 + 40LL))(v38, v13, &v37);
          if ( v5 >= 0 )
          {
            LOBYTE(v14) = 1;
            v5 = TrackSystemEffectBehavior(v37, v11, v14, 0LL);
          }
        }
      }
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      if ( v38 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v38 + 16LL))(v38);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBBD,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v5,
          ppv);
      v5 = 0;
    }
    v34 = 0;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_11;
  }
  v15 = v36;
  v30 = *(unsigned __int8 *)(v36 + 23);
  v29 = *(unsigned __int8 *)(v36 + 22);
  v16 = 2998LL;
LABEL_27:
  v28 = *(unsigned __int8 *)(v15 + 21);
  v27 = *(unsigned __int8 *)(v15 + 20);
  v26 = *(unsigned __int8 *)(v15 + 19);
  v25 = *(unsigned __int8 *)(v15 + 18);
  v24 = *(unsigned __int16 *)(v15 + 16);
  v23 = *(unsigned __int16 *)(v15 + 14);
  v22 = *(unsigned __int16 *)(v15 + 12);
  LODWORD(v21) = *(_DWORD *)(v15 + 8);
  wil::details::in1diag3::Return_HrMsg_NoOriginate(
    retaddr,
    (void *)v16,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v10,
    (int)"Activate failed for {%08X-%04X-%04X-%04X-%02X%02X%02X%02X%02X%02X}",
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v31);
  v17 = *(unsigned int *)(v36 + 4);
  if ( (_DWORD)v17 )
  {
    v18 = TrackSystemEffectBehavior(*((_QWORD *)this + 23), v17, 0LL, 0LL);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBA3,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v18,
        ppva);
  }
  return (unsigned int)v10;
}
