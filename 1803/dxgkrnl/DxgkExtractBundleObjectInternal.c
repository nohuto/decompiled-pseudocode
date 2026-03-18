/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1C01AAF18
 * Callers:
 *     DxgkExtractBundleObject @ 0x1C01AAED0 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BCED4 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  char v5; // r14
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  char v9; // r13
  ULONG64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  const void *v18; // r14
  __int64 v19; // rax
  char *v20; // rcx
  HANDLE v21; // r13
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int128 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  char v38; // r13
  struct _KPROCESS *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // r14
  DWORD v42; // r9d
  int v43; // eax
  __int64 ObjectType; // rax
  void *v45; // rcx
  NTSTATUS inserted; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int128 v54; // xmm0
  void **v55; // xmm1_8
  size_t v56; // r8
  ULONG64 v57; // r9
  _DWORD *v58; // rcx
  _OWORD *v59; // rcx
  unsigned int i; // r14d
  HANDLE v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r8
  char v65; // [rsp+41h] [rbp-1D7h]
  char v66; // [rsp+42h] [rbp-1D6h]
  int v67; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-1C8h]
  DWORD AccessMask; // [rsp+58h] [rbp-1C0h] BYREF
  int v70; // [rsp+5Ch] [rbp-1BCh]
  PHANDLE v71; // [rsp+60h] [rbp-1B8h]
  PRKPROCESS PROCESS[2]; // [rsp+68h] [rbp-1B0h]
  ULONG64 v73; // [rsp+78h] [rbp-1A0h]
  PVOID Object; // [rsp+80h] [rbp-198h] BYREF
  char *v75; // [rsp+88h] [rbp-190h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-188h]
  void *Src[2]; // [rsp+A0h] [rbp-178h]
  __int128 v78; // [rsp+B0h] [rbp-168h]
  void **v79; // [rsp+C0h] [rbp-158h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C8h] [rbp-150h] BYREF
  struct _KPROCESS *v81; // [rsp+D0h] [rbp-148h]
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-140h] BYREF
  _DWORD v83[16]; // [rsp+110h] [rbp-108h] BYREF
  HANDLE v84[16]; // [rsp+150h] [rbp-C8h] BYREF

  v73 = a4;
  PROCESS[0] = a3;
  v5 = a1;
  v66 = a1;
  v81 = a3;
  v68 = 0LL;
  v67 = 2158;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2158);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v67, 2158);
  v9 = 0;
  v65 = 0;
  if ( v5 == 1 )
  {
    v7 = MmUserProbeAddress;
    v10 = a4;
    if ( a4 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v10;
    *(_OWORD *)Src = *(_OWORD *)(v10 + 16);
    v78 = *(_OWORD *)(v10 + 32);
    v79 = *(void ***)(v10 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v78 = *(_OWORD *)(a4 + 32);
    v79 = *(void ***)(a4 + 48);
  }
  v11 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = v11;
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    v16 = (qword_1C0079010 & 2) == 0;
LABEL_12:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v67);
    return (unsigned int)v13;
  }
  v18 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v19 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v19 + 24) = v18;
      *(void **)(v19 + 32) = Src[1];
      LODWORD(v13) = -1073741811;
      *(_QWORD *)(v19 + 40) = -1073741811LL;
LABEL_21:
      WdLogEvent5_WdWarning(v19);
      goto LABEL_11;
    }
    v9 = 1;
    v65 = 1;
  }
  memset(v83, 0, sizeof(v83));
  if ( !v9 && Src[0] )
  {
    if ( v66 == 1 )
    {
      v20 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v20 < Src[0] || (unsigned __int64)v20 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v83, v18, 4 * v11);
    }
    else
    {
      memmove(v83, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v84, 0, sizeof(v84));
  v21 = Handle[0];
  v22 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, a2, &Object, &HandleInformation);
  v13 = v22;
  if ( v22 == -1073741788 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v21;
    *(_QWORD *)(v26 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v67);
    return 3221225508LL;
  }
  if ( v22 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v19 + 24) = v21;
    *(_QWORD *)(v19 + 32) = v13;
    goto LABEL_21;
  }
  v29 = (__int128 *)Object;
  if ( !*((_BYTE *)Object + 243) )
  {
    v30 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v30 + 24) = v21;
    WdLogEvent5_WdWarning(v30);
    ObfDereferenceObject(v29);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, v67);
    return -1073741811LL;
  }
  v75 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  v35 = *((unsigned int *)v29 + 6);
  LOBYTE(v36) = v65;
  if ( v65 )
  {
    LODWORD(v11) = *((_DWORD *)v29 + 6);
    LODWORD(Handle[1]) = v11;
  }
  else if ( (_DWORD)v11 != (_DWORD)v35 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v33, v34);
    v37[3] = v11;
    v37[4] = *((unsigned int *)v29 + 6);
    v37[5] = v21;
    LODWORD(v13) = -1073741811;
    v37[6] = -1073741811LL;
    goto LABEL_50;
  }
  if ( !v65 )
  {
    if ( *((_BYTE *)v29 + 241) && !*((_BYTE *)v29 + 240) )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v33, v34);
      v37[3] = v21;
      LODWORD(v13) = -1073741811;
      v37[4] = -1073741811LL;
LABEL_50:
      WdLogEvent5_WdWarning(v37);
      v38 = 0;
      goto LABEL_91;
    }
    if ( !v18 )
      memmove(v83, v29 + 10, 4 * v35);
    v39 = PROCESS[0];
    if ( !PROCESS[0] || v39 == (struct _KPROCESS *)PsGetCurrentProcess(v36, v33) )
    {
      v38 = 0;
    }
    else
    {
      KeStackAttachProcess(v39, &ApcState);
      v38 = 1;
    }
    v40 = 0LL;
    v70 = 0;
    if ( *((_DWORD *)v29 + 6) )
    {
      while ( 1 )
      {
        v41 = (unsigned int)v40;
        v42 = v83[(unsigned int)v40];
        AccessMask = v42;
        v43 = *((_DWORD *)v29 + 5);
        if ( _bittest(&v43, v40) )
        {
          if ( (v42 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v29 + (unsigned int)v40 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v42 = AccessMask;
          }
          v42 &= HandleInformation.GrantedAccess;
          AccessMask = v42;
        }
        v45 = (void *)*((_QWORD *)v29 + v41 + 4);
        if ( *((_BYTE *)v29 + 242) )
        {
          v71 = &v84[v41];
          inserted = ObOpenObjectByPointer(v45, 0, 0LL, v42, 0LL, 0, v71);
        }
        else
        {
          ObfReferenceObject(v45);
          v71 = &v84[v41];
          inserted = ObInsertObject(*((PVOID *)v29 + v41 + 4), 0LL, AccessMask, 0, 0LL, v71);
        }
        LODWORD(v13) = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*v71) )
        {
          v51 = WdLogNewEntry5_WdAssertion(v50);
          *(_QWORD *)(v51 + 24) = 2508LL;
          WdLogEvent5_WdAssertion(v51);
        }
        v40 = (unsigned int)(v70 + 1);
        v70 = v40;
        if ( (unsigned int)v40 >= *((_DWORD *)v29 + 6) )
          goto LABEL_72;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
      v52[3] = *((_QWORD *)v29 + v41 + 4);
      v52[4] = *((unsigned __int8 *)v29 + 242);
      v52[5] = (int)v13;
      WdLogEvent5_WdWarning(v52);
    }
LABEL_72:
    if ( v38 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)v13 < 0 )
    {
      v53 = WdLogNewEntry5_WdWarning(v40, v33, v34);
      *(_QWORD *)(v53 + 24) = (int)v13;
      WdLogEvent5_WdWarning(v53);
LABEL_91:
      if ( v84[0] )
      {
        if ( v38 )
          KeStackAttachProcess(PROCESS[0], &ApcState);
        for ( i = 0; i < *((_DWORD *)v29 + 6); v84[i++] = 0LL )
        {
          v61 = v84[i];
          if ( !v61 )
            break;
          ObCloseHandle(v61, 1);
        }
        if ( v38 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v75, 0LL);
      ObfDereferenceObject(v29);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
      v16 = (qword_1C0079010 & 2) == 0;
      goto LABEL_12;
    }
    *(_WORD *)((char *)v29 + 241) = 257;
    LOBYTE(v36) = 0;
  }
  v54 = *v29;
  *(_OWORD *)PROCESS = v54;
  v78 = v54;
  v55 = (void **)*((_QWORD *)v29 + 2);
  v71 = v55;
  v79 = v55;
  if ( v66 == 1 )
  {
    if ( (_BYTE)v36 )
    {
      v57 = v73;
      v58 = (_DWORD *)(v73 + 8);
      if ( v73 + 12 > MmUserProbeAddress || v73 + 12 <= (unsigned __int64)v58 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v58 = v11;
    }
    else
    {
      v56 = 8LL * (unsigned int)v11;
      if ( (char *)Src[1] + v56 > (void *)MmUserProbeAddress || (char *)Src[1] + v56 <= Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Src[1], v84, v56);
      v54 = *(_OWORD *)PROCESS;
      v55 = v71;
      v57 = v73;
    }
    v59 = (_OWORD *)(v57 + 32);
    if ( v57 + 56 > MmUserProbeAddress || v57 + 56 <= (unsigned __int64)v59 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v59 = v54;
    *(_QWORD *)(v57 + 48) = v55;
  }
  else if ( !(_BYTE)v36 )
  {
    memmove(Src[1], v84, 8LL * (unsigned int)v11);
  }
  ExReleasePushLockExclusiveEx(v75, 0LL);
  ObfDereferenceObject(v29);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v62, &EventProfilerExit, v63, v67);
  return 0LL;
}
