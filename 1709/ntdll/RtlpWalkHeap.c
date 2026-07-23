/*
 * XREFs of RtlpWalkHeap @ 0x1800F111C
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180061978 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpGetExtraStuffPointerUnsafe @ 0x1800F0588 (RtlpGetExtraStuffPointerUnsafe.c)
 *     RtlpLogHeapWalkEvent @ 0x180101E14 (RtlpLogHeapWalkEvent.c)
 *     RtlDebugWalkHeap @ 0x180104A64 (RtlDebugWalkHeap.c)
 *     RtlpWalkLFHBlock @ 0x1801067C8 (RtlpWalkLFHBlock.c)
 *     RtlpWalkLowFragHeapSegment @ 0x180106E1C (RtlpWalkLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpWalkHeap(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int16 v10; // dx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 v16; // rax
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  unsigned __int16 v32; // cx
  unsigned __int8 v33; // al
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  unsigned __int16 v37; // ax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // al
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  char v44; // al
  int v45; // edx
  int v46; // eax
  unsigned __int16 v47; // r8
  char v48; // cl
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int16 v51; // ax
  int v52; // eax
  char v53; // cl
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int16 v56; // ax
  int v57; // eax
  int v58; // eax
  unsigned __int16 v59; // ax
  __int64 v60; // rcx
  int v61; // eax
  unsigned __int16 v62; // ax
  unsigned int v63; // eax
  unsigned int v64; // eax
  __int64 ExtraStuffPointerUnsafe; // rax
  unsigned int v66; // eax
  unsigned int v67; // eax
  int v68; // eax
  unsigned __int16 v69; // ax
  __int64 v70; // rcx
  int v71; // [rsp+28h] [rbp-28h]
  int v72; // [rsp+38h] [rbp-18h]
  int v73; // [rsp+48h] [rbp-8h]
  int v74; // [rsp+48h] [rbp-8h]
  int v75; // [rsp+48h] [rbp-8h]
  int v76; // [rsp+48h] [rbp-8h]
  int v77; // [rsp+48h] [rbp-8h]
  int v78; // [rsp+48h] [rbp-8h]
  int v79; // [rsp+48h] [rbp-8h]
  unsigned int v80; // [rsp+80h] [rbp+30h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_180159438)();
  if ( (((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v80 = -1073741811;
    goto LABEL_196;
  }
  v7 = *(_QWORD **)a2;
  v80 = 0;
  v8 = 4096LL;
  if ( v7 )
  {
    if ( (*(_WORD *)(a2 + 18) & 0x1002) == 0 )
      goto LABEL_42;
    v10 = *(_WORD *)(a2 + 18) & 2;
    if ( !v10 || (*(_BYTE *)(a1 + 386) != 2 ? (v11 = 0LL) : (v11 = *(_QWORD **)(a1 + 376)), v7 != v11) )
    {
      if ( a3 && v10 )
      {
        v12 = v7[8];
        goto LABEL_25;
      }
      v12 = (unsigned __int64)v7 + *(_QWORD *)(a2 + 8);
      if ( (*(_WORD *)(a2 + 18) & 0x1000) != 0 )
      {
        v20 = *(_QWORD **)(a1 + 288);
        v8 = (unsigned __int64)(v7 - 6);
        while ( v20 != (_QWORD *)(a1 + 288) )
        {
          v7 = v20 - 3;
          if ( v20[3] <= v8 && v8 <= v7[9] )
            goto LABEL_36;
          v20 = (_QWORD *)*v20;
        }
        v7 = 0LL;
      }
LABEL_36:
      if ( a3 && v12 < v7[9] )
        goto LABEL_25;
      v21 = v7[3];
      if ( v21 != a1 + 288 )
      {
        v9 = v21 - 24;
        goto LABEL_15;
      }
      if ( *(_BYTE *)(a1 + 386) == 2 )
      {
        v9 = *(_QWORD *)(a1 + 376);
        goto LABEL_15;
      }
    }
LABEL_14:
    v9 = 0LL;
  }
  else
  {
    v9 = a1;
  }
LABEL_15:
  v12 = 0LL;
  if ( !v9 )
  {
    v13 = v80;
    v14 = *(_QWORD *)(a1 + 272);
    v15 = v14 == a1 + 272;
    if ( v14 == a1 + 272 )
      v13 = -2147483622;
    v80 = v13;
    v16 = v14 + 48;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v35 = *(_QWORD *)(a1 + 376);
  else
    v35 = 0LL;
  if ( v9 == v35 )
  {
    RtlpWalkLowFragHeapSegment(a1, a2, &v80, 1LL);
    goto LABEL_196;
  }
  *(_QWORD *)a2 = v9;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v36 = *(_DWORD *)(v9 + 8);
    LOWORD(v73) = v36;
    if ( (v36 & *(_DWORD *)(a1 + 124)) != 0 )
      v73 = *(_DWORD *)(a1 + 136) ^ v36;
    v37 = v73;
  }
  else
  {
    v37 = *(_WORD *)(v9 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v37;
  *(_DWORD *)(a2 + 16) = 0x20000;
  *(_DWORD *)(a2 + 24) = (*(_DWORD *)(v9 + 56) - *(_DWORD *)(v9 + 80)) << 12;
  v38 = *(_DWORD *)(v9 + 80) << 12;
  *(_DWORD *)(a2 + 28) = v38;
  if ( (*(_BYTE *)(v9 + 20) & 2) != 0 )
    *(_DWORD *)(a2 + 28) = v38 + 4096;
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v9 + 64) + 16 * (((*(_BYTE *)(*(_QWORD *)(v9 + 64) + 10LL) & 1) == 0) + 1LL);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(v9 + 72);
  while ( 1 )
  {
LABEL_25:
    if ( !v12 )
      goto LABEL_196;
    v17 = *(_BYTE *)(v12 + 15);
    if ( (v17 & 0x40) != 0 )
    {
      v18 = *(_BYTE *)(v12 + 15) & 0x3F;
LABEL_28:
      v19 = v12 + 16 * v18;
      goto LABEL_98;
    }
    if ( v17 == 4 )
    {
      v18 = *(unsigned __int8 *)(v12 + 14);
      goto LABEL_28;
    }
    v19 = v12;
LABEL_98:
    *(_WORD *)(a2 + 18) = 1;
    *(_QWORD *)a2 = v19 + 16;
    v40 = *(_BYTE *)(a1 + 386) == 2 ? *(_QWORD *)(a1 + 376) : 0LL;
    if ( !v40 || !(unsigned __int8)RtlpWalkLFHBlock(a1, a2, v8, 1LL) )
      break;
    if ( (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
      goto LABEL_196;
    v8 = 4096LL;
LABEL_42:
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v22 = *(_QWORD *)(a1 + 376);
    else
      v22 = 0LL;
    if ( v22 )
    {
      if ( (unsigned __int8)RtlpWalkLFHBlock(a1, a2, 4096LL, 1LL) && (*(_WORD *)(a2 + 18) & 0x2000) == 0 )
        goto LABEL_196;
      v8 = 4096LL;
    }
    v23 = *(_QWORD **)a2;
    if ( (*(_BYTE *)(a2 + 18) & 1) != 0 )
    {
      v24 = (unsigned __int64)(v23 - 2);
      _m_prefetchw((const void *)v24);
      if ( *(_BYTE *)(v24 + 15) == 5 )
        v24 -= 16LL * *(unsigned __int8 *)(v24 + 14);
      if ( *(_BYTE *)(v24 + 15) == 4 )
      {
        v25 = *(_QWORD *)(v24 - 48);
        v26 = v80;
        v15 = v25 == a1 + 272;
        v12 = 0LL;
        if ( v25 == a1 + 272 )
          v26 = -2147483622;
        v80 = v26;
        v16 = v25 + 48;
LABEL_19:
        if ( !v15 )
          v12 = v16;
        continue;
      }
      v27 = *(_BYTE *)(v24 + 14);
      if ( v27 )
        v28 = (v24 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v27 << 16) + 0x10000;
      else
        v28 = a1;
      if ( !v28 )
        goto LABEL_195;
      if ( *(_BYTE *)(v24 + 15) == 3 )
        goto LABEL_78;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v29 = *(_DWORD *)(v24 + 8);
        LOWORD(v71) = v29;
        if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
          v71 = *(_DWORD *)(a1 + 136) ^ v29;
        LOWORD(v30) = v71;
      }
      else
      {
        LOWORD(v30) = *(_WORD *)(v24 + 8);
      }
      v30 = (unsigned __int16)v30;
LABEL_67:
      v12 = 16 * v30 + v24;
    }
    else
    {
      v24 = (unsigned __int64)(v23 - 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v31 = *(_DWORD *)(v24 + 8);
        LOWORD(v72) = v31;
        if ( (v31 & *(_DWORD *)(a1 + 124)) != 0 )
          v72 = *(_DWORD *)(a1 + 136) ^ v31;
        v32 = v72;
      }
      else
      {
        v32 = *(_WORD *)(v24 + 8);
      }
      v33 = *(_BYTE *)(v24 + 14);
      if ( v33 )
        v28 = (v24 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v33 << 16) + 0x10000;
      else
        v28 = a1;
      if ( !v28 )
      {
LABEL_195:
        v80 = -1073741503;
        goto LABEL_196;
      }
      if ( *(_BYTE *)(v24 + 15) != 3 )
      {
        v30 = v32;
        goto LABEL_67;
      }
LABEL_78:
      if ( v24 + *(_QWORD *)(v24 + 56) + 64LL >= *(_QWORD *)(v28 + 72) )
      {
        v34 = *(_QWORD *)(v28 + 24);
        if ( v34 == a1 + 288 )
          goto LABEL_14;
        v9 = v34 - 24;
        goto LABEL_15;
      }
      *(_QWORD *)a2 = *(_QWORD *)(v24 + 48);
      v39 = *(_QWORD *)(v24 + 56);
      v12 = 0LL;
      *(_QWORD *)(a2 + 8) = v39;
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
    }
  }
  if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
  {
    v41 = *(_BYTE *)(v12 + 15);
    if ( (v41 & 0x40) != 0 )
    {
      v42 = *(_BYTE *)(v12 + 15) & 0x3F;
      goto LABEL_108;
    }
    if ( v41 == 4 )
    {
      v42 = *(unsigned __int8 *)(v12 + 14);
LABEL_108:
      v43 = v12 + 16 * v42;
    }
    else
    {
      v43 = v12;
    }
    *(_QWORD *)a2 = v43 + 16;
    v44 = *(_BYTE *)(v12 + 15);
    if ( v44 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v58 = *(_DWORD *)(v12 + 8);
        LOWORD(v77) = v58;
        if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
          v77 = *(_DWORD *)(a1 + 136) ^ v58;
        v59 = v77;
      }
      else
      {
        v59 = *(_WORD *)(v12 + 8);
      }
      v60 = *(_QWORD *)(v12 - 16) - v59;
      *(_BYTE *)(a2 + 17) = 64;
      *(_QWORD *)(a2 + 8) = v60;
      *(_WORD *)(a2 + 18) = 16385;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v61 = *(_DWORD *)(v12 + 8);
        LOWORD(v78) = v61;
        if ( (v61 & *(_DWORD *)(a1 + 124)) != 0 )
          v78 = *(_DWORD *)(a1 + 136) ^ v61;
        v62 = v78;
      }
      else
      {
        v62 = *(_WORD *)(v12 + 8);
      }
      v54 = v62;
LABEL_168:
      *(_BYTE *)(a2 + 16) = v54;
      if ( (*(_BYTE *)(a2 + 18) & 2) == 0 )
        *(_QWORD *)(a2 + 36) = v54;
LABEL_170:
      if ( *(_DWORD *)(a1 + 124) )
      {
        v63 = *(_DWORD *)(v12 + 8);
        if ( (v63 & *(_DWORD *)(a1 + 124)) != 0 )
          v63 ^= *(_DWORD *)(a1 + 136);
        v64 = HIWORD(v63);
      }
      else
      {
        LOBYTE(v64) = *(_BYTE *)(v12 + 10);
      }
      if ( (v64 & 2) != 0 )
      {
        ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, v12);
        *(_QWORD *)(a2 + 24) = *(_QWORD *)(ExtraStuffPointerUnsafe + 8);
        if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          *(_WORD *)(a2 + 32) = *(_WORD *)(ExtraStuffPointerUnsafe + 2);
        else
          *(_WORD *)(a2 + 32) = 0;
        *(_WORD *)(a2 + 18) |= 0x10u;
      }
      else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_WORD *)(a2 + 32) = *(unsigned __int8 *)(v12 + 11);
      }
      else
      {
        *(_WORD *)(a2 + 32) = 0;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v66 = *(_DWORD *)(v12 + 8);
        if ( (v66 & *(_DWORD *)(a1 + 124)) != 0 )
          v66 ^= *(_DWORD *)(a1 + 136);
        v67 = HIWORD(v66);
      }
      else
      {
        LOBYTE(v67) = *(_BYTE *)(v12 + 10);
      }
      *(_WORD *)(a2 + 18) |= v67 & 0xE0;
      goto LABEL_196;
    }
    if ( v44 == 3 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v12 + 48);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v12 + 56);
      *(_DWORD *)(a2 + 16) = 0x10000000;
      *(_QWORD *)(a2 + 36) = 0LL;
      goto LABEL_170;
    }
    if ( v44 != 1 )
    {
      v45 = *(_DWORD *)(a1 + 124);
      if ( v45 )
      {
        v46 = *(_DWORD *)(v12 + 8);
        v45 = *(_DWORD *)(a1 + 124);
        LOWORD(v74) = v46;
        if ( (v45 & v46) != 0 )
          v74 = *(_DWORD *)(a1 + 136) ^ v46;
        v47 = v74;
      }
      else
      {
        v47 = *(_WORD *)(v12 + 8);
      }
      v48 = *(_BYTE *)(v12 + 15);
      if ( v48 == 5 )
      {
        v49 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v48 & 0x40) != 0 )
      {
        v49 = *(unsigned __int16 *)(v12 + 16LL * (v48 & 0x3F) + 12);
      }
      else if ( (v48 & 0x3F) == 0x3F )
      {
        if ( v48 >= 0 )
        {
          if ( v45 )
          {
            v52 = *(_DWORD *)(v12 + 8);
            LOWORD(v75) = v52;
            if ( (v52 & *(_DWORD *)(a1 + 124)) != 0 )
              v75 = *(_DWORD *)(a1 + 136) ^ v52;
            v51 = v75;
          }
          else
          {
            v51 = *(_WORD *)(v12 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
            v50 = 0LL;
          else
            v50 = *(_QWORD *)(v12
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
          v51 = *(_WORD *)(v50 + 36);
        }
        v49 = *(_QWORD *)(v12 + 16LL * v51);
      }
      else
      {
        v49 = *(_BYTE *)(v12 + 15) & 0x3F;
      }
      *(_QWORD *)(a2 + 8) = 16LL * v47 - v49;
      *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
      *(_WORD *)(a2 + 18) = 1;
      v53 = *(_BYTE *)(v12 + 15);
      if ( v53 == 5 )
      {
        v54 = *(unsigned __int16 *)(v12 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v53 & 0x40) != 0 )
      {
        v54 = *(unsigned __int16 *)(16LL * (v53 & 0x3F) + v12 + 12);
      }
      else if ( (v53 & 0x3F) == 0x3F )
      {
        if ( v53 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v57 = *(_DWORD *)(v12 + 8);
            LOWORD(v76) = v57;
            if ( (v57 & *(_DWORD *)(a1 + 124)) != 0 )
              v76 = *(_DWORD *)(a1 + 136) ^ v57;
            v56 = v76;
          }
          else
          {
            v56 = *(_WORD *)(v12 + 8);
          }
        }
        else
        {
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4)) )
            v55 = 0LL;
          else
            v55 = *(_QWORD *)(v12
                            - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12));
          v56 = *(_WORD *)(v55 + 36);
        }
        v54 = *(_QWORD *)(16LL * v56 + v12);
      }
      else
      {
        v54 = *(_BYTE *)(v12 + 15) & 0x3F;
      }
      goto LABEL_168;
    }
    *(_WORD *)(a2 + 18) = 1;
    v8 = 4096LL;
    goto LABEL_42;
  }
  *(_QWORD *)a2 = v12 + 32;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v68 = *(_DWORD *)(v12 + 8);
    LOWORD(v79) = v68;
    if ( (v68 & *(_DWORD *)(a1 + 124)) != 0 )
      v79 = *(_DWORD *)(a1 + 136) ^ v68;
    v69 = v79;
  }
  else
  {
    v69 = *(_WORD *)(v12 + 8);
  }
  *(_QWORD *)(a2 + 8) = 16LL * v69 - 32;
  *(_BYTE *)(a2 + 17) = *(_BYTE *)(v12 + 14);
  *(_WORD *)(a2 + 18) = 0;
  *(_BYTE *)(a2 + 16) = 32;
  *(_QWORD *)(a2 + 36) = 32LL;
LABEL_196:
  if ( RtlGetCurrentServiceSessionId() )
    v70 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v70 = 2147353472LL;
  if ( *(_BYTE *)v70 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v80 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v80;
}
