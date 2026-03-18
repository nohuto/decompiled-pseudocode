/*
 * XREFs of CmpWalkOneLevel @ 0x140503FA0
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140459E68 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpPopulateKcbStack @ 0x1404FC4C8 (CmpPopulateKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpLockHashEntryShared @ 0x1405726E4 (CmpLockHashEntryShared.c)
 *     CmpFindKcbInHashEntryByName @ 0x140665F54 (CmpFindKcbInHashEntryByName.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        _BYTE *a5,
        __m128i *String1,
        int a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r12
  __int64 v12; // r13
  ULONG_PTR v13; // r11
  unsigned int v14; // ebx
  __int16 v15; // di
  ULONG_PTR v16; // r15
  __int16 v17; // si
  __int64 v18; // r15
  ULONG_PTR v19; // r15
  ULONG_PTR v20; // rdi
  __int16 v21; // di
  __int64 v22; // rsi
  __int16 v23; // dx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int16 v26; // si
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned int v33; // eax
  int SubKeyInLeafWithStatus; // r15d
  __int16 *v35; // r14
  const UNICODE_STRING *v36; // r12
  int v37; // r15d
  __int16 v38; // ax
  WCHAR *v39; // rsi
  __int64 v40; // r12
  WCHAR v41; // ax
  unsigned __int16 v42; // si
  int v43; // eax
  unsigned __int8 v44; // al
  __int16 v45; // r12
  __int16 v46; // si
  unsigned __int64 v47; // rdi
  bool v48; // r14
  __int16 v49; // r14
  unsigned __int64 v50; // rbx
  __int64 *v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rdi
  ULONG_PTR v54; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // r9
  unsigned __int16 Length; // cx
  unsigned __int8 *v61; // r8
  WCHAR *Buffer; // rdx
  unsigned __int16 v63; // r12
  unsigned __int16 v64; // cx
  WCHAR v65; // ax
  unsigned int v66; // r13d
  LONG v67; // r13d
  unsigned int v68; // ecx
  __int16 *v69; // rdx
  __int64 v70; // rdx
  char *NextElement; // rax
  __int64 v72; // r10
  int v73; // ecx
  int v74; // edx
  int v75; // r8d
  __int64 v76; // rax
  unsigned int v77; // r8d
  ULONG_PTR v78; // rcx
  __int64 KcbAtLayerHeight; // rsi
  __int64 v80; // r14
  volatile signed __int32 *KcbInHashEntryByName; // rax
  char v82; // al
  __int64 v83; // rcx
  WCHAR v84; // ax
  WCHAR v85; // ax
  __int64 v86; // [rsp+30h] [rbp-C1h]
  __int64 v87; // [rsp+38h] [rbp-B9h]
  __int16 v88; // [rsp+50h] [rbp-A1h]
  int v89; // [rsp+54h] [rbp-9Dh]
  unsigned __int16 v90; // [rsp+54h] [rbp-9Dh]
  __int16 v91; // [rsp+58h] [rbp-99h]
  WCHAR v92; // [rsp+5Ah] [rbp-97h]
  __int16 v93; // [rsp+5Ch] [rbp-95h]
  unsigned int v94; // [rsp+60h] [rbp-91h] BYREF
  ULONG_PTR v95; // [rsp+68h] [rbp-89h]
  __int64 v96; // [rsp+70h] [rbp-81h]
  _DWORD v97[2]; // [rsp+78h] [rbp-79h] BYREF
  unsigned int v98; // [rsp+80h] [rbp-71h]
  int v99; // [rsp+84h] [rbp-6Dh]
  __int64 v100; // [rsp+88h] [rbp-69h]
  _BYTE v101[8]; // [rsp+90h] [rbp-61h] BYREF
  _DWORD v102[2]; // [rsp+98h] [rbp-59h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-51h] BYREF
  WCHAR *v104; // [rsp+A8h] [rbp-49h]
  __int64 v105; // [rsp+B0h] [rbp-41h]
  ULONG_PTR v106; // [rsp+B8h] [rbp-39h] BYREF
  __m128i v107; // [rsp+C0h] [rbp-31h]
  int v108; // [rsp+D0h] [rbp-21h] BYREF
  UNICODE_STRING String2; // [rsp+D8h] [rbp-19h] BYREF

  v11 = a1;
  v12 = a2;
  HvpGetCellContextReinitialize((__int64)v101);
  v13 = 0LL;
  v14 = a8;
  v15 = *(_WORD *)(v11 + 58) - 1;
  v88 = -1;
  v16 = 0LL;
  v95 = 0LL;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v12, v15);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 24), (unsigned int)a8);
      v80 = *(_QWORD *)(KcbAtLayerHeight + 24);
      KcbInHashEntryByName = (volatile signed __int32 *)CmpFindKcbInHashEntryByName(
                                                          v80,
                                                          (unsigned int)a8,
                                                          KcbAtLayerHeight,
                                                          String1);
      v95 = (ULONG_PTR)KcbInHashEntryByName;
      v16 = (ULONG_PTR)KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v80, a8);
      if ( --v15 < 0 )
      {
        v13 = 0LL;
        goto LABEL_2;
      }
    }
    v82 = CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    v83 = *(_QWORD *)(KcbAtLayerHeight + 24);
    if ( !v82 )
    {
      CmpUnlockHashEntry(v83, a8);
      SubKeyInLeafWithStatus = -1073741670;
      CmpRecordParseFailure(a11, 327936, -1073741670);
      return (unsigned int)SubKeyInLeafWithStatus;
    }
    CmpUnlockHashEntry(v83, a8);
    CmpPopulateKcbStack(a4, v16);
    v17 = *(_WORD *)(v16 + 58) + 1;
    v13 = 0LL;
  }
  else
  {
LABEL_2:
    v17 = 0;
    *(_WORD *)(a4 + 2) = -1;
  }
  v93 = v17;
  if ( v17 <= *(__int16 *)(v11 + 58) )
  {
    do
    {
      if ( v17 >= 2 )
        v18 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (v17 - 2));
      else
        v18 = *(_QWORD *)(v12 + 8LL * v17 + 8);
      v19 = *(_QWORD *)(v18 + 24);
      v20 = *(_QWORD *)(v19 + 2800)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v19 + 2808) - 1));
      ExAcquirePushLockExclusiveEx(v20, 0LL);
      *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
      if ( !CmpReferenceHive(v19) )
        KeBugCheckEx(0x51u, 0x17uLL, v19, 0xCuLL, (unsigned int)a8);
      v88 = v17++;
    }
    while ( v17 <= *(__int16 *)(v11 + 58) );
    v16 = v95;
    v13 = 0LL;
  }
  v21 = 0;
  if ( *(__int16 *)(v12 + 2) >= 0 )
  {
    do
    {
      if ( v21 >= 2 )
        v22 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (v21 - 2));
      else
        v22 = *(_QWORD *)(v12 + 8LL * v21 + 8);
      if ( (*(_DWORD *)(v22 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v22 + 60) = CmpLockTableAdd(v22, 0);
      ExAcquirePushLockSharedEx(v22 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 48));
      ++v21;
    }
    while ( v21 <= *(__int16 *)(v12 + 2) );
    v13 = 0LL;
  }
  v23 = *(_WORD *)(v12 + 2);
  v103 = 0LL;
  if ( v23 < 0 )
    goto LABEL_138;
  while ( 1 )
  {
    if ( v23 >= 2 )
      v24 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (v23 - 2));
    else
      v24 = *(_QWORD *)(v12 + 8LL * v23 + 8);
    if ( *(_WORD *)(v24 + 58) && *(_BYTE *)(v24 + 57) == 1 )
      goto LABEL_138;
    if ( *(_DWORD *)(v24 + 32) != -1 )
      break;
    if ( --v23 < 0 )
      goto LABEL_138;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(*(_QWORD *)(v12 + 8) + 200LL), &v103, 32);
    if ( NextElement )
    {
      while ( 1 )
      {
        v73 = *((_DWORD *)NextElement + 17);
        if ( v73 == 2 || v73 == 11 )
          break;
        NextElement = CmListGetNextElement((_QWORD *)(v72 + 200), &v103, 32);
        if ( !NextElement )
          goto LABEL_22;
      }
      if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), a9) )
      {
        v13 = 0LL;
        goto LABEL_22;
      }
LABEL_138:
      v74 = 328192;
LABEL_139:
      SubKeyInLeafWithStatus = -1073741772;
      v89 = -1073741772;
LABEL_140:
      v75 = SubKeyInLeafWithStatus;
LABEL_141:
      CmpRecordParseFailure(a11, v74, v75);
      goto LABEL_142;
    }
  }
LABEL_22:
  v25 = *(_QWORD *)(v11 + 232);
  if ( !v25 )
    goto LABEL_23;
  if ( !CmEqualTrans(a9, v25) )
  {
    v74 = 328448;
    goto LABEL_139;
  }
  v13 = 0LL;
LABEL_23:
  if ( (*(_DWORD *)(v11 + 176) & 0x20000) != 0 )
  {
    v74 = 328704;
    goto LABEL_139;
  }
  if ( v16 )
  {
    v26 = *(_WORD *)(v16 + 58) + 1;
    v91 = v26;
  }
  else
  {
    v26 = v13;
    v91 = v13;
  }
  if ( v26 > *(__int16 *)(v11 + 58) )
  {
LABEL_93:
    v45 = v88;
    if ( a10 )
    {
      v45 = v88 - 1;
      *a5 = 1;
    }
    else
    {
      *a5 = 0;
    }
    v95 = v13;
    v89 = v13;
    *a3 = v16;
    SubKeyInLeafWithStatus = v13;
    goto LABEL_59;
  }
  while ( 2 )
  {
    if ( v26 >= 2 )
      v27 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (v26 - 2));
    else
      v27 = *(_QWORD *)(v12 + 8LL * v26 + 8);
    v28 = *(unsigned int *)(v27 + 32);
    v105 = v27;
    if ( (_DWORD)v28 == -1 )
    {
      v43 = -1;
      goto LABEL_54;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)(v27 + 24) + 8LL))(
            *(_QWORD *)(v27 + 24),
            v28,
            v101);
    v30 = *(_QWORD *)(v27 + 24);
    v31 = v29;
    v100 = v29;
    if ( (*(_DWORD *)(v30 + 144) & 0x8001) == 0 && (*(_BYTE *)(v29 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(v30 + 16))(v30, v101, v29);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v27 + 24) + 2848LL), 1u);
      v76 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v27 + 24) + 8LL))(
              *(_QWORD *)(v27 + 24),
              *(unsigned int *)(v27 + 32),
              v101);
      v77 = *(_DWORD *)(v27 + 32);
      v78 = *(_QWORD *)(v27 + 24);
      v100 = v76;
      CmpUpdateKeyNodeAccessBits(v78, v76, v77);
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v27 + 24) + 2848LL));
      v31 = v100;
    }
    v32 = *(_QWORD *)(v27 + 24);
    v33 = 0;
    SubKeyInLeafWithStatus = -1073741772;
    v96 = v32;
    v89 = -1073741772;
    v97[0] = -1;
    v97[1] = 0;
    v99 = -1;
    v98 = 0;
    if ( !*(_DWORD *)(v32 + 192) )
      goto LABEL_51;
    while ( !*(_DWORD *)(v31 + 4LL * v33 + 20) )
    {
LABEL_49:
      v33 = v98 + 1;
      v98 = v33;
      if ( v33 >= *(_DWORD *)(v32 + 192) )
        goto LABEL_50;
    }
    v35 = (__int16 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v32 + 8))(
                       v32,
                       *(unsigned int *)(v31 + 4LL * v33 + 28),
                       v97);
    if ( !v35 )
      goto LABEL_123;
    v36 = (const UNICODE_STRING *)String1;
    if ( *v35 != 26994 )
      goto LABEL_37;
    v70 = (__int64)v35;
    v32 = v96;
    if ( (int)CmpFindSubKeyInRoot(v96, v70, (const UNICODE_STRING *)String1, &v94) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v97);
      if ( v94 == -1 )
        goto LABEL_48;
      v35 = (__int16 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v32 + 8))(v32, v94, v97);
      if ( !v35 )
      {
LABEL_123:
        SubKeyInLeafWithStatus = -1073741670;
        v89 = -1073741670;
        goto LABEL_50;
      }
LABEL_37:
      if ( *v35 == 26732 )
      {
        v37 = 0;
        v38 = _mm_cvtsi128_si32(*String1);
        v107 = *String1;
        if ( v38 )
        {
          v39 = (WCHAR *)v107.m128i_i64[1];
          v40 = (unsigned __int16)(((unsigned __int16)(v38 - 1) >> 1) + 1);
          do
          {
            v41 = *v39;
            if ( *v39 >= 0x61u )
            {
              if ( v41 > 0x7Au )
                v41 = RtlUpcaseUnicodeChar(v41);
              else
                v41 -= 32;
            }
            ++v39;
            v37 = v41 + 37 * v37;
            --v40;
          }
          while ( v40 );
          v36 = (const UNICODE_STRING *)String1;
        }
        v42 = 0;
        v94 = -1;
        if ( !v35[1] )
        {
LABEL_46:
          v32 = v96;
          SubKeyInLeafWithStatus = -1073741772;
          v89 = -1073741772;
LABEL_47:
          (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v97);
LABEL_48:
          v31 = v100;
          goto LABEL_49;
        }
        while ( v37 != *(_DWORD *)&v35[4 * v42 + 4] )
        {
LABEL_45:
          if ( ++v42 >= (unsigned __int16)v35[1] )
            goto LABEL_46;
        }
        v57 = *(unsigned int *)&v35[4 * v42 + 2];
        v102[1] = 0;
        v102[0] = -1;
        v58 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v96 + 8))(v96, v57, v102);
        v59 = v58;
        if ( !v58 )
        {
          v32 = v96;
          SubKeyInLeafWithStatus = -1073741670;
          goto LABEL_108;
        }
        if ( (*(_BYTE *)(v58 + 2) & 0x20) != 0 )
        {
          Length = v36->Length;
          v61 = (unsigned __int8 *)(v58 + 76);
          Buffer = v36->Buffer;
          v63 = *(_WORD *)(v58 + 72);
          v64 = Length >> 1;
          v90 = v64;
          if ( v64 )
          {
            while ( 1 )
            {
              if ( !v63 )
                goto LABEL_102;
              v65 = *Buffer++;
              v66 = *v61++;
              v92 = v65;
              v104 = Buffer;
              v107.m128i_i64[0] = (__int64)v61;
              if ( v65 != (_WORD)v66 )
                break;
LABEL_101:
              --v64;
              --v63;
              v90 = v64;
              if ( !v64 )
                goto LABEL_102;
            }
            if ( v65 >= 0x61u )
            {
              if ( v65 <= 0x7Au )
              {
                v59 = 65504LL;
                v92 = v65 - 32;
LABEL_112:
                if ( v66 >= 0x61 )
                {
                  if ( v66 > 0x7A )
                  {
                    v85 = RtlUpcaseUnicodeChar(v66);
                    v64 = v90;
                    LOWORD(v66) = v85;
                    Buffer = v104;
                    v61 = (unsigned __int8 *)v107.m128i_i64[0];
                  }
                  else
                  {
                    LOWORD(v66) = v66 - 32;
                  }
                }
                v67 = v92 - (unsigned __int16)v66;
                if ( v67 )
                  goto LABEL_103;
                goto LABEL_101;
              }
              v84 = RtlUpcaseUnicodeChar(v65);
              v64 = v90;
              Buffer = v104;
              v61 = (unsigned __int8 *)v107.m128i_i64[0];
              v92 = v84;
            }
            v59 = 65504LL;
            goto LABEL_112;
          }
LABEL_102:
          v67 = v64 - v63;
LABEL_103:
          v36 = (const UNICODE_STRING *)String1;
        }
        else
        {
          String2.Buffer = (wchar_t *)(v58 + 76);
          String2.Length = *(_WORD *)(v58 + 72);
          String2.MaximumLength = String2.Length;
          v67 = RtlCompareUnicodeString(v36, &String2, 1u);
        }
        (*(void (__fastcall **)(__int64, _DWORD *, unsigned __int8 *, __int64))(v96 + 16))(v96, v102, v61, v59);
        if ( v67 )
          goto LABEL_45;
        SubKeyInLeafWithStatus = 0;
        v89 = 0;
        v68 = *(_DWORD *)&v35[4 * v42 + 2];
        v32 = v96;
        v94 = v68;
      }
      else
      {
        v69 = v35;
        v32 = v96;
        SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v96, v69, (const UNICODE_STRING *)String1, &v94, &v108);
        v89 = SubKeyInLeafWithStatus;
        if ( ((SubKeyInLeafWithStatus + 0x80000000) & 0x80000000) == 0 && SubKeyInLeafWithStatus != -1073741772 )
          goto LABEL_109;
        v68 = v94;
      }
      if ( v68 != -1 )
      {
        v99 = v68;
        SubKeyInLeafWithStatus = 0;
        goto LABEL_108;
      }
      goto LABEL_47;
    }
    SubKeyInLeafWithStatus = -1073741670;
LABEL_108:
    v89 = SubKeyInLeafWithStatus;
LABEL_109:
    (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v97);
LABEL_50:
    v26 = v91;
    v11 = a1;
    v12 = a2;
LABEL_51:
    v27 = v105;
    (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)(v105 + 24) + 16LL))(
      *(_QWORD *)(v105 + 24),
      v101,
      v31);
    if ( SubKeyInLeafWithStatus == -1073741772 )
    {
      v43 = -1;
      goto LABEL_53;
    }
    if ( SubKeyInLeafWithStatus < 0 )
    {
      v74 = 328960;
      goto LABEL_140;
    }
    v43 = v99;
    if ( v99 != -1 )
    {
      v16 = v95;
      goto LABEL_85;
    }
LABEL_53:
    v16 = v95;
LABEL_54:
    if ( *(_WORD *)(v11 + 58) || a10 )
    {
LABEL_85:
      LODWORD(v87) = a8;
      LODWORD(v86) = a7;
      v56 = CmpCreateKeyControlBlock(
              *(_QWORD *)(v27 + 24),
              v43,
              v27,
              v16,
              0,
              (unsigned __int16 *)String1,
              v86,
              v87,
              &v106);
      v89 = v56;
      SubKeyInLeafWithStatus = v56;
      if ( v56 >= 0 )
      {
        if ( v95 )
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v95);
        v16 = v106;
        v13 = 0LL;
        v95 = v106;
        v106 = 0LL;
        ++*(_WORD *)(a4 + 2);
        if ( v26 >= 2 )
          *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (v26 - 2)) = v16;
        else
          *(_QWORD *)(a4 + 8LL * v26 + 8) = v16;
        if ( v26 != *(_WORD *)(v11 + 58) )
        {
          CmpUnlockHashEntry(*(_QWORD *)(v27 + 24), a8);
          ++v93;
          v13 = 0LL;
        }
        v91 = ++v26;
        if ( v26 > *(__int16 *)(v11 + 58) )
          goto LABEL_93;
        continue;
      }
      v75 = v56;
      v74 = 329472;
      goto LABEL_141;
    }
    break;
  }
  SubKeyInLeafWithStatus = -1073741772;
  v89 = -1073741772;
  if ( !a11 )
  {
LABEL_142:
    v45 = v88;
    goto LABEL_59;
  }
  v44 = *(_BYTE *)(a11 + 186);
  v45 = v88;
  if ( v44 < 4u )
  {
    *(_DWORD *)(a11 + 4LL * v44 + 188) = 329216;
    *(_DWORD *)(a11 + 4LL * (unsigned __int8)(*(_BYTE *)(a11 + 186))++ + 204) = -1073741772;
  }
LABEL_59:
  v46 = 0;
  if ( *(__int16 *)(v12 + 2) >= 0 )
  {
    do
    {
      if ( v46 >= 2 )
        v47 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (v46 - 2));
      else
        v47 = *(_QWORD *)(v12 + 8LL * v46 + 8);
      v48 = (*(_DWORD *)(v47 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v47 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v47 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v47 + 48));
      ExReleasePushLockEx(v47 + 40, 0LL);
      if ( (*(_DWORD *)(v47 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(v47, *(_DWORD *)(v47 + 60));
      if ( v48 && (*(_DWORD *)(v47 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v47);
      ++v46;
    }
    while ( v46 <= *(__int16 *)(v12 + 2) );
    v14 = a8;
  }
  v49 = v93;
  if ( v93 <= v45 )
  {
    v50 = (101027 * (v14 ^ (v14 >> 9))) ^ ((unsigned __int64)(101027 * (v14 ^ (v14 >> 9))) >> 9);
    v51 = (__int64 *)(v12 + 8LL * v93 + 8);
    do
    {
      if ( v49 >= 2 )
        v52 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * (v49 - 2));
      else
        v52 = *v51;
      v53 = *(_QWORD *)(v52 + 24);
      v54 = *(_QWORD *)(v53 + 2800) + 24LL * ((unsigned int)v50 & (*(_DWORD *)(v53 + 2808) - 1));
      *(_QWORD *)(v54 + 8) = 0LL;
      ExReleasePushLockEx(v54, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive(v53);
      ++v49;
      ++v51;
    }
    while ( v49 <= v45 );
    SubKeyInLeafWithStatus = v89;
  }
  if ( v95 )
    CmpDereferenceKeyControlBlock(v95);
  return (unsigned int)SubKeyInLeafWithStatus;
}
