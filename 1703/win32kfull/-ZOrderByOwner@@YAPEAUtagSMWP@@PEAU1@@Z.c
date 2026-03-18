/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C001EE80
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C001F2FC (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C001F4A0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C001F65C (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006474C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0105978 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
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
  __int64 v19; // rdx
  int v20; // r8d
  struct tagWND *v21; // r11
  struct tagWND *v22; // r12
  struct tagWND *v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r10
  __int128 v27; // xmm1
  int v28; // r8d
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rax
  unsigned int v50; // r15d
  __int64 v51; // rbx
  __int64 v52; // rdx
  int v53; // r14d
  unsigned int v54; // r8d
  __int64 v55; // r14
  __int64 v56; // r13
  _QWORD *LastTopMostWindow; // rax
  __int64 *v58; // rax
  __int64 v59; // rax
  struct tagWND *v60; // rcx
  HWND v61; // [rsp+30h] [rbp-99h] BYREF
  __int128 v62; // [rsp+40h] [rbp-89h]
  __int128 v63; // [rsp+50h] [rbp-79h]
  __int128 v64; // [rsp+60h] [rbp-69h]
  __int128 v65; // [rsp+70h] [rbp-59h]
  __int128 v66; // [rsp+80h] [rbp-49h]
  __int128 v67; // [rsp+90h] [rbp-39h]
  __int128 v68; // [rsp+A0h] [rbp-29h]
  __int128 v69; // [rsp+B0h] [rbp-19h]
  __int128 v70; // [rsp+C0h] [rbp-9h]
  __int128 v71; // [rsp+D0h] [rbp+7h]
  __int64 v72; // [rsp+E0h] [rbp+17h]
  int v73; // [rsp+138h] [rbp+6Fh]
  int v74; // [rsp+140h] [rbp+77h]
  HWND v75; // [rsp+148h] [rbp+7Fh] BYREF

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    v3 = v2;
    v74 = v2;
    if ( v2 )
    {
      while ( 1 )
      {
        v4 = (HWND *)*((_QWORD *)v1 + 5);
        --v3;
        v5 = *((_DWORD *)v1 + 7) - 1;
        v73 = v3;
        if ( !*v4 )
        {
          if ( *((_DWORD *)v1 + 7) != 1 )
            memmove(v4, v4 + 21, 168LL * v5);
          --*((_DWORD *)v1 + 7);
          goto LABEL_20;
        }
        v75 = v4[1];
        v6 = CheckTopmost((struct tagWINDOWPOS *)v4);
        v7 = (__int128 *)*((_QWORD *)v1 + 5);
        v8 = v6;
        v9 = *((_QWORD *)v7 + 20);
        v10 = v7[1];
        v62 = *v7;
        v11 = v7[2];
        v63 = v10;
        v12 = v7[3];
        v64 = v11;
        v13 = v7[4];
        v65 = v12;
        v14 = v7[5];
        v66 = v13;
        v15 = v7[6];
        v67 = v14;
        v16 = v7[7];
        v68 = v15;
        v17 = v7[8];
        v69 = v16;
        v18 = v7[9];
        v70 = v17;
        v71 = v18;
        v72 = v9;
        if ( v5 )
        {
          memmove(v7, (char *)v7 + 168, 168LL * v5);
          v39 = (_OWORD *)(168LL * v5 + *((_QWORD *)v1 + 5));
          v40 = v63;
          *v39 = v62;
          v41 = v64;
          v39[1] = v40;
          v42 = v65;
          v39[2] = v41;
          v43 = v66;
          v39[3] = v42;
          v44 = v67;
          v39[4] = v43;
          v45 = v68;
          v39[5] = v44;
          v46 = v69;
          v39[6] = v45;
          v39 += 8;
          v47 = v70;
          *(v39 - 1) = v46;
          v48 = v71;
          v49 = v72;
          *v39 = v47;
          v39[1] = v48;
          *((_QWORD *)v39 + 4) = v49;
        }
        v1 = ZOrderByOwner2(v1, v5);
        if ( !v1 )
          return v1;
        if ( v8 )
          break;
LABEL_8:
        v20 = *((_DWORD *)v1 + 7);
        v21 = 0LL;
        v75 = 0LL;
        v61 = 0LL;
        if ( v20 <= 0 )
          v22 = 0LL;
        else
          v22 = *(struct tagWND **)(gpKernelHandleTable
                                  + 16LL * (unsigned __int16)*(_DWORD *)(168LL * (v20 - 1) + *((_QWORD *)v1 + 5)));
        v23 = 0LL;
        if ( v2 <= 1 && (v64 & 0x400000) != 0 )
          v23 = *(struct tagWND **)(gpKernelHandleTable + 16LL * WORD4(v62));
        if ( v5 != v20 )
        {
          v24 = v62;
          v25 = 168LL * v5;
          do
          {
            v26 = v25 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v26 == v24 )
            {
              v27 = v63;
              v28 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)*(_DWORD *)(v26 + 32)) & 4;
              *(_OWORD *)v26 = v62;
              v29 = v64;
              *(_OWORD *)(v26 + 16) = v27;
              v30 = v65;
              *(_OWORD *)(v26 + 32) = v29;
              v31 = v66;
              *(_OWORD *)(v26 + 48) = v30;
              v32 = v67;
              *(_OWORD *)(v26 + 64) = v31;
              v33 = v68;
              *(_OWORD *)(v26 + 80) = v32;
              v34 = v69;
              *(_OWORD *)(v26 + 96) = v33;
              v35 = v70;
              *(_OWORD *)(v26 + 112) = v34;
              v36 = v71;
              v37 = v72;
              *(_OWORD *)(v26 + 128) = v35;
              *(_OWORD *)(v26 + 144) = v36;
              *(_QWORD *)(v26 + 160) = v37;
              *(_DWORD *)(v26 + 32) = v28;
              if ( (v28 & 0x20000) != 0 )
                *(_DWORD *)(v26 + 32) = v28 & 0xFFFDFBFF | 0x400;
            }
            ++v5;
            v25 += 168LL;
            v21 = TrackZorder((struct tagWINDOWPOS *)v26, v21, v23, v22, &v61, &v75);
          }
          while ( v5 != *((_DWORD *)v1 + 7) );
          v3 = v73;
        }
LABEL_20:
        if ( !v3 )
          return v1;
      }
      v50 = 0;
      v51 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)v62);
      if ( v8 == 2 )
      {
        v55 = *((_QWORD *)v1 + 5) + 168LL * v5;
        v56 = *(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)v55);
        if ( (*(_BYTE *)(v56 + 64) & 8) == 0 || v75 != (HWND)-2LL )
          goto LABEL_33;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v51, v19);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        *(_QWORD *)(v55 + 8) = LastTopMostWindow;
        if ( LastTopMostWindow != *(_QWORD **)v55 )
          goto LABEL_33;
        if ( (*(_WORD *)(v56 + 82) & 0x3FFF) == 0x29D || (v58 = *(__int64 **)(v56 + 96)) == 0LL )
          v59 = 0LL;
        else
          v59 = *v58;
        *(_QWORD *)(v55 + 8) = v59;
      }
      if ( v8 == 1 )
      {
        v52 = 1LL;
        goto LABEL_25;
      }
LABEL_33:
      v52 = 0LL;
LABEL_25:
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v68 + 1) + 376LL) + 768LL) & 2) != 0
        && (unsigned int)(*(_DWORD *)(v51 + 320) - 1) <= 1 )
      {
        v53 = 1;
        v50 = v52 + 1;
        v54 = 0;
      }
      else
      {
        v53 = 0;
        v54 = ((unsigned int)v64 >> 9) & 1;
      }
      if ( *(_DWORD *)(v51 + 320) == 1 || v50 == 1 )
        SetTopmostEnum((struct tagWND *)v51, v52, v54);
      if ( v53 && *(_DWORD *)(v51 + 320) != v50 && *(_QWORD *)(v51 + 104) == GetDesktopWindow(v51, v52) )
        SetWindowGroupBand(v60, v50, 1);
      v2 = v74;
      v3 = v73;
      goto LABEL_8;
    }
  }
  return v1;
}
