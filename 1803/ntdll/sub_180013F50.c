/*
 * XREFs of sub_180013F50 @ 0x180013F50
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18005B944 @ 0x18005B944 (sub_18005B944.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     RtlTryEnterCriticalSection @ 0x180060E90 (RtlTryEnterCriticalSection.c)
 *     sub_180063B6C @ 0x180063B6C (sub_180063B6C.c)
 *     sub_18007C6F0 @ 0x18007C6F0 (sub_18007C6F0.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800ED320 @ 0x1800ED320 (sub_1800ED320.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FE4B0 @ 0x1800FE4B0 (sub_1800FE4B0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

char *__fastcall sub_180013F50(unsigned __int16 *HeapHandle, int a2, char *a3, SIZE_T a4)
{
  __int64 v8; // r12
  char *v9; // rsi
  unsigned __int64 v10; // r8
  char *v11; // rdx
  int *v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int16 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  size_t v18; // rdi
  PVOID Heap; // rax
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  PVOID v22; // rdi
  int v24; // r14d
  __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 v27; // rax
  char *v28; // r10
  int v29; // edx
  __int64 **v30; // rcx
  _BYTE *v31; // r8
  char v32; // cl
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rcx
  unsigned __int8 v35; // dl
  int v36; // r9d
  _WORD *v37; // rcx
  __int64 v38; // rdx
  int v39; // ecx
  char v40; // r10
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rax
  size_t v43; // rax
  char *v44; // r10
  unsigned __int64 v45; // r9
  ULONG v46; // r14d
  char v47; // al
  char *v48; // r9
  _DWORD *v49; // rdx
  char *v50; // rdi
  int v51; // edx
  size_t v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rdx
  _QWORD *v55; // r8
  unsigned int v56; // edi
  __int64 v57; // rax
  __int64 v58; // r8
  __int16 v59; // cx
  int v60; // ecx
  unsigned __int16 v61; // dx
  int v62; // ecx
  struct _TEB *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // r9
  char *v66; // rsi
  unsigned __int8 v67; // al
  struct _TEB *v68; // rdi
  PSILO_USER_SHARED_DATA v69; // rcx
  __int64 v70; // rcx
  char *v71; // rdi
  unsigned __int16 v72; // ax
  struct _TEB *v73; // rdi
  NTSTATUS v74; // ecx
  int v75; // eax
  char v76; // [rsp+40h] [rbp-138h]
  char *v77; // [rsp+48h] [rbp-130h]
  char *v78; // [rsp+48h] [rbp-130h]
  unsigned __int64 v79; // [rsp+50h] [rbp-128h]
  int Size; // [rsp+58h] [rbp-120h]
  size_t Sizea; // [rsp+58h] [rbp-120h]
  unsigned __int64 v82; // [rsp+60h] [rbp-118h]
  PVOID v83; // [rsp+68h] [rbp-110h]
  char *v84; // [rsp+68h] [rbp-110h]
  char *v85; // [rsp+78h] [rbp-100h]
  char *v86; // [rsp+80h] [rbp-F8h]
  __int16 v87[4]; // [rsp+88h] [rbp-F0h]
  _BYTE *v88; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v89; // [rsp+98h] [rbp-E0h]
  __int64 v90; // [rsp+A8h] [rbp-D0h]
  char *v91; // [rsp+B8h] [rbp-C0h]
  __int64 v92; // [rsp+C8h] [rbp-B0h]
  _QWORD *v93; // [rsp+C8h] [rbp-B0h]
  int v94; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v95; // [rsp+D8h] [rbp-A0h] BYREF
  unsigned __int16 *v96; // [rsp+E0h] [rbp-98h]
  unsigned __int64 v97; // [rsp+E8h] [rbp-90h]
  const void *v98[2]; // [rsp+F0h] [rbp-88h] BYREF
  char *v99; // [rsp+100h] [rbp-78h]
  ULONG NtGlobalFlag; // [rsp+108h] [rbp-70h]
  ULONG v101; // [rsp+10Ch] [rbp-6Ch]
  ULONG v102; // [rsp+110h] [rbp-68h]
  size_t v103; // [rsp+118h] [rbp-60h]
  char *v104; // [rsp+120h] [rbp-58h]
  __int64 v105; // [rsp+128h] [rbp-50h]
  int v106; // [rsp+130h] [rbp-48h]
  char *v107; // [rsp+138h] [rbp-40h]
  ULONG Flagsa; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v8 = 0LL;
  v91 = 0LL;
  v76 = 0;
  v99 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v73 = NtCurrentTeb();
    v74 = 0;
LABEL_187:
    v73->LastErrorValue = RtlNtStatusToDosError(v74);
    return 0LL;
  }
  v9 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v10 = (unsigned __int64)v9;
  if ( v9[15] == 5 )
  {
    v10 = (unsigned __int64)&v9[-16 * (unsigned __int8)v9[14]];
    v77 = (char *)v10;
  }
  else
  {
    v77 = v9;
  }
  if ( *((_BYTE *)HeapHandle + 386) == 2 )
  {
    if ( *((_QWORD *)HeapHandle + 47) )
    {
      v11 = (char *)(v10 + 15);
      if ( *(char *)(v10 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v12 = (int *)(v10 + 8);
          v13 = v10 >> 4;
          if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)((v10 >> 4) ^ (unsigned __int16)HeapHandle ^ *(_WORD *)(v10 + 8)) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v10
                            - (((unsigned int)qword_18015D458 ^ (unsigned int)(v10 >> 4) ^ (unsigned int)HeapHandle ^ *(_DWORD *)(v10 + 8)) >> 12));
          v15 = *(_WORD *)(v14 + 36);
          v16 = *v11;
          if ( *v11 == 5 )
          {
            v17 = *((unsigned __int16 *)v77 + 6) ^ (unsigned __int64)HeapHandle[70];
          }
          else if ( (v16 & 0x40) != 0 )
          {
            v17 = *(unsigned __int16 *)&v77[16 * (v16 & 0x3F) + 12];
          }
          else if ( (v16 & 0x3F) == 0x3F )
          {
            if ( v16 >= 0 )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v75 = *v12;
                v106 = v75;
                if ( (v75 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v106 = *((_DWORD *)HeapHandle + 34) ^ v75;
                v72 = v106;
              }
              else
              {
                v72 = *(_WORD *)v12;
              }
            }
            else
            {
              if ( !((unsigned __int16)qword_18015D458 ^ (unsigned __int16)(v13 ^ (unsigned __int16)HeapHandle ^ *(_WORD *)v12)) )
                v8 = *(_QWORD *)&v77[-(((unsigned int)qword_18015D458 ^ (unsigned int)v13 ^ (unsigned int)HeapHandle ^ *v12) >> 12)];
              v72 = *(_WORD *)(v8 + 36);
            }
            v17 = *(_QWORD *)&v77[16 * v72];
          }
          else
          {
            v17 = v16 & 0x3F;
          }
          v18 = 16LL * v15 - v17;
          Size = 16 * v15 - v17;
          Heap = RtlAllocateHeap(HeapHandle, a2 & 0xC003FFFF, a4);
          v83 = Heap;
          if ( Heap )
          {
            if ( a4 < v18 )
              v18 = a4;
            memmove(Heap, Src, v18);
            RtlFreeHeap(HeapHandle, a2 & 0xC003FFFF, Src);
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && SharedData->ServiceSessionId )
            UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            UserModeGlobalLogger = 2147353472LL;
          if ( !*(_BYTE *)UserModeGlobalLogger || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return (char *)v83;
          v22 = v83;
          if ( v83 )
            sub_1800FE4B0((_DWORD)HeapHandle, (_DWORD)v83, (_DWORD)Src, Size, a4, 2);
          return (char *)v22;
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int16 *)v10 == HeapHandle )
  {
    sub_18009A5F0(9, (_DWORD)HeapHandle, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v24 = *((_DWORD *)HeapHandle + 29) | a2;
  Flagsa = v24;
  if ( (v24 & 0x61000000) != 0 && (v24 & 0x10000000) == 0 )
    return (char *)sub_1801005E4(HeapHandle);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v73 = NtCurrentTeb();
    v74 = -1073741801;
    goto LABEL_187;
  }
  v25 = a4;
  v26 = 1;
  if ( !a4 )
    v25 = 1LL;
  v27 = *((_QWORD *)HeapHandle + 33) & (*((_QWORD *)HeapHandle + 32) + v25);
  if ( v27 < 0x20 )
    v27 = 32LL;
  v79 = v27;
  LODWORD(Sizea) = 0;
  if ( (v24 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44)) )
    {
      ++*((_DWORD *)HeapHandle + 146);
      v26 = 1;
    }
    else
    {
      if ( byte_18015C3A8 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v68 = NtCurrentTeb();
        v68->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_170;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      sub_18007C6F0(HeapHandle, 1LL);
    }
    v76 = 1;
    v24 ^= 1u;
    Flagsa = v24;
  }
  _m_prefetchw(v9);
  if ( v9[15] == 5 )
    v9 -= 16 * (unsigned __int8)v9[14];
  v78 = v9;
  v28 = v9;
  v86 = v9;
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v29 = *((_DWORD *)v9 + 2) ^ *((_DWORD *)HeapHandle + 34);
    *((_DWORD *)v9 + 2) = v29;
    if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
    {
      sub_1800FC010(HeapHandle, v9);
      v26 = 1;
      v28 = v9;
    }
  }
  v91 = v9;
  v30 = (__int64 **)*((_QWORD *)HeapHandle + 39);
  do
  {
    if ( *((unsigned __int16 *)v9 + 4) < (unsigned __int64)*((unsigned int *)v30 + 2) )
      break;
    v30 = (__int64 **)*v30;
  }
  while ( v30 );
  if ( (v24 & 0x3C000100) != 0 || *((_QWORD *)HeapHandle + 41) || (v9[10] & 2) != 0 )
    v79 += 16LL;
  v31 = v9 + 15;
  v88 = v9 + 15;
  v32 = v9[15];
  if ( (v32 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v63 = NtCurrentTeb();
    v63->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_170;
  }
  if ( v32 == 4 )
  {
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      v60 = *((_DWORD *)v28 + 2);
      if ( (v60 & *((_DWORD *)HeapHandle + 31)) != 0 )
        LOWORD(v60) = v60 ^ HeapHandle[68];
      v61 = *((_WORD *)v9 + 4);
      v24 = Flagsa;
    }
    else
    {
      v61 = *((_WORD *)v28 + 4);
      LOWORD(v60) = v61;
    }
    Sizea = *((_QWORD *)v9 - 2) - (unsigned __int16)v60;
    v33 = (Sizea + v61) >> 4;
    v82 = v33;
    v79 = (v79 + 4151) & 0xFFFFFFFFFFFFF000uLL;
    v89 = v33;
  }
  else
  {
    v33 = *((unsigned __int16 *)v28 + 4);
    v89 = v33;
    v82 = v33;
    if ( v32 == 5 )
    {
      v34 = *((unsigned __int16 *)v9 + 6) ^ (unsigned __int64)HeapHandle[70];
    }
    else if ( (v32 & 0x40) != 0 )
    {
      v34 = *(unsigned __int16 *)&v9[16 * (v32 & 0x3F) + 12];
    }
    else if ( (v32 & 0x3F) == 0x3F )
    {
      if ( v32 < 0 )
      {
        if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *((_WORD *)v9 + 4) ^ ((unsigned __int64)v9 >> 4)) )
          v64 = 0LL;
        else
          v64 = *(_QWORD *)&v9[-(((unsigned int)qword_18015D458 ^ (unsigned int)HeapHandle ^ *((_DWORD *)v9 + 2) ^ (unsigned int)((unsigned __int64)v9 >> 4)) >> 12)];
        LOWORD(v62) = *(_WORD *)(v64 + 36);
        v24 = Flagsa;
        v33 = *((unsigned __int16 *)v28 + 4);
        v89 = v33;
      }
      else if ( *((_DWORD *)HeapHandle + 31) )
      {
        v62 = *((_DWORD *)v9 + 2);
        if ( (v62 & *((_DWORD *)HeapHandle + 31)) != 0 )
          LOWORD(v62) = v62 ^ HeapHandle[68];
        v24 = Flagsa;
        v33 = *((unsigned __int16 *)v28 + 4);
        v89 = v33;
      }
      else
      {
        LOWORD(v62) = v33;
      }
      v34 = *(_QWORD *)&v9[16 * (unsigned __int16)v62];
    }
    else
    {
      v34 = v9[15] & 0x3F;
    }
    Sizea = 16 * v33 - v34;
    if ( v33 < HeapHandle[200] )
    {
      v35 = *((_BYTE *)HeapHandle + (v33 >> 3) + 402);
      v36 = v26 << (v33 & 7);
      v33 = *((unsigned __int16 *)v28 + 4);
      if ( ((unsigned __int8)v36 & v35) != 0 )
      {
        v24 = Flagsa;
        v89 = *((unsigned __int16 *)v28 + 4);
      }
      else
      {
        v89 = *((unsigned __int16 *)v28 + 4);
        v37 = (_WORD *)(*((_QWORD *)HeapHandle + 49) + 2 * v82);
        if ( *v37 > 1u )
          --*v37;
        v24 = Flagsa;
      }
    }
  }
  v38 = v79 >> 4;
  v90 = v79 >> 4;
  *(_QWORD *)v87 = v79 >> 4;
  if ( v79 >> 4 <= v33 )
  {
    if ( (v79 >> 4) + 1 == v33 )
    {
      v38 = (v79 >> 4) + 1;
      v90 = v38;
      *(_QWORD *)v87 = v38;
      v79 += 16LL;
    }
    if ( *v31 == 4 )
    {
      *((_WORD *)v9 + 4) = v79 - a4;
    }
    else if ( (v9[10] & 2) != 0 )
    {
      v107 = &v9[16 * *((unsigned __int16 *)v9 + 4) - 16];
      v92 = (__int64)&v9[16 * v38 - 16];
      *(_OWORD *)v92 = *(_OWORD *)v107;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) == 0 )
        goto LABEL_65;
      v90 = *(_QWORD *)v87;
      v89 = v82;
      *(_WORD *)(v92 + 2) = sub_1800ED320((_DWORD)HeapHandle, *(unsigned __int16 *)(v92 + 2), v82, *(_DWORD *)v87, 4);
      LOBYTE(v24) = Flagsa;
      v33 = v82;
      v38 = v53;
      v31 = v9 + 15;
    }
    else
    {
      v101 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v101 & 0x800) == 0 )
      {
LABEL_65:
        LOBYTE(v24) = Flagsa;
        v33 = v82;
        v89 = v82;
        v38 = *(_QWORD *)v87;
        v90 = *(_QWORD *)v87;
        goto LABEL_66;
      }
      v90 = *(_QWORD *)v87;
      v9[11] = sub_1800ED320(
                 (_DWORD)HeapHandle,
                 (unsigned __int8)v9[11],
                 *((unsigned __int16 *)v9 + 4),
                 *(_DWORD *)v87,
                 4);
      LOBYTE(v24) = Flagsa;
      v33 = v82;
      v89 = v82;
      v38 = v65;
      v31 = v9 + 15;
    }
LABEL_66:
    if ( a4 <= Sizea )
      goto LABEL_67;
    if ( (v24 & 8) != 0 )
    {
      memset(&Src[Sizea], 0, a4 - Sizea);
      v38 = v90;
      v31 = v9 + 15;
    }
    else if ( (HeapHandle[56] & 0x40) != 0 )
    {
      v43 = Sizea & 3;
      v103 = v43;
      if ( (Sizea & 3) != 0 )
      {
        v43 = 4 - v43;
        v103 = v43;
      }
      if ( a4 > v43 + Sizea && ((a4 - v43 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        v44 = &v9[v43 + 16 + Sizea];
        v104 = v44;
        v45 = ((a4 - v43 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v97 = v45;
        if ( v45 )
        {
          if ( ((unsigned __int8)v44 & 4) != 0 )
          {
            *(_DWORD *)v44 = -1163005939;
            v97 = --v45;
            if ( !v45 )
              goto LABEL_67;
            v44 += 4;
            v104 = v44;
          }
          memset64(v44, 0xBAADF00DBAADF00DuLL, v45 >> 1);
          if ( (v45 & 1) != 0 )
            *(_DWORD *)&v44[4 * v45 - 4] = -1163005939;
          v33 = v89;
        }
      }
    }
LABEL_67:
    if ( (HeapHandle[56] & 0x20) != 0 )
    {
      *(_QWORD *)&v9[a4 + 16] = 0xABABABABABABABABuLL;
      *(_QWORD *)&v9[a4 + 24] = 0xABABABABABABABABuLL;
    }
    if ( v38 == v33 )
      goto LABEL_76;
    if ( *v31 == 4 )
    {
      v66 = v9 - 48;
      v102 = NtCurrentPeb()->NtGlobalFlag;
      v90 = *(_QWORD *)v87;
      if ( (v102 & 0x800) != 0 )
        *((_WORD *)v66 + 9) = sub_1800ED320((_DWORD)HeapHandle, *((unsigned __int16 *)v66 + 9), v82, *(_DWORD *)v87, 5);
      v98[0] = &v66[v79];
      v95 = 16 * v82 - v79;
      v94 = sub_18005CD8C(v79, v98, &v95, 0x4000LL);
      if ( v94 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v98[0], v95, v94);
        sub_1801011EC();
        v9 = v78;
        v38 = *(_QWORD *)v87;
        goto LABEL_75;
      }
      *((_QWORD *)v66 + 4) -= v95;
      v9 = v78;
    }
    else
    {
      v39 = *((unsigned __int16 *)v9 + 4) - (unsigned __int16)v38;
      v105 = v39;
      *((_WORD *)v9 + 4) = v38;
      v40 = (HeapHandle[56] & 0x40) != 0;
      v41 = v9[14];
      if ( v41 )
        v96 = (unsigned __int16 *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFF0000uLL)
                                 - ((unsigned __int64)v41 << 16)
                                 + 0x10000);
      else
        v96 = HeapHandle;
      sub_18005BDB4((int)HeapHandle, v40, v38, v39);
    }
    v38 = v90;
LABEL_75:
    v31 = v88;
LABEL_76:
    if ( *v31 != 4 )
    {
      v42 = v79 - a4;
      if ( v79 - a4 >= 0x3F )
      {
        *(_QWORD *)&v9[16 * v38] = v42;
        v86[15] = 63;
      }
      else
      {
        v86[15] = v42;
      }
    }
    goto LABEL_170;
  }
  if ( *v31 != 4 && (unsigned __int8)sub_18005B944((int)HeapHandle, v79 >> 4) )
    goto LABEL_170;
  if ( (v24 & 0x10) == 0 )
  {
    v46 = v24 & 0xC003FFFF;
    Flagsa = v46;
    v47 = v9[10];
    if ( (v47 & 2) != 0 )
    {
      v46 = (16 * (v47 & 0xE0 | 0x10)) | v46 & 0xFFFFF1FF;
      Flagsa = v46;
      v59 = *(_WORD *)(sub_180063B6C(v9, v38) + 2);
      if ( v59 > 0 )
      {
        v46 |= (unsigned __int16)v59 << 18;
        Flagsa = v46;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v67 = v9[11];
      if ( v67 )
      {
        v46 |= v67 << 18;
        Flagsa = v46;
      }
    }
    v96 = HeapHandle + 62;
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      v9[11] = v9[8] ^ v9[9] ^ v9[10];
      *((_DWORD *)v9 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
    v91 = 0LL;
    v48 = (char *)RtlAllocateHeap(HeapHandle, v46, a4);
    v84 = v48;
    v49 = HeapHandle + 62;
    if ( !v48 )
      goto LABEL_113;
    v50 = v48 - 16;
    v85 = v48 - 16;
    _m_prefetchw(v48 - 16);
    if ( *(v48 - 1) == 5 )
    {
      v50 -= 16 * (unsigned __int8)v50[14];
      v85 = v50;
    }
    v98[1] = v50;
    if ( *v49 )
    {
      v51 = *((_DWORD *)v50 + 2) ^ *((_DWORD *)HeapHandle + 34);
      *((_DWORD *)v50 + 2) = v51;
      if ( HIBYTE(v51) != ((unsigned __int8)v51 ^ (unsigned __int8)(BYTE1(v51) ^ BYTE2(v51))) )
      {
        sub_1800FC010(HeapHandle, v50);
        v48 = v84;
      }
      v49 = HeapHandle + 62;
    }
    if ( (v50[10] & 2) != 0 )
    {
      v55 = (_QWORD *)sub_180063B6C(v50, v49);
      v93 = v55;
      if ( *v54 )
      {
        v56 = *((_DWORD *)v9 + 2) ^ *((_DWORD *)HeapHandle + 34);
        *((_DWORD *)v9 + 2) = v56;
        v54 = (_DWORD *)HIWORD(v56);
        LOBYTE(v54) = v56 ^ BYTE1(v56) ^ BYTE2(v56);
        if ( HIBYTE(v56) != (_BYTE)v54 )
        {
          sub_1800FC010(HeapHandle, v9);
          v48 = v84;
          v55 = v93;
        }
        v50 = v85;
      }
      if ( (v9[10] & 2) != 0 )
      {
        v57 = sub_180063B6C(v9, v54);
        *(_QWORD *)(v58 + 8) = *(_QWORD *)(v57 + 8);
      }
      else
      {
        *v55 = 0LL;
        v55[1] = 0LL;
      }
      v49 = HeapHandle + 62;
      if ( !*((_DWORD *)HeapHandle + 31) )
        goto LABEL_108;
      v9[11] = v9[8] ^ v9[9] ^ v9[10];
      *((_DWORD *)v9 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
    if ( *v49 )
    {
      v50[11] = v50[8] ^ v50[9] ^ v50[10];
      *((_DWORD *)v50 + 2) ^= *((_DWORD *)HeapHandle + 34);
    }
LABEL_108:
    v91 = 0LL;
    if ( v76 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v76 = 0;
      v46 &= ~1u;
      Flagsa = v46;
      v48 = v84;
    }
    if ( a4 < Sizea )
      v52 = a4;
    else
      v52 = Sizea;
    memmove(v48, Src, v52);
    RtlFreeHeap(HeapHandle, v46, Src);
    v48 = v84;
LABEL_113:
    v99 = Src;
    Src = v48;
    goto LABEL_170;
  }
  Src = 0LL;
LABEL_170:
  if ( v91 && *((_DWORD *)HeapHandle + 31) )
  {
    v91[11] = v91[8] ^ v91[9] ^ v91[10];
    *((_DWORD *)v91 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v76 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  v69 = NtCurrentPeb()->SharedData;
  if ( v69 && v69->ServiceSessionId )
    v70 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v70 = 2147353472LL;
  if ( !*(_BYTE *)v70 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v71 = Src;
  if ( Src && (Flagsa & 0x800000) == 0 )
    sub_1800FE4B0((_DWORD)HeapHandle, (_DWORD)Src, (_DWORD)v99, Sizea, a4, 3);
  return v71;
}
