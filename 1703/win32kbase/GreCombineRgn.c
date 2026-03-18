/*
 * XREFs of GreCombineRgn @ 0x1C003DDE0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C002B840 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     NtGdiCombineRgn @ 0x1C00400C0 (NtGdiCombineRgn.c)
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     UserValidateCopyRgn @ 0x1C007FB20 (UserValidateCopyRgn.c)
 *     EngCombineRgn @ 0x1C00FBEB0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00FBF50 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C00FC240 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C00FC440 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00FC4E0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00FC580 (EngXorRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C003E380 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C003E430 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003E500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     HmgReplaceObject @ 0x1C003EC10 (HmgReplaceObject.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rbx
  _QWORD *ThreadWin32Thread; // rax
  struct OBJECT *v12; // rdi
  struct OBJECT *v13; // rbx
  int v14; // ecx
  char *v15; // r14
  int v16; // ecx
  BOOL v17; // r13d
  char *v18; // rsi
  BOOL v19; // r12d
  __int64 v20; // rcx
  char **v21; // rax
  __int64 v22; // rcx
  char **v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  unsigned int v26; // r12d
  char *v27; // rdi
  __int64 v28; // rcx
  char **v29; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // r8
  struct OBJECT *v39; // [rsp+28h] [rbp-99h] BYREF
  __int64 v40; // [rsp+30h] [rbp-91h]
  struct OBJECT *v41[2]; // [rsp+38h] [rbp-89h] BYREF
  int v42; // [rsp+48h] [rbp-79h]
  _QWORD v43[2]; // [rsp+50h] [rbp-71h] BYREF
  int v44; // [rsp+60h] [rbp-61h]
  _QWORD v45[2]; // [rsp+68h] [rbp-59h] BYREF
  int v46; // [rsp+78h] [rbp-49h]
  _QWORD v47[2]; // [rsp+80h] [rbp-41h] BYREF
  int v48; // [rsp+90h] [rbp-31h]
  _QWORD v49[3]; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v50[3]; // [rsp+B0h] [rbp-11h] BYREF
  _QWORD v51[3]; // [rsp+C8h] [rbp+7h] BYREF
  _QWORD v52[7]; // [rsp+E0h] [rbp+1Fh] BYREF
  int v53; // [rsp+140h] [rbp+7Fh]

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v51, a2, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v50, a3, 1);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v49, a1, 0);
        v35 = v51[0];
        if ( !v51[0] )
          goto LABEL_95;
        v36 = v50[0];
        if ( v50[0] && v49[0] )
        {
          if ( (unsigned int)RGNOBJAPI::iCombine((RGNOBJAPI *)v49, (struct RGNOBJ *)v51, (struct RGNOBJ *)v50, a4) )
          {
            v26 = RGNOBJ::iComplexity((RGNOBJ *)v49);
LABEL_82:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v49);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v50);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v51);
            return v26;
          }
          v35 = v51[0];
          v36 = v50[0];
        }
        if ( !v35 || !v36 || !v49[0] )
LABEL_95:
          EngSetLastError(6u);
        v26 = 0;
        goto LABEL_82;
      }
      if ( a2 == a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v52, a1, 0);
        v38 = v52[0];
        if ( v52[0] )
        {
          if ( (unsigned int)(a4 - 3) <= 1 )
          {
            *(_DWORD *)(v52[0] + 80LL) = 120;
            *(_QWORD *)(v38 + 84) = 1LL;
            *(_QWORD *)(v38 + 92) = 0LL;
            *(_DWORD *)(v38 + 100) = 0;
            *(_DWORD *)(v38 + 104) = 0;
            *(_DWORD *)(v38 + 108) = 0x80000000;
            *(_QWORD *)(v38 + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(v38 + 40) = v38 + 120;
          }
          v26 = RGNOBJ::iComplexity((RGNOBJ *)v52);
        }
        else
        {
          EngSetLastError(6u);
          v26 = 0;
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v52);
        return v26;
      }
      v8 = 216;
      LODWORD(v40) = 0;
      if ( gulGdiHmgrTraceObjectType == 4 )
      {
        v53 = 1;
        v8 = 376;
      }
      else
      {
        v53 = 0;
      }
      if ( dword_1C018AEF0 >= v8
        && (v9 = qword_1C018AF80, (int)IsWin32AllocateFromPagedLookasideListImplSupported() >= 0)
        && (v10 = Win32AllocateFromPagedLookasideListImpl(v9)) != 0 )
      {
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        if ( v53 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v8 + v10 - 160), 0LL);
        *(_WORD *)(v10 + 14) = 0x8000;
      }
      else
      {
        v10 = PALLOCMEM2(v8);
        if ( !v10 )
        {
          EngSetLastError(8u);
          v10 = 0LL;
          goto LABEL_14;
        }
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        if ( v53 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v10 + v8 - 160LL), 0LL);
      }
      *(_QWORD *)(v10 + 24) = 216LL;
      *(_DWORD *)(v10 + 80) = 0;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_QWORD *)(v10 + 56) = v10 + 48;
      *(_QWORD *)(v10 + 48) = v10 + 48;
LABEL_14:
      v39 = (struct OBJECT *)v10;
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread && *ThreadWin32Thread && v10 )
        PushThreadGuardedObject((_QWORD *)(v10 + 48), v10, (__int64)CleanUpRegion);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v41, a2, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v43, a3, 0);
      if ( v10 )
      {
        v12 = v41[0];
        if ( !v41[0] )
        {
LABEL_113:
          EngSetLastError(6u);
          goto LABEL_114;
        }
        if ( !v43[0] )
        {
LABEL_111:
          if ( v12 && v43[0] )
            goto LABEL_114;
          goto LABEL_113;
        }
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v39, (struct RGNOBJ *)v41, (struct RGNOBJ *)v43, a4) )
        {
          if ( a1 == a2 )
          {
            v13 = v39;
            v12 = v41[0];
            if ( (unsigned int)HmgReplaceObject(v41[0], v39) )
            {
              v14 = *((_DWORD *)v12 + 8);
              v15 = (char *)v12 + 48;
              *((_DWORD *)v12 + 8) = *((_DWORD *)v13 + 8);
              *((_DWORD *)v13 + 8) = v14;
              v16 = *((_DWORD *)v12 + 9);
              *((_DWORD *)v12 + 9) = *((_DWORD *)v13 + 9);
              *((_DWORD *)v13 + 9) = v16;
              v17 = *(_QWORD *)v15 == (_QWORD)v15;
              v18 = (char *)v13 + 48;
              v19 = *(_QWORD *)v18 == (_QWORD)v18;
              if ( v12 != (struct OBJECT *)-48LL )
              {
                KeEnterCriticalRegion();
                v20 = *(_QWORD *)v15;
                v21 = (char **)*((_QWORD *)v12 + 7);
                if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || *v21 != v15 )
                  __fastfail(3u);
                *v21 = (char *)v20;
                *(_QWORD *)(v20 + 8) = v21;
                *((_QWORD *)v12 + 7) = (char *)v12 + 48;
                *(_QWORD *)v15 = v15;
                KeLeaveCriticalRegion();
              }
              if ( v13 != (struct OBJECT *)-48LL )
              {
                KeEnterCriticalRegion();
                v22 = *(_QWORD *)v18;
                v23 = (char **)*((_QWORD *)v13 + 7);
                if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 || *v23 != v18 )
                  __fastfail(3u);
                *v23 = (char *)v22;
                *(_QWORD *)(v22 + 8) = v23;
                *((_QWORD *)v13 + 7) = (char *)v13 + 48;
                *(_QWORD *)v18 = v18;
                KeLeaveCriticalRegion();
              }
              v24 = (__int64)v12;
              v41[0] = v13;
              v39 = v12;
              v25 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
              v12 = v41[0];
              if ( v25 && *v25 )
              {
                if ( !v17 )
                  PushThreadGuardedObject((_QWORD *)v41[0] + 6, (__int64)v41[0], (__int64)CleanUpRegion);
                if ( !v19 )
                  PushThreadGuardedObject((_QWORD *)(v24 + 48), v24, (__int64)CleanUpRegion);
              }
              v13 = v39;
              if ( *((_DWORD *)v12 + 21) == 1 )
                v26 = 1;
              else
                v26 = (*((_DWORD *)v12 + 20) > 0xA0u) + 2;
              goto LABEL_40;
            }
            goto LABEL_115;
          }
          if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v43, (struct RGNOBJ *)&v39) )
          {
            v37 = RGNOBJ::iComplexity((RGNOBJ *)v43);
            v13 = v39;
            v26 = v37;
            v12 = v41[0];
LABEL_40:
            if ( !v44 )
              RGNOBJ::UpdateUserRgn((RGNOBJ *)v43);
            if ( v43[0] )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v43[0] + 12LL));
              v13 = v39;
              v12 = v41[0];
            }
            if ( !v42 )
              RGNOBJ::UpdateUserRgn((RGNOBJ *)v41);
            if ( v12 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
              v13 = v39;
            }
            if ( v13 )
            {
              v27 = (char *)v13 + 48;
              if ( v13 != (struct OBJECT *)-48LL )
              {
                KeEnterCriticalRegion();
                v28 = *(_QWORD *)v27;
                v29 = (char **)*((_QWORD *)v13 + 7);
                if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 || *v29 != v27 )
                  __fastfail(3u);
                *v29 = (char *)v28;
                *(_QWORD *)(v28 + 8) = v29;
                *((_QWORD *)v13 + 7) = (char *)v13 + 48;
                *(_QWORD *)v27 = v27;
                KeLeaveCriticalRegion();
              }
              if ( v13 != prgnDefault )
              {
                if ( *((__int16 *)v13 + 7) < 0 )
                {
                  v31 = qword_1C018AF80;
                  if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                    Win32FreeToPagedLookasideListImpl(v31, v13);
                }
                else if ( (int)IsWin32FreePoolImplSupported() >= 0 )
                {
                  Win32FreePoolImpl(v13);
                }
              }
            }
            if ( (_DWORD)v40 == 1 )
              REGION::vDeleteREGION(0LL);
            return v26;
          }
          v12 = v41[0];
LABEL_114:
          v13 = v39;
LABEL_115:
          v26 = 0;
          goto LABEL_40;
        }
      }
      v12 = v41[0];
      goto LABEL_111;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v45, a1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v47, a2, 1);
    v32 = v45[0];
    v33 = v47[0];
    if ( v45[0] )
    {
      if ( !v47[0] )
      {
LABEL_89:
        EngSetLastError(6u);
LABEL_90:
        v26 = 0;
LABEL_67:
        if ( !v48 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v47);
        if ( v33 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v33 + 12));
          v32 = v45[0];
        }
        if ( !v46 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v45);
        if ( v32 )
          _InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
        return v26;
      }
      v34 = RGNOBJAPI::bCopy((RGNOBJAPI *)v45, (struct RGNOBJ *)v47);
      v32 = v45[0];
      if ( v34 )
      {
        if ( *(_DWORD *)(v45[0] + 84LL) == 1 )
          v26 = 1;
        else
          v26 = (*(_DWORD *)(v45[0] + 80LL) > 0xA0u) + 2;
        goto LABEL_67;
      }
    }
    if ( v33 && v32 )
      goto LABEL_90;
    goto LABEL_89;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
