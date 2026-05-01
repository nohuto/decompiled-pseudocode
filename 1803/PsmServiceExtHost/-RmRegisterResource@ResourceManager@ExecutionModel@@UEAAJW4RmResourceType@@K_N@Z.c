/*
 * XREFs of ?RmRegisterResource@ResourceManager@ExecutionModel@@UEAAJW4RmResourceType@@K_N@Z @ 0x18001C470
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18001E91C (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180024DE4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmRegisterResource(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v5; // rsi
  const struct _TlgProvider_t *v8; // rcx
  int v9; // r9d
  DWORD v10; // ebx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int128 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  int *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+13Ch] [rbp+3Ch]
  int *v28; // [rsp+140h] [rbp+40h]
  int v29; // [rsp+148h] [rbp+48h]
  int v30; // [rsp+14Ch] [rbp+4Ch]

  v5 = a3;
  RmpUtilCheckStartLockTracking(&v15, (struct _CEM_LOCK_TRACKER *)v20);
  if ( (_DWORD)v5 || a4 )
  {
    if ( a2 > 0x31 )
    {
      v12 = -805306129;
    }
    else
    {
      LODWORD(v16) = a2;
      *((_QWORD *)&v16 + 1) = v5;
      WORD2(v17) = a4 ^ 1;
      LODWORD(v17) = 101;
      v18 = v16;
      v19 = v17;
      RmpAcquireGlobalLock();
      v12 = ExecutionModel::BaseResourceSet::InitializeResource(
              *(ExecutionModel::BaseResourceSet **)(a1 + 40),
              (const struct ExecutionModel::_ResourceInfo *)&v18);
      if ( v12 >= 0 )
        v12 = 0;
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    v12 = -805306128;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = &v12;
    v25 = &v13;
    v28 = &v14;
    v23 = v9;
    v13 = a2;
    v26 = v9;
    v14 = v5;
    v29 = v9;
    TlgWrite(v8, &unk_18007C291, 0LL, 0LL, 5u, &pData);
  }
  if ( v15 )
  {
    v10 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v10, 0LL);
    }
  }
  return (unsigned int)v12;
}
