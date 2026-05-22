/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800AD6DC
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800AC908 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x1800ACC54 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800AD1A8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800AD3EC (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800AC0CC (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800AD66C (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  __int64 v7; // rdx
  _OWORD *v8; // r8
  __int64 v9; // r10
  _OWORD *v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rcx
  _OWORD *v20; // r8
  __int64 v21; // r10
  _OWORD *v22; // r9
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  DWORD v31; // eax
  __int64 v32; // r8
  const char *v33; // r9
  unsigned int v34; // r12d
  float v35; // xmm4_4
  __int16 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int16 v39; // r10
  bool v40; // al
  char v41; // cl
  BOOL v42; // r11d
  int v43; // r13d
  int v44; // esi
  int v45; // r14d
  struct tagPOINT v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  DWORD v58; // eax
  __int64 v59; // r8
  DWORD LastError; // eax
  __int64 v61; // r8
  DWORD TickCount; // eax
  __int64 v63; // rdx
  __int64 j; // r8
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r9
  int v68; // eax
  __int16 v69; // ax
  unsigned int k; // r8d
  __int64 v71; // r10
  char *v72; // rcx
  __int64 v73; // [rsp+38h] [rbp-D0h]
  __int64 v74; // [rsp+38h] [rbp-D0h]
  int v75; // [rsp+40h] [rbp-C8h]
  int v76; // [rsp+48h] [rbp-C0h]
  __int64 v77; // [rsp+50h] [rbp-B8h]
  int v78; // [rsp+58h] [rbp-B0h]
  __int64 v79; // [rsp+60h] [rbp-A8h]
  int v80; // [rsp+68h] [rbp-A0h]
  __int64 v81; // [rsp+70h] [rbp-98h]
  int v82; // [rsp+78h] [rbp-90h]
  __int64 v83; // [rsp+80h] [rbp-88h]
  int v84; // [rsp+88h] [rbp-80h]
  __int64 v85; // [rsp+90h] [rbp-78h]
  int v86; // [rsp+98h] [rbp-70h]
  int v87; // [rsp+A8h] [rbp-60h]
  __int64 v88; // [rsp+B0h] [rbp-58h]
  int v89; // [rsp+B8h] [rbp-50h]
  __int64 v90; // [rsp+C0h] [rbp-48h]
  int v91; // [rsp+C8h] [rbp-40h]
  int v92; // [rsp+D8h] [rbp-30h]
  struct tagPOINT v93; // [rsp+E0h] [rbp-28h] BYREF
  _WORD v94[2]; // [rsp+E8h] [rbp-20h] BYREF
  DWORD v95; // [rsp+ECh] [rbp-1Ch]
  _DWORD v96[3]; // [rsp+F0h] [rbp-18h]
  char v97; // [rsp+FFh] [rbp-9h]
  _WORD v98[284]; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v4 = 0LL;
  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  switch ( *(_DWORD *)this )
  {
    case 1:
      memset_0(v94, 0, 0x248uLL);
      TickCount = GetTickCount();
      LOBYTE(v63) = 0;
      v95 = TickCount;
      for ( j = 0LL;
            (unsigned int)(unsigned __int16)j < *((_DWORD *)this + 12);
            v98[v66 + 3] = *(_WORD *)((char *)this + v67 + 148) )
      {
        v65 = (unsigned __int8)v63;
        LOBYTE(v63) = v63 + 1;
        v66 = 28 * v65;
        v67 = 152LL * (unsigned __int16)j;
        v98[28 * v65] = *(_WORD *)((char *)this + v67 + 116);
        v68 = *(_DWORD *)((char *)this + v67 + 124);
        if ( (v68 & 0x10000) != 0 )
        {
          v98[v66 + 1] |= 9u;
        }
        else if ( (v68 & 0x20000) != 0 )
        {
          v98[v66 + 1] |= 0xAu;
        }
        else if ( (v68 & 0x40000) != 0 )
        {
          v98[v66 + 1] |= 4u;
        }
        else if ( (v68 & 2) != 0 )
        {
          v98[v66 + 1] |= 8u;
        }
        else if ( (v68 & 0x8000) != 0 )
        {
          v98[v66 + 1] |= 0x2004u;
        }
        LOWORD(j) = j + 1;
        v98[v66 + 2] = *(_WORD *)((char *)this + v67 + 144);
      }
      v97 = v63;
      if ( (unsigned int)(unsigned __int8)v63 - 1 > 9 )
      {
        v69 = 0;
      }
      else if ( (unsigned __int8)v63 == 1 )
      {
        v69 = 80;
      }
      else
      {
        v69 = 56 * (unsigned __int8)v63 + 24;
      }
      v94[0] = v69;
      if ( (_BYTE)v63 )
        (*((void (__fastcall **)(_WORD *, __int64, __int64))this + 102))(v94, v63, j);
      break;
    case 2:
      if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x3D5, v61, (const char *)LastError);
          JUMPOUT(0x1800ADEDALL);
        }
      }
      break;
    case 3:
      v33 = (const char *)*((unsigned int *)this + 12);
      v34 = 10 * (_DWORD)v33 + 1;
      if ( (unsigned int)((_DWORD)v33 - 1) > 3 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3DE,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v33);
        __debugbreak();
      }
      if ( (_DWORD)v33 )
      {
        v35 = FLOAT_64000_0;
        v36 = 1;
        do
        {
          v37 = (unsigned __int16)(v36 - 1);
          v38 = 152 * v37;
          v39 = 10 * v37;
          v40 = (*((_DWORD *)this + 38 * v37 + 31) & 4) != 0;
          if ( (*((_DWORD *)this + 38 * v37 + 31) & 4) != 0 || (v41 = 0, (*((_BYTE *)this + v38 + 124) & 2) == 0) )
            v41 = 1;
          if ( !v41 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x3E6,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              v33);
            __debugbreak();
          }
          v42 = v40;
          v43 = 100 * v40;
          v76 = *(_DWORD *)((char *)this + v38 + 116);
          v44 = v40 * (int)(float)(v35 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
          v45 = v40 * (int)(float)(v35 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
          if ( *((_DWORD *)this + 22) == 1 )
            v46 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                           this,
                                           (struct tagPOINT)&v93,
                                           *(_QWORD *)((char *)this + v38 + 144));
          else
            v46 = *(struct tagPOINT *)((char *)this + v38 + 152);
          HIDWORD(v77) = v46.x;
          HIDWORD(v79) = v46.y;
          HIDWORD(v85) = v43;
          LODWORD(v77) = 3145729;
          v47 = 3LL * v39;
          LOWORD(v78) = v36;
          *(_QWORD *)&v94[2 * v47] = v77;
          v96[v47] = v78;
          v48 = 3LL * ((unsigned int)v39 + 1);
          LODWORD(v79) = 3211265;
          *(_QWORD *)&v94[2 * v48] = v79;
          LOWORD(v80) = v36;
          v96[v48] = v80;
          LODWORD(v81) = 4325389;
          HIDWORD(v81) = v42;
          v49 = 3LL * ((unsigned int)v39 + 2);
          *(_QWORD *)&v94[2 * v49] = v81;
          LOWORD(v82) = v36;
          v96[v49] = v82;
          LODWORD(v83) = 3276813;
          HIDWORD(v83) = v42;
          v50 = 3LL * ((unsigned int)v39 + 3);
          *(_QWORD *)&v94[2 * v50] = v83;
          LOWORD(v84) = v36;
          v96[v50] = v84;
          LODWORD(v85) = 3145741;
          v51 = 3LL * ((unsigned int)v39 + 4);
          LOWORD(v86) = v36;
          *(_QWORD *)&v94[2 * v51] = v85;
          v96[v51] = v86;
          v52 = 3LL * ((unsigned int)v39 + 5);
          *(_QWORD *)&v94[2 * v52] = 0x10047000DLL;
          LOWORD(v87) = v36;
          v96[v52] = v87;
          LODWORD(v88) = 4718605;
          HIDWORD(v88) = v44;
          v53 = 3LL * ((unsigned int)v39 + 6);
          *(_QWORD *)&v94[2 * v53] = v88;
          LOWORD(v89) = v36;
          v96[v53] = v89;
          LODWORD(v90) = 4784141;
          HIDWORD(v90) = v45;
          v54 = 3LL * ((unsigned int)v39 + 7);
          *(_QWORD *)&v94[2 * v54] = v90;
          LOWORD(v91) = v36;
          v96[v54] = v91;
          v55 = 3LL * ((unsigned int)v39 + 8);
          LOWORD(v92) = v36;
          *(_QWORD *)&v94[2 * v55] = 4128781LL;
          v96[v55] = v92;
          HIDWORD(v73) = v76;
          LOWORD(v75) = v36++;
          LODWORD(v73) = 5308429;
          v56 = 3LL * ((unsigned int)v39 + 9);
          *(_QWORD *)&v94[2 * v56] = v73;
          v96[v56] = v75;
        }
        while ( (unsigned __int16)(v36 - 1) < (unsigned int)v33 );
      }
      HIDWORD(v74) = (unsigned __int16)v33;
      LODWORD(v74) = 5505037;
      LOWORD(v75) = 0;
      v57 = 3LL * (unsigned __int16)(10 * (_WORD)v33);
      *(_QWORD *)&v94[2 * v57] = v74;
      v96[v57] = v75;
      if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v94, v34) )
      {
        v58 = GetLastError();
        if ( v58 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x40C, v59, (const char *)v58);
          __debugbreak();
        }
      }
      break;
    case 4:
      v19 = *((unsigned int *)this + 12);
      if ( (_DWORD)v19 )
      {
        v20 = v94;
        v21 = (unsigned int)v19;
        v22 = (_OWORD *)((char *)this + 112);
        do
        {
          v23 = v22[1];
          *v20 = *v22;
          v24 = v22[2];
          v20[1] = v23;
          v25 = v22[3];
          v20[2] = v24;
          v26 = v22[4];
          v20[3] = v25;
          v27 = v22[5];
          v20[4] = v26;
          v28 = v22[6];
          v20[5] = v27;
          v29 = v22[7];
          v20[6] = v28;
          v30 = v22[8];
          v22 = (_OWORD *)((char *)v22 + 152);
          v20[7] = v29;
          v20[8] = v30;
          v20 += 9;
          --v21;
        }
        while ( v21 );
      }
      if ( !(unsigned int)InjectTouchInput(v19, v94) )
      {
        v31 = GetLastError();
        if ( v31 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x41C, v32, (const char *)v31);
          __debugbreak();
        }
      }
      break;
    case 5:
      v7 = *((unsigned int *)this + 12);
      if ( (_DWORD)v7 )
      {
        v8 = v94;
        v9 = (unsigned int)v7;
        v10 = (_OWORD *)((char *)this + 112);
        do
        {
          v11 = v10[1];
          *v8 = *v10;
          v12 = v10[2];
          v8[1] = v11;
          v13 = v10[3];
          v8[2] = v12;
          v14 = v10[4];
          v8[3] = v13;
          v15 = v10[5];
          v8[4] = v14;
          v16 = v10[6];
          v8[5] = v15;
          v17 = v10[7];
          v8[6] = v16;
          v18 = v10[8];
          v10 = (_OWORD *)((char *)v10 + 152);
          v8[7] = v17;
          v8[8] = v18;
          v8 += 9;
          --v9;
        }
        while ( v9 );
      }
      (***((void (__fastcall ****)(_QWORD, __int64, _WORD *))this + 99))(*((_QWORD *)this + 99), v7, v94);
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x430,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
  }
  for ( k = 0; k < *((_DWORD *)this + 12); ++k )
  {
    v71 = 152LL * k;
    if ( *(_DWORD *)((char *)this + v71 + 124) != 0x40000 )
    {
      if ( k != (_DWORD)v4 )
      {
        v72 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v72 + 104) = *(_OWORD *)((char *)this + v71 + 104);
        *(_OWORD *)(v72 + 120) = *(_OWORD *)((char *)this + v71 + 120);
        *(_OWORD *)(v72 + 136) = *(_OWORD *)((char *)this + v71 + 136);
        *(_OWORD *)(v72 + 152) = *(_OWORD *)((char *)this + v71 + 152);
        *(_OWORD *)(v72 + 168) = *(_OWORD *)((char *)this + v71 + 168);
        *(_OWORD *)(v72 + 184) = *(_OWORD *)((char *)this + v71 + 184);
        *(_OWORD *)(v72 + 200) = *(_OWORD *)((char *)this + v71 + 200);
        *(_OWORD *)(v72 + 216) = *(_OWORD *)((char *)this + v71 + 216);
        *(_OWORD *)(v72 + 232) = *(_OWORD *)((char *)this + v71 + 232);
        *((_QWORD *)v72 + 31) = *(_QWORD *)((char *)this + v71 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + k + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  *((_DWORD *)this + 12) = v4;
}
