/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180013070
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x18000F660 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180004AD8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008FC8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x18000F6C0 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F7EC (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011250 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        struct _HOST_ACTIVITY_MANAGER **a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  struct _HAM_ACTIVITY_PROPERTIES *v10; // rbx
  void *v12; // r15
  unsigned __int64 *v14; // r13
  DWORD v16; // edi
  struct _RM_HAM_ACTIVITY_HOST *v17; // rdi
  bool v18; // cf
  int v19; // edx
  struct _HOST_ACTIVITY_MANAGER *v20; // r14
  int v21; // eax
  struct _RM_HAM_ACTIVITY_HOST *v22; // rsi
  bool v23; // sf
  int v24; // eax
  bool v25; // zf
  int v26; // eax
  struct _CEM_RC_OBJECT *v27; // rcx
  DWORD v28; // edi
  int v29; // r9d
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+44h] [rbp-BCh] BYREF
  struct _HAM_ACTIVITY *v33; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR pwsz; // [rsp+70h] [rbp-90h]
  unsigned __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v42; // [rsp+90h] [rbp-70h] BYREF
  _BYTE TlsValue[144]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[560]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+360h] [rbp+260h] BYREF
  void *v46; // [rsp+370h] [rbp+270h]
  int v47; // [rsp+378h] [rbp+278h]
  int v48; // [rsp+37Ch] [rbp+27Ch]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+380h] [rbp+280h] BYREF
  void *v50; // [rsp+390h] [rbp+290h]
  int v51; // [rsp+398h] [rbp+298h]
  int v52; // [rsp+39Ch] [rbp+29Ch]
  int *v53; // [rsp+3A0h] [rbp+2A0h]
  __int64 v54; // [rsp+3A8h] [rbp+2A8h]
  __int64 *v55; // [rsp+3B0h] [rbp+2B0h]
  __int64 v56; // [rsp+3B8h] [rbp+2B8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int *v58; // [rsp+3D0h] [rbp+2D0h]
  __int64 v59; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int64 *v60; // [rsp+3E0h] [rbp+2E0h]
  __int64 v61; // [rsp+3E8h] [rbp+2E8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+3F0h] [rbp+2F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+400h] [rbp+300h] BYREF
  int *v64; // [rsp+410h] [rbp+310h]
  __int64 v65; // [rsp+418h] [rbp+318h]
  char *v66; // [rsp+420h] [rbp+320h]
  __int64 v67; // [rsp+428h] [rbp+328h]

  v10 = a8;
  v12 = a9;
  v14 = a10;
  pwsz = a2;
  memset_0(TlsValue, 0, 0x88uLL);
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, TlsValue);
  }
  v17 = 0LL;
  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800811EB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v46 = &unk_1800811F6;
    UserData.Reserved = 2;
    v47 = 19;
    v48 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v18 = *(_DWORD *)v10 < 0x100000u;
  v33 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v32 = 0;
  v38 = -1LL;
  if ( !v18
    || wcsnlen((const wchar_t *)v10 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)v10 + 70, 0x40uLL) == 64
    || *((int *)v10 + 67) > 5 )
  {
    *((_WORD *)v10 + 69) = 0;
    *((_WORD *)v10 + 133) = 0;
LABEL_40:
    v19 = -1073741578;
    goto LABEL_41;
  }
  v31 = HampUtilValidateAndCapturePsmInformation((struct _RM_PSM_HOST_INFO *)v44, (char *)pwsz, a3, a4, a5, a6, a7);
  v19 = v31;
  if ( v31 < 0 )
    goto LABEL_42;
  if ( !(unsigned int)HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v44, v10) )
    goto LABEL_40;
  if ( (*(_DWORD *)v10 & 0x400) != 0 && !v12 )
  {
    v19 = -1073741776;
LABEL_41:
    v31 = v19;
    goto LABEL_42;
  }
  v20 = *a1;
  v21 = HampHostFindOrCreate(*a1, (struct _RM_PSM_HOST_INFO *)v44, &v37);
  v22 = v37;
  v19 = v21;
  v31 = v21;
  if ( v21 >= 0 )
  {
    if ( !v12 )
    {
      v19 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, v20, v37, v10, 0, &v33);
      v31 = v19;
      v23 = v19 < 0;
LABEL_35:
      v27 = v33;
      if ( !v23 )
      {
        v19 = (int)v12;
        v38 = *((_QWORD *)v33 + 5);
        *v14 = v38;
        v31 = (int)v12;
      }
      if ( v27 )
      {
        CemRcObjectDereference(v27);
        v19 = v31;
      }
      goto LABEL_22;
    }
    v24 = HampHostFindByProcessHandle(v20, v12, &v34, &v40);
    v31 = v24;
    v19 = v24;
    if ( v24 == -1073741275 )
    {
      v19 = -1058275323;
      v31 = -1058275323;
    }
    else if ( v24 >= 0 )
    {
      v17 = v34;
      if ( v22 == v34 )
      {
        *((_DWORD *)v10 + 91) &= ~0x20u;
        LODWORD(v12) = 0;
        *((_QWORD *)v10 + 41) = 0LL;
        *((_QWORD *)v10 + 42) = 0LL;
        *((_QWORD *)v10 + 43) = 0LL;
        *((_QWORD *)v10 + 44) = 0LL;
        *((_QWORD *)v10 + 40) |= 0xFuLL;
        v32 = 1;
        v26 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, v20, v22, v10, 0, &v33);
      }
      else
      {
        v26 = HampDepGroupAddDonationDependency(a1, v34, v40, v22, v10, &v33);
        LODWORD(v12) = 0;
      }
      v19 = v26;
      v31 = v26;
      v23 = v26 < 0;
      goto LABEL_35;
    }
    v17 = v34;
  }
LABEL_22:
  if ( v22 )
  {
    RmpAcquireGlobalLock();
    v25 = (*((_QWORD *)v22 + 72))-- == 1LL;
    if ( v25 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v22 - 64));
    RmpReleaseGlobalLock();
    v19 = v31;
  }
  if ( v17 )
  {
    RmpAcquireGlobalLock();
    v25 = (*((_QWORD *)v17 + 72))-- == 1LL;
    if ( v25 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v17 - 64));
    RmpReleaseGlobalLock();
    v19 = v31;
  }
LABEL_42:
  v28 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v28, 0LL);
    v19 = v31;
  }
  if ( _volatile_metadata <= 4u || (byte_180092100 & 8) == 0 || (qword_180092108 & 8) != qword_180092108 )
    return (unsigned int)v19;
  v53 = &v31;
  v54 = 4LL;
  v55 = &v38;
  v56 = 8LL;
  TlgCreateWsz(&pDesc, pwsz);
  v35 = a6;
  v59 = 4LL;
  v58 = &v35;
  v60 = &a7;
  v61 = 8LL;
  TlgCreateWsz(&v62, (LPCWSTR)v10 + 6);
  TlgCreateWsz(&v63, (LPCWSTR)v10 + 70);
  v29 = *(_DWORD *)v10;
  v64 = &v36;
  v66 = &v32;
  v36 = v29;
  v65 = 4LL;
  v67 = 1LL;
  *(_DWORD *)&v42.Level = 516;
  v49.Ptr = (ULONGLONG)off_1800920F8;
  *(_DWORD *)&v42.Id = ((unsigned int)&unk_1800810E9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v42.Keyword = 8LL;
  v49.Size = *(unsigned __int16 *)off_1800920F8;
  v50 = &unk_1800810F4;
  v49.Reserved = 2;
  v51 = 140;
  v52 = 1;
  EventWriteTransfer(RegHandle, &v42, 0LL, 0LL, 0xBu, &v49);
  return (unsigned int)v31;
}
