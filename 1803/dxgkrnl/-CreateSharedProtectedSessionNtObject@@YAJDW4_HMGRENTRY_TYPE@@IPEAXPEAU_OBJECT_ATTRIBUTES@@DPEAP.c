/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A9B70
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C01AA35C (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0033344 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int v7; // r15d
  __int64 v8; // rbx
  char v9; // r12
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  PVOID v30; // rcx
  _BYTE v32[8]; // [rsp+50h] [rbp-10h] BYREF
  char v33; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v7 = a2;
  v8 = a3;
  v9 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v32, Global);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v14 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)Current + 62)
      && (v15 = *((_QWORD *)Current + 29),
          v16 = *(_DWORD *)(v15 + 16 * v14 + 8),
          (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60))
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) != 0
      && v7 == (*(_DWORD *)(v15 + 16 * v14 + 8) & 0x1F) )
    {
      v17 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 )
    {
      LOBYTE(v21) = a6;
      LOBYTE(v19) = v9;
      v23 = ObCreateObject(v19, g_pDxgkSharedProtectedSessionObjectType, a5, v21, 0LL, 8, 0, 0, &Object);
      v8 = v23;
      if ( v23 >= 0 )
      {
        v29 = Object;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 72));
        *v29 = v17;
      }
      else
      {
        if ( Object )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          *(_QWORD *)(v27 + 24) = 525LL;
          WdLogEvent5_WdAssertion(v27);
        }
        v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v28 + 24) = Current;
        *(_QWORD *)(v28 + 32) = v8;
        WdLogEvent5_WdWarning(v28);
      }
      if ( v33 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
      if ( (int)v8 >= 0 )
      {
        v30 = Object;
        goto LABEL_24;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v22 + 24) = v8;
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
      if ( v33 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  v30 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v30 = 0LL;
  }
LABEL_24:
  *a7 = v30;
  return (unsigned int)v8;
}
