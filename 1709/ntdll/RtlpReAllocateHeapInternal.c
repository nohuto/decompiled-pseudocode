/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x18003C770
 * Callers:
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180049470 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800494B8 (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x180024290 (RtlRaiseException.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x180045BB0 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x1800F2EB8 (RtlpSetupExtendedBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateLFHBlock @ 0x18010674C (RtlpValidateLFHBlock.c)
 */

unsigned __int64 __fastcall RtlpReAllocateHeapInternal(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // rdi
  __int16 v9; // r14
  int v11; // r12d
  int v12; // eax
  int v13; // r14d
  unsigned __int64 v14; // rbx
  unsigned __int16 v15; // r15
  __int64 v16; // rbx
  int v17; // r9d
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r14d
  int v26; // r8d
  int v27; // r9d
  unsigned __int64 Heap; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  int v32; // r12d
  struct _TEB *v33; // rbx
  struct _TEB *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r12d
  struct _TEB *v38; // rbx
  int v39; // ecx
  __int64 v40; // rax
  unsigned __int16 v41; // ax
  int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  unsigned __int16 v45; // ax
  __int64 v46; // rcx
  char v47; // dl
  unsigned __int16 v48; // ax
  __int64 v49; // r15
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  char v52; // cl
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int16 v55; // ax
  int v56; // eax
  int v57; // r8d
  __int64 v58; // rax
  unsigned __int16 v59; // ax
  int v60; // eax
  unsigned __int64 v61; // rdx
  int v62; // r9d
  int v63; // eax
  unsigned __int16 v64; // [rsp+30h] [rbp-128h]
  int v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+40h] [rbp-118h]
  int v67; // [rsp+40h] [rbp-118h]
  int v68; // [rsp+40h] [rbp-118h]
  int v69; // [rsp+50h] [rbp-108h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v8 = a3;
  v9 = a2;
  v11 = 0;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v34 = NtCurrentTeb();
    v34->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v19 = a2 & 1;
    v20 = v19 | 2;
    if ( (v9 & 8) == 0 )
      v20 = v19;
    if ( (v9 & 4) != 0 )
      v20 |= 0x80000000;
    v21 = v20 | 0x100;
    if ( (v9 & 0x100) == 0 )
      v21 = v20;
    v22 = v9 & 0xE00 | v21;
    if ( (v9 & 0xE00) == 0 )
      v22 = v21;
    if ( (v9 & 0x10) != 0 )
      v22 |= 0x2000000u;
    if ( (v9 & 2) != 0 )
      v22 |= 0x1000000u;
    v23 = *(unsigned int *)(a1 + 64);
    v24 = 0;
    if ( (_DWORD)v23 )
      LOBYTE(v24) = (_DWORD)v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = v22 | 1;
    if ( !v24 )
      v25 = v22;
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && ((_WORD)v8 || (v35 = RtlCSparseBitmapBitmaskRead(v23, 2 * (v8 >> 20))) != 0 && (_DWORD)v35 != 3) )
    {
      v26 = v8 - 16;
    }
    else
    {
      v26 = v8;
    }
    v27 = a4;
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a4 + 16 >= a4 )
      v27 = a4 + 16;
    Heap = RtlpHpReAllocateHeap(a1, v25, v26, v27, (__int64)a5, (__int64)a6);
    v30 = Heap;
    if ( Heap )
    {
      if ( Heap != -1LL )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0
          && ((_WORD)Heap || (v36 = RtlCSparseBitmapBitmaskRead(v29, 2 * (Heap >> 20))) != 0 && (_DWORD)v36 != 3) )
        {
          v30 += 16LL;
        }
        if ( a5 )
        {
          v31 = *a5;
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
            v31 -= 16LL;
          *a5 = v31;
        }
LABEL_44:
        if ( (dword_180160378 & 1) != 0
          && (dword_180160378 & 2) != 0
          && (PVOID)a1 != RtlpHpMetadataHeap
          && NtCurrentPeb()->ProcessHeap
          && v30 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, v30);
        }
        return v30;
      }
      v37 = -1073741819;
    }
    else
    {
      v37 = -1073741801;
    }
    v30 = 0LL;
    NtCurrentTeb()->LastStatusValue = v37;
    v38 = NtCurrentTeb();
    v38->LastErrorValue = RtlNtStatusToDosError(v37);
    if ( v25 < 0 || *(int *)(a1 + 20) < 0 )
    {
      ExceptionRecord.ExceptionCode = v37;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = a4;
      RtlRaiseException(&ExceptionRecord);
    }
    goto LABEL_44;
  }
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  v12 = *(_DWORD *)(a1 + 116);
  v13 = v12 | a2;
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v14 = RtlpProbeUserBufferSafe(a1, a3);
      goto LABEL_13;
    }
    if ( (a3 & 0xF) != 0 )
    {
      v39 = 9;
    }
    else
    {
      v14 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      {
LABEL_13:
        if ( !v14 )
        {
          v32 = -1073741819;
          goto LABEL_52;
        }
        if ( *(_BYTE *)(v8 - 1) != 5 )
        {
LABEL_15:
          v15 = 0;
          goto LABEL_16;
        }
        if ( *(char *)(v14 + 15) >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v69 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v14 + 8);
            if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v14 + 8)) >> 8) ^ BYTE2(v69))) )
              goto LABEL_106;
          }
        }
        else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v14) )
        {
          goto LABEL_106;
        }
        if ( *(char *)(v14 + 15) >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v42 = *(_DWORD *)(v14 + 8);
            LOWORD(v65) = v42;
            if ( (v42 & *(_DWORD *)(a1 + 124)) != 0 )
              v65 = *(_DWORD *)(a1 + 136) ^ v42;
            v41 = v65;
          }
          else
          {
            v41 = *(_WORD *)(v14 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v14 + 8) ^ a1 ^ (v14 >> 4)) )
            v40 = 0LL;
          else
            v40 = *(_QWORD *)(v14
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
          v41 = *(_WORD *)(v40 + 36);
        }
        v43 = v41;
        if ( *(_BYTE *)(v14 + 15) == 4 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v44 = *(_DWORD *)(v14 + 8);
            LOWORD(v66) = v44;
            if ( (v44 & *(_DWORD *)(a1 + 124)) != 0 )
              v66 = *(_DWORD *)(a1 + 136) ^ v44;
            v45 = v66;
          }
          else
          {
            v45 = *(_WORD *)(v14 + 8);
          }
          v46 = v43 + *(_QWORD *)(v14 - 16) - v45;
        }
        else
        {
          v46 = 16LL * v41;
        }
        if ( v46 + v14 >= v8 )
        {
          v11 = *(_DWORD *)(v8 - 8);
          if ( (v13 & 0x3C000102) != 0 )
            goto LABEL_15;
          v47 = *(_BYTE *)(v8 - 1);
          if ( v47 == 5 )
          {
            v48 = 16 * *(unsigned __int8 *)(v8 - 16 + 14);
          }
          else if ( (v47 & 0x40) != 0 )
          {
            v48 = 16 * (v47 & 0x3F);
          }
          else
          {
            v48 = 0;
          }
          v49 = v48;
          v64 = v48;
          v50 = v48 + a4;
          if ( v50 < a4 )
          {
LABEL_51:
            v32 = -1073741801;
            goto LABEL_52;
          }
          a4 = v50;
          if ( v47 == 5 )
            v51 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
          else
            v51 = 0LL;
          if ( (int)RtlpCallInterceptRoutine(v11, a1, v8, 5, v51) >= 0 )
          {
            v52 = *(_BYTE *)(v14 + 15);
            if ( v52 == 4 )
            {
              if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
                RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
                if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
                  RtlpAnalyzeHeapFailure(a1, v14);
              }
              v15 = v64;
              *(_WORD *)(v14 + 8) -= v64;
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
                *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
              }
              if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
                RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
            }
            else
            {
              if ( v52 == 5 )
              {
                v53 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
              }
              else if ( (v52 & 0x40) != 0 )
              {
                v53 = *(unsigned __int16 *)(16LL * (v52 & 0x3F) + v14 + 12);
              }
              else if ( (v52 & 0x3F) == 0x3F )
              {
                if ( v52 >= 0 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v56 = *(_DWORD *)(v14 + 8);
                    LOWORD(v67) = v56;
                    if ( (v56 & *(_DWORD *)(a1 + 124)) != 0 )
                      v67 = *(_DWORD *)(a1 + 136) ^ v56;
                    v55 = v67;
                  }
                  else
                  {
                    v55 = *(_WORD *)(v14 + 8);
                  }
                }
                else
                {
                  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4)) )
                    v54 = 0LL;
                  else
                    v54 = *(_QWORD *)(v14
                                    - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12));
                  v55 = *(_WORD *)(v54 + 36);
                }
                v53 = *(_QWORD *)(16LL * v55 + v14);
              }
              else
              {
                v53 = v52 & 0x3F;
              }
              v57 = *(char *)(v14 + 15) < 0 ? 0x80 : 0;
              if ( (*(_BYTE *)(v14 + 15) & 0x80) != 0 )
              {
                if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4)) )
                  v58 = 0LL;
                else
                  v58 = *(_QWORD *)(v14
                                  - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12));
                v59 = *(_WORD *)(v58 + 36);
              }
              else if ( *(_DWORD *)(a1 + 124) )
              {
                v60 = *(_DWORD *)(v14 + 8);
                LOWORD(v68) = v60;
                if ( (v60 & *(_DWORD *)(a1 + 124)) != 0 )
                  v68 = *(_DWORD *)(a1 + 136) ^ v60;
                v59 = v68;
              }
              else
              {
                v59 = *(_WORD *)(v14 + 8);
              }
              v61 = v53 - v49;
              v15 = v64;
              if ( v61 >= 0x3F )
              {
                *(_QWORD *)(v14 + 16LL * v59) = v61;
                *(_BYTE *)(v14 + 15) = v57 | 0x3F;
              }
              else
              {
                *(_BYTE *)(v14 + 15) = v57 | v61;
              }
            }
            v8 = v14 + 16;
LABEL_16:
            v16 = RtlpReAllocateHeap(a1);
            if ( (dword_180160378 & 1) != 0
              && (dword_180160378 & 2) != 0
              && (PVOID)a1 != RtlpHpMetadataHeap
              && NtCurrentPeb()->ProcessHeap )
            {
              if ( !v16 )
              {
LABEL_49:
                a4 -= v15;
                if ( v11 )
                {
                  RtlSizeHeap((PVOID)a1, 0, (PVOID)v8);
                  v63 = RtlpSetupExtendedBlock(a1, v13, v8, v62, v15, v11);
                  RtlpCallInterceptRoutine(v11, a1, v63, 6, v8);
                }
                goto LABEL_51;
              }
              if ( (v13 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(a1, v8);
                RtlpHpStackTraceAddStack(a1, v16);
              }
            }
            if ( v16 )
            {
              v6 = v16;
              if ( v11 )
              {
                v6 = RtlpSetupExtendedBlock(a1, v13, v16, v17, v15, v11);
                RtlpCallInterceptRoutine(v11, a1, v6, 6, v16);
              }
              return v6;
            }
            goto LABEL_49;
          }
          v32 = -1073741819;
LABEL_52:
          NtCurrentTeb()->LastStatusValue = v32;
          v33 = NtCurrentTeb();
          v33->LastErrorValue = RtlNtStatusToDosError(v32);
          if ( (v13 & 4) != 0 )
          {
            ExceptionRecord.ExceptionCode = v32;
            ExceptionRecord.ExceptionAddress = RtlRaiseException;
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionRecord.NumberParameters = 1;
            ExceptionRecord.ExceptionFlags = 0;
            ExceptionRecord.ExceptionInformation[0] = a4;
            RtlRaiseException(&ExceptionRecord);
          }
          return v6;
        }
LABEL_106:
        RtlpLogHeapFailure(3, a1, v14, v8, 0LL, 0LL);
        v32 = -1073741811;
        goto LABEL_52;
      }
      LODWORD(a3) = v14;
      v39 = 8;
    }
    RtlpLogHeapFailure(v39, a1, a3, 0, 0LL, 0LL);
    v14 = 0LL;
    goto LABEL_13;
  }
  return RtlDebugReAllocateHeap(a1);
}
