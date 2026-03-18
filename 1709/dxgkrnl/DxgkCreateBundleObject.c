/*
 * XREFs of DxgkCreateBundleObject @ 0x1C01AF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C008A318 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C00BC620 (-CreateSharedSyncNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C01AEE28 (-CreateSharedProtectedSessionNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateBundleObject(ULONG64 a1)
{
  ULONG64 v1; // r13
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  _OWORD *v10; // rax
  size_t v11; // r8
  const void *v12; // rdx
  size_t v13; // r8
  const void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // r15d
  __int64 v18; // r12
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int EntryType; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rsi
  NTSTATUS inserted; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  unsigned int v40; // esi
  unsigned int i; // eax
  void *v42; // rcx
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  void *Src[2]; // [rsp+58h] [rbp-D0h]
  void *v45[2]; // [rsp+68h] [rbp-C0h]
  ACCESS_MASK DesiredAccess[4]; // [rsp+78h] [rbp-B0h] BYREF
  ULONG64 v47; // [rsp+88h] [rbp-A0h]
  struct DXGPROCESS *v48; // [rsp+90h] [rbp-98h]
  _BYTE v49[24]; // [rsp+98h] [rbp-90h] BYREF
  PVOID v50; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-70h]
  __int64 v52; // [rsp+C0h] [rbp-68h]
  __int64 v53; // [rsp+C8h] [rbp-60h] BYREF
  int v54; // [rsp+D0h] [rbp-58h]
  _QWORD v55[3]; // [rsp+D8h] [rbp-50h] BYREF

  v1 = a1;
  v47 = a1;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 1319LL;
    WdLogEvent5_WdAssertion(v4);
  }
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v48 = Current;
  if ( !Current )
    goto LABEL_4;
  v10 = (_OWORD *)v1;
  if ( v1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v10;
  *(_OWORD *)v45 = v10[1];
  *(_OWORD *)DesiredAccess = v10[2];
  *(_QWORD *)&DesiredAccess[2] = 0LL;
  v5 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 2 )
  {
LABEL_4:
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v8;
  }
  v53 = 0LL;
  v54 = 0;
  memset(v55, 0, sizeof(v55));
  v11 = 4LL * LODWORD(Src[0]);
  v12 = Src[1];
  if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(&v53, v12, v11);
  v13 = 8LL * LODWORD(Src[0]);
  v14 = v45[0];
  if ( (char *)v45[0] + v13 < v45[0] || (char *)v45[0] + v13 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v55, v14, v13);
  Object = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v17 = 0;
  if ( LODWORD(Src[0]) )
  {
    while ( 1 )
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v49, Current);
      v18 = *((unsigned int *)&v53 + v17);
      v19 = (*((_DWORD *)&v53 + v17) >> 6) & 0xFFFFFF;
      if ( v19 < *((_DWORD *)Current + 60)
        && (v20 = *(_DWORD *)(*((_QWORD *)Current + 28) + 16LL * v19 + 8),
            *((_DWORD *)&v53 + v17) >> 30 == ((v20 >> 5) & 3))
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)Current + 224, v19);
      }
      else
      {
        EntryType = 0;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
      if ( EntryType == 8 || EntryType == 11 )
      {
        LODWORD(v8) = CreateSharedSyncNtObject(EntryType, (unsigned int)v18, v55[v17], &v50 + v17);
        if ( (int)v8 < 0 )
        {
          if ( !*(&v50 + v17) )
            goto LABEL_49;
          v25 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v25 + 24) = 1402LL;
LABEL_36:
          WdLogEvent5_WdAssertion(v25);
          goto LABEL_49;
        }
      }
      else
      {
        if ( EntryType != 14 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
          v26[3] = v18;
          v26[4] = (int)EntryType;
          LODWORD(v8) = -1073741811;
          v26[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v26);
          goto LABEL_49;
        }
        LODWORD(v8) = CreateSharedProtectedSessionNtObject(14LL, (unsigned int)v18, v55[v17], &v50 + v17);
        if ( (int)v8 < 0 )
        {
          if ( !*(&v50 + v17) )
            goto LABEL_49;
          v25 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v25 + 24) = 1415LL;
          goto LABEL_36;
        }
      }
      if ( ++v17 >= LODWORD(Src[0]) )
      {
        v1 = v47;
        break;
      }
    }
  }
  LOBYTE(v16) = 1;
  LOBYTE(v15) = 1;
  v27 = ObCreateObject(v15, g_pDxgkSharedBundleObjectType, v45[1], v16, 0LL, 48, 0, 0, &Object);
  v8 = v27;
  if ( v27 < 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = Current;
    *(_QWORD *)(v31 + 32) = v8;
    WdLogEvent5_WdWarning(v31);
    if ( Object )
    {
      v25 = WdLogNewEntry5_WdAssertion(v32);
      *(_QWORD *)(v25 + 24) = 1450LL;
      goto LABEL_36;
    }
LABEL_49:
    if ( *(_QWORD *)&DesiredAccess[2] )
    {
      NtClose(*(HANDLE *)&DesiredAccess[2]);
    }
    else if ( Object )
    {
      ObfDereferenceObject(Object);
    }
    else
    {
      v40 = 0;
      for ( i = (unsigned int)Src[0]; v40 < i; ++v40 )
      {
        v42 = *(&v50 + v40);
        if ( v42 )
        {
          ObfDereferenceObject(v42);
          *(&v50 + v40) = 0LL;
          i = (unsigned int)Src[0];
        }
      }
    }
    return (unsigned int)v8;
  }
  v33 = Object;
  *(_DWORD *)Object = Src[0];
  memmove(v33 + 1, &v50, 8LL * LODWORD(Src[0]));
  v33[4] = 0LL;
  ExAcquirePushLockExclusiveEx(v33 + 4, 0LL);
  ObfReferenceObject(v33);
  inserted = ObInsertObject(Object, 0LL, DesiredAccess[0], 0, 0LL, (PHANDLE)&DesiredAccess[2]);
  v8 = inserted;
  if ( inserted >= 0 )
    *((_BYTE *)v33 + 40) = 1;
  ExReleasePushLockExclusiveEx(v33 + 4, 0LL);
  ObfDereferenceObject(v33);
  if ( (int)v8 < 0 )
  {
    if ( !*(_QWORD *)&DesiredAccess[2] )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
      v38[3] = Object;
      v38[4] = Current;
      v38[5] = v8;
      WdLogEvent5_WdWarning(v38);
    }
    Object = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    goto LABEL_49;
  }
  v39 = (_QWORD *)(v1 + 40);
  if ( v1 + 40 >= MmUserProbeAddress )
    v39 = (_QWORD *)MmUserProbeAddress;
  *v39 = *(_QWORD *)&DesiredAccess[2];
  return 0LL;
}
