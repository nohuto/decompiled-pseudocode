/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01A507C
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1C01A6B10 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C01A6D40 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ABBAC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0014BE4 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0039380 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C00394C0 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C0039500 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8)
{
  int v8; // r13d
  __int64 v10; // rsi
  DXGKEYEDMUTEX *v11; // r12
  __int64 v12; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGKEYEDMUTEX *v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v25; // rdx
  _BYTE *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rax
  void *v38; // r15
  __int64 v39; // r14
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  struct DXGKEYEDMUTEX **v46; // rdx
  __int64 v47; // rdx
  unsigned int v48; // r13d
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  int v53; // eax
  unsigned __int64 *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  const void *v59; // rdx
  ULONG64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  struct DXGKEYEDMUTEX *v64; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v65[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v66[80]; // [rsp+50h] [rbp-78h] BYREF

  v8 = a3;
  v10 = (unsigned int)a1;
  v11 = a5;
  if ( !a5 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 3454LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)v11 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v10, Current, &v64);
  v18 = v64;
  if ( !v64 )
  {
    v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = v10;
    v20 = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
LABEL_5:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v21, v22, v23);
    return v20;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v65, v64, v16, v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
  if ( *((_DWORD *)v18 + 9) == 3 )
    goto LABEL_9;
  if ( DXGKEYEDMUTEX::IsOwner(v18, v10)
    || *((_DWORD *)v18 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v10, *((struct DXGPROCESS ***)v18 + 9)) )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v36, v25);
    v20 = -1073741811;
    v37[3] = -1073741811LL;
    v37[4] = v18;
    v37[5] = v10;
    WdLogEvent5_WdError(v37);
LABEL_14:
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v65, (__int64)v25, v27, v28);
    goto LABEL_5;
  }
  v38 = a6;
  if ( a6 )
  {
    v39 = (unsigned int)Size;
    if ( !(_DWORD)Size )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v25, v27, v28);
      v40[3] = v18;
      v20 = -1073741811;
      v40[4] = -1073741811LL;
      goto LABEL_20;
    }
    if ( (_DWORD)Size != *((_DWORD *)v18 + 36) )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v25, v27, v28);
      v40[3] = v18;
      v40[4] = v39;
      v40[5] = *((unsigned int *)v18 + 36);
      v20 = -1073741811;
      v40[6] = -1073741811LL;
      goto LABEL_20;
    }
  }
  else
  {
    LODWORD(v39) = Size;
    if ( (_DWORD)Size )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v25, v27, v28);
      v20 = -1073741811;
      v40[3] = -1073741811LL;
LABEL_20:
      WdLogEvent5_WdWarning(v40);
      goto LABEL_14;
    }
  }
  v41 = *((_DWORD *)v18 + 9);
  if ( (v41 & 0xFFFFFFFD) != 0 && (v41 != 1 || a2 == *((_QWORD *)v18 + 7) || v8) )
  {
    v42 = *((_QWORD *)v18 + 8);
LABEL_44:
    *(_QWORD *)v11 = v42;
    v54 = a8;
    if ( a8 )
      *a8 = *((_QWORD *)v18 + 7);
    if ( (unsigned int)(*((_DWORD *)v18 + 9) - 1) > 1 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v54, v25, v27, v28);
      *(_QWORD *)(v55 + 24) = 3612LL;
      WdLogEvent5_WdAssertion(v55);
    }
    *((_DWORD *)v18 + 9) = 0;
    *((_DWORD *)v18 + 10) = v10;
    *((_QWORD *)v18 + 6) = DXGPROCESS::GetCurrent((__int64)v54);
    *((_QWORD *)v18 + 9) = 0LL;
    if ( v38 )
    {
      v59 = (const void *)*((_QWORD *)v18 + 17);
      v60 = (ULONG64)v38 + (unsigned int)v39;
      if ( v60 > MmUserProbeAddress || v60 <= (unsigned __int64)v38 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v38, v59, (unsigned int)v39);
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v65, v56, v57, v58);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v61, v62, v63);
    return 0LL;
  }
  memset(v66, 0, sizeof(v66));
  *(_DWORD *)&v66[8] = v10;
  *(_QWORD *)&v66[16] = DXGPROCESS::GetCurrent(v43);
  *(_QWORD *)v66 = a2;
  *(_DWORD *)&v66[48] = 0;
  KeInitializeEvent((PRKEVENT)&v66[24], NotificationEvent, 0);
  v46 = (struct DXGKEYEDMUTEX **)*((_QWORD *)v18 + 11);
  if ( *v46 != (struct DXGKEYEDMUTEX *)((char *)v18 + 80) )
    __fastfail(3u);
  *(_QWORD *)&v66[64] = (char *)v18 + 80;
  *(_QWORD *)&v66[72] = v46;
  *v46 = (struct DXGKEYEDMUTEX *)&v66[64];
  *((_QWORD *)v18 + 11) = &v66[64];
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65, (__int64)v46, v44, v45);
  v20 = KeWaitForSingleObject(&v66[24], Executive, 0, 1u, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
  v48 = *(_DWORD *)&v66[48];
  if ( !*(_DWORD *)&v66[48] )
  {
    v52 = *(_QWORD *)&v66[72];
    v26 = *(_BYTE **)&v66[64];
    if ( *(_BYTE **)(*(_QWORD *)&v66[64] + 8LL) != &v66[64] || (v25 = &v66[64], **(_BYTE ***)&v66[72] != &v66[64]) )
      __fastfail(3u);
    **(_QWORD **)&v66[72] = *(_QWORD *)&v66[64];
    *((_QWORD *)v26 + 1) = v52;
    v53 = *((_DWORD *)v18 + 9);
    if ( v53 == 2 )
    {
      v26 = v66;
      if ( *((_BYTE **)v18 + 9) == v66 )
        v20 = 0;
    }
    if ( v20 )
      goto LABEL_14;
    if ( v53 == 3 )
    {
LABEL_9:
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = v18;
      *(_QWORD *)(v29 + 32) = 128LL;
      WdLogEvent5_WdWarning(v29);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v65, v30, v31, v32);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5, v33, v34, v35);
      return 128LL;
    }
    v42 = *(_QWORD *)&v66[56];
    goto LABEL_44;
  }
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v65, v47, v27, v28);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5, v49, v50, v51);
  return v48;
}
