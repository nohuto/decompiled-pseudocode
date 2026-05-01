/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x18004EB24 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 * Callees:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x18001A360 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B850 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x18004CB90 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z @ 0x180052228 (-RmpResourceSetAddExplicitDonor@@YAJPEAU_RM_RESOURCE_SET@@KK@Z.c)
 *     ?RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800522B8 (-RmpResourceSetAddForegroundDonor@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800523C4 (-RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x1800526DC (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        void *a6,
        wchar_t *a7,
        PSID Sid,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11,
        unsigned int a12,
        struct _RM_ACTIVATOR *a13,
        bool *a14,
        struct ExecutionModel::ResourceSet *a15,
        unsigned __int64 a16,
        struct ExecutionModel::ResourceSet **a17)
{
  char *v18; // rdi
  char *v19; // rax
  char *v20; // r14
  __int64 v21; // rdx
  int v22; // r15d
  char *v23; // rcx
  unsigned int v24; // r12d
  char *v25; // rcx
  __int64 v26; // rax
  __int128 v27; // xmm0
  ULONG v28; // eax
  unsigned __int64 v29; // r8
  __int64 v30; // rbx
  int v31; // esi
  unsigned int v32; // edx
  char v33; // cl
  __int64 v34; // r10
  unsigned int v35; // r9d
  int v36; // eax
  struct ExecutionModel::ResourceSet *v37; // rcx
  ExecutionModel::ResourceManager *v38; // rbx
  int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // r8d
  struct ExecutionModel::ResourceSet *v42; // rbx
  int v43; // esi
  __int64 v45; // r11
  __int64 v46; // rcx
  int v47; // r9d
  int HostPsm; // eax
  ExecutionModel::ResourceSet *Next; // rcx
  unsigned int v50; // r10d
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  int v54; // eax
  int v55; // r9d
  int v56; // r9d
  _QWORD v57[2]; // [rsp+90h] [rbp-80h] BYREF
  PVOID P; // [rsp+A0h] [rbp-70h] BYREF
  struct ExecutionModel::ResourceSet *v59; // [rsp+A8h] [rbp-68h]
  unsigned int v60; // [rsp+B0h] [rbp-60h]
  __int64 v61; // [rsp+B8h] [rbp-58h]
  ExecutionModel::ResourceManager *v62; // [rsp+C0h] [rbp-50h]
  struct ExecutionModel::ResourceSet *v63; // [rsp+C8h] [rbp-48h] BYREF
  wchar_t *Source; // [rsp+D0h] [rbp-40h]
  struct _RM_PARTITION *v65; // [rsp+D8h] [rbp-38h]
  struct ExecutionModel::ResourceSet **v66; // [rsp+E0h] [rbp-30h]
  PSID v67; // [rsp+E8h] [rbp-28h]
  struct ExecutionModel::IResourceSetCallback *v68; // [rsp+F0h] [rbp-20h]
  void *v69; // [rsp+F8h] [rbp-18h]
  wchar_t Destination[232]; // [rsp+100h] [rbp-10h] BYREF
  _BYTE v71[68]; // [rsp+2D0h] [rbp+1C0h] BYREF
  unsigned int v72; // [rsp+314h] [rbp+204h]
  unsigned int v73; // [rsp+318h] [rbp+208h]
  unsigned __int64 v74; // [rsp+320h] [rbp+210h]

  v18 = 0LL;
  v68 = a5;
  Source = a7;
  v59 = a15;
  v62 = this;
  v66 = a17;
  v69 = a4;
  v65 = a3;
  v67 = Sid;
  v63 = 0LL;
  P = 0LL;
  v19 = (char *)operator new(0x178uLL);
  v20 = v19;
  if ( !v19 )
    return 3489660951LL;
  v21 = 3LL;
  v22 = -1;
  v23 = v19 + 80;
  do
  {
    *(_DWORD *)v23 = -1;
    *((_QWORD *)v23 + 1) = 0LL;
    *((_DWORD *)v23 + 4) = 101;
    *((_WORD *)v23 + 10) = 0;
    v23 += 24;
    --v21;
  }
  while ( v21 );
  v24 = 2;
  v25 = v19;
  v26 = 2LL;
  do
  {
    v25 += 128;
    v27 = *(_OWORD *)a2;
    a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    *((_OWORD *)v25 - 8) = v27;
    *((_OWORD *)v25 - 7) = *((_OWORD *)a2 - 7);
    *((_OWORD *)v25 - 6) = *((_OWORD *)a2 - 6);
    *((_OWORD *)v25 - 5) = *((_OWORD *)a2 - 5);
    *((_OWORD *)v25 - 4) = *((_OWORD *)a2 - 4);
    *((_OWORD *)v25 - 3) = *((_OWORD *)a2 - 3);
    *((_OWORD *)v25 - 2) = *((_OWORD *)a2 - 2);
    *((_OWORD *)v25 - 1) = *((_OWORD *)a2 - 1);
    --v26;
  }
  while ( v26 );
  *(_OWORD *)v25 = *(_OWORD *)a2;
  *((_OWORD *)v25 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v25 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v25 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v25 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v25 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v25 + 6) = *((_OWORD *)a2 + 6);
  *((_QWORD *)v25 + 14) = *((_QWORD *)a2 + 14);
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v71, 0, sizeof(v71));
  v28 = RtlLengthSid(Sid);
  memcpy_0(v71, Sid, v28);
  v72 = a9;
  v73 = a10;
  v74 = a11;
  v61 = *((_QWORD *)v62 + 19) + 16LL;
  RtlAcquireSRWLockShared(v61 + 16);
  v29 = a11;
  v30 = 0LL;
  v31 = -1073741275;
  v32 = *(_DWORD *)(v61 + 4);
  v33 = v32 & 0x1F;
  v60 = v32;
  v34 = (-1LL << (v32 & 0x1F)) & (HIBYTE(a11)
                                + 37
                                * (BYTE6(a11)
                                 + 37
                                 * (BYTE5(a11)
                                  + 37
                                  * (BYTE4(a11)
                                   + 37
                                   * (BYTE3(a11)
                                    + 37 * (BYTE2(a11) + 37 * (BYTE1(a11) + 37 * ((unsigned __int8)a11 + 11623883LL))))))));
  v57[0] = v34;
LABEL_7:
  if ( v30 )
    goto LABEL_10;
  v35 = v32 >> 5;
  if ( v32 >> 5 )
  {
    v32 = v60;
    v29 = a11;
    v30 = *(_QWORD *)(v61 + 8)
        + 8LL
        * ((37
          * (BYTE6(v57[0])
           + 37
           * (BYTE5(v57[0])
            + 37
            * (BYTE4(v57[0])
             + 37
             * (BYTE3(v57[0]) + 37 * (BYTE2(v57[0]) + 37 * (BYTE1(v57[0]) + 37 * ((unsigned __int8)v34 + 11623883)))))))
          + HIBYTE(v57[0])) & (v35 - 1));
LABEL_10:
    while ( 1 )
    {
      v30 = *(_QWORD *)v30;
      if ( (v30 & 1) != 0 )
        break;
      if ( v34 == ((-1LL << v33) & *(_QWORD *)(v30 + 8)) )
      {
        if ( v29 != *(_QWORD *)(v30 + 32) )
          goto LABEL_7;
        v31 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v30 + 16)) <= 1 )
          __fastfail(0xEu);
        v18 = (char *)P;
        goto LABEL_15;
      }
    }
  }
  v30 = (__int64)v66;
LABEL_15:
  RtlReleaseSRWLockShared(v61 + 16);
  if ( v31 >= 0 )
  {
    v31 = 0;
    v18 = (char *)v30;
    v36 = *(_DWORD *)(v30 + 804) ^ (*((unsigned __int16 *)v20 + 20) >> 5);
    P = (PVOID)v30;
    if ( (v36 & 1) != 0 )
    {
      v43 = -805306320;
      goto LABEL_30;
    }
  }
  v37 = v59;
  if ( v59 && *((char **)v59 + 180) != v18 )
  {
    v43 = -805306118;
    goto LABEL_30;
  }
  v38 = v62;
  if ( v31 < 0 )
  {
    HostPsm = RmpActivityHostCreateHostPsm(
                *((struct _RM_SERVICE_GLOBALS **)v62 + 19),
                v65,
                (struct _RM_PSM_HOST_INFO *)Destination,
                0,
                (struct _RM_ACTIVITY_HOST **)&P);
    v18 = (char *)P;
    if ( HostPsm < 0 )
    {
      v43 = HostPsm | 0x10000000;
      goto LABEL_30;
    }
    v37 = v59;
  }
  if ( (v20[42] & 7) == 4 )
  {
    v57[1] = 3LL;
    v57[0] = RmpActivityHostEnumerateResourceSetGetFirst(v18, 3LL, 0LL);
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v57);
    if ( Next )
    {
      while ( !ExecutionModel::ResourceSet::GetReportedMemoryCap(Next) )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v57);
        if ( !Next )
          goto LABEL_51;
      }
      v43 = -805305980;
      goto LABEL_30;
    }
LABEL_51:
    v37 = v59;
  }
  if ( a14 )
  {
    if ( v37 )
    {
      v22 = 13;
    }
    else if ( a10 == 2 )
    {
      v22 = 11;
    }
    else if ( a10 == 4 || a10 == 8 )
    {
      v22 = 12;
    }
  }
  v39 = ExecutionModel::ResourceSet::CreateInstance(
          *((_QWORD *)v38 + 6),
          v20,
          v65,
          v69,
          v68,
          a6,
          v18,
          Source,
          v67,
          a9,
          a10,
          a11,
          v22,
          a13,
          v37,
          a16,
          &v63);
  v42 = v63;
  v43 = v39;
  if ( v39 < 0 )
    goto LABEL_75;
  if ( (v18[804] & 1) != 0 )
    goto LABEL_26;
  v45 = *((_QWORD *)v63 + 179);
  v46 = *(_QWORD *)(v45 + 48);
  v47 = *(_BYTE *)(v46 + 1498) & 7;
  if ( (*(_BYTE *)(v46 + 1498) & 7) == 0 )
  {
    if ( !a12 )
      goto LABEL_26;
LABEL_60:
    v51 = *(_QWORD *)(v46 + 1872);
    if ( v51 && (v52 = *(_QWORD *)(v51 + 1432)) != 0 )
      v53 = *(_QWORD *)(v52 + 96);
    else
      v53 = 0LL;
    RmpCommitValuesSubtract(*(_QWORD *)(v46 + 1480), v53, (unsigned __int64 *)(v45 + 96));
    goto LABEL_65;
  }
  if ( (unsigned int)(v47 - 2) <= 2 && !*(_QWORD *)(v46 + 1856) && v47 != 3 )
    goto LABEL_26;
  v50 = a12;
  if ( v47 != 4 )
    goto LABEL_60;
LABEL_65:
  if ( v50 )
  {
    v54 = RmpResourceSetAddExplicitDonor((struct _RM_RESOURCE_SET *)v45, v50, v41);
  }
  else
  {
    v55 = v47 - 1;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        if ( v56 != 1 )
        {
          v43 = -805306367;
          goto LABEL_75;
        }
        v54 = RmpResourceSetAddPpleDonors((struct _RM_RESOURCE_SET *)v45, v40);
      }
      else
      {
        v54 = RmpResourceSetAddForegroundDonor((struct _RM_RESOURCE_SET *)v45, v40);
      }
    }
    else
    {
      v54 = RmpResourceSetCheckAddPpleRecipient((struct _RM_RESOURCE_SET *)v45);
    }
  }
  v43 = v54;
  if ( v54 < 0 )
  {
LABEL_75:
    if ( v42 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v42 + 32LL))(v42, 0LL);
      (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    goto LABEL_30;
  }
LABEL_26:
  if ( a14 )
    v24 = 1;
  v43 = ExecutionModel::ResourceSet::AcquireInternalResources(v42, v24, a14);
  if ( v43 < 0 )
    goto LABEL_75;
  v43 = 0;
  *v66 = v42;
LABEL_30:
  if ( v18 )
  {
    if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v18) )
    {
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v18 + 64), 0);
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v18 + 64), 1);
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v18 + 64));
    }
    RmpObjectRelease(v18);
  }
  operator delete(v20);
  return (unsigned int)v43;
}
