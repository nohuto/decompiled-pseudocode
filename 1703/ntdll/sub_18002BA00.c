/*
 * XREFs of sub_18002BA00 @ 0x18002BA00
 * Callers:
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_180006EE8 @ 0x180006EE8 (sub_180006EE8.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180023688 @ 0x180023688 (sub_180023688.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 *     sub_18002F644 @ 0x18002F644 (sub_18002F644.c)
 *     sub_180077A0C @ 0x180077A0C (sub_180077A0C.c)
 *     sub_180078CB0 @ 0x180078CB0 (sub_180078CB0.c)
 *     sub_1800822D0 @ 0x1800822D0 (sub_1800822D0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedPushListSList @ 0x1800A8E30 (RtlInterlockedPushListSList.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A9950 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FF678 @ 0x1800FF678 (sub_1800FF678.c)
 *     sub_1800FFBCC @ 0x1800FFBCC (sub_1800FFBCC.c)
 *     sub_1800FFC68 @ 0x1800FFC68 (sub_1800FFC68.c)
 */

__int64 __fastcall sub_18002BA00(PRTL_SRWLOCK SRWLock, unsigned __int16 a2, _SLIST_ENTRY *a3, char a4)
{
  bool v4; // zf
  __int64 v6; // r15
  unsigned __int16 *v7; // rsi
  struct _TEB *v8; // rbp
  __int64 UniqueThread_low; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  char *Ptr; // r13
  __int64 v13; // rbx
  int v14; // eax
  volatile signed __int64 *v15; // rcx
  unsigned int v16; // r9d
  int v17; // r8d
  signed __int32 v18; // edx
  __int64 v19; // r10
  struct _TEB *v20; // rcx
  __int64 HeapData_high; // r8
  unsigned __int64 v22; // r11
  int v23; // r9d
  unsigned __int64 v24; // r8
  __int64 *v25; // r12
  __int64 *v26; // rdi
  unsigned int v27; // r9d
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r12d
  __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  unsigned int v36; // r8d
  __int64 *v37; // rax
  __int64 v38; // r9
  PSLIST_HEADER *v39; // rcx
  volatile signed __int64 *v40; // rax
  unsigned int v41; // r12d
  unsigned int v42; // r8d
  PSLIST_HEADER *v43; // rbx
  PSLIST_HEADER v44; // rdx
  _SLIST_HEADER *v45; // rbp
  _SLIST_HEADER *v46; // r12
  PSLIST_ENTRY v47; // rbx
  _SLIST_ENTRY *v48; // r12
  volatile signed __int64 *v49; // rcx
  signed __int64 v50; // rtt
  signed __int32 v51; // eax
  PSILO_USER_SHARED_DATA v52; // rcx
  __int64 v53; // rcx
  signed __int32 v54; // eax
  int v55; // ecx
  __int64 v56; // r9
  _QWORD **v57; // rdx
  unsigned int Alignment_low; // ecx
  PSILO_USER_SHARED_DATA SharedData; // r8
  __int64 v60; // r8
  PSILO_USER_SHARED_DATA v61; // r8
  __int64 UserModeGlobalLogger; // r8
  _SLIST_ENTRY *v63; // rbx
  _SLIST_ENTRY *v64; // rdx
  _SLIST_HEADER *v65; // rdi
  unsigned int v66; // ebp
  volatile signed __int64 *v67; // rsi
  __int64 v68; // r9
  unsigned int v69; // r10d
  BOOL v70; // r8d
  PVOID v71; // rax
  char v72; // r11
  char v73; // cl
  __int64 v74; // r10
  char v75; // cl
  unsigned int v76; // edx
  unsigned int v77; // edx
  unsigned int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // r12
  unsigned __int64 v81; // rax
  PSLIST_ENTRY v82; // rax
  _SLIST_ENTRY *v83; // rbx
  __int64 v84; // rax
  signed __int32 v85; // eax
  PSILO_USER_SHARED_DATA v86; // rcx
  __int64 v87; // rcx
  signed __int32 v88; // eax
  int v89; // ecx
  __int64 v90; // r9
  unsigned __int16 v91; // ax
  __int64 v92; // rax
  int v93; // ebx
  ULONG CurrentProcessorNumber; // eax
  int v95; // ecx
  _SLIST_ENTRY *v96; // rdx
  char *v97; // r12
  USHORT *v98; // rcx
  _SLIST_HEADER *Next; // rcx
  signed __int32 v100; // eax
  _SLIST_HEADER *v101; // rcx
  _SLIST_ENTRY *v102; // rdx
  _SLIST_HEADER **v103; // rax
  _SLIST_HEADER *v104; // rcx
  _SLIST_HEADER *v105; // rcx
  _SLIST_HEADER *v106; // rcx
  _SLIST_HEADER *v107; // rcx
  signed __int32 v108; // ett
  volatile signed __int64 *v109; // rax
  signed __int32 v110; // eax
  unsigned int i; // ecx
  __int64 v112; // r9
  _SLIST_ENTRY *v113; // rdx
  _SLIST_HEADER *v114; // rcx
  signed __int32 v115; // eax
  unsigned int j; // ecx
  __int64 v117; // r9
  signed __int32 v118; // eax
  int v119; // ecx
  __int64 v120; // r9
  _QWORD **v121; // rdx
  signed __int32 v122[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int16 *v123; // [rsp+28h] [rbp-A0h]
  volatile signed __int64 *v124; // [rsp+30h] [rbp-98h]
  PSLIST_HEADER v125; // [rsp+38h] [rbp-90h]
  unsigned int v126; // [rsp+40h] [rbp-88h]
  signed __int64 v127; // [rsp+48h] [rbp-80h]
  PSLIST_HEADER v128; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v129; // [rsp+58h] [rbp-70h]
  __int64 v130; // [rsp+60h] [rbp-68h]
  PSLIST_HEADER ListHead; // [rsp+68h] [rbp-60h]
  int v132; // [rsp+70h] [rbp-58h]
  unsigned __int16 *v133; // [rsp+78h] [rbp-50h]
  PSLIST_ENTRY ListEntry; // [rsp+D0h] [rbp+8h]
  unsigned int ListEntrya; // [rsp+D0h] [rbp+8h]
  PSLIST_ENTRY ListEntryb; // [rsp+D0h] [rbp+8h]
  PSLIST_ENTRY ListEntryc; // [rsp+D0h] [rbp+8h]
  _SLIST_ENTRY *ListEntryd; // [rsp+D0h] [rbp+8h]
  int v139; // [rsp+D8h] [rbp+10h]
  int v140; // [rsp+D8h] [rbp+10h]
  unsigned int v141; // [rsp+D8h] [rbp+10h]
  _SLIST_ENTRY *v142; // [rsp+E0h] [rbp+18h]

  v142 = a3;
  v4 = ((__int64)SRWLock[84].Ptr & 1) == 0;
  LODWORD(v6) = 0;
  v7 = (unsigned __int16 *)&SRWLock[84].Ptr + 2 * a2 + 2;
  v133 = v7;
  if ( v4 && (*((_BYTE *)v7 + 3) & 1) != 0 )
  {
    v8 = NtCurrentTeb();
    LODWORD(v6) = LOWORD(v8->HeapData) - 1;
    UniqueThread_low = LODWORD(v8->ClientId.UniqueThread);
    if ( (int)v6 < 0 || qword_1801593E8[(int)v6] != UniqueThread_low )
    {
      v93 = dword_1801593E4;
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v6 = v93 & CurrentProcessorNumber;
      LOWORD(v8->HeapData) = (v93 & CurrentProcessorNumber) + 1;
      qword_1801593E8[v6] = UniqueThread_low;
    }
  }
  v10 = *((unsigned __int8 *)v7 + 2);
  v11 = 16LL * *v7;
  v130 = v11;
  ListHead = (PSLIST_HEADER)&SRWLock[6 * (unsigned int)v6 + 408];
  if ( (_DWORD)v6 )
    Ptr = (char *)SRWLock[v10 + 278].Ptr + 192 * (unsigned int)v6 - 192;
  else
    Ptr = (char *)SRWLock[v10 + 149].Ptr;
LABEL_7:
  while ( 2 )
  {
    while ( 2 )
    {
      v13 = *((_QWORD *)Ptr + 1);
      if ( v13 )
      {
        v14 = HIWORD(*(_DWORD *)(v13 + 32));
        v139 = 0;
        v15 = *(volatile signed __int64 **)(*(_QWORD *)Ptr + 24LL);
        v124 = v15;
        if ( (v14 & 0x8000) != 0 )
        {
          v139 = 1;
          v97 = (char *)v15 + 4 * *((unsigned __int16 *)Ptr + 86);
          if ( (v97[679] & 1) == 0 && (int)sub_180078CB0(v15, (unsigned __int8)v97[678], a3, 1LL) >= 0 )
          {
            v97[679] |= 1u;
            v98 = RtlGetCurrentServiceSessionId()
                ? NtCurrentPeb()->SharedData->UserModeGlobalLogger
                : (USHORT *)2147353472;
            if ( *(_BYTE *)v98 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              sub_1800FF678(*((_QWORD *)v124 + 3), (unsigned __int8)v97[678]);
          }
        }
        v16 = 100;
        if ( MEMORY[0x7FFE036A] <= 1u )
          v16 = 0;
        v17 = 0;
        while ( 1 )
        {
          v18 = *(_DWORD *)(v13 + 32);
          if ( (v18 & 0x80000000) == 0 )
          {
            if ( !(_WORD)v18 )
              goto LABEL_157;
            if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 32), v18 | 0x80000000, v18) )
              break;
          }
          if ( ++v17 > v16 )
            goto LABEL_157;
        }
        if ( v18 == -1 )
          goto LABEL_157;
        v19 = *(_QWORD *)(v13 + 8);
        if ( !v19 || *(char **)v13 != Ptr || !(_WORD)v18 )
        {
          *(_DWORD *)(v13 + 32) = v18;
LABEL_157:
          v33 = 0LL;
          goto LABEL_26;
        }
        v20 = NtCurrentTeb();
        HeapData_high = HIWORD(v20->HeapData);
        v22 = byte_180123520[*((unsigned __int16 *)Ptr + 86)];
        v23 = *((unsigned __int8 *)qword_180159900 + HeapData_high);
        HIWORD(v20->HeapData) = (unsigned __int8)(HeapData_high + 1);
        v24 = *(_QWORD *)(v19 + 32);
        v25 = *(__int64 **)(v19 + 40);
        if ( v24 < 0x40 )
        {
          if ( v24 < v22 )
            LODWORD(v22) = *(_QWORD *)(v19 + 32);
        }
        else
        {
          ListEntry = (PSLIST_ENTRY)&v25[(v24 - 1) >> 6];
          v25 += (unsigned __int64)(unsigned int)(v18 >> 16) >> 6;
          v26 = v25;
          do
          {
            if ( *v25 != -1 )
              break;
            v37 = *(__int64 **)(v19 + 40);
            if ( v25 != (__int64 *)ListEntry )
              v37 = v25 + 1;
            v25 = v37;
          }
          while ( v37 != v26 );
          v11 = v130;
          if ( v25 == (__int64 *)ListEntry )
          {
            v36 = v24 & 0x3F;
            if ( v36 )
            {
              if ( v36 < v22 )
                LODWORD(v22) = *(_DWORD *)(v19 + 32) & 0x3F;
            }
          }
        }
        v27 = (unsigned int)(v22 * v23) >> 7;
        if ( (unsigned int)v22 >= 0x40 )
        {
          v29 = -1LL;
        }
        else
        {
          _BitScanForward64(&v28, ~*v25);
          LOBYTE(v27) = v28 + v27;
          v29 = ((1LL << v22) - 1) << v28;
        }
        _BitScanForward64(&v30, ~__ROR8__(*v25 | ~v29, v27));
        LODWORD(v30) = ((_BYTE)v27 + (_BYTE)v30) & 0x3F;
        v31 = *v25 | (1LL << v30);
        v132 = v30;
        *v25 = v31;
        v32 = v30 + ((unsigned int)(((__int64)v25 - *(_QWORD *)(v19 + 40)) >> 3) << 6);
        *(_DWORD *)(v13 + 32) = (v32 << 16) | ((unsigned __int16)v18 - 1);
        LODWORD(v30) = qword_18015BFE8 ^ (unsigned int)v124 ^ v19 ^ *(_DWORD *)(v19 + 24);
        v33 = v19 + v32 * WORD1(v30) + (unsigned __int16)v30;
        if ( (*(_BYTE *)(v33 + 15) & 0x3F) != 0 )
        {
          sub_1800A4DFC(14, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL), v33, 0, 0LL, 0LL);
          goto LABEL_157;
        }
LABEL_26:
        if ( v139 && dword_1801593E4 + 1 < (unsigned int)dword_1801593E0 )
          _InterlockedCompareExchange(&dword_1801593E4, 2 * (dword_1801593E4 + 1) - 1, dword_1801593E4);
        if ( v33 )
        {
          if ( (a4 & 8) != 0 )
            memset((void *)(v33 + 16), 0, v11 - 8);
          v34 = v11 - (_QWORD)v142;
          if ( v34 >= 0x3F )
          {
            *(_QWORD *)(v33 + 16LL * *v7) = v34;
            *(_BYTE *)(v33 + 15) = -65;
          }
          else
          {
            *(_BYTE *)(v33 + 15) = v34 | 0x80;
          }
          return v33 + 16;
        }
      }
      v38 = *(_QWORD *)Ptr;
      v125 = *(PSLIST_HEADER *)Ptr;
LABEL_45:
      v129 = 0LL;
LABEL_46:
      v39 = (PSLIST_HEADER *)(Ptr + 16);
      while ( 2 )
      {
        v40 = 0LL;
        v126 = 0;
        v124 = 0LL;
        v41 = 0;
        v42 = 0;
        v43 = v39;
        do
        {
          v44 = *v43;
          v128 = v44;
          if ( !v44 )
            goto LABEL_49;
          ListEntrya = LOWORD(v44[2].Alignment);
          Alignment_low = ListEntrya;
          if ( ListEntrya <= v42 )
            goto LABEL_78;
          if ( (dword_18015BFDC & 4) == 0 )
          {
            v91 = *((_WORD *)Ptr + 86);
            if ( v91 <= 0x70u )
            {
              if ( *((_DWORD *)Ptr + 40) >= 16 * (unsigned int)(unsigned __int16)word_1801195E0[v91] )
              {
                LOWORD(Alignment_low) = v44[2].Alignment;
                Alignment_low = (unsigned __int16)Alignment_low;
                LODWORD(v38) = (unsigned __int16)(*((_WORD *)&v44[2].HeaderX64 + 4) >> 2) > (unsigned __int16)Alignment_low;
                goto LABEL_81;
              }
              Alignment_low = LOWORD(v44[2].Alignment);
            }
          }
          LOBYTE(v38) = 0;
LABEL_81:
          v140 = v38;
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && SharedData->ServiceSessionId )
            v60 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          else
            v60 = 2147353482LL;
          if ( *(_BYTE *)v60
            || ((v61 = NtCurrentPeb()->SharedData) == 0LL || !v61->ServiceSessionId
              ? (UserModeGlobalLogger = 2147353472LL)
              : (UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger),
                *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0) )
          {
            if ( !(_BYTE)v38 )
              goto LABEL_88;
            sub_1800FFBCC(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL),
              v44->Region,
              *((unsigned __int16 *)Ptr + 86));
            v44 = v128;
            Alignment_low = ListEntrya;
            LODWORD(v38) = v140;
          }
          if ( (_BYTE)v38 )
          {
            v42 = v126;
LABEL_78:
            v40 = v124;
            goto LABEL_49;
          }
LABEL_88:
          v42 = Alignment_low;
          v129 = (_SLIST_ENTRY *)v44;
          v126 = Alignment_low;
          v40 = (volatile signed __int64 *)&Ptr[8 * v41 + 16];
          v124 = v40;
LABEL_49:
          ++v41;
          ++v43;
        }
        while ( v41 < 0x10 );
        v45 = ListHead;
        if ( v40 )
        {
          v128 = (PSLIST_HEADER)(*(_QWORD *)(v125[1].Region + 8LL * *((unsigned __int16 *)Ptr + 86) + 1192) + 144LL);
          v46 = v128;
          v47 = RtlInterlockedPopEntrySList(v128);
          if ( v47 )
          {
            while ( 1 )
            {
              v95 = *((_DWORD *)&v47[-1].Next + 3);
              v96 = v47;
              ListEntryd = v47;
              v47 -= 3;
              if ( (v95 & 1) != 0 )
                break;
              _m_prefetchw((char *)&v47[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v47[2].Next + 3, 0xFFFFFFFD) == 2 )
              {
                Next = (_SLIST_HEADER *)v47->Next->Next;
                v47->Next = 0LL;
                RtlInterlockedPushEntrySList_0(Next, v96);
              }
              v47 = RtlInterlockedPopEntrySList(v46);
              if ( !v47 )
                goto LABEL_52;
            }
            if ( !(unsigned int)sub_1800822D0(v47, Ptr) )
            {
              RtlInterlockedPushEntrySList_0(v46, ListEntryd);
              v47 = 0LL;
            }
          }
LABEL_52:
          v48 = v129;
          v49 = v124;
          v50 = (signed __int64)v129;
          if ( v50 != _InterlockedCompareExchange64(v124, (signed __int64)v47, (signed __int64)v129) )
          {
            v39 = (PSLIST_HEADER *)(Ptr + 16);
            if ( !v47 )
              continue;
            RtlInterlockedPushEntrySList_0(v128, v47 + 3);
            goto LABEL_46;
          }
          if ( !v47 )
            *((_WORD *)Ptr + 87) = (unsigned __int8)(((char *)v49 - Ptr - 16) >> 3);
          if ( v48 )
          {
            _m_prefetchw((char *)&v48[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFFD) != 2 )
              goto LABEL_57;
            v104 = (_SLIST_HEADER *)v48->Next->Next;
            v48->Next = 0LL;
            RtlInterlockedPushEntrySList_0(v104, v48 + 3);
            goto LABEL_45;
          }
        }
        else
        {
          v48 = 0LL;
        }
        break;
      }
      v63 = 0LL;
      v125 = (PSLIST_HEADER)(*(_QWORD *)(v125[1].Region + 8LL * *((unsigned __int16 *)Ptr + 86) + 1192) + 144LL);
      ListEntryb = RtlInterlockedPopEntrySList(v125);
      v64 = ListEntryb;
      if ( !ListEntryb )
        goto LABEL_57;
      v65 = v125;
      v66 = 0;
      v67 = 0LL;
      while ( 2 )
      {
        v48 = v64 - 3;
        if ( (*((_DWORD *)&v64[-1].Next + 3) & 1) == 0 )
        {
          _m_prefetchw((char *)&v48[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFFD) != 2 )
            goto LABEL_195;
          goto LABEL_194;
        }
        if ( !(unsigned int)sub_1800822D0(v48, Ptr) )
        {
          v109 = (volatile signed __int64 *)ListEntryb;
          v48[3].Next = v63;
          v63 = v48 + 3;
          if ( v66 )
            v109 = v67;
          ++v66;
          v67 = v109;
          goto LABEL_195;
        }
        _m_prefetchw((char *)&v48[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFFD) == 2 )
        {
          v64 = ListEntryb;
LABEL_194:
          v106 = (_SLIST_HEADER *)v48->Next->Next;
          v48->Next = 0LL;
          RtlInterlockedPushEntrySList_0(v106, v64);
          goto LABEL_195;
        }
        if ( sub_180023688((__int64)Ptr, (__int64)v48) )
          break;
LABEL_195:
        v48 = 0LL;
        ListEntryb = RtlInterlockedPopEntrySList(v65);
        v64 = ListEntryb;
        if ( ListEntryb )
          continue;
        break;
      }
      v11 = v130;
      v4 = v66 == 0;
      v124 = v67;
      v7 = v133;
      v141 = v66;
      v45 = ListHead;
      if ( !v4 )
        RtlInterlockedPushListSList(v125, v63, v124, v141);
LABEL_57:
      if ( v48 )
      {
        *((_BYTE *)&v48[2].Next + 11) = v6;
        do
        {
          v51 = *((_DWORD *)&v48[2].Next + 3);
          if ( !v51 || (v51 & 6) != 0 )
            goto LABEL_7;
        }
        while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v51 | 6, v51) );
        a3 = v48->Next;
        if ( (char *)v48->Next != Ptr )
        {
          _m_prefetchw((char *)&v48[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) != 6 )
          {
            if ( !sub_180023688((__int64)a3, (__int64)v48) )
              continue;
            do
            {
              v110 = *((_DWORD *)&v48[2].Next + 3);
              if ( !v110 || (v110 & 2) != 0 )
                goto LABEL_7;
            }
            while ( v110 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v110 | 2, v110) );
            a3 = v48->Next;
            for ( i = 0; i < 0x10; ++i )
            {
              v112 = ((_BYTE)i + (unsigned __int8)*((_WORD *)&a3[10].Next + 7)) & 0xF;
              v57 = (_QWORD **)*((_QWORD *)&a3[1].Next + v112);
              if ( v57 )
              {
                if ( (*((_DWORD *)v57 + 11) & 1) == 0
                  && v57 == (_QWORD **)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&a3[1].Next + v112,
                                         (signed __int64)v48,
                                         (signed __int64)v57) )
                {
                  goto LABEL_181;
                }
              }
              else if ( !_InterlockedCompareExchange64(
                           (volatile signed __int64 *)&a3[1].Next + v112,
                           (signed __int64)v48,
                           0LL) )
              {
                goto LABEL_7;
              }
            }
LABEL_187:
            v103 = (_SLIST_HEADER **)v48->Next;
            v102 = v48 + 3;
            goto LABEL_188;
          }
          v102 = v48 + 3;
          v101 = (_SLIST_HEADER *)v48->Next->Next;
          v48->Next = 0LL;
LABEL_184:
          RtlInterlockedPushEntrySList_0(v101, v102);
          continue;
        }
        v52 = NtCurrentPeb()->SharedData;
        if ( v52 && v52->ServiceSessionId )
          v53 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v53 = 2147353472LL;
        if ( *(_BYTE *)v53 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFC68(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL), *((_QWORD *)&v48->Next + 1));
        v48 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)Ptr + 1, (__int64)v48);
        if ( v48 )
        {
          _m_prefetchw((char *)&v48[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v48[2].Next + 3, 0xFFFFFFF9) == 6 )
          {
            v105 = (_SLIST_HEADER *)v48->Next->Next;
            v48->Next = 0LL;
            RtlInterlockedPushEntrySList_0(v105, v48 + 3);
            continue;
          }
          if ( LOWORD(v48[2].Next) && !sub_180006EE8((__int64)Ptr, (__int64)v48) )
          {
            do
            {
              v54 = *((_DWORD *)&v48[2].Next + 3);
              if ( !v54 || (v54 & 2) != 0 )
                goto LABEL_7;
            }
            while ( v54 != _InterlockedCompareExchange((volatile signed __int32 *)&v48[2].Next + 3, v54 | 2, v54) );
            a3 = v48->Next;
            v55 = 0;
LABEL_74:
            v56 = ((_BYTE)v55 + (unsigned __int8)*((_WORD *)&a3[10].Next + 7)) & 0xF;
            v57 = (_QWORD **)*((_QWORD *)&a3[1].Next + v56);
            if ( !v57 )
            {
              if ( !_InterlockedCompareExchange64(
                      (volatile signed __int64 *)&a3[1].Next + v56,
                      (signed __int64)v48,
                      0LL) )
                continue;
LABEL_186:
              if ( (unsigned int)++v55 >= 0x10 )
                goto LABEL_187;
              goto LABEL_74;
            }
            if ( (*((_DWORD *)v57 + 11) & 1) != 0
              || v57 != (_QWORD **)_InterlockedCompareExchange64(
                                     (volatile signed __int64 *)&a3[1].Next + v56,
                                     (signed __int64)v48,
                                     (signed __int64)v57) )
            {
              goto LABEL_186;
            }
            _m_prefetchw((char *)v57 + 44);
            v100 = *((_DWORD *)v57 + 11);
            do
            {
              v108 = v100;
              v100 = _InterlockedCompareExchange((volatile signed __int32 *)v57 + 11, v100 & 0xFFFFFFFD, v100);
            }
            while ( v108 != v100 );
LABEL_182:
            if ( v100 == 2 )
            {
              v101 = (_SLIST_HEADER *)**v57;
              *v57 = 0LL;
              v102 = (_SLIST_ENTRY *)(v57 + 6);
              goto LABEL_184;
            }
          }
        }
        continue;
      }
      break;
    }
    v68 = *((unsigned int *)Ptr + 40);
    v69 = *((unsigned __int8 *)v7 + 2);
    v70 = ((__int64)SRWLock[84].Ptr & 2) != 0;
    do
    {
      v71 = SRWLock[10].Ptr;
      v72 = 0;
      if ( (_DWORD)v71 == v69 )
      {
        HIDWORD(v127) = HIDWORD(v71) + 1;
        if ( HIDWORD(v71) > 7 )
        {
          v72 = 1;
          HIDWORD(v127) = 0;
        }
      }
      else
      {
        v127 = v69 | 0x100000000LL;
      }
    }
    while ( v71 != (PVOID)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)&SRWLock[10],
                            v127,
                            (signed __int64)v71) );
    if ( !v72 || v70 )
    {
      v73 = 3;
      if ( v70 )
        v73 = 4;
      v68 = (unsigned int)v68 >> v73;
    }
    v74 = (unsigned __int16)word_1801194D0[*((unsigned __int8 *)v7 + 2)];
    v75 = (*((_BYTE *)v7 + 3) & 1) - 1;
    if ( (unsigned int)v74 >= 0x100 )
      v75 = *((_BYTE *)v7 + 3) & 1;
    if ( *((_DWORD *)Ptr + 41) )
      --v75;
    v76 = v68;
    if ( (unsigned int)v68 < 1 << (3 - v75) )
      v76 = 1 << (3 - v75);
    if ( v76 < 4 )
    {
      v76 = 4;
    }
    else if ( v76 > 0x400 )
    {
      v76 = 1024;
    }
    v77 = ((((unsigned __int64)v76 + 31) >> 3) & 0xFFFFFFFC) + 68 + (v74 + 16) * v76;
    v78 = 7;
    if ( v77 > 0xF0000 )
    {
      v77 = 983040;
      goto LABEL_118;
    }
    if ( v77 >= 0x80 )
    {
      do
LABEL_118:
        ++v78;
      while ( v77 >> v78 );
      if ( v78 > 0x12 )
        LOBYTE(v78) = 18;
    }
    if ( (*((_BYTE *)v7 + 3) & 6) != 0 )
    {
      LOBYTE(v78) = 18;
    }
    else if ( (_BYTE)v78 != 18 && (unsigned int)v68 < 0x400 )
    {
      LOBYTE(v68) = 0;
      goto LABEL_125;
    }
    v68 = 1LL;
LABEL_125:
    v79 = sub_18002F644(SRWLock, (unsigned __int8)v78, v74 + 16, v68);
    v80 = v79;
    if ( !v79 )
      return 0LL;
    v81 = 1LL << *(_BYTE *)(v79 + 16);
    if ( v81 > 0xF0000 )
      v81 = 983040LL;
    ListEntryc = (PSLIST_ENTRY)(v81 + *(unsigned __int16 *)(v80 + 18));
    _InterlockedIncrement((volatile signed __int32 *)&SRWLock[7]);
    v82 = RtlInterlockedPopEntrySList(v45);
    if ( v82 )
    {
      v83 = v82 - 3;
LABEL_130:
      if ( !v83 )
        goto LABEL_274;
      *((_BYTE *)&v83[2].Next + 11) = v6;
      v84 = *((unsigned __int8 *)v7 + 2);
      v123 = v7;
      sub_18002F120(
        (_DWORD)SRWLock,
        (_DWORD)v83,
        v80,
        (unsigned __int16)word_1801194D0[v84],
        (__int64)ListEntryc,
        (__int64)v7);
      _InterlockedOr(v122, 0);
      *(_DWORD *)(v80 + 20) = -253701952;
      do
      {
        v85 = *((_DWORD *)&v83[2].Next + 3);
        if ( !v85 || (v85 & 6) != 0 )
          goto LABEL_246;
      }
      while ( v85 != _InterlockedCompareExchange((volatile signed __int32 *)&v83[2].Next + 3, v85 | 6, v85) );
      a3 = v83->Next;
      if ( (char *)v83->Next != Ptr )
      {
        _m_prefetchw((char *)&v83[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v83[2].Next + 3, 0xFFFFFFF9) == 6 )
        {
          v113 = v83 + 3;
          v114 = (_SLIST_HEADER *)v83->Next->Next;
          v83->Next = 0LL;
          goto LABEL_245;
        }
        if ( !sub_180023688((__int64)a3, (__int64)v83) )
          goto LABEL_246;
        do
        {
          v118 = *((_DWORD *)&v83[2].Next + 3);
          if ( !v118 || (v118 & 2) != 0 )
            goto LABEL_246;
        }
        while ( v118 != _InterlockedCompareExchange((volatile signed __int32 *)&v83[2].Next + 3, v118 | 2, v118) );
        a3 = v83->Next;
        v119 = 0;
        while ( 1 )
        {
          v120 = ((_BYTE)v119 + (unsigned __int8)*((_WORD *)&a3[10].Next + 7)) & 0xF;
          v121 = (_QWORD **)*((_QWORD *)&a3[1].Next + v120);
          if ( v121 )
          {
            if ( (*((_DWORD *)v121 + 11) & 1) == 0
              && v121 == (_QWORD **)_InterlockedCompareExchange64(
                                      (volatile signed __int64 *)&a3[1].Next + v120,
                                      (signed __int64)v83,
                                      (signed __int64)v121) )
            {
              _m_prefetchw((char *)v121 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v121 + 11, 0xFFFFFFFD) == 2 )
              {
                v114 = (_SLIST_HEADER *)**v121;
                *v121 = 0LL;
                v113 = (_SLIST_ENTRY *)(v121 + 6);
LABEL_245:
                RtlInterlockedPushEntrySList_0(v114, v113);
              }
              do
              {
LABEL_246:
                v115 = *((_DWORD *)&v83[2].Next + 3);
                if ( !v115 || (v115 & 2) != 0 )
                  goto LABEL_7;
              }
              while ( v115 != _InterlockedCompareExchange((volatile signed __int32 *)&v83[2].Next + 3, v115 | 2, v115) );
              a3 = v83->Next;
              for ( j = 0; j < 0x10; ++j )
              {
                v117 = ((_BYTE)j + (unsigned __int8)*((_WORD *)&a3[10].Next + 7)) & 0xF;
                v57 = (_QWORD **)*((_QWORD *)&a3[1].Next + v117);
                if ( v57 )
                {
                  if ( (*((_DWORD *)v57 + 11) & 1) == 0
                    && v57 == (_QWORD **)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)&a3[1].Next + v117,
                                           (signed __int64)v83,
                                           (signed __int64)v57) )
                  {
LABEL_181:
                    _m_prefetchw((char *)v57 + 44);
                    v100 = _InterlockedAnd((volatile signed __int32 *)v57 + 11, 0xFFFFFFFD);
                    goto LABEL_182;
                  }
                }
                else if ( !_InterlockedCompareExchange64(
                             (volatile signed __int64 *)&a3[1].Next + v117,
                             (signed __int64)v83,
                             0LL) )
                {
                  goto LABEL_7;
                }
              }
LABEL_253:
              v103 = (_SLIST_HEADER **)v83->Next;
              v102 = v83 + 3;
LABEL_188:
              v101 = (_SLIST_HEADER *)(*(_QWORD *)((*v103)[1].Region + 8LL * *((unsigned __int16 *)v103 + 86) + 1192)
                                     + 144LL);
              goto LABEL_184;
            }
          }
          else if ( !_InterlockedCompareExchange64(
                       (volatile signed __int64 *)&a3[1].Next + v120,
                       (signed __int64)v83,
                       0LL) )
          {
            goto LABEL_246;
          }
          if ( (unsigned int)++v119 >= 0x10 )
          {
            v113 = v83 + 3;
            v114 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v83->Next->Next[1].Next + 1)
                                               + 8LL * *((unsigned __int16 *)&v83->Next[10].Next + 6)
                                               + 1192)
                                   + 144LL);
            goto LABEL_245;
          }
        }
      }
      v86 = NtCurrentPeb()->SharedData;
      if ( v86 && v86->ServiceSessionId )
        v87 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        v87 = 2147353472LL;
      if ( *(_BYTE *)v87 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FFC68(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)Ptr + 24LL) + 24LL), *((_QWORD *)&v83->Next + 1));
      v83 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)Ptr + 1, (__int64)v83);
      if ( v83 )
      {
        _m_prefetchw((char *)&v83[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v83[2].Next + 3, 0xFFFFFFF9) == 6 )
        {
          v107 = (_SLIST_HEADER *)v83->Next->Next;
          v83->Next = 0LL;
          RtlInterlockedPushEntrySList_0(v107, v83 + 3);
          continue;
        }
        if ( LOWORD(v83[2].Next) && !sub_180006EE8((__int64)Ptr, (__int64)v83) )
        {
          do
          {
            v88 = *((_DWORD *)&v83[2].Next + 3);
            if ( !v88 || (v88 & 2) != 0 )
              goto LABEL_7;
          }
          while ( v88 != _InterlockedCompareExchange((volatile signed __int32 *)&v83[2].Next + 3, v88 | 2, v88) );
          a3 = v83->Next;
          v89 = 0;
          while ( 1 )
          {
            v90 = ((_BYTE)v89 + (unsigned __int8)*((_WORD *)&a3[10].Next + 7)) & 0xF;
            v57 = (_QWORD **)*((_QWORD *)&a3[1].Next + v90);
            if ( v57 )
            {
              if ( (*((_DWORD *)v57 + 11) & 1) == 0
                && v57 == (_QWORD **)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)&a3[1].Next + v90,
                                       (signed __int64)v83,
                                       (signed __int64)v57) )
              {
                goto LABEL_181;
              }
            }
            else if ( !_InterlockedCompareExchange64(
                         (volatile signed __int64 *)&a3[1].Next + v90,
                         (signed __int64)v83,
                         0LL) )
            {
              goto LABEL_7;
            }
            if ( (unsigned int)++v89 >= 0x10 )
              goto LABEL_253;
          }
        }
      }
      continue;
    }
    break;
  }
  v92 = sub_180077A0C(SRWLock);
  v83 = (_SLIST_ENTRY *)v92;
  if ( v92 )
  {
    *(_QWORD *)(v92 + 8) = 0LL;
    goto LABEL_130;
  }
LABEL_274:
  sub_180022088((__int64)SRWLock, (__int64 *)v80);
  return 0LL;
}
