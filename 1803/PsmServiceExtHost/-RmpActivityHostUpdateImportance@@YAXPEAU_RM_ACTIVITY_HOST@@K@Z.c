/*
 * XREFs of ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180006D54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x18001F7C0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023E40 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023FF0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x18001A160 (RmpActivityImportanceMergeVectors.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18001FF04 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032BFC (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostUpdateImportance(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  DWORD v4; // edi
  _QWORD *Value; // rbx
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  bool v8; // zf
  char *v9; // rdx
  char *v10; // rcx
  char *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  DWORD v16; // esi
  _QWORD *v17; // rbx
  unsigned int v18; // ebx
  _QWORD *v19; // rax
  struct _RM_ACTIVITY_HOST *v20; // rcx
  char *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // ax
  int v26; // eax
  unsigned int v27; // edx
  __int16 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v30; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v31; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v32; // [rsp+36h] [rbp-CAh] BYREF
  int v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+3Ch] [rbp-C4h]
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  int v45; // [rsp+68h] [rbp-98h] BYREF
  int v46; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  __int64 *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  int *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  int *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int16 *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  __int16 *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int16 *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int16 *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  int *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  int *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  int *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  int *v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  int *v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]
  int *v85; // [rsp+1B0h] [rbp+B0h]
  __int64 v86; // [rsp+1B8h] [rbp+B8h]

  if ( (a2 & 1) != 0 )
  {
    if ( (*((_BYTE *)a1 + 804) & 1) != 0 )
    {
      v4 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockShared((char *)a1 + 64);
      v6 = *((_DWORD *)a1 + 176);
      if ( HampLockTrackerId != -1 )
      {
        v7 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v7 & 2) == 0 )
          __int2c();
        v8 = v7[2]-- == 1LL;
        if ( v8 )
          *v7 &= ~2uLL;
      }
      RtlReleaseSRWLockShared((char *)a1 + 64);
    }
    else
    {
      v9 = (char *)a1 + 1008;
      v10 = (char *)*((_QWORD *)a1 + 126);
      v33 = 1;
      v6 = 1;
      v11 = 0LL;
      if ( v10 != v9 )
        v11 = v10 - 1416;
      while ( v11 )
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v11) )
          v6 = RmpActivityImportanceMergeVectors(v6, *((_DWORD *)v11 + 368));
        v12 = *((_QWORD *)v11 + 177);
        v13 = 3 * (*((int *)v11 + 362) + 42LL);
        v14 = *((_QWORD *)v11 + 180);
        v11 = 0LL;
        if ( v12 != v14 + 8 * v13 )
          v11 = (char *)(v12 - 1416);
      }
    }
    *((_DWORD *)a1 + 367) = v6;
    if ( (v6 & 0x40) != 0 )
      RtlWakeAllConditionVariable((char *)a1 + 1144);
  }
  if ( (a2 & 2) != 0 )
  {
    v15 = *((_DWORD *)a1 + 366);
    if ( (*((_BYTE *)a1 + 804) & 1) != 0 )
    {
      v16 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v17 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *v17 |= 2uLL;
        ++v17[2];
      }
      RtlAcquireSRWLockShared((char *)a1 + 64);
      v18 = *((_DWORD *)a1 + 176);
      if ( HampLockTrackerId != -1 )
      {
        v19 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v19 & 2) == 0 )
          __int2c();
        v8 = v19[2]-- == 1LL;
        if ( v8 )
          *v19 &= ~2uLL;
      }
      RtlReleaseSRWLockShared((char *)a1 + 64);
    }
    else
    {
      v20 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 129);
      v34 = 1;
      v18 = 1;
      v21 = 0LL;
      if ( v20 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1032) )
        v21 = (char *)v20 - 1416;
      while ( v21 )
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v21) )
          v18 = RmpActivityImportanceMergeVectors(v18, *((_DWORD *)v21 + 368));
        v22 = *((_QWORD *)v21 + 177);
        v23 = 3 * (*((int *)v21 + 362) + 42LL);
        v24 = *((_QWORD *)v21 + 180);
        v21 = 0LL;
        if ( v22 != v24 + 8 * v23 )
          v21 = (char *)(v22 - 1416);
      }
    }
    *((_DWORD *)a1 + 366) = v18;
    v25 = v18;
    if ( (v18 & 0x100) != 0 && (*((_BYTE *)a1 + 1476) & 2) == 0 && (*((_BYTE *)a1 + 1156) & 0x10) == 0 )
    {
      RmpActivityHostSetStoreHighMemoryPriority(a1);
      *((_DWORD *)a1 + 369) |= 2u;
      v25 = *((_WORD *)a1 + 732);
    }
    if ( (v25 & 0x40) != 0 )
    {
      RtlWakeAllConditionVariable((char *)a1 + 1144);
      v25 = *((_WORD *)a1 + 732);
    }
    if ( (v25 & 0x400) == 0 )
    {
      v26 = *((_DWORD *)a1 + 288);
      if ( (v26 & 4) != 0 )
        *((_DWORD *)a1 + 288) = v26 & 0xFFFFFFFB;
    }
    v27 = *((_DWORD *)a1 + 366);
    if ( v15 != v27 && hProvider > 4u && (qword_1800920C0 & 9) != 0 && (qword_1800920C8 & 9) == qword_1800920C8 )
    {
      v47 = *((_QWORD *)a1 + 4);
      v53 = &v47;
      v54 = 8LL;
      v35 = v15 & 1;
      v55 = &v35;
      v56 = 4LL;
      v36 = v27 & 1;
      v57 = &v36;
      v58 = 4LL;
      v29 = ((unsigned __int16)v15 >> 1) & 7;
      v59 = &v29;
      v60 = 2LL;
      v30 = ((unsigned __int16)v27 >> 1) & 7;
      v61 = &v30;
      v62 = 2LL;
      v31 = ((unsigned __int16)v15 >> 4) & 3;
      v63 = &v31;
      v64 = 2LL;
      v32 = ((unsigned __int16)v27 >> 4) & 3;
      v65 = &v32;
      v66 = 2LL;
      v37 = (v15 >> 6) & 1;
      v67 = &v37;
      v68 = 4LL;
      v38 = (v27 >> 6) & 1;
      v69 = &v38;
      v70 = 4LL;
      v39 = (v15 >> 7) & 1;
      v71 = &v39;
      v72 = 4LL;
      v40 = (v27 >> 7) & 1;
      v73 = &v40;
      v74 = 4LL;
      v41 = (v15 >> 8) & 1;
      v75 = &v41;
      v76 = 4LL;
      v78 = 4LL;
      v42 = (v27 >> 8) & 1;
      v77 = &v42;
      v43 = (v15 >> 9) & 1;
      v80 = 4LL;
      v79 = &v43;
      v44 = (v27 >> 9) & 1;
      v82 = 4LL;
      v81 = &v44;
      v83 = &v45;
      v85 = &v46;
      v45 = (v15 >> 10) & 1;
      v84 = 4LL;
      v46 = (v27 >> 10) & 1;
      v86 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007DEC1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_1800920B8;
      v50 = &unk_18007DECC;
      UserData.Reserved = 2;
      v51 = 399;
      v52 = 1;
      EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 0x13u, &UserData);
    }
  }
}
