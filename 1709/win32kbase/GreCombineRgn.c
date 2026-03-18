/*
 * XREFs of GreCombineRgn @ 0x1C0043CC0
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     UserSetDCVisRgn @ 0x1C007B3E0 (UserSetDCVisRgn.c)
 *     UserValidateCopyRgn @ 0x1C0084DA0 (UserValidateCopyRgn.c)
 *     NtGdiCombineRgn @ 0x1C008FF40 (NtGdiCombineRgn.c)
 *     EngCombineRgn @ 0x1C00FC410 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00FC4B0 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C00FC7A0 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C00FC9A0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00FCA40 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00FCAE0 (EngXorRgn.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C001D5F0 (PushThreadGuardedObject.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     HmgReplaceObject @ 0x1C0042FB0 (HmgReplaceObject.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0043370 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0043420 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0043500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  struct OBJECT *v22; // rbx
  struct OBJECT *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ecx
  char *v28; // r15
  int v29; // ecx
  char *v30; // rsi
  BOOL v31; // r12d
  __int64 v32; // rax
  char **v33; // rcx
  __int64 v34; // rax
  char **v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  char *v44; // rbx
  __int64 v45; // rax
  char **v46; // rcx
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // r8
  struct OBJECT *v56; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v57; // [rsp+30h] [rbp-A1h]
  struct OBJECT *v58; // [rsp+38h] [rbp-99h] BYREF
  __int64 v59; // [rsp+48h] [rbp-89h]
  struct OBJECT *v60[2]; // [rsp+50h] [rbp-81h] BYREF
  int v61; // [rsp+60h] [rbp-71h]
  _QWORD v62[2]; // [rsp+68h] [rbp-69h] BYREF
  int v63; // [rsp+78h] [rbp-59h]
  _QWORD v64[2]; // [rsp+80h] [rbp-51h] BYREF
  int v65; // [rsp+90h] [rbp-41h]
  _QWORD v66[3]; // [rsp+98h] [rbp-39h] BYREF
  _QWORD v67[3]; // [rsp+B0h] [rbp-21h] BYREF
  _QWORD v68[3]; // [rsp+C8h] [rbp-9h] BYREF
  _QWORD v69[2]; // [rsp+E0h] [rbp+Fh] BYREF
  int v71; // [rsp+150h] [rbp+7Fh]
  BOOL v72; // [rsp+150h] [rbp+7Fh]

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v68, (struct HOBJ__ *)a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v67, (struct HOBJ__ *)a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v66, (struct HOBJ__ *)a1, 0);
        v52 = v68[0];
        if ( !v68[0] )
          goto LABEL_99;
        v53 = v67[0];
        if ( v67[0] && v66[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v66, (struct RGNOBJ *)v68, (struct RGNOBJ *)v67, a4) )
          {
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v66);
LABEL_87:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v66);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v67);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v68);
            return v9;
          }
          v52 = v68[0];
          v53 = v67[0];
        }
        if ( !v52 || !v53 || !v66[0] )
LABEL_99:
          EngSetLastError(6u);
        v9 = 0;
        goto LABEL_87;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v69, (struct HOBJ__ *)a1, 0);
        v55 = v69[0];
        if ( v69[0] )
        {
          if ( (unsigned int)(a4 - 3) <= 1 )
          {
            *(_DWORD *)(v69[0] + 80LL) = 120;
            *(_QWORD *)(v55 + 84) = 1LL;
            *(_QWORD *)(v55 + 92) = 0LL;
            *(_DWORD *)(v55 + 100) = 0;
            *(_DWORD *)(v55 + 104) = 0;
            *(_DWORD *)(v55 + 108) = 0x80000000;
            *(_QWORD *)(v55 + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(v55 + 40) = v55 + 120;
          }
          v9 = RGNOBJ::iComplexity((RGNOBJ *)v69);
        }
        else
        {
          EngSetLastError(6u);
          v9 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v69);
        return v9;
      }
      v8 = 216;
      LODWORD(v57) = 0;
      v9 = 1;
      if ( gulGdiHmgrTraceObjectType == 4 )
      {
        v71 = 1;
        v8 = 376;
      }
      else
      {
        v71 = 0;
      }
      if ( dword_1C018FB40 >= v8
        && (v10 = qword_1C018FBD0, (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0)
        && (v12 = (_QWORD *)Win32AllocateFromPagedLookasideListImpl(v10)) != 0LL )
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        v12[2] = 0LL;
        if ( v71 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v12[v8 / 8 - 20], 0LL);
        *((_WORD *)v12 + 7) = 0x8000;
      }
      else
      {
        v12 = PALLOCMEM2(v8, 875587655LL, 0);
        if ( !v12 )
        {
          EngSetLastError(8u);
          v12 = 0LL;
          v56 = 0LL;
          goto LABEL_14;
        }
        *v12 = 0LL;
        v12[1] = 0LL;
        v12[2] = 0LL;
        if ( v71 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v12[v8 / 8 - 20], 0LL);
      }
      v12[3] = 216LL;
      *((_DWORD *)v12 + 20) = 0;
      v12[4] = 0LL;
      v12[7] = v12 + 6;
      v12[6] = v12 + 6;
      v56 = (struct OBJECT *)v12;
LABEL_14:
      if ( W32GetThreadWin32Thread(KeGetCurrentThread(), v11, v13, v14) )
      {
        if ( v12 )
        {
          v15 = v12 + 6;
          if ( v12 != (_QWORD *)-48LL )
          {
            KeEnterCriticalRegion();
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v16, v17, v18);
            v12[8] = v12;
            v12[9] = CleanUpRegion;
            if ( ThreadWin32Thread )
            {
              v20 = *(_QWORD *)(ThreadWin32Thread + 88);
              v21 = (_QWORD *)(ThreadWin32Thread + 88);
              if ( *(_QWORD **)(v20 + 8) != v21 )
                __fastfail(3u);
              *v15 = v20;
              v12[7] = v21;
              *(_QWORD *)(v20 + 8) = v15;
              *v21 = v15;
            }
            else
            {
              v12[7] = v12 + 6;
              *v15 = v15;
            }
            KeLeaveCriticalRegion();
          }
        }
      }
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v58, (struct HOBJ__ *)a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v60, (struct HOBJ__ *)a3, 0);
      if ( v12 )
      {
        v22 = v58;
        if ( !v58 )
        {
LABEL_122:
          EngSetLastError(6u);
          goto LABEL_123;
        }
        if ( !v60[0] )
        {
LABEL_120:
          if ( v22 && v60[0] )
            goto LABEL_123;
          goto LABEL_122;
        }
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v56, (struct RGNOBJ *)&v58, (struct RGNOBJ *)v60, a4) )
        {
          if ( a1 == a2 )
          {
            v23 = v56;
            v22 = v58;
            if ( (unsigned int)HmgReplaceObject(v58, (__m128i *)v56) )
            {
              v27 = *((_DWORD *)v22 + 8);
              v28 = (char *)v22 + 48;
              *((_DWORD *)v22 + 8) = *((_DWORD *)v23 + 8);
              *((_DWORD *)v23 + 8) = v27;
              v29 = *((_DWORD *)v22 + 9);
              *((_DWORD *)v22 + 9) = *((_DWORD *)v23 + 9);
              *((_DWORD *)v23 + 9) = v29;
              v72 = *(_QWORD *)v28 == (_QWORD)v28;
              v30 = (char *)v23 + 48;
              v31 = *(_QWORD *)v30 == (_QWORD)v30;
              if ( v22 != (struct OBJECT *)-48LL )
              {
                KeEnterCriticalRegion();
                v32 = *(_QWORD *)v28;
                if ( *(char **)(*(_QWORD *)v28 + 8LL) != v28 || (v33 = (char **)*((_QWORD *)v22 + 7), *v33 != v28) )
                  __fastfail(3u);
                *v33 = (char *)v32;
                *(_QWORD *)(v32 + 8) = v33;
                *((_QWORD *)v22 + 7) = (char *)v22 + 48;
                *(_QWORD *)v28 = v28;
                KeLeaveCriticalRegion();
              }
              if ( v23 != (struct OBJECT *)-48LL )
              {
                KeEnterCriticalRegion();
                v34 = *(_QWORD *)v30;
                if ( *(char **)(*(_QWORD *)v30 + 8LL) != v30 || (v35 = (char **)*((_QWORD *)v23 + 7), *v35 != v30) )
                  __fastfail(3u);
                *v35 = (char *)v34;
                *(_QWORD *)(v34 + 8) = v35;
                *((_QWORD *)v23 + 7) = (char *)v23 + 48;
                *(_QWORD *)v30 = v30;
                KeLeaveCriticalRegion();
              }
              v58 = v23;
              v56 = v22;
              v36 = W32GetThreadWin32Thread(KeGetCurrentThread(), v24, v25, v26);
              v22 = v58;
              if ( v36 )
              {
                if ( !v72 )
                  PushThreadGuardedObject((_QWORD *)v58 + 6, (__int64)v58, (__int64)CleanUpRegion);
                v23 = v56;
                if ( !v31 )
                {
                  v37 = (_QWORD *)((char *)v56 + 48);
                  if ( v56 != (struct OBJECT *)-48LL )
                  {
                    KeEnterCriticalRegion();
                    v41 = W32GetThreadWin32Thread(KeGetCurrentThread(), v38, v39, v40);
                    v23 = v56;
                    v37[2] = v56;
                    v37[3] = CleanUpRegion;
                    if ( v41 )
                    {
                      v42 = *(_QWORD *)(v41 + 88);
                      v43 = (_QWORD *)(v41 + 88);
                      if ( *(_QWORD **)(v42 + 8) != v43 )
                        __fastfail(3u);
                      *v37 = v42;
                      v37[1] = v43;
                      *(_QWORD *)(v42 + 8) = v37;
                      *v43 = v37;
                    }
                    else
                    {
                      v37[1] = v37;
                      *v37 = v37;
                    }
                    KeLeaveCriticalRegion();
                    v22 = v58;
                  }
                }
              }
              else
              {
                v23 = v56;
              }
              if ( *((_DWORD *)v22 + 21) != 1 )
                v9 = (*((_DWORD *)v22 + 20) > 0xA0u) + 2;
              goto LABEL_46;
            }
            goto LABEL_124;
          }
          if ( (unsigned int)RGNOBJAPI::bSwap(v60, (__m128i **)&v56) )
          {
            v54 = RGNOBJ::iComplexity((RGNOBJ *)v60);
            v23 = v56;
            v9 = v54;
            v22 = v58;
LABEL_46:
            if ( !v61 )
              RGNOBJ::UpdateUserRgn((RGNOBJ *)v60);
            if ( v60[0] )
            {
              _InterlockedDecrement((volatile signed __int32 *)v60[0] + 3);
              v23 = v56;
              v22 = v58;
            }
            if ( !(_DWORD)v59 )
              RGNOBJ::UpdateUserRgn((RGNOBJ *)&v58);
            if ( v22 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v22 + 3);
              v23 = v56;
            }
            if ( v23 )
            {
              v44 = (char *)v23 + 48;
              if ( v23 != (struct OBJECT *)-48LL )
              {
                KeEnterCriticalRegion();
                v45 = *(_QWORD *)v44;
                if ( *(char **)(*(_QWORD *)v44 + 8LL) != v44 || (v46 = (char **)*((_QWORD *)v23 + 7), *v46 != v44) )
                  __fastfail(3u);
                *v46 = (char *)v45;
                *(_QWORD *)(v45 + 8) = v46;
                *((_QWORD *)v23 + 7) = (char *)v23 + 48;
                *(_QWORD *)v44 = v44;
                KeLeaveCriticalRegion();
              }
              if ( v23 != prgnDefault )
              {
                if ( *((__int16 *)v23 + 7) < 0 )
                {
                  v48 = qword_1C018FBD0;
                  if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                    Win32FreeToPagedLookasideListImpl(v48, v23);
                }
                else if ( (int)IsWin32FreePoolImplSupported() >= 0 )
                {
                  Win32FreePoolImpl(v23);
                }
              }
            }
            if ( (_DWORD)v57 == 1 )
              REGION::vDeleteREGION(0LL);
            return v9;
          }
          v22 = v58;
LABEL_123:
          v23 = v56;
LABEL_124:
          v9 = 0;
          goto LABEL_46;
        }
      }
      v22 = v58;
      goto LABEL_120;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v62, (struct HOBJ__ *)a1, 0);
    v9 = 1;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v64, (struct HOBJ__ *)a2, 1);
    v49 = v62[0];
    v50 = v64[0];
    if ( v62[0] )
    {
      if ( !v64[0] )
      {
LABEL_93:
        EngSetLastError(6u);
LABEL_94:
        v9 = 0;
LABEL_73:
        if ( !v65 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v64);
        if ( v50 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v50 + 12));
          v49 = v62[0];
        }
        if ( !v63 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v62);
        if ( v49 )
          _InterlockedDecrement((volatile signed __int32 *)(v49 + 12));
        return v9;
      }
      v51 = RGNOBJAPI::bCopy((RGNOBJAPI *)v62, (struct RGNOBJ *)v64);
      v49 = v62[0];
      if ( v51 )
      {
        if ( *(_DWORD *)(v62[0] + 84LL) != 1 )
          v9 = (*(_DWORD *)(v62[0] + 80LL) > 0xA0u) + 2;
        goto LABEL_73;
      }
    }
    if ( v50 && v49 )
      goto LABEL_94;
    goto LABEL_93;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
