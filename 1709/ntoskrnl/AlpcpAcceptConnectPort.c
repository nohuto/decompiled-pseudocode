/*
 * XREFs of AlpcpAcceptConnectPort @ 0x140465410
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x14046537C (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x140591244 (NtAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpMapLegacyPortView @ 0x14045E120 (AlpcpMapLegacyPortView.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpFlushResourcesPort @ 0x1404646A0 (AlpcpFlushResourcesPort.c)
 *     AlpcpDispatchMessage @ 0x140465C50 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x140465C84 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140465CF0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSetOwnerProcessPort @ 0x1404661B0 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140466530 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x140466B0C (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x140466C88 (AlpcpCreatePort.c)
 *     AlpcpValidateConnectionMessage @ 0x140466CEC (AlpcpValidateConnectionMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404672A8 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E8F94 (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        char a9,
        __m128i *a10,
        unsigned __int64 a11,
        char a12)
{
  KPROCESSOR_MODE PreviousMode; // cl
  int v14; // edi
  char v15; // r13
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  _BYTE *v21; // rcx
  __m128i *v22; // rax
  NTSTATUS result; // eax
  _BYTE *v24; // rcx
  _DWORD *v25; // rbx
  int v26; // esi
  __int64 v27; // r8
  _KPROCESS *Process; // rcx
  __int64 v29; // r15
  PVOID v30; // rsi
  unsigned __int64 v31; // r14
  char *v32; // r14
  volatile signed __int64 *v33; // r14
  _QWORD *v34; // rax
  int v35; // ecx
  int v36; // r13d
  ULONG_PTR v37; // rsi
  int inserted; // ebx
  _QWORD *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rcx
  HANDLE v42; // rbx
  __int64 v43; // rax
  _OWORD *v44; // rax
  int v45; // eax
  PVOID v46; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-228h]
  ULONG_PTR v48; // [rsp+48h] [rbp-220h] BYREF
  int v49; // [rsp+50h] [rbp-218h]
  int v50; // [rsp+54h] [rbp-214h]
  _DWORD *v51; // [rsp+58h] [rbp-210h]
  PVOID v52; // [rsp+60h] [rbp-208h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-200h]
  __int64 v54; // [rsp+70h] [rbp-1F8h]
  HANDLE v55; // [rsp+78h] [rbp-1F0h] BYREF
  _DWORD *v56; // [rsp+80h] [rbp-1E8h]
  PVOID Object; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v58; // [rsp+90h] [rbp-1D8h]
  __int64 v59; // [rsp+98h] [rbp-1D0h]
  _OWORD *v60; // [rsp+A0h] [rbp-1C8h]
  __int128 v61; // [rsp+A8h] [rbp-1C0h]
  __int64 v62; // [rsp+B8h] [rbp-1B0h]
  __int128 v63; // [rsp+C0h] [rbp-1A8h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-198h]
  __int64 v65; // [rsp+E0h] [rbp-188h]
  __m128i v66[3]; // [rsp+E8h] [rbp-180h] BYREF
  _OWORD v67[5]; // [rsp+120h] [rbp-148h] BYREF
  _QWORD v68[12]; // [rsp+170h] [rbp-F8h] BYREF
  _OWORD v69[5]; // [rsp+1D0h] [rbp-98h] BYREF

  v54 = a4;
  Handle = a3;
  v50 = a2;
  v56 = (_DWORD *)a1;
  v58 = (__int64)a7;
  v59 = a8;
  v60 = (_OWORD *)a11;
  memset(v68, 0, 0x40uLL);
  memset(v69, 0, 0x48uLL);
  memset(v66, 0, sizeof(v66));
  v61 = 0uLL;
  v62 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  v14 = 0;
  if ( PreviousMode )
  {
    v15 = a12;
    if ( a12 || a9 )
    {
      v16 = (unsigned int)v50;
      v17 = a1;
      if ( v50 < 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v17 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v17 = *(_QWORD *)v17;
      }
    }
    else
    {
      v16 = (unsigned int)v50;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, &v63, v16);
    if ( a5 )
    {
      v19 = a5;
      if ( a5 >= v18 )
        v19 = v18;
      v69[0] = *(_OWORD *)v19;
      v69[1] = *(_OWORD *)(v19 + 16);
      v69[2] = *(_OWORD *)(v19 + 32);
      v69[3] = *(_OWORD *)(v19 + 48);
      *(_QWORD *)&v69[4] = *(_QWORD *)(v19 + 64);
    }
    if ( a10 )
    {
      v22 = a10;
      if ( (unsigned __int64)a10 >= v18 )
        v22 = (__m128i *)v18;
      v66[0] = *v22;
      v66[1] = v22[1];
      v66[2] = v22[2];
      if ( _mm_cvtsi128_si32(v66[0]) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = a10;
      if ( (unsigned __int64)a10 >= v18 )
        v24 = (_BYTE *)v18;
      *v24 = *v24;
      v24[47] = v24[47];
    }
    if ( a11 )
    {
      v20 = (_DWORD *)a11;
      if ( a11 >= v18 )
        v20 = (_DWORD *)v18;
      if ( *v20 != 24 )
        return -1073741811;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (_BYTE *)a11;
      if ( a11 >= v18 )
        v21 = (_BYTE *)v18;
      *v21 = *v21;
      v21[23] = v21[23];
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v69[0] = *(_OWORD *)a5;
      v69[1] = *(_OWORD *)(a5 + 16);
      v69[2] = *(_OWORD *)(a5 + 32);
      v69[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v69[4] = *(_QWORD *)(a5 + 64);
    }
    v63 = *a7;
    v64 = a7[1];
    v65 = *((_QWORD *)a7 + 4);
    v15 = a12;
  }
  if ( !DWORD2(v64) )
    return -1073741281;
  v25 = 0LL;
  v51 = 0LL;
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v25 = Object;
    v51 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v15 )
      return -1073741504;
    LODWORD(v65) = 0;
  }
  v26 = AlpcpLookupMessage(v25, DWORD2(v64), (unsigned int)v65, &v48);
  if ( v26 < 0 )
  {
    if ( v25 )
      ObfDereferenceObject(v25);
    return v26;
  }
  if ( v25 )
  {
    ObfDereferenceObject(v25);
  }
  else
  {
    v25 = *(_DWORD **)(v48 + 16);
    v51 = v25;
  }
  if ( (*(_DWORD *)(v48 + 40) & 0x80u) != 0 )
  {
    v14 = -1073740029;
    goto LABEL_105;
  }
  if ( (*(unsigned __int16 *)(v48 + 244) & 0xFFFF00FF) != 0xA )
    goto LABEL_99;
  LOBYTE(v27) = v15;
  v26 = AlpcpValidateConnectionMessage(v25, &v63, v27);
  v49 = v26;
  if ( v26 >= 0 )
  {
    v29 = *(_QWORD *)(v48 + 24);
    Handle = *(HANDLE *)(v29 + 16);
    if ( (*(_DWORD *)(v29 + 416) & 0x20) != 0 )
    {
      v14 = -1073741769;
      goto LABEL_105;
    }
    if ( (v25[64] & 0x100000) != 0
      || (Process = KeGetCurrentThread()->ApcState.Process, v25 = v51, Process == *((_KPROCESS **)v51 + 3)) )
    {
      if ( a9 )
      {
        LOBYTE(Process) = AccessMode;
        v26 = AlpcpCreatePort(Process, v54, &v52);
        if ( v26 >= 0 )
        {
          v30 = v52;
          LODWORD(v54) = AlpcpInitializePort(v52, 3LL);
          if ( (int)v54 < 0 )
          {
            AlpcpUnlockMessage(v48);
            ObfDereferenceObject(v30);
            return v54;
          }
          v31 = (unsigned __int64)v69 & -(__int64)(a5 != 0);
          v49 = AlpcpValidateAndSetPortAttributes((_DWORD)v30, v31, (_DWORD)v25, 0, 0, 0, v15);
          if ( v49 < 0 )
          {
            AlpcpUnlockMessage(v48);
            ObfDereferenceObject(v30);
            return v49;
          }
          AlpcpSetOwnerProcessPort(v30, v31);
          if ( v15 )
            *((_DWORD *)v30 + 104) |= 0x1000u;
          v32 = (char *)Handle;
          AlpcpReferenceBlob((ULONG_PTR)Handle);
          v33 = (volatile signed __int64 *)(v32 - 16);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v33, 0LL);
          v34 = Handle;
          *((_QWORD *)v30 + 2) = Handle;
          v34[1] = v30;
          *(_QWORD *)(v29 + 424) = v25;
          *(_QWORD *)(v29 + 432) = v30;
          *((_QWORD *)v30 + 53) = v29;
          *((_QWORD *)v30 + 54) = v29;
          v35 = *(_DWORD *)(v29 + 416);
          if ( (v35 & 0x1000) != 0 && (*((_DWORD *)v30 + 104) & 0x1000) != 0 )
          {
            *(_DWORD *)(v29 + 416) = v35 | 0x2000;
            *((_DWORD *)v30 + 104) |= 0x2000u;
          }
          if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v33);
          KeAbPostRelease((ULONG_PTR)v33);
          WORD2(v68[6]) = v63 + 40;
          *(_DWORD *)((char *)&v68[6] + 6) = 11;
          v36 = v50;
          v37 = v48;
          inserted = AlpcpSetupMessageDataForDeferredCopy(v48, v58, v50, (unsigned __int16)v63, 0, AccessMode);
          if ( inserted < 0 )
          {
            AlpcpUnlockMessage(v37);
            v46 = v52;
LABEL_111:
            ObfDereferenceObject(v46);
            return inserted;
          }
          if ( a12 && *(_QWORD *)(v37 + 144) )
          {
            v39 = v52;
            v45 = AlpcpMapLegacyPortRemoteView(v52);
            inserted = v45;
            if ( v45 < 0 )
            {
              AlpcpUnlockMessage(v37);
LABEL_110:
              v46 = v39;
              goto LABEL_111;
            }
          }
          else
          {
            v39 = v52;
          }
          if ( a10 )
          {
            memset(v67, 0, 0x48uLL);
            inserted = AlpcpMapLegacyPortView(v39, (__int64)v66, (__int64)v67);
            if ( inserted >= 0 )
            {
              inserted = AlpcpMapLegacyPortRemoteView((PVOID)v29);
              if ( inserted >= 0 )
                v66[2].m128i_i64[1] = v68[10];
            }
          }
          else
          {
            inserted = AlpcpCaptureAttributes(v51, (unsigned int)v36, v59, v37, v67);
          }
          if ( inserted < 0
            || (ObfReferenceObject(v39), inserted = ObInsertObjectEx(v39, 0LL, 0, 0LL, (__int64)&v55), inserted < 0) )
          {
            AlpcpReleaseAttributes(v67);
            AlpcpUnlockMessage(v37);
            AlpcpFlushResourcesPort((__int64)v39);
            goto LABEL_110;
          }
          AlpcpReleaseAttributes(v37 + 104);
          *(_OWORD *)(v37 + 104) = v67[0];
          *(_OWORD *)(v37 + 120) = v67[1];
          *(_OWORD *)(v37 + 136) = v67[2];
          *(_OWORD *)(v37 + 152) = v67[3];
          *(_QWORD *)(v37 + 168) = *(_QWORD *)&v67[4];
          v40 = *(_QWORD *)(v37 + 208);
          if ( v40 )
          {
            PsReleaseProcessWakeCounter(v40, *(unsigned int *)(v37 + 264));
            *(_QWORD *)(v37 + 208) = 0LL;
          }
          v41 = *(_QWORD *)(v37 + 216);
          if ( v41 )
          {
            PsReleaseProcessWakeCounter(v41, *(unsigned int *)(v37 + 264));
            *(_QWORD *)(v37 + 216) = 0LL;
          }
          v42 = v55;
          if ( v36 < 0 )
            *v56 = (_DWORD)v55;
          else
            *(_QWORD *)v56 = v55;
          v43 = a6;
          if ( !a6 )
            v43 = (__int64)v42;
          v39[7] = v43;
          if ( a10 )
          {
            *a10 = v66[0];
            a10[1] = v66[1];
            a10[2] = v66[2];
          }
          v44 = v60;
          if ( v60 )
          {
            *v60 = v61;
            *((_QWORD *)v44 + 2) = v62;
          }
          v68[0] = v39;
          v68[1] = v37;
          LODWORD(v68[6]) = 0x10000;
          v26 = AlpcpDispatchMessage(v68);
          v49 = v26;
          v48 = 0LL;
          ObfDereferenceObject(v39);
          if ( v26 < 0 )
            NtClose(v42);
          return v26;
        }
        goto LABEL_106;
      }
      ExAcquirePushLockExclusiveEx(v29 + 352, 0LL);
      *(_DWORD *)(v29 + 416) |= 0x10u;
      if ( (*(_DWORD *)(v29 + 416) & 0x100) != 0 )
        *(_QWORD *)(v29 + 56) = a6;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 352));
      KeAbPostRelease(v29 + 352);
      v25 = v51;
LABEL_105:
      AlpcpCancelMessage((__int64)v25, v48, 0x10000);
      return v14;
    }
LABEL_99:
    v26 = -1073741281;
  }
LABEL_106:
  AlpcpUnlockMessage(v48);
  return v26;
}
