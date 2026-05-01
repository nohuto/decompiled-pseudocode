/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180003BC8
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x180003BC0 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180004094 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x1800040B8 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180004180 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180005F40 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180006068 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x18000846C (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011E78 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012AC8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800288A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  PVOID *v7; // rdi
  unsigned int v8; // r15d
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v9; // rax
  __int64 v10; // r13
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v12; // rsi
  unsigned __int16 *v13; // rbx
  DWORD v14; // ebx
  int v15; // edx
  __int64 v17; // rbx
  __int64 v18; // rax
  bool v19; // r14
  int v20; // ebx
  unsigned __int16 *Heap; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r14
  int AumidFromPsmKey; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v30; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 ***v32; // [rsp+58h] [rbp-A8h]
  unsigned int *v33; // [rsp+60h] [rbp-A0h]
  struct _CEM_RC_OBJECT *v34; // [rsp+68h] [rbp-98h]
  char v35[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+100h] [rbp+0h] BYREF
  int *p_AumidFromPsmKey; // [rsp+120h] [rbp+20h]
  int v38; // [rsp+128h] [rbp+28h]
  int v39; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]
  int *v43; // [rsp+140h] [rbp+40h]
  int v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+158h] [rbp+58h]
  int v48; // [rsp+15Ch] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 v50[136]; // [rsp+180h] [rbp+80h] BYREF

  v33 = a5;
  v32 = a4;
  v31 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008186E, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v35);
  v7 = 0LL;
  v28 = 0;
  v8 = 0;
  P = 0LL;
  if ( (a3 & 3) != a3 )
  {
    AumidFromPsmKey = -1073741583;
    goto LABEL_13;
  }
  v9 = HampClientPkgFindByPackageHandle(a1, v31);
  v34 = v9;
  if ( !v9 )
  {
    AumidFromPsmKey = -1073741275;
    goto LABEL_13;
  }
  v10 = *((_QWORD *)v9 + 7);
  for ( i = HamRcNodeGetFirst((struct _HAM_RC_TREE_NODE *)v10, 1u);
        ;
        i = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)v10, v12) )
  {
    v12 = i;
    if ( !i )
    {
      v13 = 0LL;
      *v32 = (unsigned __int16 **)v7;
      v7 = 0LL;
      AumidFromPsmKey = 0;
      P = 0LL;
      v12 = 0LL;
      *v33 = v8;
      goto LABEL_8;
    }
    v17 = *((_QWORD *)i + 11);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v17);
    v18 = *(_QWORD *)(v17 + 320);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 744) == (_QWORD)v12;
    else
      v19 = 0;
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v17);
    if ( v19 )
      continue;
    if ( (a3 & 2) != 0 )
    {
      HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v10);
      v20 = *(_DWORD *)(v10 + 352);
      HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v10);
      if ( v20 )
        continue;
    }
    if ( (a3 & 1) != 0 && !HampAppGetHasStartedWindow(v12) )
      continue;
    v26 = 130;
    AumidFromPsmKey = HampUtilGetAumidFromPsmKey((const unsigned __int16 *)v12 + 48, &v26, v50);
    if ( AumidFromPsmKey < 0 )
      break;
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v26);
    v13 = Heap;
    if ( !Heap )
    {
      v7 = (PVOID *)P;
      AumidFromPsmKey = -1073741801;
      goto LABEL_8;
    }
    StringCchCopyW(Heap, v26, v50);
    v22 = RmpArrayGrow<unsigned short *>(&P, &v28, v8 + 1);
    v7 = (PVOID *)P;
    if ( v22 >= 0 )
    {
      v23 = v8++;
      *((_QWORD *)P + v23) = v13;
      v22 = 0;
    }
    AumidFromPsmKey = v22;
    if ( v22 < 0 )
      goto LABEL_8;
  }
  v13 = 0LL;
LABEL_8:
  if ( v7 )
  {
    if ( v8 )
    {
      v24 = v8;
      do
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v7++);
        --v24;
      }
      while ( v24 );
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  CemRcObjectDereference(v34);
  if ( v12 )
    CemRcObjectDereference(v12);
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
LABEL_13:
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    p_AumidFromPsmKey = &AumidFromPsmKey;
    v40 = &v31;
    v43 = &v29;
    v46 = &v30;
    v38 = 4;
    v41 = v15;
    v29 = a3;
    v44 = 4;
    v30 = v8;
    v47 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081FB4, 0LL, 0LL, 6u, &v36);
  }
  return (unsigned int)AumidFromPsmKey;
}
