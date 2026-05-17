/*
 * XREFs of sub_180081CA0 @ 0x180081CA0
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005F208 @ 0x18005F208 (sub_18005F208.c)
 * Callees:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FC5C4 @ 0x1800FC5C4 (sub_1800FC5C4.c)
 */

unsigned __int64 __fastcall sub_180081CA0(__int64 a1, __int16 a2, unsigned __int64 a3, char a4)
{
  __int128 v4; // xmm0
  unsigned __int64 v5; // rsi
  void *v10; // rax
  unsigned __int64 v11; // rdi
  unsigned int v12; // r15d
  bool v13; // cf
  int v14; // eax
  __int128 v15; // xmm0
  int v16; // eax
  int v17; // eax
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // r13d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  bool v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned __int64 v33; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-31h] BYREF
  __int64 v35[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v36; // [rsp+68h] [rbp-19h] BYREF
  __int128 v37; // [rsp+78h] [rbp-9h] BYREF
  __int128 v38; // [rsp+88h] [rbp+7h] BYREF
  __int128 v39; // [rsp+98h] [rbp+17h] BYREF
  __int128 v40; // [rsp+A8h] [rbp+27h] BYREF

  v4 = *(_OWORD *)a1;
  v5 = 0LL;
  v33 = 0LL;
  v36 = v4;
  v10 = sub_18005E238(0x28uLL, 0x28uLL, 0, &v36);
  v11 = (unsigned __int64)v10;
  if ( !v10 )
  {
LABEL_33:
    if ( v33 )
    {
      v40 = *(_OWORD *)a1;
      sub_1800624DC(&v33, (unsigned __int64 *)v35, 0x8000, &v40);
    }
    return v5;
  }
  memset(v10, 0, 0x28uLL);
  v12 = BYTE1(*(_QWORD *)a1) < 2u;
  v35[0] = a3 + (v12 << 12);
  if ( v35[0] < a3 )
    goto LABEL_31;
  v13 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
  v37 = *(_OWORD *)a1;
  v14 = sub_180011A6C(a1, v13 ? 64 : 4);
  if ( (int)sub_18001182C((__int64 *)&v33, v35, 0, 0x2000, v14, &v37, a1) < 0 )
  {
    v33 = 0LL;
    goto LABEL_31;
  }
  v15 = *(_OWORD *)a1;
  v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
  v34 = a3;
  v38 = v15;
  v17 = sub_180011A6C(a1, v16 != 0 ? 64 : 4);
  if ( (int)sub_18001182C((__int64 *)&v33, (__int64 *)&v34, 0, 4096, v17, &v38, 0LL) < 0 )
  {
LABEL_31:
    if ( v11 )
    {
      v39 = *(_OWORD *)a1;
      sub_18005F840(v11, &v39);
    }
    goto LABEL_33;
  }
  v20 = v34;
  *(_QWORD *)(v11 + 24) = v33;
  v21 = *(_DWORD *)(v11 + 32) & 0xFFD | v20 & 0xFFFFFFFFFFFFF000uLL | (2LL * v12);
  *(_QWORD *)(v11 + 32) = v21;
  _BitScanForward64(&v22, v35[0]);
  *(_QWORD *)(v11 + 32) = v21 ^ (unsigned __int8)(v21 ^ (4 * v22)) & 0xFC;
  *(_WORD *)(v11 + 24) = v20 - a2;
  v23 = a4 & 1;
  if ( !v23 )
    RtlAcquireSRWLockExclusive(a1 + 72, v21, v18, v19);
  v24 = a1 + 80;
  v25 = *(_QWORD *)(a1 + 88);
  v26 = *(_QWORD *)(a1 + 80);
  if ( (v25 & 1) != 0 && v26 )
    v26 ^= v24;
  v27 = 0;
  v28 = v25 & 1;
  if ( v26 )
  {
    while ( 1 )
    {
      if ( v33 < (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v29 = *(_QWORD *)v26;
        if ( v28 )
        {
          if ( !v29 )
            goto LABEL_23;
          v29 ^= v26;
        }
        if ( !v29 )
        {
LABEL_23:
          v27 = 0;
          break;
        }
      }
      else
      {
        v29 = *(_QWORD *)(v26 + 8);
        if ( v28 )
        {
          if ( !v29 )
            goto LABEL_17;
          v29 ^= v26;
        }
        if ( !v29 )
        {
LABEL_17:
          v27 = 1;
          break;
        }
      }
      v26 = v29;
    }
  }
  RtlRbInsertNodeEx(v24, v26, v27, v11);
  if ( !v23 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  v30 = v20 >> 12;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v30 + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v30);
  v5 = v33;
  v11 = 0LL;
  v33 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v31 = 2147353480LL;
  if ( *(_BYTE *)v31 )
  {
    sub_1800FC5C4(a1, v5, v34 + 4096);
    goto LABEL_31;
  }
  return v5;
}
