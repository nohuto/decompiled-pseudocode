/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0056D64
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0054300 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C00571F8 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C00573A4 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00575BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006B618 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  int v2; // r13d
  int v3; // r14d
  HWND *v4; // rcx
  int v5; // esi
  int v6; // eax
  __int128 *v7; // rcx
  int v8; // r12d
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // r8d
  struct tagWND *v20; // r11
  struct tagWND *v21; // r12
  struct tagWND *v22; // r15
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r10
  __int128 v26; // xmm1
  int v27; // r8d
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rax
  _OWORD *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rax
  unsigned int v49; // r15d
  __int64 v50; // rbx
  int v51; // edx
  int v52; // r14d
  unsigned int v53; // r8d
  __int64 v54; // r14
  __int64 v55; // r13
  _QWORD *LastTopMostWindow; // rax
  __int64 *v57; // rax
  __int64 v58; // rax
  HWND v59; // [rsp+30h] [rbp-99h] BYREF
  __int128 v60; // [rsp+40h] [rbp-89h]
  __int128 v61; // [rsp+50h] [rbp-79h]
  __int128 v62; // [rsp+60h] [rbp-69h]
  __int128 v63; // [rsp+70h] [rbp-59h]
  __int128 v64; // [rsp+80h] [rbp-49h]
  __int128 v65; // [rsp+90h] [rbp-39h]
  __int128 v66; // [rsp+A0h] [rbp-29h]
  __int128 v67; // [rsp+B0h] [rbp-19h]
  __int128 v68; // [rsp+C0h] [rbp-9h]
  __int128 v69; // [rsp+D0h] [rbp+7h]
  __int64 v70; // [rsp+E0h] [rbp+17h]
  int v71; // [rsp+138h] [rbp+6Fh]
  int v72; // [rsp+140h] [rbp+77h]
  HWND v73; // [rsp+148h] [rbp+7Fh] BYREF

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    v3 = v2;
    v72 = v2;
    if ( v2 )
    {
      while ( 1 )
      {
        v4 = (HWND *)*((_QWORD *)v1 + 5);
        --v3;
        v5 = *((_DWORD *)v1 + 7) - 1;
        v71 = v3;
        if ( !*v4 )
        {
          if ( *((_DWORD *)v1 + 7) != 1 )
            memmove(v4, v4 + 21, 168LL * v5);
          --*((_DWORD *)v1 + 7);
          goto LABEL_20;
        }
        v73 = v4[1];
        v6 = CheckTopmost((struct tagWINDOWPOS *)v4);
        v7 = (__int128 *)*((_QWORD *)v1 + 5);
        v8 = v6;
        v9 = *((_QWORD *)v7 + 20);
        v10 = v7[1];
        v60 = *v7;
        v11 = v7[2];
        v61 = v10;
        v12 = v7[3];
        v62 = v11;
        v13 = v7[4];
        v63 = v12;
        v14 = v7[5];
        v64 = v13;
        v15 = v7[6];
        v65 = v14;
        v16 = v7[7];
        v66 = v15;
        v17 = v7[8];
        v67 = v16;
        v18 = v7[9];
        v68 = v17;
        v69 = v18;
        v70 = v9;
        if ( v5 )
        {
          memmove(v7, (char *)v7 + 168, 168LL * v5);
          v38 = (_OWORD *)(168LL * v5 + *((_QWORD *)v1 + 5));
          v39 = v61;
          *v38 = v60;
          v40 = v62;
          v38[1] = v39;
          v41 = v63;
          v38[2] = v40;
          v42 = v64;
          v38[3] = v41;
          v43 = v65;
          v38[4] = v42;
          v44 = v66;
          v38[5] = v43;
          v45 = v67;
          v38[6] = v44;
          v38 += 8;
          v46 = v68;
          *(v38 - 1) = v45;
          v47 = v69;
          v48 = v70;
          *v38 = v46;
          v38[1] = v47;
          *((_QWORD *)v38 + 4) = v48;
        }
        v1 = ZOrderByOwner2(v1, v5);
        if ( !v1 )
          return v1;
        if ( v8 )
          break;
LABEL_8:
        v19 = *((_DWORD *)v1 + 7);
        v20 = 0LL;
        v73 = 0LL;
        v59 = 0LL;
        if ( v19 <= 0 )
          v21 = 0LL;
        else
          v21 = *(struct tagWND **)(gpKernelHandleTable
                                  + 24LL * (unsigned __int16)*(_DWORD *)(168LL * (v19 - 1) + *((_QWORD *)v1 + 5)));
        v22 = 0LL;
        if ( v2 <= 1 && (v62 & 0x400000) != 0 )
          v22 = *(struct tagWND **)(gpKernelHandleTable + 24LL * WORD4(v60));
        if ( v5 != v19 )
        {
          v23 = v60;
          v24 = 168LL * v5;
          do
          {
            v25 = v24 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v25 == v23 )
            {
              v26 = v61;
              v27 = v62 ^ ((unsigned __int8)v62 ^ (unsigned __int8)*(_DWORD *)(v25 + 32)) & 4;
              *(_OWORD *)v25 = v60;
              v28 = v62;
              *(_OWORD *)(v25 + 16) = v26;
              v29 = v63;
              *(_OWORD *)(v25 + 32) = v28;
              v30 = v64;
              *(_OWORD *)(v25 + 48) = v29;
              v31 = v65;
              *(_OWORD *)(v25 + 64) = v30;
              v32 = v66;
              *(_OWORD *)(v25 + 80) = v31;
              v33 = v67;
              *(_OWORD *)(v25 + 96) = v32;
              v34 = v68;
              *(_OWORD *)(v25 + 112) = v33;
              v35 = v69;
              v36 = v70;
              *(_OWORD *)(v25 + 128) = v34;
              *(_OWORD *)(v25 + 144) = v35;
              *(_QWORD *)(v25 + 160) = v36;
              *(_DWORD *)(v25 + 32) = v27;
              if ( (v27 & 0x20000) != 0 )
                *(_DWORD *)(v25 + 32) = v27 & 0xFFFDFBFF | 0x400;
            }
            ++v5;
            v24 += 168LL;
            v20 = TrackZorder((struct tagWINDOWPOS *)v25, v20, v22, v21, &v59, &v73);
          }
          while ( v5 != *((_DWORD *)v1 + 7) );
          v3 = v71;
        }
LABEL_20:
        if ( !v3 )
          return v1;
      }
      v49 = 0;
      v50 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v60);
      if ( v8 == 2 )
      {
        v54 = *((_QWORD *)v1 + 5) + 168LL * v5;
        v55 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v54);
        if ( (*(_BYTE *)(v55 + 64) & 8) == 0 || v73 != (HWND)-2LL )
          goto LABEL_32;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v50);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        *(_QWORD *)(v54 + 8) = LastTopMostWindow;
        if ( LastTopMostWindow != *(_QWORD **)v54 )
          goto LABEL_32;
        if ( (*(_WORD *)(v55 + 82) & 0x3FFF) == 0x29D || (v57 = *(__int64 **)(v55 + 96)) == 0LL )
          v58 = 0LL;
        else
          v58 = *v57;
        *(_QWORD *)(v54 + 8) = v58;
      }
      if ( v8 == 1 )
      {
        v51 = 1;
        goto LABEL_25;
      }
LABEL_32:
      v51 = 0;
LABEL_25:
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v66 + 1) + 400LL) + 776LL) & 2) != 0
        && (unsigned int)(*(_DWORD *)(v50 + 320) - 1) <= 1 )
      {
        v52 = 1;
        v49 = v51 + 1;
        v53 = 0;
      }
      else
      {
        v52 = 0;
        v53 = ((unsigned int)v62 >> 9) & 1;
      }
      if ( *(_DWORD *)(v50 + 320) == 1 || v49 == 1 )
        SetTopmostEnum((struct tagWND *)v50, v51, v53);
      if ( v52 && *(_DWORD *)(v50 + 320) != v49 && *(_QWORD *)(v50 + 104) == GetDesktopWindow(v50) )
        SetWindowGroupBand((struct tagWND *)v50, v49, 1);
      v2 = v72;
      v3 = v71;
      goto LABEL_8;
    }
  }
  return v1;
}
