/*
 * XREFs of ?CreateSharedProtectedSessionNtObject@@YAJW4_HMGRENTRY_TYPE@@IPEAU_OBJECT_ATTRIBUTES@@PEAPEAX@Z @ 0x1C01AEE28
 * Callers:
 *     DxgkShareObjects @ 0x1C00BEEE0 (DxgkShareObjects.c)
 *     DxgkCreateBundleObject @ 0x1C01AF0A0 (DxgkCreateBundleObject.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C0028708 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CreateSharedProtectedSessionNtObject(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  int v7; // r15d
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // rax
  PVOID v27; // rax
  _BYTE v29[8]; // [rsp+50h] [rbp-10h] BYREF
  char v30; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (unsigned int)a2;
  Object = 0LL;
  v7 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v29, Global);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
    v12 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v12 < *((_DWORD *)Current + 60)
      && (v13 = *((_QWORD *)Current + 28),
          v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
          (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0
      && v7 == (*(_DWORD *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x1F) )
    {
      v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
    }
    else
    {
      v15 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
    KeLeaveCriticalRegion();
    if ( v15 )
    {
      LOBYTE(v19) = 1;
      LOBYTE(v17) = 1;
      v21 = ObCreateObject(v17, g_pDxgkSharedProtectedSessionObjectType, a3, v19, 0LL, 8, 0, 0, &Object);
      v4 = v21;
      if ( v21 >= 0 )
      {
        v26 = Object;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 72));
        *v26 = v15;
      }
      else
      {
        v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v25 + 24) = Current;
        *(_QWORD *)(v25 + 32) = v4;
        WdLogEvent5_WdWarning(v25);
      }
      if ( v30 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
      if ( (int)v4 >= 0 )
      {
        v27 = Object;
        goto LABEL_22;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v4;
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
      if ( v30 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    LODWORD(v4) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  v27 = Object;
  if ( Object )
  {
    ObfDereferenceObject(Object);
    v27 = 0LL;
  }
LABEL_22:
  *a4 = v27;
  return (unsigned int)v4;
}
