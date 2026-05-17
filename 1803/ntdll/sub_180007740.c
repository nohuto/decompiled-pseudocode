/*
 * XREFs of sub_180007740 @ 0x180007740
 * Callers:
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 *     EtwEventWriteString @ 0x180106680 (EtwEventWriteString.c)
 * Callees:
 *     sub_180007D50 @ 0x180007D50 (sub_180007D50.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     sub_180106D08 @ 0x180106D08 (sub_180106D08.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 *     sub_180106FF4 @ 0x180106FF4 (sub_180106FF4.c)
 */

__int64 __fastcall sub_180007740(
        unsigned __int16 *a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        struct _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v12; // r12d
  unsigned int v13; // r8d
  int v14; // eax
  _BYTE *v15; // r15
  _WORD *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // edi
  int v21; // ecx
  unsigned int v22; // ebx
  _QWORD *v23; // rcx
  unsigned int v24; // r8d
  __int16 v25; // r9
  unsigned int v26; // r10d
  char v27; // al
  __int64 v28; // rdi
  __int64 v29; // r15
  _QWORD *v30; // rax
  struct _GUID ActivityId; // xmm0
  unsigned int v32; // esi
  void *v33; // rcx
  unsigned __int16 *v34; // rax
  unsigned int v35; // edx
  unsigned __int16 v36; // si
  unsigned __int16 *v37; // rdi
  __int64 v38; // rbx
  unsigned __int16 *v39; // rcx
  unsigned __int16 *v40; // rbx
  __int64 v41; // rcx
  unsigned __int16 v42; // ax
  _BYTE *v43; // rdi
  __int64 v44; // rsi
  unsigned int v45; // r12d
  int v46; // edx
  char v47; // al
  void *v48; // rcx
  unsigned __int64 v49; // rax
  struct _TEB *v50; // rcx
  size_t v52; // rbx
  char *v53; // r13
  void *v54; // rsp
  int v55; // r15d
  _WORD *v56; // rbx
  unsigned __int16 v57; // di
  _DWORD *v58; // rdx
  void *v59; // rbx
  char v60; // [rsp+0h] [rbp-810h] BYREF
  unsigned __int16 v61; // [rsp+810h] [rbp+0h]
  char v62; // [rsp+814h] [rbp+4h]
  char v63; // [rsp+815h] [rbp+5h]
  unsigned __int16 v64[2]; // [rsp+818h] [rbp+8h] BYREF
  unsigned __int16 v65; // [rsp+81Ch] [rbp+Ch]
  int v66; // [rsp+820h] [rbp+10h]
  int v67; // [rsp+824h] [rbp+14h]
  size_t Size; // [rsp+828h] [rbp+18h] BYREF
  unsigned int v69; // [rsp+830h] [rbp+20h]
  int v70; // [rsp+834h] [rbp+24h]
  int v71; // [rsp+838h] [rbp+28h]
  unsigned __int16 *v72; // [rsp+840h] [rbp+30h] BYREF
  unsigned int v73; // [rsp+848h] [rbp+38h] BYREF
  void *v74; // [rsp+850h] [rbp+40h] BYREF
  __int64 v75; // [rsp+858h] [rbp+48h]
  unsigned __int16 *v76; // [rsp+860h] [rbp+50h]
  unsigned __int64 v77; // [rsp+868h] [rbp+58h] BYREF
  int v78; // [rsp+870h] [rbp+60h]
  _QWORD *v79; // [rsp+878h] [rbp+68h]
  __int64 v80; // [rsp+880h] [rbp+70h]
  void *Src; // [rsp+890h] [rbp+80h]
  void *v82; // [rsp+898h] [rbp+88h]
  __int64 v83; // [rsp+8A0h] [rbp+90h]
  _BYTE *v84; // [rsp+8A8h] [rbp+98h]
  char v85[16]; // [rsp+8C0h] [rbp+B0h] BYREF
  char v86[80]; // [rsp+8D0h] [rbp+C0h] BYREF
  _OWORD *v87; // [rsp+988h] [rbp+178h]

  v87 = a2;
  v76 = a1;
  v72 = a1;
  v75 = a9;
  v80 = a10;
  v12 = 0;
  v74 = 0LL;
  v64[0] = 0;
  v65 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 > 0x80 )
    return 87LL;
  if ( (a1[120] & 4) != 0 )
  {
    if ( (unsigned __int8)sub_180106D08() )
    {
      v54 = alloca(2064LL);
      v74 = &v60;
      sub_180106FF4(&v74, v64);
    }
    a2 = v87;
  }
  v13 = 0;
  v69 = 0;
  v14 = a4;
  v67 = a4;
  v15 = (char *)a1 + 149;
  v84 = (char *)a1 + 149;
  while ( 1 )
  {
    v83 = 0LL;
    v72 = 0LL;
    v16 = 0LL;
    v66 = 80;
    v62 = 0;
    v63 = 0;
    LOWORD(v70) = 0;
    Size = 0LL;
    v61 = 0;
    v82 = 0LL;
    if ( !_bittest(&v14, v13) )
    {
      v17 = *((_QWORD *)a2 + 1);
      if ( *(v15 - 1) )
        break;
    }
LABEL_6:
    v69 = ++v13;
    v15 += 24;
    v84 = v15;
    if ( v13 >= 4 )
      return v12;
    a2 = v87;
  }
  if ( *((_BYTE *)a2 + 4) > *v15 && *v15
    || ((*(v15 - 5) & 0x40) == 0 || v17)
    && ((v17 & *(_QWORD *)(v15 - 13)) == 0 || (v17 & *(_QWORD *)(v15 - 21)) != *(_QWORD *)(v15 - 21)) )
  {
LABEL_61:
    v14 = v67;
    goto LABEL_6;
  }
  v18 = (unsigned __int8)v15[1];
  v73 = (unsigned __int8)v15[1];
  if ( !qword_18015A420 )
    goto LABEL_80;
  if ( (unsigned int)v18 < 0x40 )
  {
LABEL_15:
    v19 = 2LL * v73;
    _InterlockedAdd((volatile signed __int32 *)(qword_18015A420 + 16LL * v73 + 8), 1u);
    if ( (*(_BYTE *)(qword_18015A420 + 8 * v19) & 1) == 0 )
    {
      v83 = *(_QWORD *)(qword_18015A420 + 8 * v19);
      v12 = 0;
      v71 = 0;
      goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 8 * v19 + 8));
LABEL_80:
    v12 = 4201;
    goto LABEL_61;
  }
  v12 = sub_180106D70((unsigned int)v18, &v73);
  v71 = v12;
  if ( !v12 )
  {
    v13 = v69;
    goto LABEL_15;
  }
LABEL_17:
  if ( v12 )
  {
LABEL_60:
    v13 = v69;
    goto LABEL_61;
  }
  v20 = a7 != 0LL ? 104 : 80;
  if ( (*(v15 - 5) & 1) != 0 && (int)ZwQueryInformationToken(-6LL, 1LL, v85, 88LL, &Size) >= 0 )
  {
    v55 = Size - 16;
    LODWORD(Size) = v55;
    LOWORD(v55) = (v55 + 15) & 0xFFF8;
    v70 = v55;
    v62 = 1;
    v20 = (a7 != 0LL ? 104 : 80) + (unsigned __int16)v55;
    v15 = v84;
  }
  v21 = *(_DWORD *)(v15 - 5);
  if ( (v21 & 4) != 0 && v74 )
  {
    v63 = 1;
    v20 += v64[0];
  }
  v78 = v21 & 2;
  v22 = v20 + 16;
  if ( (v21 & 2) == 0 )
    v22 = v20;
  v23 = (_QWORD *)(v80 + 32LL * *(unsigned int *)(v80 + 128));
  v79 = v23;
  v24 = 0;
  if ( a8 )
  {
    v25 = v76[49] & 0x4000;
    while ( 1 )
    {
      v26 = v22;
      v27 = v25 ? *(_BYTE *)(16LL * v24 + v75 + 12) : 0;
      if ( v27 )
      {
        if ( v27 == 1 )
        {
          v61 += *(_WORD *)(v75 + 16LL * v24 + 8);
          ++HIDWORD(Size);
        }
        else if ( v27 == 2 )
        {
          Src = *(void **)(v75 + 16LL * v24);
          v65 = *(_WORD *)(v75 + 16LL * v24 + 8);
          v22 += (v65 + 15) & 0xFFFFFFF8;
        }
      }
      else
      {
        v22 += *(_DWORD *)(v75 + 16LL * v24 + 8);
      }
      if ( v22 < v26 )
        break;
      if ( ++v24 >= a8 )
        goto LABEL_30;
    }
    v12 = 534;
    v71 = 534;
LABEL_30:
    v23 = v79;
  }
  if ( HIDWORD(Size) )
    v22 += (v61 + 15) & 0xFFFFFFF8;
  if ( v12 )
    goto LABEL_103;
  *((_DWORD *)v23 + 6) = v22;
  v28 = v83;
  v29 = sub_180007D50(v83, v22, NtCurrentTeb()->CurrentIdealProcessor.Reserved, (unsigned int)&v77, (__int64)&v72);
  if ( v29 )
  {
    v30 = v79;
    *v79 = v28;
    v30[1] = v29;
    v30[2] = v72;
    ++*(_DWORD *)(v80 + 128);
    *(_DWORD *)v29 = v22 | *(_DWORD *)(v28 + 44);
    *(_WORD *)(v29 + 4) = a5;
    *(_WORD *)(v29 + 6) = a3;
    *(_OWORD *)(v29 + 24) = *((_OWORD *)v76 + 2);
    *(_OWORD *)(v29 + 40) = *v87;
    if ( a6 )
      ActivityId = *a6;
    else
      ActivityId = NtCurrentTeb()->ActivityId;
    *(struct _GUID *)(v29 + 64) = ActivityId;
    if ( a7 )
    {
      v16 = (_WORD *)(v29 + 80);
      *(_DWORD *)(v29 + 80) = 65560;
      *(_DWORD *)(v29 + 84) = 0x100000;
      *(_OWORD *)(v29 + 88) = *a7;
      *(_WORD *)(v29 + 4) |= 1u;
      v32 = 104;
      v66 = 104;
    }
    else
    {
      v32 = v66;
    }
    if ( v62 == 1 )
    {
      v56 = (_WORD *)(v29 + v32);
      v57 = v70;
      *v56 = v70;
      v56[1] = 2;
      v56[3] = Size;
      v56[2] = 0;
      memmove(v56 + 4, v86, (unsigned int)Size);
      *(_WORD *)(v29 + 4) |= 1u;
      v32 += v57;
      v66 = v32;
      if ( v16 )
        v16[2] |= 1u;
      v16 = v56;
    }
    if ( v78 )
    {
      v58 = (_DWORD *)(v29 + v32);
      *v58 = 196624;
      v58[1] = 0x40000;
      v58[2] = NtCurrentPeb()->SessionId;
      *(_WORD *)(v29 + 4) |= 1u;
      v32 += 16;
      v66 = v32;
      if ( v16 )
        v16[2] |= 1u;
      v16 = v58;
    }
    if ( v63 == 1 )
    {
      v59 = (void *)(v29 + v32);
      memmove(v59, v74, v64[0]);
      *(_WORD *)(v29 + 4) |= 1u;
      v32 += v64[0];
      v66 = v32;
      if ( v16 )
        v16[2] |= 1u;
      v16 = v59;
    }
    v33 = Src;
    if ( Src )
    {
      v34 = (unsigned __int16 *)(v29 + v32);
      v72 = v34;
      v35 = v65;
      v36 = (v65 + 15) & 0xFFF8;
      *v34 = v36;
      *(_DWORD *)(v34 + 1) = 12;
      v34[3] = v35;
      v37 = v34 + 4;
      v38 = v35;
      memmove(v34 + 4, v33, v35);
      memset((char *)v37 + v38, 0, (unsigned __int16)(v36 - v65 - 8));
      *(_WORD *)(v29 + 4) |= 1u;
      v39 = v72;
      v32 = *v72 + v66;
      v66 = v32;
      if ( v16 )
        v16[2] |= 1u;
      v16 = v39;
    }
    if ( HIDWORD(Size) )
    {
      v40 = (unsigned __int16 *)(v29 + v32);
      v41 = v61;
      v42 = (v61 + 15) & 0xFFF8;
      *v40 = v42;
      *(_DWORD *)(v40 + 1) = 11;
      v40[3] = v41;
      v82 = v40 + 4;
      memset((char *)v40 + v41 + 8, 0, (unsigned __int16)(v42 - v41 - 8));
      *(_WORD *)(v29 + 4) |= 1u;
      v66 = *v40 + v32;
      if ( v16 )
        v16[2] |= 1u;
    }
    if ( a8 )
    {
      v43 = (_BYTE *)(v75 + 12);
      v44 = a8;
      v45 = v66;
      do
      {
        v46 = *((_DWORD *)v43 - 1);
        v47 = 0;
        if ( (v76[49] & 0x4000) != 0 )
          v47 = *v43;
        if ( v47 )
        {
          if ( v47 == 1 )
          {
            v52 = *((unsigned int *)v43 - 1);
            v53 = (char *)v82;
            memmove(v82, *(const void **)(v43 - 12), v52);
            v82 = &v53[v52];
          }
          else if ( v47 == 3 && v46 == 8 )
          {
            v77 = **(_QWORD **)(v43 - 12);
          }
        }
        else
        {
          v48 = (void *)(v29 + v45);
          v45 += v46;
          memmove(v48, *(const void **)(v43 - 12), *((unsigned int *)v43 - 1));
        }
        v43 += 16;
        --v44;
      }
      while ( v44 );
      v12 = v71;
    }
    v49 = v77;
    *(_QWORD *)(v29 + 16) = v77;
    if ( *(_DWORD *)(v83 + 16) != 3 )
      v49 = __rdtsc();
    *(_QWORD *)(v29 + 56) = v49;
    v50 = NtCurrentTeb();
    *(_DWORD *)(v29 + 8) = v50->ClientId.UniqueThread;
    *(_DWORD *)(v29 + 12) = v50->ClientId.UniqueProcess;
    v15 = v84;
    goto LABEL_60;
  }
  if ( v22 <= 0xFFF8 )
    v12 = *(_DWORD *)(v28 + 212) < v22 ? 234 : 8;
  else
    v12 = 534;
LABEL_103:
  _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16 * v18 + 8));
  return v12;
}
