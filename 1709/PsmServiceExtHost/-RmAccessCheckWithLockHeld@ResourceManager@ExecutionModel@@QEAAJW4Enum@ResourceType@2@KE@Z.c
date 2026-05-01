/*
 * XREFs of ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002984 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180003174 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800323F8 (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 * Callees:
 *     ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800033F0 (-RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBAL.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  PVOID v4; // rbx
  __int64 v5; // r15
  int v9; // r14d
  struct ExecutionModel::ResourceSet *ProcessResourceSet; // rax
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  struct ExecutionModel::ResourceManager *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  HANDLE v29; // rax
  void *v30; // rsi
  BOOL v31; // edi
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-A8h]
  __int16 v38; // [rsp+5Ch] [rbp-A4h]
  _BYTE v39[560]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[560]; // [rsp+290h] [rbp+190h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v42; // [rsp+4E0h] [rbp+3E0h]
  int v43; // [rsp+4E8h] [rbp+3E8h]
  int v44; // [rsp+4ECh] [rbp+3ECh]
  unsigned int *v45; // [rsp+4F0h] [rbp+3F0h]
  int v46; // [rsp+4F8h] [rbp+3F8h]
  int v47; // [rsp+4FCh] [rbp+3FCh]
  PVOID *p_P; // [rsp+500h] [rbp+400h]
  int v49; // [rsp+508h] [rbp+408h]
  int v50; // [rsp+50Ch] [rbp+40Ch]

  v4 = 0LL;
  v5 = (int)a2;
  v32 = -2147024891;
  P = 0LL;
  v9 = 1;
  if ( a2 > 0x31 )
  {
    v32 = -2147024809;
    goto LABEL_11;
  }
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a1[26], a3);
  if ( ProcessResourceSet )
  {
    v31 = *((_DWORD *)ProcessResourceSet + v5 + 404) < 101;
  }
  else
  {
    v32 = (*((__int64 (__fastcall **)(struct _RM_SERVICE_GLOBALS **, _QWORD, _BYTE *))*a1 + 5))(a1, a3, v39);
    if ( v32 >= 0 )
    {
      v11 = v40;
      v12 = v39;
      v13 = 4LL;
      do
      {
        v14 = v12[1];
        *v11 = *v12;
        v15 = v12[2];
        v11[1] = v14;
        v16 = v12[3];
        v11[2] = v15;
        v17 = v12[4];
        v11[3] = v16;
        v18 = v12[5];
        v11[4] = v17;
        v19 = v12[6];
        v11[5] = v18;
        v20 = v12[7];
        v12 += 8;
        v11[6] = v19;
        v11 += 8;
        *(v11 - 1) = v20;
        --v13;
      }
      while ( v13 );
      v21 = *v12;
      v22 = v12[1];
      v23 = *((_QWORD *)v12 + 4);
      *v11 = v21;
      v11[1] = v22;
      *((_QWORD *)v11 + 4) = v23;
      RmpActivityHostFindByTypeAndIdentifier(a1[26], 0LL, v40, &P);
      v4 = P;
      if ( P )
      {
        v35 = v5;
        v36 = 1LL;
        v37 = 101;
        v38 = 256;
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          v24,
          (a4 != 0) + 2,
          1u,
          (struct ExecutionModel::_ResourceInfo *)&v35,
          (struct _RM_ACTIVITY_HOST *)P);
        if ( v37 != 101 )
        {
LABEL_8:
          v32 = 0;
          goto LABEL_9;
        }
        goto LABEL_20;
      }
    }
    v9 = 0;
    v29 = OpenProcess(0x100000u, 0, a3);
    v30 = v29;
    if ( !v29 )
    {
LABEL_20:
      v32 = -2147024891;
      goto LABEL_9;
    }
    v31 = WaitForSingleObject(v29, 0) == 258;
    CloseHandle(v30);
  }
  if ( !v31 )
    goto LABEL_20;
  if ( v9 )
    goto LABEL_8;
  v32 = 1;
LABEL_9:
  if ( v4 )
    RmpObjectRelease(v4);
LABEL_11:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v42 = &v32;
    v45 = &v34;
    p_P = &P;
    v43 = 4;
    v34 = a3;
    v46 = 4;
    LODWORD(P) = v5;
    v49 = 4;
    TlgWrite(v25, &unk_1800561C4, v26, v27, 5u, &pData);
  }
  return (unsigned int)v32;
}
