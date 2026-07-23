/*
 * XREFs of sub_180005B00 @ 0x180005B00
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 * Callees:
 *     sub_180005640 @ 0x180005640 (sub_180005640.c)
 *     sub_18000622C @ 0x18000622C (sub_18000622C.c)
 *     sub_1800062F4 @ 0x1800062F4 (sub_1800062F4.c)
 *     sub_180007170 @ 0x180007170 (sub_180007170.c)
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180005B00(_DWORD *BaseAddress, __int64 a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD *, __int64); // r12
  unsigned int v6; // eax
  bool v7; // zf
  char v8; // r14
  _QWORD *v9; // rsi
  __int64 result; // rax
  ULONG NumberOfHeaps; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r15
  __int16 v21; // si
  int v22; // r15d
  _DWORD *v23; // rsi
  PVOID v24; // rcx
  int v25; // esi
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r14
  PVOID v29; // rcx
  unsigned __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  _QWORD *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  char v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v41; // [rsp+38h] [rbp-C8h]
  __int64 v42; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall *v43)(_QWORD *, __int64); // [rsp+48h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v46[6]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v47; // [rsp+90h] [rbp-70h]
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
  v7 = BaseAddress[4] == -571548178;
  v43 = v4;
  v48 = 0LL;
  if ( v7 )
  {
    v8 = 1;
    v39 = 1;
    v9 = BaseAddress;
    v47 = BaseAddress;
  }
  else
  {
    v7 = (BaseAddress[29] & 0x1000000) == 0;
    v8 = 0;
    v39 = 0;
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
    v49[2] = BaseAddress;
    if ( v8 )
    {
      v49[4] = *v9 << 12;
      v49[4] += v9[9] << 12;
      v49[5] = v9[1] << 12;
      v49[5] += v9[10] << 12;
      result = 0LL;
      LODWORD(v49[3]) = 0;
    }
    else
    {
      LODWORD(v49[3]) = *((unsigned __int8 *)BaseAddress + 386);
      result = sub_180005640((__int64)BaseAddress, &v49[4], &v49[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v4(v49, v2);
    if ( (int)result < 0 || v41 < 3 )
      return result;
    memset(v46, 0, sizeof(v46));
    v19 = 0LL;
    v44 = 0LL;
    v20 = 0LL;
    v45 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v18) = v41 > 3;
        result = sub_180008414(BaseAddress, v46, v18);
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v21 = WORD1(v46[2]);
        if ( (v46[2] & 0x20000LL) == 0 )
          break;
        if ( v8 || (v46[2] & 0x80000000LL) != 0 )
        {
          v22 = v48;
          v23 = (_DWORD *)v46[0];
        }
        else
        {
          v22 = v46[0];
          v23 = (_DWORD *)v46[0];
          v48 = v46[0];
          if ( v46[0] + 24LL == *((_QWORD *)BaseAddress + 36) )
            v23 = BaseAddress;
        }
        memset(v49, 0, 0xA8uLL);
        v49[3] = LODWORD(v46[3]) + (unsigned __int64)HIDWORD(v46[3]);
        v49[4] = LODWORD(v46[3]);
        LODWORD(v49[0]) = 3;
        v49[1] = 56LL;
        v49[2] = v23;
        result = v43(v49, v42);
        if ( (int)result < 0 )
          return result;
        if ( v8 )
        {
          v24 = v47;
        }
        else
        {
          if ( (v46[2] & 0x80000000LL) == 0 )
          {
            sub_180007170(v22, v22, (unsigned int)&v44, (unsigned int)&v45, (__int64)v50, (__int64)&v40);
            v19 = v44;
            v20 = v45;
            v25 = v40;
            goto LABEL_36;
          }
          v24 = BaseAddress;
        }
        v19 = v46[0];
        v20 = v46[0] + LODWORD(v46[3]);
        v44 = v46[0];
        v45 = v20;
        v40 = sub_18001E548(v24);
        v25 = v40;
LABEL_36:
        memset(v49, 0, 0xA8uLL);
        v49[2] = v19;
        v26 = v20 - v19;
        LODWORD(v49[4]) = 1;
        HIDWORD(v49[4]) = v25;
LABEL_37:
        v49[3] = v26;
        v49[1] = 56LL;
        LODWORD(v49[0]) = 4;
        result = v43(v49, v42);
        if ( (int)result < 0 )
          return result;
      }
      if ( (v46[2] & 0x40000000LL) != 0 )
        break;
      if ( (v46[2] & 0x10000000LL) != 0 )
      {
        if ( v41 >= 4 )
        {
          memset(v49, 0, 0xA8uLL);
          v49[2] = v46[0];
          v26 = v46[1];
          v49[4] = 0x100000002LL;
          goto LABEL_37;
        }
      }
      else
      {
        v7 = v8 == 0;
        v36 = v46[0];
        if ( v7 && (v46[0] > v20 || v46[0] < v19) )
        {
          sub_180007170(v48, v46[0], (unsigned int)&v44, (unsigned int)&v45, (__int64)v50, (__int64)&v40);
          if ( v41 < 4 )
          {
            v19 = v44;
            v20 = v45;
            goto LABEL_78;
          }
          memset(v49, 0, 0xA8uLL);
          v19 = v44;
          v20 = v45;
          LODWORD(v49[0]) = 4;
          v49[3] = v45 - v44;
          HIDWORD(v49[4]) = v40;
          v49[1] = 56LL;
          v49[2] = v44;
          LODWORD(v49[4]) = 1;
          result = v43(v49, v42);
          if ( (int)result < 0 )
            return result;
          v21 = WORD1(v46[2]);
          v36 = v46[0];
        }
        if ( v41 >= 4 )
          goto LABEL_82;
LABEL_78:
        v8 = v39;
      }
    }
    memset(v49, 0, 0xA8uLL);
    v27 = 0LL;
    LODWORD(v49[0]) = 3;
    v28 = 0LL;
    v49[1] = 56LL;
    if ( v39 )
    {
      v49[2] = v46[0];
      v28 = sub_180009380(v47);
      v49[3] = (*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v49[4] = *(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v35 = v46[0] - 16LL;
      _m_prefetchw((const void *)(v46[0] - 16LL));
      if ( *(_BYTE *)(v35 + 15) == 5 )
        v35 -= 16LL * *(unsigned __int8 *)(v35 + 14);
      v27 = v35 - 48;
      v49[2] = (v35 - 48) & 0xFFFFFFFFFFFF0000uLL;
      v49[3] = *(_QWORD *)(v35 - 48 + 40);
      v49[4] = *(_QWORD *)(v35 - 48 + 32);
    }
    result = v43(v49, v42);
    if ( (int)result < 0 )
      return result;
    memset(v49, 0, 0xA8uLL);
    LODWORD(v49[0]) = 4;
    v49[1] = 56LL;
    if ( v39 )
    {
      v29 = v47;
      v49[2] = v46[0];
      v30 = *(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v49[2] = v27;
      v29 = BaseAddress;
      v30 = *(_QWORD *)(v27 + 32);
    }
    v49[3] = v30;
    LODWORD(v49[4]) = 1;
    HIDWORD(v49[4]) = sub_18001E548(v29);
    result = v43(v49, v42);
    if ( (int)result < 0 )
      return result;
    v21 = WORD1(v46[2]);
    v36 = v46[0];
LABEL_82:
    if ( (v21 & 0xF0) != 0 )
    {
      memset(v51, 0, 0x58uLL);
      v51[4] = v46[1];
      v37 = *(_QWORD *)((char *)&v46[4] + 4);
      LODWORD(v51[0]) = 5;
      v51[1] = 88LL;
      v51[2] = v36;
      if ( (v21 & 2) != 0 )
        v37 = LOBYTE(v46[2]);
      v51[5] = v37;
      v34 = 2;
      if ( (v21 & 0x4000) != 0 )
        v34 = 6;
      LODWORD(v51[3]) = v34;
      if ( (v21 & 1) != 0 )
        LODWORD(v51[3]) = v34 | 1;
      v51[9] = v46[3];
      LODWORD(v51[10]) = v46[4];
      HIDWORD(v51[7]) = 1;
      v33 = v51;
      v51[8] = 32LL;
LABEL_58:
      result = v43(v33, v42);
      if ( (int)result < 0 )
        return result;
      goto LABEL_78;
    }
    memset(v49, 0, 0xA8uLL);
    v49[4] = v46[1];
    v38 = *(_QWORD *)((char *)&v46[4] + 4);
    LODWORD(v49[0]) = 5;
    v49[1] = 56LL;
    v49[2] = v36;
    if ( (v21 & 2) != 0 )
      v38 = LOBYTE(v46[2]);
    v49[5] = v38;
    v31 = v49[3];
    if ( (v21 & 1) != 0 )
      v31 = 1;
    LODWORD(v49[3]) = v31;
    if ( (v21 & 0x4000) != 0 )
    {
      v32 = v31 | 4;
    }
    else
    {
      if ( v21 >= 0 )
      {
LABEL_57:
        v33 = v49;
        goto LABEL_58;
      }
      v32 = v31 | 8;
    }
    LODWORD(v49[3]) = v32;
    goto LABEL_57;
  }
  memset(v49, 0, 0xA8uLL);
  LODWORD(v49[0]) = 0x80000000;
  v49[1] = 168LL;
  if ( v8 )
  {
    sub_18000622C(v9, v49);
  }
  else
  {
    LODWORD(v49[3]) = *((unsigned __int16 *)BaseAddress + 104);
    HIDWORD(v49[2]) = 1;
    v49[4] = BaseAddress;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v49[5] = *((_QWORD *)BaseAddress + 67);
    v12 = *((_QWORD *)BaseAddress + 68) - *((_QWORD *)BaseAddress + 79);
    HIDWORD(v49[3]) = NumberOfHeaps - 1;
    v49[6] = v12;
    v13 = sub_1800062F4(BaseAddress);
    v14 = (_DWORD *)*((_QWORD *)BaseAddress + 39);
    v49[10] = v13;
    v49[11] = 16LL * *((_QWORD *)BaseAddress + 24);
    LODWORD(v49[9]) = BaseAddress[143];
    LODWORD(v49[13]) = BaseAddress[140];
    v49[8] = *((_QWORD *)BaseAddress + 69);
    LODWORD(v49[7]) = BaseAddress[142];
    HIDWORD(v49[13]) = BaseAddress[144];
    LODWORD(v49[14]) = HIDWORD(v49[13]);
    if ( v14 )
    {
      v15 = v14[4];
      LODWORD(v49[12]) = v15;
      if ( *(_QWORD *)v14 )
        LODWORD(v49[12]) = *(_DWORD *)(*(_QWORD *)v14 + 16LL) + v15;
    }
    v16 = *((_QWORD *)BaseAddress + 44);
    v17 = BaseAddress[147];
    HIDWORD(v49[12]) = v17;
    if ( v16 )
    {
      if ( *(_QWORD *)v16 != -1LL )
        v3 = *(_DWORD *)(*(_QWORD *)v16 + 36LL);
      HIDWORD(v49[12]) = v3 + v17;
    }
  }
  return v4(v49, v2);
}
