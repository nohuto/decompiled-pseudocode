/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C197C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x1800C0EFC (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C167C (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C0390 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800C190C (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        _OWORD *a3,
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
  __int64 v20; // r10
  _OWORD *v21; // r9
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  DWORD v30; // eax
  __int64 v31; // r8
  const char *v32; // r9
  unsigned int v33; // r12d
  __int16 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int16 v37; // r10
  bool v38; // al
  char v39; // cl
  BOOL v40; // r11d
  int v41; // r13d
  int v42; // esi
  int v43; // r14d
  struct tagPOINT v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  DWORD v56; // eax
  __int64 v57; // r8
  DWORD LastError; // eax
  __int64 v59; // r8
  DWORD TickCount; // eax
  __int64 v61; // rdx
  __int64 j; // r8
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r9
  int v66; // eax
  __int16 v67; // ax
  unsigned int k; // r8d
  __int64 v69; // r10
  char *v70; // rcx
  __int64 v71; // [rsp+38h] [rbp-D0h]
  __int64 v72; // [rsp+38h] [rbp-D0h]
  int v73; // [rsp+40h] [rbp-C8h]
  int v74; // [rsp+48h] [rbp-C0h]
  __int64 v75; // [rsp+50h] [rbp-B8h]
  int v76; // [rsp+58h] [rbp-B0h]
  __int64 v77; // [rsp+60h] [rbp-A8h]
  int v78; // [rsp+68h] [rbp-A0h]
  __int64 v79; // [rsp+70h] [rbp-98h]
  int v80; // [rsp+78h] [rbp-90h]
  __int64 v81; // [rsp+80h] [rbp-88h]
  int v82; // [rsp+88h] [rbp-80h]
  __int64 v83; // [rsp+90h] [rbp-78h]
  int v84; // [rsp+98h] [rbp-70h]
  int v85; // [rsp+A8h] [rbp-60h]
  __int64 v86; // [rsp+B0h] [rbp-58h]
  int v87; // [rsp+B8h] [rbp-50h]
  __int64 v88; // [rsp+C0h] [rbp-48h]
  int v89; // [rsp+C8h] [rbp-40h]
  int v90; // [rsp+D8h] [rbp-30h]
  struct tagPOINT v91; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v92[74]; // [rsp+E8h] [rbp-20h] BYREF
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
      memset(v92, 0, 0x248uLL);
      TickCount = GetTickCount();
      LOBYTE(v61) = 0;
      HIDWORD(v92[0]) = TickCount;
      for ( j = 0LL;
            (unsigned int)(unsigned __int16)j < *((_DWORD *)this + 12);
            HIWORD(v92[v64 + 3]) = *(_WORD *)((char *)this + v65 + 148) )
      {
        v63 = (unsigned __int8)v61;
        LOBYTE(v61) = v61 + 1;
        v64 = 7 * v63;
        v65 = 152LL * (unsigned __int16)j;
        LOWORD(v92[7 * v63 + 3]) = *(_WORD *)((char *)this + v65 + 116);
        v66 = *(_DWORD *)((char *)this + v65 + 124);
        if ( (v66 & 0x10000) != 0 )
        {
          WORD1(v92[v64 + 3]) |= 9u;
        }
        else if ( (v66 & 0x20000) != 0 )
        {
          WORD1(v92[v64 + 3]) |= 0xAu;
        }
        else if ( (v66 & 0x40000) != 0 )
        {
          WORD1(v92[v64 + 3]) |= 4u;
        }
        else if ( (v66 & 2) != 0 )
        {
          WORD1(v92[v64 + 3]) |= 8u;
        }
        else if ( (v66 & 0x8000) != 0 )
        {
          WORD1(v92[v64 + 3]) |= 0x2004u;
        }
        LOWORD(j) = j + 1;
        WORD2(v92[v64 + 3]) = *(_WORD *)((char *)this + v65 + 144);
      }
      HIBYTE(v92[2]) = v61;
      if ( (unsigned int)(unsigned __int8)v61 - 1 > 9 )
      {
        v67 = 0;
      }
      else if ( (unsigned __int8)v61 == 1 )
      {
        v67 = 80;
      }
      else
      {
        v67 = 56 * (unsigned __int8)v61 + 24;
      }
      LOWORD(v92[0]) = v67;
      if ( (_BYTE)v61 )
        (*((void (__fastcall **)(_QWORD *, __int64, __int64))this + 102))(v92, v61, j);
      break;
    case 2:
      if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
      {
        LastError = GetLastError();
        if ( LastError )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x3D4, v59, (const char *)LastError);
          JUMPOUT(0x1800C2176LL);
        }
      }
      break;
    case 3:
      v32 = (const char *)*((unsigned int *)this + 12);
      v33 = 10 * (_DWORD)v32 + 1;
      if ( (unsigned int)((_DWORD)v32 - 1) > 3 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3DD,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v32);
        __debugbreak();
      }
      if ( (_DWORD)v32 )
      {
        v34 = 1;
        do
        {
          v35 = (unsigned __int16)(v34 - 1);
          v36 = 152 * v35;
          v37 = 10 * v35;
          v38 = (*((_DWORD *)this + 38 * v35 + 31) & 4) != 0;
          if ( (*((_DWORD *)this + 38 * v35 + 31) & 4) != 0 || (v39 = 0, (*((_BYTE *)this + v36 + 124) & 2) == 0) )
            v39 = 1;
          if ( !v39 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x3E5,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              v32);
            __debugbreak();
          }
          v40 = v38;
          v41 = 100 * v38;
          v74 = *(_DWORD *)((char *)this + v36 + 116);
          v42 = v38 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
          v43 = v38 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
          if ( *((_DWORD *)this + 22) == 1 )
            v44 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                           this,
                                           (struct tagPOINT)&v91,
                                           *(_QWORD *)((char *)this + v36 + 144));
          else
            v44 = *(struct tagPOINT *)((char *)this + v36 + 152);
          HIDWORD(v75) = v44.x;
          HIDWORD(v77) = v44.y;
          HIDWORD(v83) = v41;
          LODWORD(v75) = 3145729;
          v45 = 3LL * v37;
          LOWORD(v76) = v34;
          *(_QWORD *)((char *)v92 + 4 * v45) = v75;
          *((_DWORD *)&v92[1] + v45) = v76;
          v46 = 3LL * ((unsigned int)v37 + 1);
          LODWORD(v77) = 3211265;
          *(_QWORD *)((char *)v92 + 4 * v46) = v77;
          LOWORD(v78) = v34;
          *((_DWORD *)&v92[1] + v46) = v78;
          LODWORD(v79) = 4325389;
          HIDWORD(v79) = v40;
          v47 = 3LL * ((unsigned int)v37 + 2);
          *(_QWORD *)((char *)v92 + 4 * v47) = v79;
          LOWORD(v80) = v34;
          *((_DWORD *)&v92[1] + v47) = v80;
          LODWORD(v81) = 3276813;
          HIDWORD(v81) = v40;
          v48 = 3LL * ((unsigned int)v37 + 3);
          *(_QWORD *)((char *)v92 + 4 * v48) = v81;
          LOWORD(v82) = v34;
          *((_DWORD *)&v92[1] + v48) = v82;
          LODWORD(v83) = 3145741;
          v49 = 3LL * ((unsigned int)v37 + 4);
          LOWORD(v84) = v34;
          *(_QWORD *)((char *)v92 + 4 * v49) = v83;
          *((_DWORD *)&v92[1] + v49) = v84;
          v50 = 3LL * ((unsigned int)v37 + 5);
          *(_QWORD *)((char *)v92 + 4 * v50) = 0x10047000DLL;
          LOWORD(v85) = v34;
          *((_DWORD *)&v92[1] + v50) = v85;
          LODWORD(v86) = 4718605;
          HIDWORD(v86) = v42;
          v51 = 3LL * ((unsigned int)v37 + 6);
          *(_QWORD *)((char *)v92 + 4 * v51) = v86;
          LOWORD(v87) = v34;
          *((_DWORD *)&v92[1] + v51) = v87;
          LODWORD(v88) = 4784141;
          HIDWORD(v88) = v43;
          v52 = 3LL * ((unsigned int)v37 + 7);
          *(_QWORD *)((char *)v92 + 4 * v52) = v88;
          LOWORD(v89) = v34;
          *((_DWORD *)&v92[1] + v52) = v89;
          v53 = 3LL * ((unsigned int)v37 + 8);
          LOWORD(v90) = v34;
          *(_QWORD *)((char *)v92 + 4 * v53) = 4128781LL;
          *((_DWORD *)&v92[1] + v53) = v90;
          HIDWORD(v71) = v74;
          LOWORD(v73) = v34++;
          LODWORD(v71) = 5308429;
          v54 = 3LL * ((unsigned int)v37 + 9);
          *(_QWORD *)((char *)v92 + 4 * v54) = v71;
          *((_DWORD *)&v92[1] + v54) = v73;
        }
        while ( (unsigned __int16)(v34 - 1) < (unsigned int)v32 );
      }
      HIDWORD(v72) = (unsigned __int16)v32;
      LODWORD(v72) = 5505037;
      LOWORD(v73) = 0;
      v55 = 3LL * (unsigned __int16)(10 * (_WORD)v32);
      *(_QWORD *)((char *)v92 + 4 * v55) = v72;
      *((_DWORD *)&v92[1] + v55) = v73;
      if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v92, v33) )
      {
        v56 = GetLastError();
        if ( v56 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x40B, v57, (const char *)v56);
          __debugbreak();
        }
      }
      break;
    case 4:
      v19 = *((unsigned int *)this + 12);
      if ( (_DWORD)v19 )
      {
        a3 = v92;
        v20 = (unsigned int)v19;
        v21 = (_OWORD *)((char *)this + 112);
        do
        {
          v22 = v21[1];
          *a3 = *v21;
          v23 = v21[2];
          a3[1] = v22;
          v24 = v21[3];
          a3[2] = v23;
          v25 = v21[4];
          a3[3] = v24;
          v26 = v21[5];
          a3[4] = v25;
          v27 = v21[6];
          a3[5] = v26;
          v28 = v21[7];
          a3[6] = v27;
          v29 = v21[8];
          v21 = (_OWORD *)((char *)v21 + 152);
          a3[7] = v28;
          a3[8] = v29;
          a3 += 9;
          --v20;
        }
        while ( v20 );
      }
      if ( !(unsigned int)InjectTouchInput(v19, v92, a3) )
      {
        v30 = GetLastError();
        if ( v30 )
        {
          wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x41B, v31, (const char *)v30);
          __debugbreak();
        }
      }
      break;
    case 5:
      v7 = *((unsigned int *)this + 12);
      if ( (_DWORD)v7 )
      {
        v8 = v92;
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
      (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))this + 99))(*((_QWORD *)this + 99), v7, v92);
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x42F,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
      __debugbreak();
  }
  for ( k = 0; k < *((_DWORD *)this + 12); ++k )
  {
    v69 = 152LL * k;
    if ( *(_DWORD *)((char *)this + v69 + 124) != 0x40000 )
    {
      if ( k != (_DWORD)v4 )
      {
        v70 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v70 + 104) = *(_OWORD *)((char *)this + v69 + 104);
        *(_OWORD *)(v70 + 120) = *(_OWORD *)((char *)this + v69 + 120);
        *(_OWORD *)(v70 + 136) = *(_OWORD *)((char *)this + v69 + 136);
        *(_OWORD *)(v70 + 152) = *(_OWORD *)((char *)this + v69 + 152);
        *(_OWORD *)(v70 + 168) = *(_OWORD *)((char *)this + v69 + 168);
        *(_OWORD *)(v70 + 184) = *(_OWORD *)((char *)this + v69 + 184);
        *(_OWORD *)(v70 + 200) = *(_OWORD *)((char *)this + v69 + 200);
        *(_OWORD *)(v70 + 216) = *(_OWORD *)((char *)this + v69 + 216);
        *(_OWORD *)(v70 + 232) = *(_OWORD *)((char *)this + v69 + 232);
        *((_QWORD *)v70 + 31) = *(_QWORD *)((char *)this + v69 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + k + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  *((_DWORD *)this + 12) = v4;
}
