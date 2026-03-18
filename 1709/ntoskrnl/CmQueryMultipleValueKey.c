/*
 * XREFs of CmQueryMultipleValueKey @ 0x140478DFC
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpFindNameInList @ 0x140479444 (CmpFindNameInList.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  __int64 v10; // r13
  char PreviousMode; // r12
  ULONG_PTR v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // edi
  const void *v23; // rsi
  unsigned __int64 v24; // rcx
  PVOID PoolWithTag; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // r15d
  unsigned int v31; // edx
  unsigned int v32; // r8d
  __int64 *v33; // rcx
  __int64 v34; // rcx
  unsigned int MultipleValueForLayeredKey; // ebx
  __int64 v37; // rcx
  int v38; // ebx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // r15d
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  char v46; // [rsp+40h] [rbp-128h]
  unsigned int v47; // [rsp+44h] [rbp-124h]
  char v48; // [rsp+4Ah] [rbp-11Eh]
  unsigned int v49; // [rsp+4Ch] [rbp-11Ch]
  unsigned int v50; // [rsp+4Ch] [rbp-11Ch]
  size_t Size; // [rsp+58h] [rbp-110h] BYREF
  __int64 v52; // [rsp+60h] [rbp-108h] BYREF
  int v53; // [rsp+68h] [rbp-100h]
  int v54; // [rsp+6Ch] [rbp-FCh]
  __int64 v55; // [rsp+70h] [rbp-F8h]
  void *v56[2]; // [rsp+78h] [rbp-F0h] BYREF
  int v57; // [rsp+88h] [rbp-E0h]
  void *Src; // [rsp+90h] [rbp-D8h] BYREF
  _DWORD v59[2]; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD v60[2]; // [rsp+A0h] [rbp-C8h] BYREF
  PVOID P; // [rsp+A8h] [rbp-C0h]
  unsigned int v62; // [rsp+B0h] [rbp-B8h]
  unsigned int v63; // [rsp+B4h] [rbp-B4h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-B0h]
  _DWORD v65[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-A0h]
  __int64 v67; // [rsp+D0h] [rbp-98h]
  _DWORD v68[2]; // [rsp+D8h] [rbp-90h] BYREF
  unsigned int v69; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-80h] BYREF
  __int64 *v71; // [rsp+F0h] [rbp-78h]
  ULONG_PTR v72; // [rsp+F8h] [rbp-70h]
  __int64 v73; // [rsp+100h] [rbp-68h]
  __int64 v74; // [rsp+108h] [rbp-60h]
  __int128 v75; // [rsp+110h] [rbp-58h]
  __int128 v76; // [rsp+120h] [rbp-48h]
  char v77; // [rsp+170h] [rbp+8h] BYREF
  __int64 v78; // [rsp+180h] [rbp+18h]
  unsigned int v79; // [rsp+188h] [rbp+20h]

  v79 = a4;
  v78 = a3;
  v67 = 0LL;
  v55 = 0LL;
  v56[0] = 0LL;
  v56[1] = 0LL;
  LODWORD(v52) = -1;
  v59[0] = -1;
  v59[1] = 0;
  v49 = 0;
  v47 = 0;
  LODWORD(Size) = 0;
  v46 = 0;
  v60[0] = -1;
  v60[1] = 0;
  v66 = 0LL;
  v68[0] = -1;
  v68[1] = 0;
  v10 = 0LL;
  v64 = 0LL;
  v70 = 0LL;
  v53 = 0;
  v54 = 0;
  Src = 0LL;
  v77 = 0;
  v65[0] = -1;
  v65[1] = 0;
  P = 0LL;
  v62 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v48 = PreviousMode;
  v72 = *(_QWORD *)(a1 + 8);
  v12 = v72;
  CmpLockRegistry();
  if ( *(_WORD *)(v72 + 58) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, a3, v79, a5, a6, a7, PreviousMode);
    CmpUnlockRegistry(v37);
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v72 + 40, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v72 + 48), 1u);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v38 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v72);
LABEL_68:
      CmpUnlockRegistry(v39);
      return (unsigned int)(v38 - 1073741444);
    }
    CmpUnlockKcb(v72);
    v42 = CmpTransSearchAddTransFromKeyBody(a1, &v70);
    if ( v42 < 0 )
    {
      CmpUnlockRegistry(v41);
      return (unsigned int)v42;
    }
  }
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v64 = v10;
  }
  CmpLockTwoKcbsShared(v10, v12);
  v13 = v70;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v70) )
  {
    v40 = *(_DWORD *)(a1 + 48);
LABEL_67:
    v38 = (v40 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v10, v12);
    goto LABEL_68;
  }
  if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v13) )
  {
    v40 = *(_DWORD *)(a2 + 48);
    goto LABEL_67;
  }
  v14 = *(_QWORD *)(v12 + 24);
  v73 = v14;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v14 + 2848), 1u);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v14 + 8))(v14, *(unsigned int *)(v12 + 32), v60);
  v74 = v15;
  if ( !v15 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
    goto LABEL_75;
  }
  CmpUpdateKeyNodeAccessBits(v14, v15, *(unsigned int *)(v12 + 32));
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 2848));
  if ( v13 )
  {
    v44 = (unsigned __int8)v53;
    if ( *(_QWORD *)(v12 + 280) == v13 )
      v44 = 1;
    v53 = v44;
  }
  if ( v10 )
  {
    v67 = *(_QWORD *)(v10 + 24);
    v66 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v67 + 8))(v67, *(unsigned int *)(v10 + 32), v68);
    if ( v66 )
    {
      if ( v13 )
      {
        v45 = (unsigned __int8)v54;
        if ( *(_QWORD *)(v10 + 280) == v13 )
          v45 = 1;
        v54 = v45;
      }
      goto LABEL_11;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(v14 + 16))(v14, v60);
LABEL_75:
    CmpUnlockTwoKcbs(v10, v12);
    CmpUnlockRegistry(v43);
    return 3221225626LL;
  }
LABEL_11:
  v16 = 0;
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = 0x7FFFFFFF0000LL;
    v57 = v17;
    v20 = 0LL;
    if ( (unsigned int)v17 >= v79 )
      break;
    if ( v48 == 1 )
    {
      v71 = (__int64 *)(v78 + 24 * v17);
      v21 = *v71;
      if ( (unsigned __int64)*v71 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v22 = *(_DWORD *)v21;
      LODWORD(v75) = v22;
      v23 = *(const void **)(v21 + 8);
      *((_QWORD *)&v75 + 1) = v23;
      v76 = v75;
      if ( (_WORD)v22 )
      {
        if ( ((unsigned __int8)v23 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v24 = (unsigned __int64)v23 + (unsigned __int16)v22;
        if ( v24 > 0x7FFFFFFF0000LL || v24 < (unsigned __int64)v23 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v22 & 1) != 0 )
      {
        v16 = -1073741811;
        v20 = 0LL;
        v26 = v47;
        v27 = v49;
        goto LABEL_51;
      }
      if ( (_WORD)v22 && (unsigned __int16)v22 > v62 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v22, 0x20204D43u);
        P = PoolWithTag;
        if ( !PoolWithTag )
        {
          v16 = -1073741670;
          v20 = 0LL;
          v26 = v47;
          v27 = v49;
          goto LABEL_51;
        }
        v56[1] = PoolWithTag;
      }
      memmove(v56[1], v23, (unsigned __int16)v22);
      LOWORD(v56[0]) = v22;
      WORD1(v56[0]) = v22;
    }
    else
    {
      v71 = (__int64 *)(v78 + 24 * v17);
      *(_OWORD *)v56 = *(_OWORD *)*v71;
      LOWORD(v22) = v56[0];
    }
    while ( (_WORD)v22 && !*((_WORD *)v56[1] + ((unsigned __int64)(unsigned __int16)v22 >> 1) - 1) )
    {
      LOWORD(v22) = v22 - 2;
      LOWORD(v56[0]) = v22;
    }
    v28 = -1;
    LODWORD(v52) = -1;
    if ( v10 )
    {
      v18 = v67;
      v55 = v67;
      if ( (_BYTE)v54 )
      {
        CmpFindNameInList(v67, v10 + 272, (unsigned int)v56, 0, 0LL, (__int64)&v52);
        v28 = v52;
      }
      else
      {
        CmpFindNameInList(v67, v66 + 36, (unsigned int)v56, 0, 0LL, (__int64)&v63);
        v28 = v63;
        LODWORD(v52) = v63;
      }
    }
    if ( v28 == -1 )
    {
      v18 = v14;
      v55 = v14;
      if ( (_BYTE)v53 )
      {
        CmpFindNameInList(v14, v12 + 272, (unsigned int)v56, 0, 0LL, (__int64)&v52);
        v28 = v52;
      }
      else
      {
        CmpFindNameInList(v14, v74 + 36, (unsigned int)v56, 0, 0LL, (__int64)&v69);
        v28 = v69;
      }
      if ( v28 == -1 )
      {
        v16 = -1073741772;
        v20 = 0LL;
        break;
      }
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v18 + 8))(v18, v28, v59);
    v20 = v29;
    v52 = v29;
    if ( !v29 )
      goto LABEL_90;
    v30 = *(_DWORD *)(v29 + 4);
    if ( v30 >= 0x80000000 )
      v30 += 0x80000000;
    LODWORD(Size) = v30;
    v31 = (v47 + 3) & 0xFFFFFFFC;
    v47 = v31;
    v32 = (v49 + 3) & 0xFFFFFFFC;
    v50 = v32;
    if ( v30 + v31 > *a6 || v30 + v31 < v31 || v46 )
    {
      v46 = 1;
      v16 = 0;
    }
    else
    {
      v18 = v55;
      if ( !(unsigned __int8)CmpGetValueData(
                               v55,
                               v28,
                               v29,
                               (unsigned int)&Size,
                               (__int64)&Src,
                               (__int64)&v77,
                               (__int64)v65) )
      {
LABEL_90:
        v16 = -1073741670;
        goto LABEL_56;
      }
      v30 = Size;
      memmove((void *)(a5 + v47), Src, (unsigned int)Size);
      v33 = v71;
      *((_DWORD *)v71 + 4) = *(_DWORD *)(v20 + 12);
      *((_DWORD *)v33 + 2) = v30;
      *((_DWORD *)v33 + 3) = v47;
      v16 = 0;
      if ( v77 )
      {
        ExFreePoolWithTag(Src, 0);
        v77 = 0;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(v55 + 16))(v55, v65);
      }
      Src = 0LL;
      v47 += v30;
      v32 = v50;
    }
    v49 = v30 + v32;
    v18 = v55;
    (*(void (__fastcall **)(__int64, _DWORD *))(v55 + 16))(v55, v59);
    LODWORD(v52) = -1;
    v17 = (unsigned int)(v57 + 1);
  }
  v26 = v47;
  v27 = v49;
LABEL_51:
  if ( v16 >= 0 )
  {
    if ( v46 )
      v16 = -2147483643;
    *a6 = v26;
    if ( a7 )
      *a7 = v27;
  }
LABEL_56:
  if ( v20 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64))(v18 + 16))(v18, v59, v19);
  if ( v66 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64))(v67 + 16))(v67, v68, v19);
  (*(void (__fastcall **)(__int64, _DWORD *, __int64))(v14 + 16))(v14, v60, v19);
  CmpUnlockTwoKcbs(v10, v12);
  CmpUnlockRegistry(v34);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v16;
}
