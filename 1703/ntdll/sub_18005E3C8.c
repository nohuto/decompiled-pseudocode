/*
 * XREFs of sub_18005E3C8 @ 0x18005E3C8
 * Callers:
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 *     EtwEventWriteTransfer @ 0x18005F4F0 (EtwEventWriteTransfer.c)
 *     EtwEventWriteString @ 0x180104440 (EtwEventWriteString.c)
 * Callees:
 *     sub_18005F2B4 @ 0x18005F2B4 (sub_18005F2B4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     sub_180104A98 @ 0x180104A98 (sub_180104A98.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 *     sub_180104C60 @ 0x180104C60 (sub_180104C60.c)
 */

__int64 __fastcall sub_18005E3C8(
        unsigned __int16 *a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v11; // r8
  unsigned int v13; // r12d
  unsigned int v14; // r9d
  int v15; // eax
  _BYTE *v16; // r15
  _WORD *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdi
  unsigned int v23; // edx
  unsigned __int16 v24; // r10
  __int16 v25; // r8
  unsigned int v26; // r9d
  char v27; // al
  __int64 v28; // r15
  __int64 v29; // rax
  GUID ActivityId; // xmm0
  unsigned int v31; // esi
  void *v32; // rcx
  _BYTE *v33; // rdi
  __int64 v34; // rsi
  unsigned int v35; // r12d
  int v36; // edx
  char v37; // al
  void *v38; // rcx
  unsigned __int64 v39; // rax
  struct _TEB *v40; // rcx
  size_t v42; // rbx
  char *v43; // r13
  unsigned __int16 *v44; // rax
  unsigned int v45; // edx
  unsigned __int16 v46; // si
  unsigned __int16 v47; // si
  unsigned __int16 *v48; // rdi
  __int64 v49; // rbx
  unsigned __int16 *v50; // rcx
  unsigned __int16 *v51; // rbx
  __int64 v52; // rcx
  unsigned __int16 v53; // ax
  void *v54; // rsp
  ULONG v55; // r15d
  _WORD *v56; // rbx
  unsigned __int16 v57; // di
  _DWORD *v58; // rdx
  void *v59; // rbx
  char v60; // [rsp+0h] [rbp-810h] BYREF
  unsigned __int16 v61; // [rsp+810h] [rbp+0h]
  char v62; // [rsp+814h] [rbp+4h]
  char v63; // [rsp+815h] [rbp+5h]
  char v64; // [rsp+816h] [rbp+6h]
  unsigned __int16 v65[2]; // [rsp+818h] [rbp+8h] BYREF
  int v66; // [rsp+81Ch] [rbp+Ch]
  unsigned __int16 v67; // [rsp+820h] [rbp+10h]
  int v68; // [rsp+824h] [rbp+14h]
  ULONG ReturnLength; // [rsp+828h] [rbp+18h] BYREF
  int v70; // [rsp+82Ch] [rbp+1Ch]
  unsigned int v71; // [rsp+830h] [rbp+20h]
  ULONG v72; // [rsp+834h] [rbp+24h]
  int v73; // [rsp+838h] [rbp+28h]
  unsigned __int16 *v74; // [rsp+840h] [rbp+30h] BYREF
  unsigned int v75; // [rsp+848h] [rbp+38h] BYREF
  void *v76; // [rsp+850h] [rbp+40h] BYREF
  __int64 v77; // [rsp+858h] [rbp+48h]
  __int64 v78; // [rsp+860h] [rbp+50h]
  unsigned __int16 *v79; // [rsp+868h] [rbp+58h]
  unsigned __int64 v80; // [rsp+870h] [rbp+60h] BYREF
  __int64 v81; // [rsp+880h] [rbp+70h]
  void *Src; // [rsp+890h] [rbp+80h]
  void *v83; // [rsp+898h] [rbp+88h]
  _BYTE *v84; // [rsp+8A0h] [rbp+90h]
  char TokenInformation[16]; // [rsp+8C0h] [rbp+B0h] BYREF
  char v86[80]; // [rsp+8D0h] [rbp+C0h] BYREF

  v11 = a2;
  v79 = a1;
  v74 = a1;
  v78 = a9;
  v81 = a10;
  v13 = 0;
  v76 = 0LL;
  v65[0] = 0;
  v67 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (a1[120] & 4) != 0 )
  {
    if ( (unsigned __int8)sub_180104A98(a1, 4LL, a2) )
    {
      v54 = alloca(2064LL);
      v76 = &v60;
      sub_180104C60(&v76, v65);
    }
    v11 = a2;
  }
  v14 = 0;
  v71 = 0;
  v15 = a4;
  v68 = a4;
  v16 = (char *)a1 + 149;
  v84 = (char *)a1 + 149;
  while ( 1 )
  {
    v77 = 0LL;
    v74 = 0LL;
    v17 = 0LL;
    v66 = 80;
    v63 = 0;
    v62 = 0;
    v64 = 0;
    LOWORD(v72) = 0;
    ReturnLength = 0;
    v61 = 0;
    v70 = 0;
    v83 = 0LL;
    if ( !_bittest(&v15, v14) )
    {
      v18 = *((_QWORD *)v11 + 1);
      if ( *(v16 - 1) )
        break;
    }
LABEL_6:
    v71 = ++v14;
    v16 += 24;
    v84 = v16;
    if ( v14 >= 4 )
      return v13;
    v11 = a2;
  }
  if ( *((_BYTE *)v11 + 4) > *v16 && *v16
    || ((*(v16 - 5) & 0x40) == 0 || v18)
    && ((v18 & *(_QWORD *)(v16 - 13)) == 0 || (v18 & *(_QWORD *)(v16 - 21)) != *(_QWORD *)(v16 - 21)) )
  {
LABEL_55:
    v15 = v68;
    goto LABEL_6;
  }
  v19 = (unsigned __int8)v16[1];
  v75 = (unsigned __int8)v16[1];
  if ( !qword_1801593C0 )
    goto LABEL_78;
  if ( (unsigned int)v19 < 0x40 )
  {
LABEL_15:
    v20 = 2LL * v75;
    _InterlockedAdd((volatile signed __int32 *)(qword_1801593C0 + 16LL * v75 + 8), 1u);
    if ( (*(_BYTE *)(qword_1801593C0 + 8 * v20) & 1) == 0 )
    {
      v77 = *(_QWORD *)(qword_1801593C0 + 8 * v20);
      v13 = 0;
      v73 = 0;
      goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v20 + 8));
LABEL_78:
    v13 = 4201;
    goto LABEL_55;
  }
  v13 = sub_180104B00((unsigned int)v19, &v75);
  v73 = v13;
  if ( !v13 )
  {
    v14 = v71;
    goto LABEL_15;
  }
LABEL_17:
  if ( v13 )
  {
LABEL_54:
    v14 = v71;
    goto LABEL_55;
  }
  v21 = a7 != 0LL ? 104 : 80;
  if ( (*(v16 - 5) & 1) != 0
    && ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength) >= 0 )
  {
    v55 = ReturnLength - 16;
    ReturnLength = v55;
    LOWORD(v55) = (v55 + 15) & 0xFFF8;
    v72 = v55;
    v62 = 1;
    v21 = (a7 != 0LL ? 104 : 80) + (unsigned __int16)v55;
    v16 = v84;
  }
  if ( (*(v16 - 5) & 4) != 0 && v76 )
  {
    v64 = 1;
    v21 += v65[0];
  }
  if ( (*(v16 - 5) & 2) != 0 )
  {
    v63 = 1;
    v21 += 16;
  }
  v22 = v81 + 32LL * *(unsigned int *)(v81 + 128);
  v23 = 0;
  v24 = 0;
  if ( a8 )
  {
    v25 = v79[49] & 0x4000;
    while ( 1 )
    {
      v26 = v21;
      v27 = v25 ? *(_BYTE *)(16LL * v23 + v78 + 12) : 0;
      if ( v27 )
      {
        if ( v27 == 1 )
        {
          v24 += *(_WORD *)(16LL * v23 + v78 + 8);
          v61 = v24;
          ++v70;
        }
        else if ( v27 == 2 )
        {
          Src = *(void **)(v78 + 16LL * v23);
          v67 = *(_WORD *)(v78 + 16LL * v23 + 8);
          v21 += (v67 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v21 += *(_DWORD *)(16LL * v23 + v78 + 8);
      }
      if ( v21 < v26 )
        break;
      if ( ++v23 >= a8 )
        goto LABEL_30;
    }
    v13 = 534;
    v73 = 534;
  }
LABEL_30:
  if ( v70 )
    v21 += (v24 + 15) & 0xFFFFFFF8;
  if ( v13 )
    goto LABEL_102;
  *(_DWORD *)(v22 + 24) = v21;
  v28 = sub_18005F2B4(v77, v21, NtCurrentTeb()->CurrentIdealProcessor.Reserved, &v80, &v74);
  if ( v28 )
  {
    v29 = v77;
    *(_QWORD *)v22 = v77;
    *(_QWORD *)(v22 + 8) = v28;
    *(_QWORD *)(v22 + 16) = v74;
    ++*(_DWORD *)(v81 + 128);
    *(_DWORD *)v28 = v21 | *(_DWORD *)(v29 + 44);
    *(_WORD *)(v28 + 4) = a5;
    *(_WORD *)(v28 + 6) = a3;
    *(_OWORD *)(v28 + 24) = *((_OWORD *)v79 + 2);
    *(_OWORD *)(v28 + 40) = *a2;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(GUID *)(v28 + 64) = ActivityId;
    if ( a7 )
    {
      v17 = (_WORD *)(v28 + 80);
      *(_DWORD *)(v28 + 80) = 65560;
      *(_DWORD *)(v28 + 84) = 0x100000;
      *(_OWORD *)(v28 + 88) = *a7;
      *(_WORD *)(v28 + 4) |= 1u;
      v31 = 104;
      v66 = 104;
    }
    else
    {
      v31 = v66;
    }
    if ( v62 == 1 )
    {
      v56 = (_WORD *)(v28 + v31);
      v57 = v72;
      *v56 = v72;
      v56[1] = 2;
      v56[3] = ReturnLength;
      v56[2] = 0;
      memmove(v56 + 4, v86, ReturnLength);
      *(_WORD *)(v28 + 4) |= 1u;
      v31 += v57;
      v66 = v31;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v56;
    }
    if ( v63 == 1 )
    {
      v58 = (_DWORD *)(v28 + v31);
      *v58 = 196624;
      v58[1] = 0x40000;
      v58[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v28 + 4) |= 1u;
      v31 += 16;
      v66 = v31;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v58;
    }
    if ( v64 == 1 )
    {
      v59 = (void *)(v28 + v31);
      memmove(v59, v76, v65[0]);
      *(_WORD *)(v28 + 4) |= 1u;
      v31 += v65[0];
      v66 = v31;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v59;
    }
    v32 = Src;
    if ( Src )
    {
      v44 = (unsigned __int16 *)(v28 + v31);
      v74 = v44;
      v45 = v67;
      v46 = (v67 + 15) & 0xFFF8;
      *v44 = v46;
      *(_DWORD *)(v44 + 1) = 12;
      v44[3] = v45;
      v47 = v46 - v45 - 8;
      v48 = v44 + 4;
      v49 = v45;
      memmove(v44 + 4, v32, v45);
      memset((char *)v48 + v49, 0, v47);
      *(_WORD *)(v28 + 4) |= 1u;
      v50 = v74;
      v31 = *v74 + v66;
      v66 = v31;
      if ( v17 )
        v17[2] |= 1u;
      v17 = v50;
    }
    if ( v70 )
    {
      v51 = (unsigned __int16 *)(v28 + v31);
      v52 = v61;
      v53 = (v61 + 15) & 0xFFF8;
      *v51 = v53;
      *(_DWORD *)(v51 + 1) = 11;
      v51[3] = v52;
      v83 = v51 + 4;
      memset((char *)v51 + v52 + 8, 0, (unsigned __int16)(v53 - v52 - 8));
      *(_WORD *)(v28 + 4) |= 1u;
      v66 = *v51 + v31;
      if ( v17 )
        v17[2] |= 1u;
    }
    if ( a8 )
    {
      v33 = (_BYTE *)(v78 + 12);
      v34 = a8;
      v35 = v66;
      do
      {
        v36 = *((_DWORD *)v33 - 1);
        v37 = 0;
        if ( (v79[49] & 0x4000) != 0 )
          v37 = *v33;
        if ( v37 )
        {
          if ( v37 == 1 )
          {
            v42 = *((unsigned int *)v33 - 1);
            v43 = (char *)v83;
            memmove(v83, *(const void **)(v33 - 12), v42);
            v83 = &v43[v42];
          }
          else if ( v37 == 3 && v36 == 8 )
          {
            v80 = **(_QWORD **)(v33 - 12);
          }
        }
        else
        {
          v38 = (void *)(v28 + v35);
          v35 += v36;
          memmove(v38, *(const void **)(v33 - 12), *((unsigned int *)v33 - 1));
        }
        v33 += 16;
        --v34;
      }
      while ( v34 );
      v13 = v73;
    }
    v39 = v80;
    *(_QWORD *)(v28 + 16) = v80;
    if ( *(_DWORD *)(v77 + 16) != 3 )
      v39 = __rdtsc();
    *(_QWORD *)(v28 + 56) = v39;
    v40 = NtCurrentTeb();
    *(_DWORD *)(v28 + 8) = v40->ClientId.UniqueThread;
    *(_DWORD *)(v28 + 12) = v40->ClientId.UniqueProcess;
    v16 = v84;
    goto LABEL_54;
  }
  if ( v21 <= 0xFFF8 )
    v13 = *(_DWORD *)(v77 + 212) < v21 ? 234 : 8;
  else
    v13 = 534;
LABEL_102:
  _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16 * v19 + 8));
  return v13;
}
