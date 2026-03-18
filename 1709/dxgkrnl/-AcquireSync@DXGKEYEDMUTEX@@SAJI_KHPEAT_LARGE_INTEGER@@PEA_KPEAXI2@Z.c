/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01BEB6C
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1C01C0860 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C01C0A90 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C55FC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0015E5C (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028764 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00297C8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0029908 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C0029948 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        __int64 a2,
        int a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8)
{
  __int64 v10; // rsi
  DXGKEYEDMUTEX *v11; // r12
  __int64 v12; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGKEYEDMUTEX *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // edi
  _BYTE *v21; // rdx
  _BYTE *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  void *v28; // r15
  __int64 v29; // r14
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGKEYEDMUTEX **v35; // rdx
  unsigned int v36; // r13d
  __int64 v37; // rax
  int v38; // eax
  unsigned __int64 *v39; // rcx
  __int64 v40; // rax
  const void *v41; // rdx
  ULONG64 v42; // r9
  struct DXGKEYEDMUTEX *v43; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v45[80]; // [rsp+50h] [rbp-78h] BYREF

  v10 = (unsigned int)a1;
  v11 = a5;
  if ( !a5 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 3559LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)v11 = 0LL;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v10, Current, &v43);
  v17 = v43;
  if ( !v43 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v10;
    v19 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_5:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return v19;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v44, v43);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  if ( *((_DWORD *)v17 + 9) == 3 )
    goto LABEL_9;
  if ( DXGKEYEDMUTEX::IsOwner(v17, v10)
    || *((_DWORD *)v17 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v10, *((struct DXGPROCESS ***)v17 + 9)) )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v19 = -1073741811;
    v27[3] = -1073741811LL;
    v27[4] = v17;
    v27[5] = v10;
    WdLogEvent5_WdError(v27);
LABEL_14:
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44);
    goto LABEL_5;
  }
  v28 = a6;
  if ( a6 )
  {
    v29 = (unsigned int)Size;
    if ( !(_DWORD)Size )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v26);
      v30[3] = v17;
      v19 = -1073741811;
      v30[4] = -1073741811LL;
      goto LABEL_20;
    }
    if ( (_DWORD)Size != *((_DWORD *)v17 + 36) )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v26);
      v30[3] = v17;
      v30[4] = v29;
      v30[5] = *((unsigned int *)v17 + 36);
      v19 = -1073741811;
      v30[6] = -1073741811LL;
      goto LABEL_20;
    }
  }
  else
  {
    LODWORD(v29) = Size;
    if ( (_DWORD)Size )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v26);
      v19 = -1073741811;
      v30[3] = -1073741811LL;
LABEL_20:
      WdLogEvent5_WdWarning(v30);
      goto LABEL_14;
    }
  }
  v31 = *((_DWORD *)v17 + 9);
  if ( (v31 & 0xFFFFFFFD) != 0 && (v31 != 1 || a2 == *((_QWORD *)v17 + 7) || a3) )
  {
    v32 = *((_QWORD *)v17 + 8);
LABEL_44:
    *(_QWORD *)v11 = v32;
    v39 = a8;
    if ( a8 )
      *a8 = *((_QWORD *)v17 + 7);
    if ( (unsigned int)(*((_DWORD *)v17 + 9) - 1) > 1 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39);
      *(_QWORD *)(v40 + 24) = 3717LL;
      WdLogEvent5_WdAssertion(v40);
    }
    *((_DWORD *)v17 + 9) = 0;
    *((_DWORD *)v17 + 10) = v10;
    *((_QWORD *)v17 + 6) = DXGPROCESS::GetCurrent((__int64)v39, (__int64)v21);
    *((_QWORD *)v17 + 9) = 0LL;
    if ( v28 )
    {
      v41 = (const void *)*((_QWORD *)v17 + 17);
      v42 = (ULONG64)v28 + (unsigned int)v29;
      if ( v42 > MmUserProbeAddress || v42 <= (unsigned __int64)v28 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v41, (unsigned int)v29);
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return 0LL;
  }
  memset(v45, 0, sizeof(v45));
  *(_DWORD *)&v45[8] = v10;
  *(_QWORD *)&v45[16] = DXGPROCESS::GetCurrent(v34, v33);
  *(_QWORD *)v45 = a2;
  *(_DWORD *)&v45[48] = 0;
  KeInitializeEvent((PRKEVENT)&v45[24], NotificationEvent, 0);
  v35 = (struct DXGKEYEDMUTEX **)*((_QWORD *)v17 + 11);
  if ( *v35 != (struct DXGKEYEDMUTEX *)((char *)v17 + 80) )
    __fastfail(3u);
  *(_QWORD *)&v45[64] = (char *)v17 + 80;
  *(_QWORD *)&v45[72] = v35;
  *v35 = (struct DXGKEYEDMUTEX *)&v45[64];
  *((_QWORD *)v17 + 11) = &v45[64];
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v44);
  v19 = KeWaitForSingleObject(&v45[24], Executive, 0, 1u, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v44);
  v36 = *(_DWORD *)&v45[48];
  if ( !*(_DWORD *)&v45[48] )
  {
    v37 = *(_QWORD *)&v45[64];
    v22 = *(_BYTE **)&v45[72];
    if ( *(_BYTE **)(*(_QWORD *)&v45[64] + 8LL) != &v45[64] || (v21 = &v45[64], **(_BYTE ***)&v45[72] != &v45[64]) )
      __fastfail(3u);
    **(_QWORD **)&v45[72] = *(_QWORD *)&v45[64];
    *(_QWORD *)(v37 + 8) = v22;
    v38 = *((_DWORD *)v17 + 9);
    if ( v38 == 2 )
    {
      v22 = v45;
      if ( *((_BYTE **)v17 + 9) == v45 )
        v19 = 0;
    }
    if ( v19 )
      goto LABEL_14;
    if ( v38 == 3 )
    {
LABEL_9:
      v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = v17;
      *(_QWORD *)(v24 + 32) = 128LL;
      WdLogEvent5_WdWarning(v24);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5);
      return 128LL;
    }
    v32 = *(_QWORD *)&v45[56];
    goto LABEL_44;
  }
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v44);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5);
  return v36;
}
