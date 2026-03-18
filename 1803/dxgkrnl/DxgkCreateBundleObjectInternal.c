/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1C01AA35C
 * Callers:
 *     DxgkCreateBundleObject @ 0x1C01AA310 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C01BC598 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C00D58A8 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C00D5AB4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A982C (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A9B70 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdi
  ULONG64 v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rsi
  size_t v16; // r8
  HANDLE v17; // rdx
  size_t v18; // r8
  HANDLE v19; // rdx
  HANDLE v20; // rdi
  size_t v21; // r8
  ACCESS_MASK *v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rdx
  int EntryType; // edi
  unsigned int v31; // r14d
  unsigned int v32; // edx
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r9
  _QWORD *v39; // rax
  KPROCESSOR_MODE v40; // r14
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _DWORD *v48; // rsi
  char *v49; // r14
  int v50; // r14d
  NTSTATUS inserted; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  BOOLEAN IsKernelHandle; // al
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  HANDLE *v61; // rdx
  unsigned int v62; // esi
  unsigned int i; // eax
  PVOID v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v68; // rcx
  __int64 v69; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-290h]
  unsigned __int8 v72; // [rsp+51h] [rbp-267h]
  PVOID Object; // [rsp+60h] [rbp-258h] BYREF
  int v74; // [rsp+68h] [rbp-250h] BYREF
  __int64 v75; // [rsp+70h] [rbp-248h]
  struct _KTHREAD **v76; // [rsp+78h] [rbp-240h]
  HANDLE v77[12]; // [rsp+80h] [rbp-238h] BYREF
  __int64 v78; // [rsp+E0h] [rbp-1D8h]
  _BYTE v79[24]; // [rsp+E8h] [rbp-1D0h] BYREF
  ACCESS_MASK v80[16]; // [rsp+100h] [rbp-1B8h] BYREF
  PVOID v81[16]; // [rsp+140h] [rbp-178h] BYREF
  _DWORD v82[16]; // [rsp+1C0h] [rbp-F8h] BYREF
  _QWORD v83[16]; // [rsp+200h] [rbp-B8h] BYREF

  v6 = a1;
  v72 = a1;
  v78 = a6;
  v75 = 0LL;
  v74 = 2157;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2157);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v74, 2157);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
  v76 = Current;
  if ( !Current )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    LODWORD(v12) = -1073741811;
    v11[3] = -1073741811LL;
LABEL_112:
    WdLogEvent5_WdError(v11);
    goto LABEL_113;
  }
  memset(&v77[2], 0, 0x50uLL);
  if ( v6 == 1 )
  {
    v13 = MmUserProbeAddress;
    v14 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v14 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v77[2] = *v14;
    *(_OWORD *)&v77[4] = v14[1];
    *(_OWORD *)&v77[6] = v14[2];
    *(_OWORD *)&v77[8] = v14[3];
    *(_OWORD *)&v77[10] = v14[4];
  }
  else
  {
    *(_OWORD *)&v77[2] = *(_OWORD *)a5;
    *(_OWORD *)&v77[4] = *(_OWORD *)(a5 + 16);
    *(_OWORD *)&v77[6] = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&v77[8] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&v77[10] = *(_OWORD *)(a5 + 64);
  }
  v77[11] = 0LL;
  v15 = LODWORD(v77[2]);
  if ( (unsigned int)(LODWORD(v77[2]) - 1) > 0xF )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v11[3] = LODWORD(v77[2]);
    LODWORD(v12) = -1073741811;
    v11[4] = -1073741811LL;
    goto LABEL_112;
  }
  if ( (~((1 << SLOBYTE(v77[2])) - 1) & (__int64)v77[10]) != 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(LODWORD(v77[2]));
    v11[3] = LODWORD(v77[10]);
    v11[4] = LODWORD(v77[2]);
    LODWORD(v12) = -1073741811;
    v11[5] = -1073741811LL;
    goto LABEL_112;
  }
  memset(v82, 0, sizeof(v82));
  memset(v83, 0, sizeof(v83));
  memset(v80, 0, sizeof(v80));
  if ( v6 == 1 )
  {
    v16 = 4LL * LODWORD(v77[2]);
    v17 = v77[3];
    if ( (char *)v77[3] + v16 < v77[3] || (char *)v77[3] + v16 > (HANDLE)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v82, v17, v16);
    v18 = 8LL * LODWORD(v77[2]);
    v19 = v77[4];
    if ( (char *)v77[4] + v18 < v77[4] || (char *)v77[4] + v18 > (HANDLE)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v83, v19, v18);
    v20 = v77[5];
    if ( v77[5] )
    {
      v21 = 4LL * LODWORD(v77[2]);
      if ( (char *)v77[5] + v21 < v77[5] || (char *)v77[5] + v21 > (HANDLE)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v80, v20, v21);
      v20 = v77[5];
    }
    LODWORD(v15) = v77[2];
  }
  else
  {
    memmove(v82, v77[3], 4LL * LODWORD(v77[2]));
    memmove(v83, v77[4], 8 * v15);
    v20 = v77[5];
    if ( v77[5] )
      memmove(v80, v77[5], 4 * v15);
    Current = v76;
  }
  if ( !v20 )
  {
    v22 = v80;
    v23 = (unsigned int)v15;
    if ( (_DWORD)v15 )
    {
      if ( ((unsigned __int8)v80 & 4) != 0 )
      {
        v80[0] = 0x10000000;
        v23 = (unsigned int)v15 - 1LL;
        if ( (unsigned int)v15 == 1LL )
          goto LABEL_37;
        v22 = &v80[1];
      }
      memset64(v22, 0x1000000010000000uLL, v23 >> 1);
      if ( (v23 & 1) != 0 )
        v22[v23 - 1] = 0x10000000;
    }
  }
LABEL_37:
  Object = 0LL;
  memset(v81, 0, sizeof(v81));
  v27 = 0;
  LODWORD(v77[0]) = 0;
  if ( !(_DWORD)v15 )
  {
LABEL_74:
    v40 = a2;
    LOBYTE(v26) = a2;
    LOBYTE(v24) = v6;
    v41 = ObCreateObject(v24, g_pDxgkSharedBundleObjectType, v77[6], v26, 0LL, 248, 0, 0, &Object);
    v12 = v41;
    if ( v41 < 0 )
    {
      v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v45 + 24) = v76;
      *(_QWORD *)(v45 + 32) = v12;
      WdLogEvent5_WdWarning(v45);
      if ( Object )
      {
        v47 = WdLogNewEntry5_WdAssertion(v46);
        *(_QWORD *)(v47 + 24) = 2037LL;
        WdLogEvent5_WdAssertion(v47);
      }
      goto LABEL_97;
    }
    v48 = Object;
    memset(Object, 0, 0xF8uLL);
    v48[6] = v77[2];
    memmove(v48 + 8, v81, 8LL * LODWORD(v77[2]));
    memmove(v48 + 40, v80, 4LL * LODWORD(v77[2]));
    *(_OWORD *)v48 = *(_OWORD *)((char *)&v77[7] + 4);
    *((HANDLE *)v48 + 2) = *(HANDLE *)((char *)&v77[9] + 4);
    *((_BYTE *)v48 + 224) = a2;
    v49 = (char *)(v48 + 58);
    *((_QWORD *)v48 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v48 + 58, 0LL);
    ObfReferenceObject(v48);
    LODWORD(v12) = ObInsertObject(Object, 0LL, (ACCESS_MASK)v77[7], 0, 0LL, &v77[11]);
    if ( (int)v12 >= 0 && v77[5] )
    {
      v50 = 0;
      if ( v48[6] )
      {
        while ( 1 )
        {
          v77[0] = 0LL;
          ObfReferenceObject(*(PVOID *)&v48[2 * v50 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v48[2 * v50 + 8], 0LL, v80[v50], 0, 0LL, v77);
          v12 = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v77[0]);
          ObCloseHandle(v77[0], IsKernelHandle == 0);
          if ( (unsigned int)++v50 >= v48[6] )
            goto LABEL_84;
        }
        v56 = WdLogNewEntry5_WdWarning(v53, v52, v54);
        *(_QWORD *)(v56 + 24) = *(_QWORD *)&v48[2 * v50 + 8];
        *(_QWORD *)(v56 + 32) = v12;
        WdLogEvent5_WdWarning(v56);
LABEL_84:
        v6 = v72;
      }
      v49 = (char *)(v48 + 58);
      if ( (int)v12 < 0 )
        goto LABEL_89;
      *((_BYTE *)v48 + 242) = 1;
      *((_BYTE *)v48 + 240) = 1;
    }
    if ( (int)v12 >= 0 )
      *((_BYTE *)v48 + 243) = 1;
LABEL_89:
    ExReleasePushLockExclusiveEx(v49, 0LL);
    ObfDereferenceObject(v48);
    if ( (int)v12 < 0 )
    {
      if ( !v77[11] )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
        v60[3] = Object;
        v60[4] = v76;
        v60[5] = (int)v12;
        WdLogEvent5_WdWarning(v60);
      }
      Object = 0LL;
      memset(v81, 0, sizeof(v81));
      goto LABEL_73;
    }
    if ( v6 == 1 )
    {
      v61 = (HANDLE *)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v61 = (HANDLE *)MmUserProbeAddress;
      *v61 = v77[11];
    }
    else
    {
      *(HANDLE *)(a5 + 72) = v77[11];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v65, &EventProfilerExit, v66, v74);
    return 0LL;
  }
  while ( 1 )
  {
    v28 = v27;
    v29 = v78;
    if ( v78 && *(_QWORD *)(v78 + 8LL * v27) )
    {
      EntryType = v82[v27];
      v31 = EntryType;
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v79, Current);
      v31 = v82[v28];
      v32 = (v31 >> 6) & 0xFFFFFF;
      if ( v32 < *((_DWORD *)v76 + 62)
        && (v33 = *((_DWORD *)v76[29] + 4 * v32 + 2), v82[v28] >> 30 == ((v33 >> 5) & 3))
        && (v33 & 0x2000) == 0
        && (v33 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)(v76 + 29), v32);
      }
      else
      {
        EntryType = 0;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v79);
      v29 = v78;
    }
    if ( EntryType == 4 )
      break;
    if ( EntryType != 8 )
    {
      v34 = (unsigned int)(EntryType - 9);
      if ( EntryType == 9 )
      {
        LODWORD(v34) = v6;
        LODWORD(v12) = CreateSharedKeyedMutexNtObject(v34, v29, v31, v26, v83[v28], (__int64)Handle, &v81[v28]);
        if ( (int)v12 < 0 )
        {
          if ( !v81[v28] )
            goto LABEL_73;
          v36 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v36 + 24) = 1963LL;
          goto LABEL_72;
        }
        goto LABEL_67;
      }
      v35 = (unsigned int)(EntryType - 11);
      if ( EntryType != 11 )
      {
        if ( EntryType != 14 )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v29, v25);
          v39[3] = v31;
          v39[4] = EntryType;
          LODWORD(v12) = -1073741811;
          v39[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v39);
          goto LABEL_73;
        }
        LOBYTE(v35) = v6;
        LODWORD(v12) = CreateSharedProtectedSessionNtObject(v35, 14LL, v31, v26, v83[v28], 1, &v81[v28]);
        if ( (int)v12 < 0 )
        {
          if ( !v81[v28] )
            goto LABEL_73;
          v36 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v36 + 24) = 2002LL;
          goto LABEL_72;
        }
        goto LABEL_67;
      }
    }
    v37 = 0LL;
    if ( v29 )
      v37 = *(_QWORD *)(v29 + 8 * v28);
    LODWORD(v12) = CreateSharedSyncNtObject(v6, EntryType, v31, v37, v83[v28], 1, &v81[v28]);
    if ( (int)v12 < 0 )
    {
      if ( !v81[v28] )
        goto LABEL_73;
      v36 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v36 + 24) = 1983LL;
      goto LABEL_72;
    }
LABEL_67:
    v27 = LODWORD(v77[0]) + 1;
    LODWORD(v77[0]) = v27;
    if ( v27 >= LODWORD(v77[2]) )
      goto LABEL_74;
    Current = v76;
  }
  v38 = 0LL;
  if ( v29 )
    v38 = *(_QWORD *)(v29 + 8 * v28);
  LODWORD(v12) = CreateSharedResourceNtObject(v6, v29, v31, v38, v83[v28], 1, &v81[v28]);
  if ( (int)v12 >= 0 )
    goto LABEL_67;
  if ( !v81[v28] )
    goto LABEL_73;
  v36 = WdLogNewEntry5_WdAssertion(v24);
  *(_QWORD *)(v36 + 24) = 1944LL;
LABEL_72:
  WdLogEvent5_WdAssertion(v36);
LABEL_73:
  v40 = a2;
LABEL_97:
  if ( v77[11] )
  {
    ObCloseHandle(v77[11], v40);
    v77[11] = 0LL;
  }
  else if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  else
  {
    v62 = 0;
    for ( i = (unsigned int)v77[2]; v62 < i; ++v62 )
    {
      v64 = v81[v62];
      if ( v64 )
      {
        ObfDereferenceObject(v64);
        v81[v62] = 0LL;
        i = (unsigned int)v77[2];
      }
    }
  }
LABEL_113:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v68, &EventProfilerExit, v69, v74);
  return (unsigned int)v12;
}
