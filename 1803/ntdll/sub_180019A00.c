/*
 * XREFs of sub_180019A00 @ 0x180019A00
 * Callers:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 * Callees:
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18001E820 @ 0x18001E820 (sub_18001E820.c)
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     sub_1800225EC @ 0x1800225EC (sub_1800225EC.c)
 *     sub_180061E38 @ 0x180061E38 (sub_180061E38.c)
 *     sub_1800722B4 @ 0x1800722B4 (sub_1800722B4.c)
 *     sub_1800746F8 @ 0x1800746F8 (sub_1800746F8.c)
 *     sub_18007B1B0 @ 0x18007B1B0 (sub_18007B1B0.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlInterlockedPopEntrySList @ 0x18009E550 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedPushListSList @ 0x18009E600 (RtlInterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x18009F270 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 *     sub_1800FE558 @ 0x1800FE558 (sub_1800FE558.c)
 *     sub_1800FE5F4 @ 0x1800FE5F4 (sub_1800FE5F4.c)
 */

char *__fastcall sub_180019A00(PRTL_SRWLOCK SRWLock, unsigned __int16 a2, __int64 a3, _SLIST_HEADER **a4)
{
  __int64 v5; // r15
  unsigned __int16 *v6; // rbp
  struct _TEB *v7; // rsi
  __int64 HeapData_low; // rcx
  __int64 UniqueThread_low; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  char *Ptr; // r12
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  volatile signed __int64 *v16; // rcx
  unsigned int v17; // r8d
  int v18; // edx
  signed __int32 v19; // ebx
  PSLIST_HEADER v20; // r10
  __int64 v21; // rax
  struct _TEB *v22; // r12
  unsigned __int16 HeapData_high; // r15
  __int16 v24; // ax
  unsigned __int64 Alignment; // rdx
  ULONGLONG Region; // r11
  int v27; // r8d
  _SLIST_HEADER **v28; // r15
  unsigned int v29; // ecx
  _SLIST_HEADER *v30; // r11
  unsigned int v31; // r8d
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  int v34; // eax
  char *v35; // rax
  char *v36; // rbx
  unsigned __int64 v37; // rdi
  unsigned __int64 v39; // rdx
  _SLIST_HEADER **v40; // rax
  signed __int64 *v41; // rdx
  unsigned int v42; // ecx
  volatile signed __int64 *v43; // rax
  unsigned int v44; // r8d
  signed __int64 *v45; // rsi
  signed __int64 v46; // rbx
  _SLIST_HEADER *v47; // r14
  PSLIST_ENTRY v48; // rsi
  volatile signed __int64 *v49; // rcx
  signed __int32 v50; // eax
  _SLIST_HEADER **v51; // r8
  PSILO_USER_SHARED_DATA v52; // rcx
  __int64 v53; // rcx
  signed __int32 v54; // eax
  int v55; // ecx
  __int64 v56; // rax
  _SLIST_ENTRY *v57; // rdx
  _SLIST_HEADER **v58; // r8
  unsigned int v59; // edx
  PSILO_USER_SHARED_DATA SharedData; // r10
  __int64 v61; // r10
  PSILO_USER_SHARED_DATA v62; // r10
  __int64 UserModeGlobalLogger; // r10
  volatile signed __int64 v64; // rbx
  _SLIST_ENTRY *v65; // rdx
  __int64 v66; // r9
  unsigned int v67; // r10d
  BOOL v68; // r8d
  PVOID v69; // rax
  char v70; // r11
  char v71; // cl
  __int64 v72; // r10
  char v73; // r8
  unsigned int v74; // edx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  unsigned int v77; // eax
  unsigned int v78; // ecx
  unsigned __int8 v79; // cl
  __int64 v80; // rax
  __int64 v81; // rsi
  unsigned __int64 v82; // rax
  PSLIST_ENTRY v83; // rax
  __int64 v84; // rax
  signed __int32 v85; // eax
  _SLIST_HEADER **v86; // r8
  PSILO_USER_SHARED_DATA v87; // rcx
  __int64 v88; // rcx
  signed __int32 v89; // eax
  int v90; // r8d
  __int64 v91; // rax
  _SLIST_HEADER **v92; // rcx
  __int16 v93; // ax
  unsigned __int16 v94; // ax
  __int64 v95; // rax
  __int64 v96; // rax
  char *v97; // rbx
  USHORT *v98; // rcx
  int v99; // ebx
  ULONG CurrentProcessorNumber; // eax
  int v101; // ecx
  _SLIST_ENTRY *v102; // rdx
  _SLIST_HEADER *Next; // rcx
  _SLIST_HEADER *v104; // r15
  unsigned int v105; // edi
  _SLIST_ENTRY *v106; // r14
  int v107; // ecx
  volatile signed __int32 *v108; // rsi
  _SLIST_HEADER *v109; // rcx
  bool v110; // zf
  signed __int32 v111; // eax
  _SLIST_HEADER *v112; // rcx
  volatile signed __int64 *v113; // rdx
  volatile signed __int64 *v114; // rax
  _SLIST_HEADER *v115; // rcx
  signed __int32 v116; // ett
  _SLIST_HEADER *v117; // rcx
  unsigned __int16 v118; // cx
  unsigned __int16 v119; // ax
  bool v120; // cf
  signed __int32 v121; // eax
  int v122; // r8d
  __int64 v123; // rax
  _SLIST_HEADER **v124; // rcx
  _SLIST_ENTRY *v125; // rdx
  _SLIST_HEADER *v126; // rcx
  signed __int32 v127; // eax
  int v128; // r8d
  __int64 v129; // rax
  _SLIST_HEADER **v130; // rcx
  signed __int32 v131; // eax
  int v132; // r8d
  __int64 v133; // rax
  _SLIST_HEADER *v134; // rdx
  _SLIST_HEADER **v135; // rcx
  signed __int32 v136[8]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int16 *v137; // [rsp+28h] [rbp-B0h]
  int v138; // [rsp+30h] [rbp-A8h]
  _SLIST_ENTRY *v139; // [rsp+38h] [rbp-A0h]
  _SLIST_ENTRY *v140; // [rsp+40h] [rbp-98h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-90h]
  PSLIST_HEADER v142; // [rsp+50h] [rbp-88h]
  unsigned int v143; // [rsp+58h] [rbp-80h]
  signed __int64 v144; // [rsp+60h] [rbp-78h]
  char *v145; // [rsp+68h] [rbp-70h]
  PSLIST_HEADER ListHead; // [rsp+70h] [rbp-68h]
  int v147; // [rsp+78h] [rbp-60h]
  unsigned int v148; // [rsp+7Ch] [rbp-5Ch]
  __int64 v149; // [rsp+80h] [rbp-58h]
  unsigned int v150; // [rsp+E0h] [rbp+8h]
  _SLIST_HEADER *v151; // [rsp+E0h] [rbp+8h]
  int v152; // [rsp+E0h] [rbp+8h]
  PSLIST_HEADER v153; // [rsp+E0h] [rbp+8h]
  unsigned int v154; // [rsp+E0h] [rbp+8h]
  char v155; // [rsp+E8h] [rbp+10h]
  char v157; // [rsp+F8h] [rbp+20h]

  v157 = (char)a4;
  v155 = 0;
  LODWORD(v5) = 0;
  v6 = (unsigned __int16 *)&SRWLock[84].Ptr + 2 * a2 + 2;
  if ( ((__int64)SRWLock[84].Ptr & 1) == 0 && (*((_BYTE *)v6 + 3) & 1) != 0 )
  {
    v7 = NtCurrentTeb();
    HeapData_low = LOWORD(v7->HeapData);
    UniqueThread_low = LODWORD(v7->ClientId.UniqueThread);
    LODWORD(v5) = HeapData_low - 1;
    v155 = HeapData_low - 1;
    if ( (int)HeapData_low - 1 < 0 || qword_18015A580[HeapData_low] != UniqueThread_low )
    {
      v99 = HIDWORD(qword_18015A580[0]);
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v5 = v99 & CurrentProcessorNumber;
      v155 = v99 & CurrentProcessorNumber;
      LOWORD(v7->HeapData) = (v99 & CurrentProcessorNumber) + 1;
      qword_18015A588[v5] = UniqueThread_low;
    }
  }
  v10 = *((unsigned __int8 *)v6 + 2);
  v11 = 16LL * *v6;
  v149 = v11;
  ListHead = (PSLIST_HEADER)&SRWLock[6 * (unsigned int)v5 + 408];
  if ( (_DWORD)v5 )
    Ptr = (char *)SRWLock[v10 + 278].Ptr + 192 * (unsigned int)v5 - 192;
  else
    Ptr = (char *)SRWLock[v10 + 149].Ptr;
  v145 = Ptr;
LABEL_8:
  while ( 2 )
  {
    v13 = *((_QWORD *)Ptr + 1);
    if ( v13 )
    {
      v14 = *(_QWORD *)Ptr;
      v15 = HIWORD(*(_DWORD *)(v13 + 32));
      v138 = 0;
      v16 = *(volatile signed __int64 **)(v14 + 24);
      v139 = (_SLIST_ENTRY *)v16;
      if ( (v15 & 0x8000) != 0 )
      {
        v96 = *((unsigned __int16 *)Ptr + 86);
        v138 = 1;
        v97 = (char *)v16 + 4 * v96;
        if ( (v97[679] & 1) == 0 && (int)sub_1800746F8(v16, (unsigned __int8)v97[678]) >= 0 )
        {
          v97[679] |= 1u;
          v98 = RtlGetCurrentServiceSessionId()
              ? NtCurrentPeb()->SharedData->UserModeGlobalLogger
              : (USHORT *)2147353472;
          if ( *(_BYTE *)v98 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            sub_1800FDEE8(*((_QWORD *)&v139[1].Next + 1), (unsigned __int8)v97[678]);
        }
      }
      v17 = 100;
      if ( MEMORY[0x7FFE036A] <= 1u )
        v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = *(_DWORD *)(v13 + 32);
        if ( (v19 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v19 )
            goto LABEL_47;
          if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v19 | 0x80000000, v19) )
            break;
        }
        if ( ++v18 > v17 )
          goto LABEL_47;
      }
      if ( v19 != -1 )
      {
        v20 = *(PSLIST_HEADER *)(v13 + 8);
        v142 = v20;
        if ( v20 && *(char **)v13 == Ptr && (_WORD)v19 )
        {
          v21 = *((unsigned __int16 *)Ptr + 86);
          v22 = NtCurrentTeb();
          v150 = byte_180123370[v21];
          HeapData_high = (unsigned __int8)HIWORD(v22->HeapData);
          if ( HeapData_high == HIBYTE(HIWORD(v22->HeapData)) )
          {
            v93 = sub_18001EBF0();
            v20 = v142;
            v24 = (v93 << 8) | (unsigned __int8)(v93 + 1);
          }
          else
          {
            v24 = (unsigned __int8)(HIWORD(v22->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v22->HeapData);
          }
          HIWORD(v22->HeapData) = v24;
          Alignment = v20[2].Alignment;
          Region = v20[2].Region;
          v27 = byte_18015A460[HeapData_high];
          if ( Alignment < 0x40 )
          {
            a4 = (_SLIST_HEADER **)v20[2].Region;
            if ( Alignment >= v150 )
              LODWORD(Alignment) = v150;
            v29 = Alignment;
          }
          else
          {
            v28 = (_SLIST_HEADER **)(Region + 8 * ((Alignment - 1) >> 6));
            a4 = (_SLIST_HEADER **)(Region + 8 * ((unsigned __int64)(unsigned int)(v19 >> 16) >> 6));
            do
            {
              if ( *a4 != (_SLIST_HEADER *)-1LL )
                break;
              v40 = a4++;
              if ( v40 == v28 )
                a4 = (_SLIST_HEADER **)v20[2].Region;
            }
            while ( a4 != (_SLIST_HEADER **)(Region + 8 * ((unsigned __int64)(unsigned int)(v19 >> 16) >> 6)) );
            if ( a4 == v28 && (Alignment & 0x3F) != 0 )
            {
              v29 = v150;
              if ( (v20[2].Alignment & 0x3F) < v150 )
                v29 = Alignment & 0x3F;
            }
            else
            {
              v29 = v150;
            }
          }
          v30 = *a4;
          v31 = (v29 * v27) >> 7;
          if ( v29 < 0x40 )
          {
            _BitScanForward64(&v39, ~(unsigned __int64)v30);
            LOBYTE(v31) = v39 + v31;
            v32 = ((1LL << v29) - 1) << v39;
          }
          else
          {
            v32 = -1LL;
          }
          Ptr = v145;
          _BitScanForward64(&v33, ~__ROR8__((unsigned __int64)v30 | ~v32, v31));
          v34 = ((_BYTE)v31 + (_BYTE)v33) & 0x3F;
          v147 = v34;
          *a4 = (_SLIST_HEADER *)((unsigned __int64)v30 | (1LL << v34));
          LODWORD(a4) = v34 + ((unsigned int)((__int64)((__int64)a4 - v20[2].Region) >> 3) << 6);
          *(_DWORD *)(v13 + 32) = ((_DWORD)a4 << 16) | ((unsigned __int16)v19 - 1);
          v35 = (char *)v20
              + (unsigned int)a4
              * (((unsigned int)qword_18015D458 ^ (unsigned int)v139 ^ (unsigned int)v20 ^ *((_DWORD *)&v20[1].HeaderX64
                                                                                           + 2)) >> 16);
          v36 = &v35[(unsigned __int16)(qword_18015D458 ^ (unsigned __int16)v139 ^ (unsigned __int16)v20 ^ *((_WORD *)&v20[1].HeaderX64 + 4))];
          if ( (v36[15] & 0x3F) == 0 )
          {
            LOBYTE(v5) = v155;
            goto LABEL_31;
          }
          sub_18009A5F0(
            15,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL),
            (_DWORD)v35
          + (unsigned __int16)(qword_18015D458 ^ (unsigned __int16)v139 ^ (unsigned __int16)v20 ^ *((_WORD *)&v20[1].HeaderX64
                                                                                                  + 4)),
            0,
            0LL,
            0LL);
          LOBYTE(v5) = v155;
        }
        else
        {
          *(_DWORD *)(v13 + 32) = v19;
        }
      }
LABEL_47:
      v36 = 0LL;
LABEL_31:
      if ( v138 && (unsigned int)(HIDWORD(qword_18015A580[0]) + 1) < LODWORD(qword_18015A580[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)qword_18015A580 + 1,
          2 * (HIDWORD(qword_18015A580[0]) + 1) - 1,
          SHIDWORD(qword_18015A580[0]));
      if ( v36 )
      {
        if ( (v157 & 8) != 0 )
          memset(v36 + 16, 0, v11 - 8);
        v37 = v11 - a3;
        if ( v37 >= 0x3F )
        {
          *(_QWORD *)&v36[16 * *v6] = v37;
          v36[15] = -65;
        }
        else
        {
          v36[15] = v37 | 0x80;
        }
        return v36 + 16;
      }
    }
    v142 = *(PSLIST_HEADER *)Ptr;
LABEL_53:
    v140 = 0LL;
LABEL_54:
    v41 = (signed __int64 *)(Ptr + 16);
    while ( 2 )
    {
      v42 = 0;
      v143 = 0;
      v43 = 0LL;
      v138 = 0;
      v139 = 0LL;
      v44 = 0;
      v45 = v41;
      do
      {
        v46 = *v45;
        if ( !*v45 )
          goto LABEL_57;
        LODWORD(ListEntry) = *(unsigned __int16 *)(v46 + 32);
        v59 = (unsigned int)ListEntry;
        if ( (unsigned int)ListEntry <= v44 )
          goto LABEL_89;
        if ( (dword_18015D040 & 4) == 0 )
        {
          v94 = *((_WORD *)Ptr + 86);
          if ( v94 <= 0x70u )
          {
            if ( *((_DWORD *)Ptr + 40) >= 16 * (unsigned int)(unsigned __int16)word_180118FE0[v94] )
            {
              v118 = *(_WORD *)(v46 + 32);
              v119 = *(_WORD *)(v46 + 40) >> 2;
              v120 = v119 < v118;
              v110 = v119 == v118;
              v42 = v138;
              LODWORD(a4) = !v120 && !v110;
              goto LABEL_92;
            }
            v42 = v138;
          }
        }
        LOBYTE(a4) = 0;
LABEL_92:
        v152 = (int)a4;
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && SharedData->ServiceSessionId )
          v61 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        else
          v61 = 2147353482LL;
        if ( *(_BYTE *)v61
          || ((v62 = NtCurrentPeb()->SharedData) == 0LL || !v62->ServiceSessionId
            ? (UserModeGlobalLogger = 2147353472LL)
            : (UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger),
              *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0) )
        {
          if ( !(_BYTE)a4 )
            goto LABEL_99;
          sub_1800FE558(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL),
            *(_QWORD *)(v46 + 8),
            *((unsigned __int16 *)Ptr + 86));
          v42 = v138;
          v59 = (unsigned int)ListEntry;
          v44 = v143;
          LODWORD(a4) = v152;
        }
        if ( (_BYTE)a4 )
        {
LABEL_89:
          v43 = (volatile signed __int64 *)v139;
LABEL_57:
          v46 = (signed __int64)v140;
          goto LABEL_58;
        }
LABEL_99:
        v44 = v59;
        v140 = (_SLIST_ENTRY *)v46;
        v143 = v59;
        v43 = (volatile signed __int64 *)&Ptr[8 * v42 + 16];
        v139 = (_SLIST_ENTRY *)v43;
LABEL_58:
        ++v42;
        ++v45;
        v138 = v42;
      }
      while ( v42 < 0x10 );
      v47 = ListHead;
      if ( v43 )
      {
        v151 = (_SLIST_HEADER *)(*(_QWORD *)(v142[1].Region + 8LL * *((unsigned __int16 *)Ptr + 86) + 1192) + 144LL);
        v48 = RtlInterlockedPopEntrySList(v151);
        if ( v48 )
        {
          while ( 1 )
          {
            v101 = *((_DWORD *)&v48[-1].Next + 3);
            v102 = v48;
            v48 -= 3;
            ListEntry = v102;
            if ( (v101 & 1) != 0 )
              break;
            _m_prefetchw((char *)&v48[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFFD) == 2 )
            {
              Next = (_SLIST_HEADER *)v48->Next->Next;
              v48->Next = 0LL;
              RtlInterlockedPushEntrySList_0(Next, v102);
            }
            v48 = RtlInterlockedPopEntrySList(v151);
            if ( !v48 )
              goto LABEL_61;
          }
          if ( !(unsigned int)sub_18007B1B0(v48, Ptr) )
          {
            RtlInterlockedPushEntrySList_0(v151, ListEntry);
            v48 = 0LL;
          }
        }
LABEL_61:
        v49 = (volatile signed __int64 *)v139;
        if ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)v139, (signed __int64)v48, v46) )
        {
          v41 = (signed __int64 *)(Ptr + 16);
          if ( !v48 )
            continue;
          RtlInterlockedPushEntrySList_0(v151, v48 + 3);
          goto LABEL_54;
        }
        if ( !v48 )
          *((_WORD *)Ptr + 87) = (unsigned __int8)(((char *)v49 - Ptr - 16) >> 3);
        if ( v46 )
        {
          _m_prefetchw((const void *)(v46 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFFD) != 2 )
            goto LABEL_66;
          v115 = **(_SLIST_HEADER ***)v46;
          *(_QWORD *)v46 = 0LL;
          RtlInterlockedPushEntrySList_0(v115, (PSLIST_ENTRY)(v46 + 48));
          goto LABEL_53;
        }
      }
      else
      {
        v140 = 0LL;
      }
      break;
    }
    v64 = 0LL;
    v142 = (PSLIST_HEADER)(*(_QWORD *)(v142[1].Region + 8LL * *((unsigned __int16 *)Ptr + 86) + 1192) + 144LL);
    v139 = RtlInterlockedPopEntrySList(v142);
    v65 = v139;
    if ( !v139 )
      goto LABEL_103;
    v104 = v142;
    v105 = 0;
    v106 = 0LL;
    while ( 2 )
    {
      v107 = *((_DWORD *)&v65[-1].Next + 3);
      v108 = (volatile signed __int32 *)&v65[-3];
      v140 = v65 - 3;
      if ( (v107 & 1) == 0 )
      {
        _m_prefetchw((const void *)(v108 + 11));
        if ( _InterlockedAnd(v108 + 11, 0xFFFFFFFD) == 2 )
          goto LABEL_191;
        goto LABEL_192;
      }
      if ( !(unsigned int)sub_18007B1B0(v108, Ptr) )
      {
        v113 = (volatile signed __int64 *)v139;
        v114 = (volatile signed __int64 *)v139;
        if ( v105 )
          v114 = (volatile signed __int64 *)v106;
        ++v105;
        v106 = (_SLIST_ENTRY *)v114;
        v139->Next = (_SLIST_ENTRY *)v64;
        v64 = (volatile signed __int64)v113;
        goto LABEL_192;
      }
      _m_prefetchw((const void *)(v108 + 11));
      if ( _InterlockedAnd(v108 + 11, 0xFFFFFFFD) == 2 )
      {
        v65 = v139;
LABEL_191:
        v109 = **(_SLIST_HEADER ***)v108;
        *(_QWORD *)v108 = 0LL;
        RtlInterlockedPushEntrySList_0(v109, v65);
LABEL_192:
        v140 = 0LL;
        v139 = RtlInterlockedPopEntrySList(v104);
        v65 = v139;
        if ( !v139 )
          goto LABEL_193;
        continue;
      }
      break;
    }
    if ( !sub_180014FCC((__int64)Ptr, (__int64)v108) )
      goto LABEL_192;
LABEL_193:
    LOBYTE(v5) = v155;
    v110 = v105 == 0;
    ListEntry = v106;
    v47 = ListHead;
    v154 = v105;
    v11 = v149;
    if ( !v110 )
      RtlInterlockedPushListSList(v142, v64, ListEntry, v154);
LABEL_103:
    v46 = (signed __int64)v140;
LABEL_66:
    if ( v46 )
    {
      *(_BYTE *)(v46 + 43) = v5;
      while ( 1 )
      {
        v50 = *(_DWORD *)(v46 + 44);
        if ( !v50 || (v50 & 6) != 0 )
          goto LABEL_8;
        if ( v50 == _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v50 | 6, v50) )
        {
          v51 = *(_SLIST_HEADER ***)v46;
          if ( *(char **)v46 == Ptr )
          {
            v52 = NtCurrentPeb()->SharedData;
            if ( v52 && v52->ServiceSessionId )
              v53 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
            else
              v53 = 2147353472LL;
            if ( *(_BYTE *)v53 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              sub_1800FE5F4(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL), *(_QWORD *)(v46 + 8));
            v46 = _InterlockedExchange64((volatile __int64 *)Ptr + 1, v46);
            if ( v46 )
            {
              _m_prefetchw((const void *)(v46 + 44));
              if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFF9) == 6 )
                goto LABEL_212;
              if ( *(_WORD *)(v46 + 32) && !(unsigned __int8)sub_180061E38(Ptr, v46) )
              {
                while ( 1 )
                {
                  v54 = *(_DWORD *)(v46 + 44);
                  if ( !v54 || (v54 & 2) != 0 )
                    break;
                  if ( v54 == _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v54 | 2, v54) )
                  {
                    a4 = *(_SLIST_HEADER ***)v46;
                    v55 = 0;
                    while ( 1 )
                    {
                      v56 = ((_BYTE)v55 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                      v57 = (_SLIST_ENTRY *)a4[v56 + 2];
                      v58 = &a4[v56];
                      if ( v57 )
                      {
                        if ( (*((_DWORD *)&v57[2].Next + 3) & 1) == 0
                          && v57 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                      (volatile signed __int64 *)v58 + 2,
                                                      v46,
                                                      (signed __int64)v57) )
                        {
                          _m_prefetchw((char *)&v57[2].Next + 12);
                          v111 = *((_DWORD *)&v57[2].Next + 3);
                          do
                          {
                            v116 = v111;
                            v111 = _InterlockedCompareExchange(
                                     (volatile signed __int32 *)&v57[2].Next + 3,
                                     v111 & 0xFFFFFFFD,
                                     v111);
                          }
                          while ( v116 != v111 );
                          goto LABEL_197;
                        }
                      }
                      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v58 + 2, v46, 0LL) )
                      {
                        goto LABEL_8;
                      }
                      if ( (unsigned int)++v55 >= 0x10 )
                        goto LABEL_86;
                    }
                  }
                }
              }
            }
          }
          else
          {
            _m_prefetchw((const void *)(v46 + 44));
            if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFF9) == 6 )
              goto LABEL_212;
            if ( sub_180014FCC((__int64)v51, v46) )
            {
              while ( 1 )
              {
                v121 = *(_DWORD *)(v46 + 44);
                if ( !v121 || (v121 & 2) != 0 )
                  break;
                if ( v121 == _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v121 | 2, v121) )
                {
                  a4 = *(_SLIST_HEADER ***)v46;
                  v122 = 0;
                  while ( 1 )
                  {
                    v123 = ((_BYTE)v122 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                    v57 = (_SLIST_ENTRY *)a4[v123 + 2];
                    v124 = &a4[v123];
                    if ( v57 )
                    {
                      if ( (*((_DWORD *)&v57[2].Next + 3) & 1) == 0
                        && v57 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)v124 + 2,
                                                    v46,
                                                    (signed __int64)v57) )
                      {
                        goto LABEL_196;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v124 + 2, v46, 0LL) )
                    {
                      goto LABEL_8;
                    }
                    if ( (unsigned int)++v122 >= 0x10 )
                      goto LABEL_86;
                  }
                }
              }
            }
          }
          goto LABEL_8;
        }
      }
    }
    v66 = *((unsigned int *)Ptr + 40);
    v67 = *((unsigned __int8 *)v6 + 2);
    v68 = ((__int64)SRWLock[84].Ptr & 2) != 0;
    do
    {
      v69 = SRWLock[10].Ptr;
      v70 = 0;
      if ( (_DWORD)v69 == v67 )
      {
        HIDWORD(v144) = HIDWORD(v69) + 1;
        if ( HIDWORD(v69) > 7 )
        {
          v70 = 1;
          HIDWORD(v144) = 0;
        }
      }
      else
      {
        v144 = v67 | 0x100000000LL;
      }
    }
    while ( v69 != (PVOID)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)&SRWLock[10],
                            v144,
                            (signed __int64)v69) );
    if ( !v70 || v68 )
    {
      v71 = 3;
      if ( v68 )
        v71 = 4;
      v66 = (unsigned int)v66 >> v71;
    }
    v72 = (unsigned __int16)word_180119600[*((unsigned __int8 *)v6 + 2)];
    v73 = (*((_BYTE *)v6 + 3) & 1) - 1;
    if ( (unsigned int)v72 >= 0x100 )
      v73 = *((_BYTE *)v6 + 3) & 1;
    if ( *((_DWORD *)Ptr + 41) )
      --v73;
    v74 = 1 << (3 - v73);
    if ( (unsigned int)v66 >= v74 )
      v74 = v66;
    if ( v74 < 4 )
    {
      v74 = 4;
    }
    else if ( v74 > 0x400 )
    {
      v74 = 1024;
    }
    v75 = ((((unsigned __int64)v74 + 31) >> 3) & 0xFFFFFFFC) + v74 * (v72 + 16) + 68;
    if ( v75 >= 0xF0000 )
      v75 = 983040;
    _BitScanReverse(&v76, v75 - 1);
    v77 = 7;
    v78 = v76 + 1;
    if ( v78 > 7 )
      v77 = v78;
    v79 = 18;
    v148 = v77;
    if ( v77 < 0x12 )
      v79 = v77;
    if ( (*((_BYTE *)v6 + 3) & 6) != 0 )
    {
      v79 = 18;
    }
    else if ( v79 != 18 && (unsigned int)v66 < 0x400 )
    {
      LOBYTE(v66) = 0;
      goto LABEL_131;
    }
    v66 = 1LL;
LABEL_131:
    v80 = sub_1800225EC(SRWLock, v79, v72 + 16, v66);
    v81 = v80;
    if ( v80 )
    {
      v82 = 1LL << *(_BYTE *)(v80 + 16);
      if ( v82 > 0xF0000 )
        v82 = 983040LL;
      v153 = (PSLIST_HEADER)(v82 + *(unsigned __int16 *)(v81 + 18));
      _InterlockedIncrement((volatile signed __int32 *)&SRWLock[7]);
      v83 = RtlInterlockedPopEntrySList(v47);
      if ( v83 )
      {
        v46 = (signed __int64)&v83[-3];
LABEL_136:
        if ( v46 )
        {
          *(_BYTE *)(v46 + 43) = v5;
          v84 = *((unsigned __int8 *)v6 + 2);
          v137 = v6;
          sub_18001E820((_DWORD)SRWLock, v46, v81, (unsigned __int16)word_180119600[v84], (__int64)v153, (__int64)v6);
          _InterlockedOr(v136, 0);
          *(_DWORD *)(v81 + 20) = -253701952;
          do
          {
            v85 = *(_DWORD *)(v46 + 44);
            if ( !v85 || (v85 & 6) != 0 )
              goto LABEL_252;
          }
          while ( v85 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v85 | 6, v85) );
          v86 = *(_SLIST_HEADER ***)v46;
          if ( *(char **)v46 == Ptr )
          {
            v87 = NtCurrentPeb()->SharedData;
            if ( v87 && v87->ServiceSessionId )
              v88 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
            else
              v88 = 2147353472LL;
            if ( *(_BYTE *)v88 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              sub_1800FE5F4(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL), *(_QWORD *)(v46 + 8));
            v46 = _InterlockedExchange64((volatile __int64 *)Ptr + 1, v46);
            if ( v46 )
            {
              _m_prefetchw((const void *)(v46 + 44));
              if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFF9) == 6 )
              {
LABEL_212:
                v117 = **(_SLIST_HEADER ***)v46;
                *(_QWORD *)v46 = 0LL;
                RtlInterlockedPushEntrySList_0(v117, (PSLIST_ENTRY)(v46 + 48));
              }
              else if ( *(_WORD *)(v46 + 32) && !(unsigned __int8)sub_180061E38(Ptr, v46) )
              {
                while ( 1 )
                {
                  v89 = *(_DWORD *)(v46 + 44);
                  if ( !v89 || (v89 & 2) != 0 )
                    break;
                  if ( v89 == _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v89 | 2, v89) )
                  {
                    a4 = *(_SLIST_HEADER ***)v46;
                    v90 = 0;
                    while ( 1 )
                    {
                      v91 = ((_BYTE)v90 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
                      v57 = (_SLIST_ENTRY *)a4[v91 + 2];
                      v92 = &a4[v91];
                      if ( v57 )
                      {
                        if ( (*((_DWORD *)&v57[2].Next + 3) & 1) == 0
                          && v57 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                      (volatile signed __int64 *)v92 + 2,
                                                      v46,
                                                      (signed __int64)v57) )
                        {
                          goto LABEL_196;
                        }
                      }
                      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v92 + 2, v46, 0LL) )
                      {
                        goto LABEL_8;
                      }
                      if ( (unsigned int)++v90 >= 0x10 )
                        goto LABEL_86;
                    }
                  }
                }
              }
            }
            continue;
          }
          _m_prefetchw((const void *)(v46 + 44));
          if ( _InterlockedAnd((volatile signed __int32 *)(v46 + 44), 0xFFFFFFF9) == 6 )
          {
            v125 = (_SLIST_ENTRY *)(v46 + 48);
            v126 = **(_SLIST_HEADER ***)v46;
            *(_QWORD *)v46 = 0LL;
            goto LABEL_251;
          }
          if ( sub_180014FCC((__int64)v86, v46) )
          {
            do
            {
              v131 = *(_DWORD *)(v46 + 44);
              if ( !v131 || (v131 & 2) != 0 )
                goto LABEL_252;
            }
            while ( v131 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v131 | 2, v131) );
            a4 = *(_SLIST_HEADER ***)v46;
            v132 = 0;
            while ( 1 )
            {
              v133 = ((_BYTE)v132 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
              v134 = a4[v133 + 2];
              v135 = &a4[v133];
              if ( v134 )
              {
                if ( (*((_DWORD *)&v134[2].HeaderX64 + 3) & 1) == 0
                  && v134 == (_SLIST_HEADER *)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)v135 + 2,
                                                v46,
                                                (signed __int64)v134) )
                {
                  _m_prefetchw((char *)&v134[2].HeaderX64 + 12);
                  if ( _InterlockedAnd((volatile signed __int32 *)&v134[2].HeaderX64 + 3, 0xFFFFFFFD) == 2 )
                  {
                    v126 = *(_SLIST_HEADER **)v134->Alignment;
                    v134->Alignment = 0LL;
                    v125 = (_SLIST_ENTRY *)&v134[3];
LABEL_251:
                    RtlInterlockedPushEntrySList_0(v126, v125);
                  }
                  goto LABEL_252;
                }
              }
              else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v135 + 2, v46, 0LL) )
              {
                goto LABEL_252;
              }
              if ( (unsigned int)++v132 >= 0x10 )
              {
                v125 = (_SLIST_ENTRY *)(v46 + 48);
                v126 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v46 + 24LL)
                                                   + 8LL * *(unsigned __int16 *)(*(_QWORD *)v46 + 172LL)
                                                   + 1192)
                                       + 144LL);
                goto LABEL_251;
              }
            }
          }
          do
          {
LABEL_252:
            v127 = *(_DWORD *)(v46 + 44);
            if ( !v127 || (v127 & 2) != 0 )
              goto LABEL_8;
          }
          while ( v127 != _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 44), v127 | 2, v127) );
          a4 = *(_SLIST_HEADER ***)v46;
          v128 = 0;
          while ( 1 )
          {
            v129 = ((_BYTE)v128 + (unsigned __int8)*((_WORD *)a4 + 87)) & 0xF;
            v57 = (_SLIST_ENTRY *)a4[v129 + 2];
            v130 = &a4[v129];
            if ( v57 )
            {
              if ( (*((_DWORD *)&v57[2].Next + 3) & 1) == 0
                && v57 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)v130 + 2,
                                            v46,
                                            (signed __int64)v57) )
              {
LABEL_196:
                _m_prefetchw((char *)&v57[2].Next + 12);
                v111 = _InterlockedAnd((volatile signed __int32 *)&v57[2].Next + 3, 0xFFFFFFFD);
LABEL_197:
                if ( v111 == 2 )
                {
                  v112 = (_SLIST_HEADER *)v57->Next->Next;
                  v57->Next = 0LL;
                  RtlInterlockedPushEntrySList_0(v112, v57 + 3);
                }
                goto LABEL_8;
              }
            }
            else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v130 + 2, v46, 0LL) )
            {
              goto LABEL_8;
            }
            if ( (unsigned int)++v128 >= 0x10 )
            {
LABEL_86:
              RtlInterlockedPushEntrySList_0(
                (PSLIST_HEADER)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v46 + 24LL)
                                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v46 + 172LL)
                                          + 1192)
                              + 144LL),
                (PSLIST_ENTRY)(v46 + 48));
              goto LABEL_8;
            }
          }
        }
      }
      else
      {
        v95 = sub_1800722B4(SRWLock);
        v46 = v95;
        if ( v95 )
        {
          *(_QWORD *)(v95 + 8) = 0LL;
          goto LABEL_136;
        }
      }
      sub_180013AC8((__int64)SRWLock, (__int64 *)v81);
    }
    return 0LL;
  }
}
