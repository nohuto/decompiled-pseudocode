/*
 * XREFs of AlpcpAcceptConnectPort @ 0x140475588
 * Callers:
 *     NtAcceptConnectPort @ 0x140450EDC (NtAcceptConnectPort.c)
 *     NtAlpcAcceptConnectPort @ 0x140475144 (NtAlpcAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpMapLegacyPortView @ 0x140436098 (AlpcpMapLegacyPortView.c)
 *     AlpcpFlushResourcesPort @ 0x140473ABC (AlpcpFlushResourcesPort.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047545C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateConnectionMessage @ 0x140475508 (AlpcpValidateConnectionMessage.c)
 *     AlpcpDispatchMessage @ 0x140475DF8 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x140475E20 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140475E8C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCreatePort @ 0x140475F08 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x140475F6C (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14047613C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x140476CEC (AlpcpSetOwnerProcessPort.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140574B50 (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        char a9,
        __m128i *a10,
        unsigned __int64 a11,
        char a12)
{
  KPROCESSOR_MODE PreviousMode; // cl
  int v14; // edi
  char v15; // r13
  int v16; // r8d
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
  _KPROCESS *Process; // rcx
  __int64 v28; // r15
  PVOID v29; // rsi
  int v30; // r13d
  char *v31; // r14
  volatile signed __int64 *v32; // r14
  _QWORD *v33; // rax
  int v34; // ecx
  int v35; // r13d
  ULONG_PTR v36; // rsi
  int inserted; // ebx
  _QWORD *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rcx
  HANDLE v41; // rbx
  __int64 v42; // rax
  _OWORD *v43; // rax
  int v44; // eax
  PVOID v45; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-228h]
  ULONG_PTR v47; // [rsp+48h] [rbp-220h] BYREF
  int v48; // [rsp+50h] [rbp-218h]
  int v49; // [rsp+54h] [rbp-214h]
  _DWORD *v50; // [rsp+58h] [rbp-210h]
  PVOID v51; // [rsp+60h] [rbp-208h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-200h]
  __int64 v53; // [rsp+70h] [rbp-1F8h]
  HANDLE v54; // [rsp+78h] [rbp-1F0h] BYREF
  _DWORD *v55; // [rsp+80h] [rbp-1E8h]
  PVOID Object; // [rsp+88h] [rbp-1E0h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-1D8h]
  __int64 v58; // [rsp+98h] [rbp-1D0h]
  _OWORD *v59; // [rsp+A0h] [rbp-1C8h]
  __int128 v60; // [rsp+A8h] [rbp-1C0h]
  __int64 v61; // [rsp+B8h] [rbp-1B0h]
  __int128 v62; // [rsp+C0h] [rbp-1A8h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-198h]
  __int64 v64; // [rsp+E0h] [rbp-188h]
  __m128i v65[3]; // [rsp+E8h] [rbp-180h] BYREF
  _OWORD v66[5]; // [rsp+120h] [rbp-148h] BYREF
  _QWORD v67[12]; // [rsp+170h] [rbp-F8h] BYREF
  _OWORD v68[5]; // [rsp+1D0h] [rbp-98h] BYREF

  v53 = a4;
  Handle = a3;
  v48 = a2;
  v55 = (_DWORD *)a1;
  v57 = a7;
  v58 = a8;
  v59 = (_OWORD *)a11;
  memset(v67, 0, 0x40uLL);
  memset(v68, 0, 0x48uLL);
  memset(v65, 0, sizeof(v65));
  v60 = 0uLL;
  v61 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  v14 = 0;
  if ( PreviousMode )
  {
    v15 = a12;
    if ( a12 || a9 )
    {
      v16 = v48;
      v17 = a1;
      if ( v48 < 0 )
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
      v16 = v48;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, (__int64)&v62, v16);
    if ( a5 )
    {
      v19 = a5;
      if ( a5 >= v18 )
        v19 = v18;
      v68[0] = *(_OWORD *)v19;
      v68[1] = *(_OWORD *)(v19 + 16);
      v68[2] = *(_OWORD *)(v19 + 32);
      v68[3] = *(_OWORD *)(v19 + 48);
      *(_QWORD *)&v68[4] = *(_QWORD *)(v19 + 64);
    }
    if ( a10 )
    {
      v22 = a10;
      if ( (unsigned __int64)a10 >= v18 )
        v22 = (__m128i *)v18;
      v65[0] = *v22;
      v65[1] = v22[1];
      v65[2] = v22[2];
      if ( _mm_cvtsi128_si32(v65[0]) != 48 )
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
      v68[0] = *(_OWORD *)a5;
      v68[1] = *(_OWORD *)(a5 + 16);
      v68[2] = *(_OWORD *)(a5 + 32);
      v68[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v68[4] = *(_QWORD *)(a5 + 64);
    }
    v62 = *(_OWORD *)a7;
    v63 = *(_OWORD *)(a7 + 16);
    v64 = *(_QWORD *)(a7 + 32);
    v15 = a12;
  }
  if ( !DWORD2(v63) )
    return -1073741281;
  v25 = 0LL;
  v50 = 0LL;
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v25 = Object;
    v50 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    if ( !v15 )
      return -1073741504;
    LODWORD(v64) = 0;
  }
  v26 = AlpcpLookupMessage(v25, DWORD2(v63), (unsigned int)v64, &v47);
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
    v25 = *(_DWORD **)(v47 + 16);
    v50 = v25;
  }
  if ( (*(_DWORD *)(v47 + 40) & 0x80u) != 0 )
  {
    v14 = -1073740029;
    goto LABEL_96;
  }
  if ( (*(unsigned __int16 *)(v47 + 244) & 0xFFFF00FF) != 0xA )
    goto LABEL_101;
  v26 = AlpcpValidateConnectionMessage((__int64)v25, &v62, v15);
  v49 = v26;
  if ( v26 >= 0 )
  {
    v28 = *(_QWORD *)(v47 + 24);
    Handle = *(HANDLE *)(v28 + 16);
    if ( (*(_DWORD *)(v28 + 416) & 0x20) != 0 )
    {
      v14 = -1073741769;
      goto LABEL_96;
    }
    if ( (v25[64] & 0x100000) != 0
      || (Process = KeGetCurrentThread()->ApcState.Process, v25 = v50, Process == *((_KPROCESS **)v50 + 3)) )
    {
      if ( a9 )
      {
        LOBYTE(Process) = AccessMode;
        v26 = AlpcpCreatePort(Process, v53, &v51);
        if ( v26 >= 0 )
        {
          v29 = v51;
          LODWORD(v53) = AlpcpInitializePort(v51, 3LL, 0LL);
          if ( (int)v53 < 0 )
          {
            AlpcpUnlockMessage(v47);
            ObfDereferenceObject(v29);
            return v53;
          }
          v30 = AlpcpValidateAndSetPortAttributes(
                  (_DWORD)v29,
                  (unsigned __int64)v68 & ((unsigned __int128)-(__int128)a5 >> 64),
                  (_DWORD)v25,
                  0,
                  0,
                  0,
                  v15);
          v49 = v30;
          if ( v30 < 0 )
          {
            AlpcpUnlockMessage(v47);
            ObfDereferenceObject(v29);
            return v30;
          }
          AlpcpSetOwnerProcessPort(v29, (unsigned __int64)v68 & -(__int64)(a5 != 0));
          if ( a12 )
            *((_DWORD *)v29 + 104) |= 0x1000u;
          v31 = (char *)Handle;
          AlpcpReferenceBlob((ULONG_PTR)Handle);
          v32 = (volatile signed __int64 *)(v31 - 16);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v32, 0LL);
          v33 = Handle;
          *((_QWORD *)v29 + 2) = Handle;
          v33[1] = v29;
          *(_QWORD *)(v28 + 424) = v25;
          *(_QWORD *)(v28 + 432) = v29;
          *((_QWORD *)v29 + 53) = v28;
          *((_QWORD *)v29 + 54) = v28;
          v34 = *(_DWORD *)(v28 + 416);
          if ( (v34 & 0x1000) != 0 && (*((_DWORD *)v29 + 104) & 0x1000) != 0 )
          {
            *(_DWORD *)(v28 + 416) = v34 | 0x2000;
            *((_DWORD *)v29 + 104) |= 0x2000u;
          }
          if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v32);
          KeAbPostRelease((ULONG_PTR)v32);
          WORD2(v67[6]) = v62 + 40;
          *(_DWORD *)((char *)&v67[6] + 6) = 11;
          v35 = v48;
          v36 = v47;
          inserted = AlpcpSetupMessageDataForDeferredCopy(v47, v57, v48, (unsigned __int16)v62, 0, AccessMode);
          if ( inserted < 0 )
          {
            AlpcpUnlockMessage(v36);
            v45 = v51;
LABEL_112:
            ObfDereferenceObject(v45);
            return inserted;
          }
          if ( a12 && *(_QWORD *)(v36 + 144) )
          {
            v38 = v51;
            v44 = AlpcpMapLegacyPortRemoteView(v51);
            inserted = v44;
            if ( v44 < 0 )
            {
              AlpcpUnlockMessage(v36);
LABEL_111:
              v45 = v38;
              goto LABEL_112;
            }
          }
          else
          {
            v38 = v51;
          }
          if ( a10 )
          {
            memset(v66, 0, 0x48uLL);
            inserted = AlpcpMapLegacyPortView(v38, (__int64)v65, (__int64)v66);
            if ( inserted >= 0 )
            {
              inserted = AlpcpMapLegacyPortRemoteView((PVOID)v28);
              if ( inserted >= 0 )
                v65[2].m128i_i64[1] = v67[10];
            }
          }
          else
          {
            inserted = AlpcpCaptureAttributes(v50, (unsigned int)v35, v58, v36, v66);
          }
          if ( inserted < 0
            || (ObfReferenceObject(v38), inserted = ObInsertObjectEx(v38, 0LL, 0, 0LL, (__int64)&v54), inserted < 0) )
          {
            AlpcpReleaseAttributes(v66);
            AlpcpUnlockMessage(v36);
            AlpcpFlushResourcesPort((__int64)v38);
            goto LABEL_111;
          }
          AlpcpReleaseAttributes(v36 + 104);
          *(_OWORD *)(v36 + 104) = v66[0];
          *(_OWORD *)(v36 + 120) = v66[1];
          *(_OWORD *)(v36 + 136) = v66[2];
          *(_OWORD *)(v36 + 152) = v66[3];
          *(_QWORD *)(v36 + 168) = *(_QWORD *)&v66[4];
          v39 = *(_QWORD *)(v36 + 208);
          if ( v39 )
          {
            PsReleaseProcessWakeCounter(v39, *(_DWORD *)(v36 + 264));
            *(_QWORD *)(v36 + 208) = 0LL;
          }
          v40 = *(_QWORD *)(v36 + 216);
          if ( v40 )
          {
            PsReleaseProcessWakeCounter(v40, *(_DWORD *)(v36 + 264));
            *(_QWORD *)(v36 + 216) = 0LL;
          }
          v41 = v54;
          if ( v35 < 0 )
            *v55 = (_DWORD)v54;
          else
            *(_QWORD *)v55 = v54;
          v42 = a6;
          if ( !a6 )
            v42 = (__int64)v41;
          v38[7] = v42;
          if ( a10 )
          {
            *a10 = v65[0];
            a10[1] = v65[1];
            a10[2] = v65[2];
          }
          v43 = v59;
          if ( v59 )
          {
            *v59 = v60;
            *((_QWORD *)v43 + 2) = v61;
          }
          v67[0] = v38;
          v67[1] = v36;
          LODWORD(v67[6]) = 0x10000;
          v26 = AlpcpDispatchMessage(v67);
          v49 = v26;
          v47 = 0LL;
          ObfDereferenceObject(v38);
          if ( v26 < 0 )
            NtClose(v41);
          return v26;
        }
        goto LABEL_107;
      }
      ExAcquirePushLockExclusiveEx(v28 + 352, 0LL);
      *(_DWORD *)(v28 + 416) |= 0x10u;
      if ( (*(_DWORD *)(v28 + 416) & 0x100) != 0 )
        *(_QWORD *)(v28 + 56) = a6;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 352));
      KeAbPostRelease(v28 + 352);
      v25 = v50;
LABEL_96:
      AlpcpCancelMessage((__int64)v25, v47, 0x10000);
      return v14;
    }
LABEL_101:
    v26 = -1073741281;
  }
LABEL_107:
  AlpcpUnlockMessage(v47);
  return v26;
}
