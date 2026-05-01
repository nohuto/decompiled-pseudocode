/*
 * XREFs of ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180011C00 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001BAA8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x1800101F0 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001269C (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800362C8 (-RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_.c)
 */

void __fastcall RmpActivityHostUnapplyResourceSet(
        struct _RM_ACTIVITY_HOST *a1,
        struct ExecutionModel::ResourceSet *this,
        char a3)
{
  const GUID *v5; // r9
  int v6; // eax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  int v9; // r10d
  __int64 v10; // rax
  int v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  __int64 v13; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  int *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  int *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]
  __int64 *v25; // [rsp+A0h] [rbp+37h]
  int v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+ACh] [rbp+43h]

  if ( *((_DWORD *)a1 + 14) == 1 )
    v5 = (const GUID *)*((unsigned int *)a1 + 22);
  else
    v5 = 0LL;
  if ( (*((_DWORD *)this + 363) & 4) != 0 || *((_DWORD *)this + 34) )
  {
    ExecutionModel::ResourceSet::PerformReleaseResources(this, a3);
  }
  else
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v10 = *((_QWORD *)this + 237);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v13 = v10;
      v16 = &v13;
      v19 = &v11;
      v12 = *((_DWORD *)this + 364);
      v22 = &v12;
      v14 = *((_QWORD *)a1 + 3);
      v25 = &v14;
      v17 = v9 + 4;
      v11 = (int)v5;
      v20 = v9;
      v23 = v9;
      v26 = v9 + 4;
      TlgWrite(v7, &unk_1800577B3, v8, v5, 6u, &pData);
    }
    RmpActivityHostRemoveResourceSet(a1, this, 1LL, v5);
    RmpActivityHostRelease((char *)a1);
    *((_QWORD *)this + 180) = 0LL;
  }
  if ( !*((_DWORD *)this + 34) )
    *((_QWORD *)this + 18) = -1LL;
  v6 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 472) = v6;
  *((_BYTE *)this + 12) = 0;
  if ( *((_DWORD *)a1 + 14) == 1
    && ExecutionModel::_ResourceSetInfo::IsPaused((struct ExecutionModel::ResourceSet *)((char *)this + 1456)) )
  {
    *((_DWORD *)a1 + 255) = 39;
  }
}
