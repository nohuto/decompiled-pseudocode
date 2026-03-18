/*
 * XREFs of AlpcpAcceptConnectPort @ 0x1404DBC58
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x1404DB9BC (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x14057AA5C (NtAcceptConnectPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpFlushResourcesPort @ 0x1404DAB68 (AlpcpFlushResourcesPort.c)
 *     AlpcpDispatchMessage @ 0x1404DC48C (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x1404DC4C0 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1404DC52C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSetOwnerProcessPort @ 0x1404DC9F4 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1404DCB6C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpInitializePort @ 0x1404DD334 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1404DD4C0 (AlpcpCreatePort.c)
 *     AlpcpValidateConnectionMessage @ 0x1404DD524 (AlpcpValidateConnectionMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E81D4 (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int128 *a7,
        unsigned int *a8,
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
  __int64 v26; // rdx
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // r9
  _KPROCESS *Process; // rcx
  __int64 v31; // r15
  PVOID v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  char *v40; // r14
  volatile signed __int64 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  int v46; // ecx
  int v47; // r13d
  ULONG_PTR v48; // rsi
  __int64 v49; // rdx
  int inserted; // ebx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rcx
  HANDLE v56; // rbx
  __int64 v57; // rax
  _OWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  PVOID v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-228h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-220h] BYREF
  int v71; // [rsp+50h] [rbp-218h]
  int v72; // [rsp+54h] [rbp-214h]
  _DWORD *v73; // [rsp+58h] [rbp-210h]
  PVOID v74; // [rsp+60h] [rbp-208h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-200h]
  __int64 v76; // [rsp+70h] [rbp-1F8h]
  HANDLE v77; // [rsp+78h] [rbp-1F0h] BYREF
  _DWORD *v78; // [rsp+80h] [rbp-1E8h]
  PVOID Object; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v80; // [rsp+90h] [rbp-1D8h]
  unsigned int *v81; // [rsp+98h] [rbp-1D0h]
  _OWORD *v82; // [rsp+A0h] [rbp-1C8h]
  __int128 v83; // [rsp+A8h] [rbp-1C0h]
  __int64 v84; // [rsp+B8h] [rbp-1B0h]
  __int128 v85; // [rsp+C0h] [rbp-1A8h] BYREF
  __int128 v86; // [rsp+D0h] [rbp-198h]
  __int64 v87; // [rsp+E0h] [rbp-188h]
  __m128i v88[3]; // [rsp+E8h] [rbp-180h] BYREF
  _OWORD v89[5]; // [rsp+120h] [rbp-148h] BYREF
  _QWORD v90[12]; // [rsp+170h] [rbp-F8h] BYREF
  _OWORD v91[5]; // [rsp+1D0h] [rbp-98h] BYREF

  v76 = a4;
  Handle = a3;
  v72 = a2;
  v78 = (_DWORD *)a1;
  v80 = (__int64)a7;
  v81 = a8;
  v82 = (_OWORD *)a11;
  memset(v90, 0, 0x40uLL);
  memset(v91, 0, 0x48uLL);
  memset(v88, 0, sizeof(v88));
  v83 = 0uLL;
  v84 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  v14 = 0;
  if ( PreviousMode )
  {
    v15 = a12;
    if ( a12 || a9 )
    {
      v16 = (unsigned int)v72;
      v17 = a1;
      if ( v72 < 0 )
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
      v16 = (unsigned int)v72;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, &v85, v16);
    if ( a5 )
    {
      v19 = a5;
      if ( a5 >= v18 )
        v19 = v18;
      v91[0] = *(_OWORD *)v19;
      v91[1] = *(_OWORD *)(v19 + 16);
      v91[2] = *(_OWORD *)(v19 + 32);
      v91[3] = *(_OWORD *)(v19 + 48);
      *(_QWORD *)&v91[4] = *(_QWORD *)(v19 + 64);
    }
    if ( a10 )
    {
      v22 = a10;
      if ( (unsigned __int64)a10 >= v18 )
        v22 = (__m128i *)v18;
      v88[0] = *v22;
      v88[1] = v22[1];
      v88[2] = v22[2];
      if ( _mm_cvtsi128_si32(v88[0]) != 48 )
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
      v91[0] = *(_OWORD *)a5;
      v91[1] = *(_OWORD *)(a5 + 16);
      v91[2] = *(_OWORD *)(a5 + 32);
      v91[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v91[4] = *(_QWORD *)(a5 + 64);
    }
    v85 = *a7;
    v86 = a7[1];
    v87 = *((_QWORD *)a7 + 4);
    v15 = a12;
  }
  if ( !DWORD2(v86) )
    return -1073741281;
  v25 = 0LL;
  v73 = 0LL;
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v25 = Object;
    v73 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v15 )
      return -1073741504;
    LODWORD(v87) = 0;
  }
  v27 = AlpcpLookupMessage((__int64)v25, DWORD2(v86), v87, &BugCheckParameter2);
  if ( v27 < 0 )
  {
    if ( v25 )
      ObfDereferenceObject(v25);
    return v27;
  }
  if ( v25 )
  {
    ObfDereferenceObject(v25);
  }
  else
  {
    v25 = *(_DWORD **)(BugCheckParameter2 + 16);
    v73 = v25;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    v14 = -1073740029;
    goto LABEL_105;
  }
  if ( (*(unsigned __int16 *)(BugCheckParameter2 + 244) & 0xFFFF00FF) != 0xA )
    goto LABEL_98;
  LOBYTE(v28) = v15;
  v27 = AlpcpValidateConnectionMessage(v25, &v85, v28);
  v71 = v27;
  if ( v27 >= 0 )
  {
    v31 = *(_QWORD *)(BugCheckParameter2 + 24);
    Handle = *(HANDLE *)(v31 + 16);
    if ( (*(_DWORD *)(v31 + 416) & 0x20) != 0 )
    {
      v14 = -1073741769;
      goto LABEL_105;
    }
    if ( (v25[64] & 0x100000) != 0
      || (Process = KeGetCurrentThread()->ApcState.Process, v25 = v73, Process == *((_KPROCESS **)v73 + 3)) )
    {
      if ( a9 )
      {
        LOBYTE(Process) = AccessMode;
        v27 = AlpcpCreatePort(Process, v76, &v74);
        if ( v27 >= 0 )
        {
          v32 = v74;
          LODWORD(v76) = AlpcpInitializePort(v74, 3LL);
          if ( (int)v76 < 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2, v33, v34, v35);
            ObfDereferenceObject(v32);
            return v76;
          }
          v36 = (unsigned __int64)v91 & -(__int64)(a5 != 0);
          v71 = AlpcpValidateAndSetPortAttributes((_DWORD)v32, v36, (_DWORD)v25, 0, 0, 0, v15);
          if ( v71 < 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2, v37, v38, v39);
            ObfDereferenceObject(v32);
            return v71;
          }
          AlpcpSetOwnerProcessPort(v32, v36);
          if ( v15 )
            *((_DWORD *)v32 + 104) |= 0x1000u;
          v40 = (char *)Handle;
          AlpcpReferenceBlob((ULONG_PTR)Handle);
          v41 = (volatile signed __int64 *)(v40 - 16);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v41, 0LL);
          v45 = Handle;
          *((_QWORD *)v32 + 2) = Handle;
          v45[1] = v32;
          *(_QWORD *)(v31 + 424) = v25;
          *(_QWORD *)(v31 + 432) = v32;
          *((_QWORD *)v32 + 53) = v31;
          *((_QWORD *)v32 + 54) = v31;
          v46 = *(_DWORD *)(v31 + 416);
          if ( (v46 & 0x1000) != 0 && (*((_DWORD *)v32 + 104) & 0x1000) != 0 )
          {
            *(_DWORD *)(v31 + 416) = v46 | 0x2000;
            *((_DWORD *)v32 + 104) |= 0x2000u;
          }
          if ( (_InterlockedExchangeAdd64(v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v41, v42, v43, v44);
          KeAbPostRelease((ULONG_PTR)v41);
          WORD2(v90[6]) = v85 + 40;
          *(_DWORD *)((char *)&v90[6] + 6) = 11;
          v47 = v72;
          v48 = BugCheckParameter2;
          inserted = AlpcpSetupMessageDataForDeferredCopy(
                       BugCheckParameter2,
                       v80,
                       v72,
                       (unsigned __int16)v85,
                       0,
                       AccessMode);
          if ( inserted < 0 )
          {
            AlpcpUnlockMessage(v48, v49, v51, v52);
            v65 = v74;
LABEL_110:
            ObfDereferenceObject(v65);
            return inserted;
          }
          if ( a12 && *(_QWORD *)(v48 + 144) )
          {
            v53 = v74;
            inserted = AlpcpMapLegacyPortRemoteView(v74);
            if ( inserted < 0 )
            {
              AlpcpUnlockMessage(v48, v59, v60, v61);
LABEL_109:
              v65 = v53;
              goto LABEL_110;
            }
          }
          else
          {
            v53 = v74;
          }
          if ( a10 )
          {
            memset(v89, 0, 0x48uLL);
            inserted = AlpcpMapLegacyPortView(v53);
            if ( inserted >= 0 )
            {
              inserted = AlpcpMapLegacyPortRemoteView((PVOID)v31);
              if ( inserted >= 0 )
                v88[2].m128i_i64[1] = v90[10];
            }
          }
          else
          {
            inserted = AlpcpCaptureAttributes((__int64)v73, v47, v81, v48, v89);
          }
          if ( inserted < 0
            || (ObfReferenceObject(v53), inserted = ObInsertObjectEx(v53, 0LL, 2031617LL, 0, 0, 0LL, &v77), inserted < 0) )
          {
            AlpcpReleaseAttributes(v89);
            AlpcpUnlockMessage(v48, v66, v67, v68);
            AlpcpFlushResourcesPort((__int64)v53);
            goto LABEL_109;
          }
          AlpcpReleaseAttributes(v48 + 104);
          *(_OWORD *)(v48 + 104) = v89[0];
          *(_OWORD *)(v48 + 120) = v89[1];
          *(_OWORD *)(v48 + 136) = v89[2];
          *(_OWORD *)(v48 + 152) = v89[3];
          *(_QWORD *)(v48 + 168) = *(_QWORD *)&v89[4];
          v54 = *(_QWORD *)(v48 + 208);
          if ( v54 )
          {
            PsReleaseProcessWakeCounter(v54, *(unsigned int *)(v48 + 264));
            *(_QWORD *)(v48 + 208) = 0LL;
          }
          v55 = *(_QWORD *)(v48 + 216);
          if ( v55 )
          {
            PsReleaseProcessWakeCounter(v55, *(unsigned int *)(v48 + 264));
            *(_QWORD *)(v48 + 216) = 0LL;
          }
          v56 = v77;
          if ( v47 < 0 )
            *v78 = (_DWORD)v77;
          else
            *(_QWORD *)v78 = v77;
          v57 = a6;
          if ( !a6 )
            v57 = (__int64)v56;
          v53[7] = v57;
          if ( a10 )
          {
            *a10 = v88[0];
            a10[1] = v88[1];
            a10[2] = v88[2];
          }
          v58 = v82;
          if ( v82 )
          {
            *v82 = v83;
            *((_QWORD *)v58 + 2) = v84;
          }
          v90[0] = v53;
          v90[1] = v48;
          LODWORD(v90[6]) = 0x10000;
          v27 = AlpcpDispatchMessage(v90);
          v71 = v27;
          BugCheckParameter2 = 0LL;
          ObfDereferenceObject(v53);
          if ( v27 < 0 )
            NtClose(v56);
          return v27;
        }
        goto LABEL_99;
      }
      ExAcquirePushLockExclusiveEx(v31 + 352, 0LL);
      *(_DWORD *)(v31 + 416) |= 0x10u;
      if ( (*(_DWORD *)(v31 + 416) & 0x100) != 0 )
        *(_QWORD *)(v31 + 56) = a6;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v31 + 352), v62, v63, v64);
      KeAbPostRelease(v31 + 352);
      v25 = v73;
LABEL_105:
      AlpcpCancelMessage(v25, BugCheckParameter2, 0x10000LL);
      return v14;
    }
LABEL_98:
    v27 = -1073741281;
  }
LABEL_99:
  AlpcpUnlockMessage(BugCheckParameter2, v26, v28, v29);
  return v27;
}
