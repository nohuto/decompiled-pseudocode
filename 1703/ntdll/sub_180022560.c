/*
 * XREFs of sub_180022560 @ 0x180022560
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 * Callees:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlTryEnterCriticalSection @ 0x18001EEC0 (RtlTryEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800774AC @ 0x1800774AC (sub_1800774AC.c)
 *     sub_1800812F8 @ 0x1800812F8 (sub_1800812F8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F0F1C @ 0x1800F0F1C (sub_1800F0F1C.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

char *__fastcall sub_180022560(unsigned __int16 *BaseAddress, int a2, char *a3, SIZE_T a4)
{
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  char *v11; // rdx
  unsigned __int64 v12; // rdi
  int *v13; // r9
  __int64 v14; // rax
  unsigned __int16 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  SIZE_T v18; // rdi
  PVOID Heap; // rax
  size_t v20; // rcx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v22; // rbx
  __int64 UserModeGlobalLogger; // rcx
  PVOID v24; // rdi
  unsigned int v26; // edi
  char v27; // r15
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r8
  __int64 *i; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  _BYTE *v35; // r8
  char v36; // dl
  unsigned __int16 *v37; // r10
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  bool v40; // al
  _WORD *v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  char v44; // r9
  int v45; // ecx
  __int64 v46; // rdi
  char v47; // r10
  unsigned __int8 v48; // al
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  ULONG v51; // edi
  char v52; // al
  char *v53; // r9
  char *v54; // r15
  size_t v55; // r8
  _QWORD *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int16 v59; // cx
  __int64 v60; // rdx
  unsigned __int16 v61; // ax
  struct _TEB *v62; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // r9
  size_t v66; // rax
  __int64 v67; // r9
  unsigned __int64 v68; // r10
  unsigned __int64 v69; // rbx
  __int64 v70; // rcx
  unsigned __int8 v71; // al
  struct _TEB *v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rcx
  unsigned int v75; // edi
  unsigned __int16 v76; // ax
  struct _TEB *v77; // rdi
  NTSTATUS v78; // ecx
  int v79; // eax
  char *v80; // r15
  ULONG Flagsa; // [rsp+40h] [rbp-218h]
  char v83; // [rsp+48h] [rbp-210h]
  unsigned __int64 v84; // [rsp+50h] [rbp-208h]
  unsigned __int64 v85; // [rsp+50h] [rbp-208h]
  unsigned __int64 v86; // [rsp+58h] [rbp-200h]
  char *Src; // [rsp+60h] [rbp-1F8h]
  PVOID v88; // [rsp+68h] [rbp-1F0h]
  char *v89; // [rsp+68h] [rbp-1F0h]
  size_t Size; // [rsp+70h] [rbp-1E8h]
  size_t Sizea; // [rsp+70h] [rbp-1E8h]
  unsigned __int64 v92; // [rsp+78h] [rbp-1E0h]
  _BYTE *v93; // [rsp+80h] [rbp-1D8h]
  __int16 v94[4]; // [rsp+90h] [rbp-1C8h]
  unsigned __int64 v95; // [rsp+98h] [rbp-1C0h]
  int v96; // [rsp+A0h] [rbp-1B8h]
  unsigned __int64 v98; // [rsp+A8h] [rbp-1B0h]
  int v99; // [rsp+B0h] [rbp-1A8h]
  _BYTE *v100; // [rsp+B8h] [rbp-1A0h]
  _WORD *v102; // [rsp+C8h] [rbp-190h]
  _QWORD *v103; // [rsp+E0h] [rbp-178h]
  __int64 v104; // [rsp+E0h] [rbp-178h]
  NTSTATUS v105; // [rsp+F4h] [rbp-164h]
  ULONG_PTR v106; // [rsp+100h] [rbp-158h] BYREF
  unsigned __int64 v107; // [rsp+108h] [rbp-150h]
  PVOID v108; // [rsp+110h] [rbp-148h] BYREF
  char *v109; // [rsp+118h] [rbp-140h]
  ULONG v110; // [rsp+120h] [rbp-138h]
  ULONG v111; // [rsp+124h] [rbp-134h]
  ULONG NtGlobalFlag; // [rsp+128h] [rbp-130h]
  __int64 v113; // [rsp+130h] [rbp-128h]
  size_t v114; // [rsp+138h] [rbp-120h]
  __int64 v115; // [rsp+140h] [rbp-118h]
  __int64 v116; // [rsp+148h] [rbp-110h]
  __int64 v117; // [rsp+150h] [rbp-108h]
  int v118; // [rsp+158h] [rbp-100h]
  _OWORD *v119; // [rsp+160h] [rbp-F8h]
  char Fields[6]; // [rsp+170h] [rbp-E8h] BYREF
  __int16 v121; // [rsp+176h] [rbp-E2h]
  unsigned __int16 *v122; // [rsp+190h] [rbp-C8h]
  PVOID v123; // [rsp+198h] [rbp-C0h]
  char *v124; // [rsp+1A0h] [rbp-B8h]
  SIZE_T v125; // [rsp+1A8h] [rbp-B0h]
  size_t v126; // [rsp+1B0h] [rbp-A8h]
  int v127; // [rsp+1B8h] [rbp-A0h]
  char v128[6]; // [rsp+1C0h] [rbp-98h] BYREF
  __int16 v129; // [rsp+1C6h] [rbp-92h]
  unsigned __int16 *v130; // [rsp+1E0h] [rbp-78h]
  char *v131; // [rsp+1E8h] [rbp-70h]
  char *v132; // [rsp+1F0h] [rbp-68h]
  SIZE_T v133; // [rsp+1F8h] [rbp-60h]
  size_t v134; // [rsp+200h] [rbp-58h]
  int v135; // [rsp+208h] [rbp-50h]

  Src = a3;
  v8 = 0LL;
  v100 = 0LL;
  v83 = 0;
  v109 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v77 = NtCurrentTeb();
    v78 = 0;
LABEL_229:
    v77->LastErrorValue = RtlNtStatusToDosError(v78);
    return 0LL;
  }
  v9 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v10 = v9;
  if ( *(_BYTE *)(v9 + 15) == 5 )
  {
    v10 = v9 - 16LL * *(unsigned __int8 *)(v9 + 14);
    v84 = v10;
  }
  else
  {
    v84 = v9;
  }
  if ( *((_BYTE *)BaseAddress + 386) == 2 )
  {
    if ( *((_QWORD *)BaseAddress + 47) )
    {
      v11 = (char *)(v10 + 15);
      if ( *(char *)(v10 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v12 = v10 >> 4;
          v13 = (int *)(v10 + 8);
          if ( *(_WORD *)(v10 + 8) ^ (unsigned __int16)(qword_18015BFE8 ^ (unsigned __int16)BaseAddress ^ (v10 >> 4)) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v10
                            - ((*(_DWORD *)(v10 + 8) ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ (unsigned int)(v10 >> 4)) >> 12));
          v15 = *(_WORD *)(v14 + 36);
          v16 = *v11;
          if ( *v11 == 5 )
          {
            v17 = *(unsigned __int16 *)(v84 + 12) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v16 & 0x40) != 0 )
          {
            v17 = *(unsigned __int16 *)(v84 + 16LL * (v16 & 0x3F) + 12);
          }
          else if ( (v16 & 0x3F) == 0x3F )
          {
            if ( v16 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v79 = *v13;
                v118 = v79;
                if ( (v79 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v118 = *((_DWORD *)BaseAddress + 34) ^ v79;
                v76 = v118;
              }
              else
              {
                v76 = *(_WORD *)v13;
              }
            }
            else
            {
              v75 = *v13 ^ qword_18015BFE8 ^ (unsigned int)BaseAddress ^ v12;
              if ( !(_WORD)v75 )
                v8 = *(_QWORD *)(v84 - (v75 >> 12));
              v76 = *(_WORD *)(v8 + 36);
            }
            v17 = *(_QWORD *)(v84 + 16LL * v76);
          }
          else
          {
            v17 = v16 & 0x3F;
          }
          v18 = 16LL * v15 - v17;
          Size = v18;
          Heap = RtlAllocateHeap(BaseAddress, a2 & 0xC003FFFF, a4);
          v88 = Heap;
          v20 = a4;
          if ( Heap )
          {
            if ( a4 >= v18 )
              v20 = v18;
            memmove(Heap, Src, v20);
            RtlFreeHeap(BaseAddress, a2 & 0xC003FFFF, Src);
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && SharedData->ServiceSessionId )
          {
            UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
            v22 = 2147353472LL;
          }
          else
          {
            v22 = 2147353472LL;
            UserModeGlobalLogger = 2147353472LL;
          }
          if ( !*(_BYTE *)UserModeGlobalLogger || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return (char *)v88;
          v24 = v88;
          if ( v88 )
          {
            v121 = 4130;
            v122 = BaseAddress;
            v123 = v88;
            v124 = Src;
            v126 = Size;
            v125 = a4;
            v127 = 2;
            if ( RtlGetCurrentServiceSessionId() )
            {
              v22 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
              v24 = v88;
            }
            ZwTraceEvent((HANDLE)*(unsigned __int8 *)v22, 0x20402u, 0x2Cu, Fields);
          }
          return (char *)v24;
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int16 *)v10 == BaseAddress )
  {
    sub_1800A4DFC(9, (_DWORD)BaseAddress, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v26 = *((_DWORD *)BaseAddress + 29) | a2;
  Flagsa = v26;
  if ( (v26 & 0x61000000) != 0 && (v26 & 0x10000000) == 0 )
    return (char *)sub_180101730(BaseAddress);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v77 = NtCurrentTeb();
    v78 = -1073741801;
    goto LABEL_229;
  }
  v27 = 1;
  if ( a4 )
    v28 = a4;
  else
    v28 = 1LL;
  v29 = *((_QWORD *)BaseAddress + 33) & (v28 + *((_QWORD *)BaseAddress + 32));
  if ( v29 < 0x20 )
    v29 = 32LL;
  v86 = v29;
  Sizea = 0LL;
  if ( (v26 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44)) )
    {
      ++*((_DWORD *)BaseAddress + 146);
    }
    else
    {
      if ( byte_18015B388 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v72 = NtCurrentTeb();
        v72->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_185;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      sub_1800812F8(BaseAddress, 1LL);
    }
    v83 = 1;
    v26 ^= 1u;
    Flagsa = v26;
  }
  _m_prefetchw((const void *)v9);
  if ( *(_BYTE *)(v9 + 15) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v85 = v9;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      sub_1800FDA30(BaseAddress, v9);
  }
  v100 = (_BYTE *)v9;
  v30 = *(unsigned __int16 *)(v9 + 8);
  for ( i = (__int64 *)*((_QWORD *)BaseAddress + 39); ; i = (__int64 *)*i )
  {
    v32 = *((unsigned int *)i + 2);
    if ( v30 < v32 )
      break;
    if ( !*i )
    {
      v30 = (unsigned int)(v32 - 1);
      break;
    }
  }
  v33 = (unsigned int)(v32 - 1);
  if ( v30 < v33 || *i && v30 == v33 )
  {
    v34 = v30 - *((unsigned int *)i + 6);
    if ( *((_DWORD *)i + 3) )
      v34 *= 2LL;
    v113 = i[6] + 8 * v34;
  }
  else
  {
    v113 = 0LL;
  }
  if ( (v26 & 0x3C000100) != 0 || *((_QWORD *)BaseAddress + 41) || (*(_BYTE *)(v9 + 10) & 2) != 0 )
    v86 += 16LL;
  v35 = (_BYTE *)(v9 + 15);
  v93 = (_BYTE *)(v9 + 15);
  v36 = *(_BYTE *)(v9 + 15);
  if ( (v36 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v62 = NtCurrentTeb();
    v62->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_185;
  }
  v37 = (unsigned __int16 *)(v9 + 8);
  v102 = (_WORD *)(v9 + 8);
  if ( v36 == 4 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v99 = *(_DWORD *)v37;
      if ( (*(_DWORD *)v37 & *((_DWORD *)BaseAddress + 31)) != 0 )
        v99 = *(_DWORD *)v37 ^ *((_DWORD *)BaseAddress + 34);
      v61 = v99;
      v26 = Flagsa;
    }
    else
    {
      v61 = *v37;
    }
    Sizea = *(_QWORD *)(v9 - 48 + 32) - v61;
    v38 = (Sizea + *v37) >> 4;
    v92 = v38;
    v86 = (v86 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v38 = *v37;
    v98 = v38;
    v92 = v38;
    if ( v36 == 5 )
    {
      v39 = *(unsigned __int16 *)(v9 + 12) ^ (unsigned __int64)BaseAddress[70];
    }
    else if ( (v36 & 0x40) != 0 )
    {
      v39 = *(unsigned __int16 *)(v9 + 16LL * (v36 & 0x3F) + 12);
    }
    else if ( (v36 & 0x3F) == 0x3F )
    {
      if ( v36 < 0 )
      {
        if ( *v37 ^ (unsigned __int16)(qword_18015BFE8 ^ (unsigned __int16)BaseAddress ^ (v9 >> 4)) )
          v63 = 0LL;
        else
          v63 = *(_QWORD *)(v9
                          - ((*(_DWORD *)v37 ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ (unsigned int)(v9 >> 4)) >> 12));
        v60 = *(unsigned __int16 *)(v63 + 36);
        v38 = *v37;
        v98 = v38;
        v26 = Flagsa;
      }
      else
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v96 = *(_DWORD *)v37;
          if ( (*(_DWORD *)v37 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v96 = *(_DWORD *)v37 ^ *((_DWORD *)BaseAddress + 34);
          LOWORD(v60) = v96;
          v38 = *v37;
          v98 = v38;
          v26 = Flagsa;
        }
        else
        {
          LOWORD(v60) = v38;
        }
        v60 = (unsigned __int16)v60;
      }
      v39 = *(_QWORD *)(v9 + 16 * v60);
    }
    else
    {
      v39 = *(_BYTE *)(v9 + 15) & 0x3F;
    }
    Sizea = 16 * v38 - v39;
    if ( v38 >= BaseAddress[200] )
      goto LABEL_61;
    v40 = ((unsigned __int8)(1 << (v38 & 7)) & *((_BYTE *)BaseAddress + (v38 >> 3) + 402)) != 0;
    v38 = *v37;
    if ( !v40 )
    {
      v98 = *v37;
      v41 = (_WORD *)(*((_QWORD *)BaseAddress + 49) + 2 * v92);
      if ( *v41 > 1u )
        --*v41;
      v26 = Flagsa;
      goto LABEL_61;
    }
    v26 = Flagsa;
  }
  v98 = v38;
LABEL_61:
  v42 = v86 >> 4;
  v95 = v86 >> 4;
  *(_QWORD *)v94 = v86 >> 4;
  if ( v86 >> 4 <= v38 )
  {
    v43 = v42 + 1;
    if ( v42 + 1 == v38 )
    {
      ++v42;
      v95 = v43;
      *(_QWORD *)v94 = v43;
      v86 += 16LL;
    }
    if ( *v35 == 4 )
    {
      *v37 = v86 - a4;
LABEL_69:
      if ( a4 <= Sizea )
        goto LABEL_70;
      if ( (v26 & 8) != 0 )
      {
        memset(&Src[Sizea], 0, a4 - Sizea);
        v42 = v95;
        v35 = (_BYTE *)(v9 + 15);
        goto LABEL_70;
      }
      if ( (BaseAddress[56] & 0x40) != 0 )
      {
        v66 = Sizea & 3;
        v114 = v66;
        if ( (Sizea & 3) != 0 )
        {
          v66 = 4 - v66;
          v114 = v66;
        }
        if ( a4 > v66 + Sizea && ((a4 - v66 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          v67 = v66 + Sizea + v9 + 16;
          v115 = v67;
          v68 = ((a4 - v66 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
          v107 = v68;
          if ( v68 )
          {
            if ( (v67 & 4) != 0 )
            {
              *(_DWORD *)v67 = -1163005939;
              v107 = --v68;
              if ( !v68 )
                goto LABEL_70;
              v67 += 4LL;
              v115 = v67;
            }
            memset64((void *)v67, 0xBAADF00DBAADF00DuLL, v68 >> 1);
            if ( (v68 & 1) != 0 )
              *(_DWORD *)(v67 + 4 * v68 - 4) = -1163005939;
          }
        }
      }
LABEL_70:
      if ( (BaseAddress[56] & 0x20) != 0 )
      {
        *(_QWORD *)(a4 + v9 + 16) = 0xABABABABABABABABuLL;
        *(_QWORD *)(a4 + v9 + 24) = 0xABABABABABABABABuLL;
      }
      if ( v42 == v98 )
        goto LABEL_79;
      v44 = *(_BYTE *)(v9 + 10) & 0xFE;
      if ( *v35 == 4 )
      {
        v69 = v9 - 48;
        NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
        v70 = NtGlobalFlag;
        v95 = *(_QWORD *)v94;
        if ( (NtGlobalFlag & 0x800) != 0 )
          *(_WORD *)(v69 + 18) = sub_1800F0F1C(
                                   (_DWORD)BaseAddress,
                                   *(unsigned __int16 *)(v69 + 18),
                                   v92,
                                   *(_DWORD *)v94,
                                   5);
        v108 = (PVOID)(v69 + v86);
        v106 = 16 * v92 - v86;
        v105 = sub_18001E5E0(v70, &v108, &v106, 0x4000u);
        if ( v105 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v108, v106, v105);
          sub_180102310();
          v9 = v85;
          v42 = *(_QWORD *)v94;
          goto LABEL_78;
        }
        *(_QWORD *)(v69 + 32) -= v106;
        v9 = v85;
      }
      else
      {
        v45 = (unsigned __int16)*v102 - (unsigned __int16)v42;
        v46 = v45;
        v117 = v45;
        *v102 = v42;
        v47 = (BaseAddress[56] & 0x40) != 0;
        v48 = *(_BYTE *)(v9 + 14);
        if ( v48 )
          v49 = (v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v48 << 16) + 0x10000;
        else
          v49 = (__int64)BaseAddress;
        v116 = v49;
        sub_18000E224(BaseAddress, v49, v9 + 16 * v42, v44, v47, v42, v46);
      }
      v42 = v95;
LABEL_78:
      v35 = v93;
LABEL_79:
      if ( *v35 != 4 )
        v27 = 0;
      if ( !v27 )
      {
        v50 = v86 - a4;
        if ( v86 - a4 >= 0x3F )
        {
          *(_QWORD *)(v9 + 16 * v42) = v50;
          *v35 = 63;
        }
        else
        {
          *v35 = v50;
        }
      }
      goto LABEL_185;
    }
    if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    {
      v119 = (_OWORD *)(v9 + 16LL * *v37 - 16);
      v104 = 16 * v42 + v9 - 16;
      *(_OWORD *)v104 = *v119;
      v110 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v110 & 0x800) != 0 )
      {
        v95 = *(_QWORD *)v94;
        v98 = v92;
        *(_WORD *)(v104 + 2) = sub_1800F0F1C(
                                 (_DWORD)BaseAddress,
                                 *(unsigned __int16 *)(v104 + 2),
                                 v92,
                                 *(_DWORD *)v94,
                                 4);
        v42 = v64;
        v35 = (_BYTE *)(v9 + 15);
        goto LABEL_68;
      }
    }
    else
    {
      v111 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v111 & 0x800) != 0 )
      {
        v95 = *(_QWORD *)v94;
        *(_BYTE *)(v9 + 11) = sub_1800F0F1C((_DWORD)BaseAddress, *(unsigned __int8 *)(v9 + 11), *v37, *(_DWORD *)v94, 4);
        v98 = v92;
        v42 = v65;
        v35 = (_BYTE *)(v9 + 15);
        goto LABEL_68;
      }
    }
    v98 = v92;
    v42 = *(_QWORD *)v94;
    v95 = *(_QWORD *)v94;
LABEL_68:
    LOBYTE(v26) = Flagsa;
    goto LABEL_69;
  }
  if ( *v35 != 4 )
    v27 = 0;
  if ( !v27 && sub_18000DDA0(BaseAddress, v26, v9, a4, v86 >> 4) )
    goto LABEL_185;
  if ( (v26 & 0x10) == 0 )
  {
    v51 = v26 & 0xC003FFFF;
    Flagsa = v51;
    v52 = *(_BYTE *)(v9 + 10);
    if ( (v52 & 2) != 0 )
    {
      v51 = (16 * (v52 & 0xE0 | 0x10)) | v51 & 0xFFFFF1FF;
      Flagsa = v51;
      v59 = *(_WORD *)(sub_1800774AC(v9) + 2);
      if ( v59 > 0 )
      {
        v51 |= (unsigned __int16)v59 << 18;
        Flagsa = v51;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v71 = *(_BYTE *)(v9 + 11);
      if ( v71 )
      {
        v51 |= v71 << 18;
        Flagsa = v51;
      }
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    v100 = 0LL;
    v53 = (char *)RtlAllocateHeap(BaseAddress, v51, a4);
    v89 = v53;
    if ( !v53 )
      goto LABEL_114;
    v54 = v53 - 16;
    _m_prefetchw(v53 - 16);
    if ( *(v53 - 1) == 5 )
      v54 -= 16 * (unsigned __int8)v54[14];
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *((_DWORD *)v54 + 2) ^= *((_DWORD *)BaseAddress + 34);
      if ( v54[11] != ((unsigned __int8)v54[8] ^ (unsigned __int8)(v54[9] ^ v54[10])) )
      {
        sub_1800FDA30(BaseAddress, v54);
        v53 = v89;
      }
    }
    if ( (v54[10] & 2) != 0 )
    {
      v56 = (_QWORD *)sub_1800774AC(v54);
      v103 = v56;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
        {
          sub_1800FDA30(BaseAddress, v9);
          v53 = v89;
          v56 = v103;
        }
      }
      if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
      {
        v57 = sub_1800774AC(v9);
        *(_QWORD *)(v58 + 8) = *(_QWORD *)(v57 + 8);
      }
      else
      {
        *v56 = 0LL;
        v56[1] = 0LL;
      }
      if ( !*((_DWORD *)BaseAddress + 31) )
        goto LABEL_109;
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v54[11] = v54[8] ^ v54[9] ^ v54[10];
      *((_DWORD *)v54 + 2) ^= *((_DWORD *)BaseAddress + 34);
    }
LABEL_109:
    v100 = 0LL;
    if ( v83 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      v83 = 0;
      v51 &= ~1u;
      Flagsa = v51;
      v53 = v89;
    }
    if ( a4 < Sizea )
      v55 = a4;
    else
      v55 = Sizea;
    memmove(v53, Src, v55);
    RtlFreeHeap(BaseAddress, v51, Src);
    v53 = v89;
LABEL_114:
    v109 = Src;
    Src = v53;
    goto LABEL_185;
  }
  Src = 0LL;
LABEL_185:
  if ( v100 && *((_DWORD *)BaseAddress + 31) )
  {
    v100[11] = v100[8] ^ v100[9] ^ v100[10];
    *((_DWORD *)v100 + 2) ^= *((_DWORD *)BaseAddress + 34);
  }
  if ( v83 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
  v73 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v74 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v74 = 2147353472LL;
  if ( *(_BYTE *)v74 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v80 = Src;
      if ( Src )
      {
        if ( (Flagsa & 0x800000) == 0 )
        {
          v129 = 4130;
          v130 = BaseAddress;
          v131 = Src;
          if ( v109 )
            v80 = v109;
          v132 = v80;
          v134 = Sizea;
          v133 = a4;
          v135 = 3;
          if ( RtlGetCurrentServiceSessionId() )
            v73 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          ZwTraceEvent((HANDLE)*(unsigned __int8 *)v73, 0x20402u, 0x2Cu, v128);
        }
      }
    }
  }
  return Src;
}
