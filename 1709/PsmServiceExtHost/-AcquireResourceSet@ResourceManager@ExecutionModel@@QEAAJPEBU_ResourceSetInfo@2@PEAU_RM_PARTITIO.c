/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEBGPEAT_RM_SID@@KK_KPEAPEAVResourceSet@2@@Z @ 0x180003200 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJU_ResourceSet.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180001924 (-GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180005C64 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180010A30 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001269C (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x1800126B0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800154F0 (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017FF8 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018D04 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8 (-HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVI.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EEBC (-HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025A84 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        void *a6,
        wchar_t *a7,
        union _RM_SID *a8,
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
  struct _RM_ACTIVITY_HOST *v18; // r14
  char *v19; // rax
  _BYTE *v20; // r15
  ExecutionModel::_ResourceInfo *v21; // rbx
  __int64 v22; // rdi
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  ULONG v26; // eax
  unsigned __int64 v27; // r8
  unsigned int v28; // edi
  struct _RM_PARTITION *v29; // rbx
  __int64 v30; // r11
  struct _RM_ACTIVITY_HOST *v31; // r10
  int v32; // edi
  int v33; // ecx
  ExecutionModel::ResourceManager *v34; // rbx
  unsigned __int64 v35; // rdi
  int v36; // eax
  struct ExecutionModel::ResourceSet *v37; // rbx
  int v38; // edi
  struct _RM_ACTIVITY_HOST *v40; // rax
  int v41; // edi
  int v42; // eax
  ExecutionModel::ResourceSet *Next; // rcx
  unsigned int v44; // edx
  struct _RM_ACTIVITY_HOST *v45; // [rsp+90h] [rbp-80h] BYREF
  __int64 v46; // [rsp+98h] [rbp-78h]
  ExecutionModel::ResourceManager *v47; // [rsp+A0h] [rbp-70h]
  struct _RM_PARTITION *v48; // [rsp+A8h] [rbp-68h]
  _QWORD v49[2]; // [rsp+B0h] [rbp-60h] BYREF
  struct _RM_RESOURCE_SET **v50; // [rsp+C0h] [rbp-50h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v51; // [rsp+C8h] [rbp-48h] BYREF
  PSID Sid; // [rsp+D0h] [rbp-40h]
  wchar_t *Source; // [rsp+D8h] [rbp-38h]
  struct ExecutionModel::IResourceSetCallback *v54; // [rsp+E0h] [rbp-30h]
  void *v55; // [rsp+E8h] [rbp-28h]
  struct ExecutionModel::ResourceSet **v56; // [rsp+F0h] [rbp-20h]
  wchar_t Destination[232]; // [rsp+100h] [rbp-10h] BYREF
  _BYTE v58[68]; // [rsp+2D0h] [rbp+1C0h] BYREF
  unsigned int v59; // [rsp+314h] [rbp+204h]
  unsigned int v60; // [rsp+318h] [rbp+208h]
  unsigned __int64 v61; // [rsp+320h] [rbp+210h]

  v54 = a5;
  Source = a7;
  Sid = a8;
  v56 = a17;
  v47 = this;
  v18 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v55 = a4;
  v48 = a3;
  v19 = (char *)operator new(0x180uLL);
  v20 = v19;
  if ( !v19 )
    return 3489660951LL;
  v21 = (ExecutionModel::_ResourceInfo *)(v19 + 88);
  v22 = 3LL;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v21);
    v21 = (ExecutionModel::_ResourceInfo *)((char *)v21 + 24);
    --v22;
  }
  while ( v22 );
  v23 = v20;
  v24 = 3LL;
  do
  {
    v23 += 128;
    v25 = *(_OWORD *)a2;
    a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    *((_OWORD *)v23 - 8) = v25;
    *((_OWORD *)v23 - 7) = *((_OWORD *)a2 - 7);
    *((_OWORD *)v23 - 6) = *((_OWORD *)a2 - 6);
    *((_OWORD *)v23 - 5) = *((_OWORD *)a2 - 5);
    *((_OWORD *)v23 - 4) = *((_OWORD *)a2 - 4);
    *((_OWORD *)v23 - 3) = *((_OWORD *)a2 - 3);
    *((_OWORD *)v23 - 2) = *((_OWORD *)a2 - 2);
    *((_OWORD *)v23 - 1) = *((_OWORD *)a2 - 1);
    --v24;
  }
  while ( v24 );
  v46 = -1LL;
  if ( !a10 )
  {
    if ( a15 )
    {
      v18 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a15 + 180);
      if ( v18 )
      {
        v35 = *((_QWORD *)v18 + 3);
        RmpObjectAddRef(*((struct _RM_OBJECT_HEADER **)a15 + 180));
        v34 = v47;
        goto LABEL_25;
      }
    }
    goto LABEL_23;
  }
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v58, 0, sizeof(v58));
  v26 = RtlLengthSid(Sid);
  memcpy_0(v58, Sid, v26);
  v59 = a9;
  v61 = a11;
  v60 = a10;
  v49[0] = *((_QWORD *)v47 + 26) + 16LL;
  RtlAcquireSRWLockShared(v49[0] + 16LL);
  v27 = a11;
  v28 = *(_DWORD *)(v49[0] + 4LL);
  v29 = 0LL;
  v30 = -1LL << (v28 & 0x1F);
  v31 = (struct _RM_ACTIVITY_HOST *)(v30 & (HIBYTE(a11)
                                          + 37
                                          * (BYTE6(a11)
                                           + 37
                                           * (BYTE5(a11)
                                            + 37
                                            * (BYTE4(a11)
                                             + 37
                                             * (BYTE3(a11)
                                              + 37
                                              * (BYTE2(a11)
                                               + 37 * (BYTE1(a11) + 37 * ((unsigned __int8)a11 + 11623883LL)))))))));
  v45 = v31;
LABEL_8:
  if ( v29 )
    goto LABEL_11;
  if ( v28 >> 5 )
  {
    v27 = a11;
    v29 = (struct _RM_PARTITION *)(*(_QWORD *)(v49[0] + 8LL)
                                 + 8LL
                                 * ((37
                                   * (BYTE6(v45)
                                    + 37
                                    * (BYTE5(v45)
                                     + 37
                                     * (BYTE4(v45)
                                      + 37
                                      * (BYTE3(v45)
                                       + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                                   + HIBYTE(v45)) & ((v28 >> 5) - 1)));
LABEL_11:
    while ( 1 )
    {
      v29 = *(struct _RM_PARTITION **)v29;
      if ( ((unsigned __int8)v29 & 1) != 0 )
        break;
      if ( v31 == (struct _RM_ACTIVITY_HOST *)(v30 & *((_QWORD *)v29 + 1)) )
      {
        if ( v27 != *((_QWORD *)v29 + 3) )
          goto LABEL_8;
        v32 = 0;
        RmpObjectAddRef(v29);
        goto LABEL_15;
      }
    }
  }
  v29 = v48;
  v32 = -1073741275;
LABEL_15:
  RtlReleaseSRWLockShared(v49[0] + 16LL);
  if ( v32 >= 0 )
    v18 = v29;
  v45 = v18;
  v33 = 0;
  if ( v32 < 0 )
    v33 = v32;
  if ( v33 >= 0 && ((*((_BYTE *)v18 + 772) ^ (unsigned __int8)(*((unsigned __int16 *)v20 + 20) >> 5)) & 1) != 0 )
  {
    v38 = -805306320;
    goto LABEL_36;
  }
  if ( !a15 || (v40 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a15 + 180)) == 0LL || v40 == v18 )
  {
    if ( v33 < 0 )
    {
      v41 = HampDepGroupCreate(&v51);
      if ( v41 < 0 )
      {
        v38 = v41 | 0x10000000;
        goto LABEL_36;
      }
      v34 = v47;
      v42 = RmpActivityHostCreateHostPsm(
              *((struct _RM_SERVICE_GLOBALS **)v47 + 26),
              v48,
              (struct _RM_PSM_HOST_INFO *)Destination,
              0,
              &v45);
      v18 = v45;
      if ( v42 < 0 )
      {
        v38 = v42 | 0x10000000;
        goto LABEL_36;
      }
      HampDepGroupSetOwner(
        v51,
        (struct _RM_ACTIVITY_HOST *)((char *)v45 + 64),
        (struct _HOST_ACTIVITY_MANAGER *)(*((_QWORD *)v34 + 26) + 1288LL));
      goto LABEL_24;
    }
LABEL_23:
    v34 = v47;
LABEL_24:
    v35 = a11;
LABEL_25:
    if ( (v20[42] & 7) == 4
      && (v49[1] = 3LL,
          v49[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)v18, 3, 0),
          (Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v49)) != 0LL) )
    {
      while ( !ExecutionModel::ResourceSet::GetReportedMemoryCap(Next) )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v49);
        if ( !Next )
          goto LABEL_26;
      }
      v38 = -805305980;
    }
    else
    {
LABEL_26:
      if ( a14 )
      {
        if ( a15 )
        {
          LODWORD(v46) = 13;
        }
        else if ( a10 == 2 )
        {
          LODWORD(v46) = 11;
        }
        else if ( a10 )
        {
          if ( a10 == 4 || a10 == 8 )
            LODWORD(v46) = 12;
        }
        else
        {
          LODWORD(v46) = 10;
        }
      }
      else
      {
        v46 = -1LL;
      }
      v36 = ExecutionModel::ResourceSet::CreateInstance(
              *((_QWORD *)v34 + 13),
              v20,
              v48,
              v55,
              v54,
              a6,
              v18,
              Source,
              Sid,
              a9,
              a10,
              v35,
              v46,
              a13,
              a15,
              a16,
              &v50);
      v37 = (struct ExecutionModel::ResourceSet *)v50;
      v38 = v36;
      if ( v36 < 0
        || (v38 = RmpResourceSetEstablishSponsorship(v50[179], a12), v38 < 0)
        || (v38 = ExecutionModel::ResourceSet::AcquireInternalResources(v37, 2 - (unsigned int)(a14 != 0LL), a14),
            v38 < 0) )
      {
        if ( v37 )
        {
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v37 + 32LL))(v37, 0LL);
          (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
      else
      {
        if ( !a14 && v18 )
          RmpEnforcementWorkerSynchronize(v18);
        v38 = 0;
        *v56 = v37;
      }
    }
    goto LABEL_36;
  }
  v38 = -805306118;
LABEL_36:
  if ( v18 )
  {
    if ( RmpActivityHostCanDelete(v18) )
    {
      HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)v18 + 64), 0);
      HampHostCheckQueueStateWorker((struct _RM_ACTIVITY_HOST *)((char *)v18 + 64), 2u);
      HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)v18 + 64), v44);
    }
    RmpActivityHostRelease(v18);
  }
  if ( v51 )
    HampDepGroupDereference(v51);
  operator delete(v20);
  return (unsigned int)v38;
}
