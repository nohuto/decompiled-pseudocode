/*
 * XREFs of sub_180060B10 @ 0x180060B10
 * Callers:
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 * Callees:
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_180060CFC @ 0x180060CFC (sub_180060CFC.c)
 *     sub_180060D38 @ 0x180060D38 (sub_180060D38.c)
 *     sub_180061F40 @ 0x180061F40 (sub_180061F40.c)
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800EC88C @ 0x1800EC88C (sub_1800EC88C.c)
 *     sub_1800ECFD8 @ 0x1800ECFD8 (sub_1800ECFD8.c)
 */

__int64 __fastcall sub_180060B10(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD *, __int64); // r12
  unsigned int v6; // eax
  bool v7; // zf
  char v8; // r14
  _QWORD *v9; // rsi
  ULONG NumberOfHeaps; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  bool v20; // al
  unsigned __int64 v21; // r15
  __int16 v22; // si
  int v23; // r15d
  __int64 v24; // rsi
  int v25; // esi
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  char v38; // [rsp+30h] [rbp-D0h]
  bool v39; // [rsp+31h] [rbp-CFh]
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v41; // [rsp+38h] [rbp-C8h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v43)(_QWORD *, __int64); // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  _QWORD v49[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[16]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v51[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v4 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v6 = *(_DWORD *)a2;
  v41 = *(_DWORD *)a2;
  v42 = v2;
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v43 = v4;
  v48 = 0LL;
  if ( v7 )
  {
    v8 = 1;
    v38 = 1;
    v9 = (_QWORD *)a1;
    v47 = a1;
  }
  else
  {
    v7 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    v8 = 0;
    v38 = 0;
    v9 = 0LL;
    v47 = 0LL;
    if ( !v7 )
      return 3221225474LL;
  }
  if ( v6 != 0x80000000 )
  {
    memset(v49, 0, 0xA8uLL);
    LODWORD(v49[0]) = 2;
    v49[1] = 64LL;
    v49[2] = a1;
    if ( v8 )
    {
      v49[4] = v9[3] << 12;
      v49[4] += v9[12] << 12;
      v49[5] = v9[4] << 12;
      v49[5] += v9[13] << 12;
      result = 0LL;
      LODWORD(v49[3]) = 0;
    }
    else
    {
      LODWORD(v49[3]) = *(unsigned __int8 *)(a1 + 386);
      result = sub_1800ECFD8(a1, &v49[4], &v49[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v4(v49, v2);
    if ( (int)result < 0 || v41 < 3 )
      return result;
    memset(v46, 0, sizeof(v46));
    v44 = 0LL;
    v19 = 0LL;
    v45 = 0LL;
    v20 = v41 > 3;
    v21 = 0LL;
    v39 = v41 > 3;
    while ( 1 )
    {
      LOBYTE(v18) = v20;
      result = sub_180061F40(a1, v46, v18);
      if ( (_DWORD)result == -2147483622 )
        return 0LL;
      if ( (int)result < 0 )
        return result;
      v22 = WORD1(v46[2]);
      if ( (v46[2] & 0x20000LL) != 0 )
        break;
      if ( (v46[2] & 0x40000000LL) != 0 )
      {
        memset(v49, 0, 0xA8uLL);
        v27 = 0LL;
        LODWORD(v49[0]) = 3;
        v28 = 0LL;
        v49[1] = 56LL;
        if ( v38 )
        {
          v49[2] = v46[0];
          v28 = sub_18006337C(v47);
          v49[3] = (*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v49[4] = *(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL;
        }
        else
        {
          v29 = v46[0] - 16LL;
          _m_prefetchw((const void *)(v46[0] - 16LL));
          if ( *(_BYTE *)(v29 + 15) == 5 )
            v29 -= 16LL * *(unsigned __int8 *)(v29 + 14);
          v27 = v29 - 48;
          v49[2] = (v29 - 48) & 0xFFFFFFFFFFFF0000uLL;
          v49[3] = *(_QWORD *)(v29 - 48 + 40);
          v49[4] = *(_QWORD *)(v29 - 48 + 32);
        }
        result = v43(v49, v42);
        if ( (int)result < 0 )
          return result;
        memset(v49, 0, 0xA8uLL);
        LODWORD(v49[0]) = 4;
        v49[1] = 56LL;
        if ( v38 )
        {
          v49[2] = v46[0];
          v30 = *(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL;
          LODWORD(v49[4]) = 1;
          v49[3] = v30;
          HIDWORD(v49[4]) = (*(_DWORD *)(v47 + 20) & 0x40000000) != 0 ? 64 : 4;
        }
        else
        {
          v49[2] = v27;
          v49[3] = *(_QWORD *)(v27 + 32);
          LODWORD(v49[4]) = 1;
          HIDWORD(v49[4]) = sub_18002AE30((_DWORD *)a1, 0);
        }
        result = v43(v49, v42);
        if ( (int)result < 0 )
          return result;
        v22 = WORD1(v46[2]);
        v31 = v46[0];
LABEL_66:
        if ( (v22 & 0xF0) != 0 )
        {
          memset(v51, 0, 0x58uLL);
          v51[4] = v46[1];
          v32 = *(_QWORD *)((char *)&v46[4] + 4);
          LODWORD(v51[0]) = 5;
          v51[1] = 88LL;
          v51[2] = v31;
          if ( (v22 & 2) != 0 )
            v32 = LOBYTE(v46[2]);
          v51[5] = v32;
          v33 = 2;
          if ( (v22 & 0x4000) != 0 )
            v33 = 6;
          LODWORD(v51[3]) = v33;
          if ( (v22 & 1) != 0 )
            LODWORD(v51[3]) = v33 | 1;
          v51[9] = v46[3];
          LODWORD(v51[10]) = v46[4];
          HIDWORD(v51[7]) = 1;
          v34 = v51;
          v51[8] = 32LL;
LABEL_84:
          result = v43(v34, v42);
          if ( (int)result < 0 )
            return result;
          goto LABEL_85;
        }
        memset(v49, 0, 0xA8uLL);
        v49[4] = v46[1];
        v35 = *(_QWORD *)((char *)&v46[4] + 4);
        LODWORD(v49[0]) = 5;
        v49[1] = 56LL;
        v49[2] = v31;
        if ( (v22 & 2) != 0 )
          v35 = LOBYTE(v46[2]);
        v49[5] = v35;
        v36 = v49[3];
        if ( (v22 & 1) != 0 )
          v36 = 1;
        LODWORD(v49[3]) = v36;
        if ( (v22 & 0x4000) != 0 )
        {
          v37 = v36 | 4;
          goto LABEL_82;
        }
        if ( v22 < 0 )
        {
          v37 = v36 | 8;
LABEL_82:
          LODWORD(v49[3]) = v37;
        }
        v34 = v49;
        goto LABEL_84;
      }
      if ( (v46[2] & 0x10000000LL) != 0 )
      {
        v20 = v39;
        if ( v41 >= 4 )
        {
          memset(v49, 0, 0xA8uLL);
          v49[2] = v46[0];
          v26 = v46[1];
          v49[4] = 0x100000002LL;
LABEL_56:
          v49[3] = v26;
          v49[1] = 56LL;
          LODWORD(v49[0]) = 4;
          result = v43(v49, v42);
          if ( (int)result < 0 )
            return result;
LABEL_86:
          v20 = v39;
        }
      }
      else
      {
        v7 = v8 == 0;
        v31 = v46[0];
        if ( v7 && (v46[0] < v19 || v46[0] > v21) )
        {
          sub_1800EC88C(v48, v46[0], (unsigned int)&v44, (unsigned int)&v45, (__int64)v50, (__int64)&v40);
          if ( v41 < 4 )
          {
            v19 = v44;
            v21 = v45;
LABEL_85:
            v8 = v38;
            goto LABEL_86;
          }
          memset(v49, 0, 0xA8uLL);
          v19 = v44;
          v21 = v45;
          LODWORD(v49[0]) = 4;
          v49[3] = v45 - v44;
          HIDWORD(v49[4]) = v40;
          v49[1] = 56LL;
          v49[2] = v44;
          LODWORD(v49[4]) = 1;
          result = v43(v49, v42);
          if ( (int)result < 0 )
            return result;
          v22 = WORD1(v46[2]);
          v31 = v46[0];
        }
        v20 = v39;
        if ( v41 >= 4 )
          goto LABEL_66;
        v8 = v38;
      }
    }
    if ( v8 || (v46[2] & 0x80000000LL) != 0 )
    {
      v23 = v48;
      v24 = v46[0];
    }
    else
    {
      v23 = v46[0];
      v24 = v46[0];
      v48 = v46[0];
      if ( v46[0] + 24LL == *(_QWORD *)(a1 + 288) )
        v24 = a1;
    }
    memset(v49, 0, 0xA8uLL);
    v49[3] = LODWORD(v46[3]) + (unsigned __int64)HIDWORD(v46[3]);
    v49[4] = LODWORD(v46[3]);
    LODWORD(v49[0]) = 3;
    v49[1] = 56LL;
    v49[2] = v24;
    result = v43(v49, v42);
    if ( (int)result < 0 )
      return result;
    if ( v8 )
    {
      v19 = v46[0];
      v21 = v46[0] + LODWORD(v46[3]);
      v44 = v46[0];
      v45 = v21;
      v25 = (*(_DWORD *)(v47 + 20) & 0x40000000) != 0 ? 64 : 4;
      v40 = v25;
    }
    else if ( (v46[2] & 0x80000000LL) != 0 )
    {
      v19 = v46[0];
      v21 = v46[0] + LODWORD(v46[3]);
      v44 = v46[0];
      v45 = v21;
      v25 = sub_18002AE30((_DWORD *)a1, 0);
      v40 = v25;
    }
    else
    {
      sub_1800EC88C(v23, v23, (unsigned int)&v44, (unsigned int)&v45, (__int64)v50, (__int64)&v40);
      v19 = v44;
      v21 = v45;
      v25 = v40;
    }
    memset(v49, 0, 0xA8uLL);
    v49[2] = v19;
    v26 = v21 - v19;
    LODWORD(v49[4]) = 1;
    HIDWORD(v49[4]) = v25;
    goto LABEL_56;
  }
  memset(v49, 0, 0xA8uLL);
  LODWORD(v49[0]) = 0x80000000;
  v49[1] = 168LL;
  if ( v8 )
  {
    sub_180060D38(v9, v49);
  }
  else
  {
    LODWORD(v49[3]) = *(unsigned __int16 *)(a1 + 208);
    HIDWORD(v49[2]) = 1;
    v49[4] = a1;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v49[5] = *(_QWORD *)(a1 + 536);
    v11 = *(_QWORD *)(a1 + 544) - *(_QWORD *)(a1 + 632);
    HIDWORD(v49[3]) = NumberOfHeaps - 1;
    v49[6] = v11;
    v49[10] = sub_180060CFC(a1);
    v49[11] = 16LL * *(_QWORD *)(a1 + 192);
    LODWORD(v49[9]) = *(_DWORD *)(a1 + 572);
    LODWORD(v49[13]) = *(_DWORD *)(a1 + 560);
    v49[8] = *(_QWORD *)(a1 + 552);
    LODWORD(v49[7]) = *(_DWORD *)(a1 + 568);
    HIDWORD(v49[13]) = *(_DWORD *)(a1 + 576);
    LODWORD(v49[14]) = HIDWORD(v49[13]);
    v12 = *(_DWORD **)(a1 + 312);
    if ( v12 )
    {
      v13 = v12[4];
      LODWORD(v49[12]) = v13;
      if ( *(_QWORD *)v12 )
        LODWORD(v49[12]) = *(_DWORD *)(*(_QWORD *)v12 + 16LL) + v13;
    }
    v14 = *(__int64 **)(a1 + 352);
    v15 = *(_DWORD *)(a1 + 588);
    HIDWORD(v49[12]) = v15;
    if ( v14 )
    {
      v16 = *v14;
      if ( v16 != -1 )
        v3 = *(_DWORD *)(v16 + 36);
      HIDWORD(v49[12]) = v3 + v15;
    }
  }
  return v4(v49, v2);
}
