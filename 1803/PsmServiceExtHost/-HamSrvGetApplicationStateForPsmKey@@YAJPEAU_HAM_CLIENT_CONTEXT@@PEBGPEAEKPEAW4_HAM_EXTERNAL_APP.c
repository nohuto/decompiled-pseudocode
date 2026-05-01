/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000C430
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x18000C420 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x18000CE50 (CempPackageFamilyNameFromPsmKey.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011E78 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012AC8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampAppCompareByIdentity@@YAJPEAX0@Z @ 0x180027A50 (-HampAppCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180027A60 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180027A70 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180027D00 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  unsigned __int8 *v8; // r15
  struct _HAM_CLIENT_CONTEXT *v9; // r13
  int v10; // edi
  int v11; // r14d
  DWORD v12; // ebx
  int v13; // ebx
  int v14; // edx
  _WORD *v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // ax
  _WORD *v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // r8
  _WORD *v22; // rdx
  __int16 v23; // ax
  _WORD *v24; // rax
  unsigned __int64 *v25; // rdi
  unsigned __int64 *v26; // r14
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  int v29; // edi
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  int v35; // edi
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  int v41; // edi
  int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  DWORD v45; // esi
  _QWORD *Value; // rbx
  _QWORD *v47; // rax
  bool v48; // zf
  DWORD v49; // esi
  _QWORD *v50; // rbx
  _QWORD *v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  int v54; // esi
  int v55; // eax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rsi
  DWORD v58; // edi
  _QWORD *v59; // rbx
  _QWORD *v60; // rax
  DWORD v61; // ebx
  const WCHAR *v62; // rcx
  __int64 v63; // rax
  int v64; // eax
  char i; // [rsp+30h] [rbp-D0h] BYREF
  char j; // [rsp+31h] [rbp-CFh] BYREF
  char v68; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v69; // [rsp+34h] [rbp-CCh] BYREF
  int v70; // [rsp+38h] [rbp-C8h] BYREF
  int v71; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int8 *v72; // [rsp+40h] [rbp-C0h]
  struct _HAM_CLIENT_CONTEXT *v73; // [rsp+48h] [rbp-B8h]
  enum _HAM_EXTERNAL_APPLICATION_STATE *v74; // [rsp+50h] [rbp-B0h]
  enum _HAM_TERMINATE_REASON *v75; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v77; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v78[132]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE Buf1[68]; // [rsp+104h] [rbp+4h] BYREF
  int v80; // [rsp+148h] [rbp+48h]
  _BYTE v81[464]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE DestinationSid[68]; // [rsp+320h] [rbp+220h] BYREF
  void *v83; // [rsp+364h] [rbp+264h]
  _BYTE TlsValue[144]; // [rsp+370h] [rbp+270h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+400h] [rbp+300h] BYREF
  void *v86; // [rsp+410h] [rbp+310h]
  int v87; // [rsp+418h] [rbp+318h]
  int v88; // [rsp+41Ch] [rbp+31Ch]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+420h] [rbp+320h] BYREF
  void *v90; // [rsp+430h] [rbp+330h]
  int v91; // [rsp+438h] [rbp+338h]
  int v92; // [rsp+43Ch] [rbp+33Ch]
  unsigned int *v93; // [rsp+440h] [rbp+340h]
  __int64 v94; // [rsp+448h] [rbp+348h]
  const WCHAR *v95; // [rsp+450h] [rbp+350h]
  int v96; // [rsp+458h] [rbp+358h]
  int v97; // [rsp+45Ch] [rbp+35Ch]
  unsigned __int8 *v98; // [rsp+460h] [rbp+360h]
  int v99; // [rsp+468h] [rbp+368h]
  int v100; // [rsp+46Ch] [rbp+36Ch]
  int *v101; // [rsp+470h] [rbp+370h]
  __int64 v102; // [rsp+478h] [rbp+378h]
  char *v103; // [rsp+480h] [rbp+380h]
  __int64 v104; // [rsp+488h] [rbp+388h]
  int *v105; // [rsp+490h] [rbp+390h]
  __int64 v106; // [rsp+498h] [rbp+398h]
  _BYTE v107[144]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v74 = a5;
  v8 = a3;
  v75 = a6;
  v9 = a1;
  v72 = a3;
  v73 = a1;
  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180081F49 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v86 = &unk_180081F54;
    UserData.Reserved = 2;
    v87 = 24;
    v88 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  LOBYTE(v10) = 4;
  v11 = 6400;
  memset_0(TlsValue, 0, 0x88uLL);
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, TlsValue);
  }
  v13 = *((_DWORD *)v9 + 35);
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( a4 >= 0xC && RtlValidSid(v8) && RtlLengthSid(v8) == a4 )
    {
      memset_0(v81, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a2) && RtlValidSid(v8) )
        RtlLengthSid(v8);
      v15 = v81;
      v16 = 232LL;
      do
      {
        if ( v16 == -2147483414 )
          break;
        v17 = *(_WORD *)((char *)v15 + a2 - v81);
        if ( !v17 )
          break;
        *v15++ = v17;
        --v16;
      }
      while ( v16 );
      v18 = v15 - 1;
      if ( v16 )
        v18 = v15;
      *v18 = 0;
      RtlCopySid(0x44u, DestinationSid, v8);
      v14 = 0;
      LODWORD(v83) = v13;
    }
    else
    {
      v14 = -1073741584;
    }
  }
  else
  {
    v14 = -1073741585;
  }
  v69 = v14;
  if ( v14 >= 0 )
  {
    v19 = *(_QWORD *)v9;
    memset_0(v107, 0, 0x82uLL);
    CempPackageFamilyNameFromPsmKey(v81, v107);
    v20 = (unsigned int)v83;
    memset_0(v78, 0, 0xCCuLL);
    v21 = 65LL;
    v22 = v78;
    do
    {
      if ( v21 == -2147483581 )
        break;
      v23 = v22[528];
      if ( !v23 )
        break;
      *v22++ = v23;
      --v21;
    }
    while ( v21 );
    v24 = v22 - 1;
    if ( v21 )
      v24 = v22;
    *v24 = 0;
    RtlCopySid(0x44u, Buf1, DestinationSid);
    v25 = (unsigned __int64 *)(v19 + 152);
    v80 = v20;
    v26 = v25 + 2;
    RtlAcquireSRWLockShared(v25 + 2);
    v27 = v25[1];
    v28 = *v25;
    if ( (v27 & 1) != 0 )
    {
      if ( v28 )
        v28 ^= (unsigned __int64)v25;
      else
        v28 = 0LL;
    }
    v29 = v27 & 1;
    while ( v28 )
    {
      v30 = HampSessionCompareById((void *)v20, (void *)v28);
      if ( v30 >= 0 )
      {
        if ( v30 <= 0 )
          break;
        v31 = *(_QWORD *)(v28 + 8);
      }
      else
      {
        v31 = *(_QWORD *)v28;
      }
      if ( v29 && v31 )
        v28 ^= v31;
      else
        v28 = v31;
    }
    v32 = v28;
    if ( v28 )
    {
      if ( *(_QWORD *)(v28 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v28 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v32 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v26);
    if ( !v32 )
      goto LABEL_148;
    RtlAcquireSRWLockShared(v32 + 56);
    v33 = *(_QWORD *)(v32 + 48);
    v34 = *(_QWORD *)(v32 + 40);
    if ( (v33 & 1) != 0 )
    {
      if ( v34 )
        v34 ^= v32 + 40;
      else
        v34 = 0LL;
    }
    v35 = v33 & 1;
    while ( v34 )
    {
      v36 = HampUserCompareByIdentity(Buf1, (void *)v34);
      if ( v36 >= 0 )
      {
        if ( v36 <= 0 )
          break;
        v37 = *(_QWORD *)(v34 + 8);
      }
      else
      {
        v37 = *(_QWORD *)v34;
      }
      if ( v35 && v37 )
        v34 ^= v37;
      else
        v34 = v37;
    }
    v38 = v34;
    if ( v34 )
    {
      if ( *(_QWORD *)(v34 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v34 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v38 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v32 + 56);
    if ( !v38 )
      goto LABEL_113;
    RtlAcquireSRWLockShared(v38 + 56);
    v39 = *(_QWORD *)(v38 + 48);
    v40 = *(_QWORD *)(v38 + 40);
    if ( (v39 & 1) != 0 )
    {
      if ( v40 )
        v40 ^= v38 + 40;
      else
        v40 = 0LL;
    }
    v41 = v39 & 1;
    while ( v40 )
    {
      v42 = HampPkgCompareByIdentity(v78, (void *)v40);
      if ( v42 >= 0 )
      {
        if ( v42 <= 0 )
          break;
        v43 = *(_QWORD *)(v40 + 8);
      }
      else
      {
        v43 = *(_QWORD *)v40;
      }
      if ( v41 && v43 )
        v40 ^= v43;
      else
        v40 = v43;
    }
    v44 = v40;
    if ( v40 )
    {
      if ( *(_QWORD *)(v40 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v40 + 24)) <= 1 )
          __fastfail(0xEu);
      }
      else
      {
        v44 = 0LL;
      }
    }
    RtlReleaseSRWLockShared(v38 + 56);
    if ( v44 )
    {
      v45 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v45) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
          __int2c();
        *Value |= 0x40uLL;
        ++Value[7];
      }
      RtlAcquireSRWLockShared(v44 + 304);
      for ( i = *(_BYTE *)(v44 + 356); !i; i = *(_BYTE *)(v44 + 356) )
      {
        HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v44);
        RtlWaitOnAddress(v44 + 356, &i, 1LL, 0LL);
        HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v44);
      }
      if ( HampLockTrackerId != -1 )
      {
        v47 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v47 & 0x40) == 0 )
          __int2c();
        v48 = v47[7]-- == 1LL;
        if ( v48 )
          *v47 &= ~0x40uLL;
      }
      RtlReleaseSRWLockShared(v44 + 304);
      v49 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        v50 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v49) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
          __int2c();
        *v50 |= 0x40uLL;
        ++v50[7];
      }
      RtlAcquireSRWLockShared(v44 + 304);
      for ( j = *(_BYTE *)(v44 + 356); !j; j = *(_BYTE *)(v44 + 356) )
      {
        HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v44);
        RtlWaitOnAddress(v44 + 356, &j, 1LL, 0LL);
        HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v44);
      }
      if ( HampLockTrackerId != -1 )
      {
        v51 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v51 & 0x40) == 0 )
          __int2c();
        v48 = v51[7]-- == 1LL;
        if ( v48 )
          *v51 &= ~0x40uLL;
      }
      RtlReleaseSRWLockShared(v44 + 304);
    }
    else
    {
LABEL_113:
      v44 = 0LL;
    }
    CemRcObjectDereference((struct _CEM_RC_OBJECT *)v32);
    if ( v38 )
      CemRcObjectDereference((struct _CEM_RC_OBJECT *)v38);
    if ( v44 )
    {
      RtlAcquireSRWLockShared(v44 + 56);
      v52 = *(_QWORD *)(v44 + 48);
      v53 = *(_QWORD *)(v44 + 40);
      if ( (v52 & 1) != 0 )
      {
        if ( v53 )
          v53 ^= v44 + 40;
        else
          v53 = 0LL;
      }
      v54 = v52 & 1;
      while ( v53 )
      {
        v55 = HampAppCompareByIdentity(v81, (void *)v53);
        if ( v55 >= 0 )
        {
          if ( v55 <= 0 )
            break;
          v56 = *(_QWORD *)(v53 + 8);
        }
        else
        {
          v56 = *(_QWORD *)v53;
        }
        if ( v54 && v56 )
          v53 ^= v56;
        else
          v53 = v56;
      }
      v57 = v53;
      if ( v53 )
      {
        if ( *(_QWORD *)(v53 + 24) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v53 + 24)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v57 = 0LL;
        }
      }
      RtlReleaseSRWLockShared(v44 + 56);
      CemRcObjectDereference((struct _CEM_RC_OBJECT *)v44);
      if ( v57 )
      {
        v58 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v59 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v58) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
            __int2c();
          *v59 |= 0x20uLL;
          ++v59[6];
        }
        RtlAcquireSRWLockShared(v57 + 576);
        v10 = *(_DWORD *)(v57 + 608) & 7;
        v11 = (unsigned __int16)(*(_DWORD *)(v57 + 608) >> 3);
        if ( HampLockTrackerId != -1 )
        {
          v60 = TlsGetValue(HampLockTrackerId);
          if ( (*(_BYTE *)v60 & 0x20) == 0 )
            __int2c();
          v48 = v60[6]-- == 1LL;
          if ( v48 )
            *v60 &= ~0x20uLL;
        }
        RtlReleaseSRWLockShared(v57 + 576);
        if ( v10 != 4 )
          goto LABEL_151;
        goto LABEL_150;
      }
    }
    else
    {
LABEL_148:
      v57 = 0LL;
    }
    v11 = 0;
LABEL_150:
    v10 = 3;
LABEL_151:
    v14 = 0;
    v69 = 0;
    *(_DWORD *)v74 = v10;
    *(_DWORD *)v75 = v11;
    if ( v57 )
    {
      CemRcObjectDereference((struct _CEM_RC_OBJECT *)v57);
      v14 = v69;
    }
    v9 = v73;
    v8 = v72;
  }
  v61 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v61, 0LL);
    v14 = v69;
  }
  if ( _volatile_metadata <= 4u || (byte_180092100 & 8) == 0 || (qword_180092108 & 8) != qword_180092108 )
    return (unsigned int)v14;
  v94 = 4LL;
  v93 = &v69;
  v62 = &pwsz;
  LODWORD(v63) = 0;
  if ( a2 )
  {
    v62 = (const WCHAR *)a2;
    v63 = -1LL;
    do
      ++v63;
    while ( *(_WORD *)&a2[2 * v63] );
  }
  v95 = v62;
  v96 = 2 * v63 + 2;
  LOBYTE(v64) = v8[1];
  v97 = 0;
  v64 = (unsigned __int8)v64;
  if ( (unsigned __int8)v64 > 0xFu )
    v64 = 15;
  v98 = v8;
  v99 = 4 * v64 + 8;
  v70 = *((_DWORD *)v9 + 35);
  v101 = &v70;
  v103 = &v68;
  v105 = &v71;
  v100 = 0;
  v102 = 4LL;
  v68 = v10;
  v104 = 1LL;
  v71 = v11;
  v106 = 4LL;
  *(_DWORD *)&v77.Level = 516;
  v89.Ptr = (ULONGLONG)off_1800920F8;
  *(_DWORD *)&v77.Id = ((unsigned int)&unk_180082061 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v77.Keyword = 8LL;
  v89.Size = *(unsigned __int16 *)off_1800920F8;
  v90 = &unk_18008206C;
  v89.Reserved = 2;
  v91 = 96;
  v92 = 1;
  EventWriteTransfer(RegHandle, &v77, 0LL, 0LL, 8u, &v89);
  return v69;
}
