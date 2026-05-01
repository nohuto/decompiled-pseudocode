/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x18000DC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x180010430 (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v5; // rsi
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  DWORD v11; // ebx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  char v21[80]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+ECh] [rbp-14h]
  unsigned int *v26; // [rsp+F0h] [rbp-10h]
  int v27; // [rsp+F8h] [rbp-8h]
  int v28; // [rsp+FCh] [rbp-4h]
  int *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  int v31; // [rsp+10Ch] [rbp+Ch]

  v5 = a3;
  RmpUtilCheckStartLockTracking(&v16, (struct _CEM_LOCK_TRACKER *)v21);
  if ( (_DWORD)v5 || a4 )
  {
    if ( a2 > 0x31 )
    {
      v13 = -805306129;
    }
    else
    {
      LODWORD(v17) = a2;
      *((_QWORD *)&v17 + 1) = v5;
      WORD2(v18) = a4 ^ 1;
      LODWORD(v18) = 101;
      v19 = v17;
      v20 = v18;
      RmpAcquireGlobalLock();
      v13 = ExecutionModel::BaseResourceSet::InitializeResource(
              *(ExecutionModel::BaseResourceSet **)(a1 + 96),
              (const struct ExecutionModel::_ResourceInfo *)&v19);
      if ( v13 >= 0 )
        v13 = 0;
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    v13 = -805306128;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v23 = &v13;
    v26 = &v14;
    v29 = &v15;
    v24 = (int)v10;
    v14 = a2;
    v27 = (int)v10;
    v15 = v5;
    v30 = (int)v10;
    TlgWrite(v8, &unk_180056067, v9, v10, 5u, &pData);
  }
  if ( v16 )
  {
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v11, 0LL);
    }
  }
  return (unsigned int)v13;
}
