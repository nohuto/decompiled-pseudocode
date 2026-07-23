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

PVOID __fastcall sub_180081CA0(__int64 a1, __int16 a2, ULONG_PTR a3, char a4)
{
  __int128 v4; // xmm0
  PVOID v5; // rsi
  void *v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r15d
  bool v13; // cf
  ULONG v14; // eax
  __int128 v15; // xmm0
  int v16; // eax
  ULONG v17; // eax
  ULONG_PTR v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // r13d
  _RTL_RB_TREE *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  BOOLEAN v25; // r8
  int v26; // r9d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  PVOID BaseAddress; // [rsp+48h] [rbp-39h] BYREF
  ULONG_PTR v32; // [rsp+50h] [rbp-31h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v34; // [rsp+68h] [rbp-19h] BYREF
  __int64 v35[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v36[2]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v37; // [rsp+98h] [rbp+17h] BYREF
  __int128 v38; // [rsp+A8h] [rbp+27h] BYREF

  v4 = *(_OWORD *)a1;
  v5 = 0LL;
  BaseAddress = 0LL;
  v34 = v4;
  v10 = sub_18005E238(0x28uLL, 0x28uLL, 0, &v34);
  v11 = (__int64)v10;
  if ( !v10 )
  {
LABEL_33:
    if ( BaseAddress )
    {
      v38 = *(_OWORD *)a1;
      sub_1800624DC(&BaseAddress, RegionSize, 0x8000, &v38);
    }
    return v5;
  }
  memset(v10, 0, 0x28uLL);
  v12 = BYTE1(*(_QWORD *)a1) < 2u;
  RegionSize[0] = a3 + (v12 << 12);
  if ( RegionSize[0] < a3 )
    goto LABEL_31;
  v13 = (*(_DWORD *)(a1 + 20) & 0x40000000) != 0;
  *(_OWORD *)v35 = *(_OWORD *)a1;
  v14 = sub_180011A6C((PVOID)a1, v13 ? 64 : 4);
  if ( (int)sub_18001182C(&BaseAddress, RegionSize, 0, 0x2000, v14, (__int128 *)v35, a1) < 0 )
  {
    BaseAddress = 0LL;
    goto LABEL_31;
  }
  v15 = *(_OWORD *)a1;
  v16 = *(_DWORD *)(a1 + 20) & 0x40000000;
  v32 = a3;
  *(_OWORD *)v36 = v15;
  v17 = sub_180011A6C((PVOID)a1, v16 != 0 ? 64 : 4);
  if ( (int)sub_18001182C(&BaseAddress, &v32, 0, 4096, v17, (__int128 *)v36, 0LL) < 0 )
  {
LABEL_31:
    if ( v11 )
    {
      v37 = *(_OWORD *)a1;
      sub_18005F840(v11, &v37);
    }
    goto LABEL_33;
  }
  v18 = v32;
  *(_QWORD *)(v11 + 24) = BaseAddress;
  v19 = *(_DWORD *)(v11 + 32) & 0xFFD | v18 & 0xFFFFFFFFFFFFF000uLL | (2LL * v12);
  *(_QWORD *)(v11 + 32) = v19;
  _BitScanForward64(&v20, RegionSize[0]);
  *(_QWORD *)(v11 + 32) = v19 ^ (unsigned __int8)(v19 ^ (4 * v20)) & 0xFC;
  *(_WORD *)(v11 + 24) = v18 - a2;
  v21 = a4 & 1;
  if ( !v21 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v22 = (_RTL_RB_TREE *)(a1 + 80);
  v23 = *(_QWORD *)(a1 + 88);
  v24 = *(_QWORD *)(a1 + 80);
  if ( (v23 & 1) != 0 && v24 )
    v24 ^= (unsigned __int64)v22;
  v25 = 0;
  v26 = v23 & 1;
  if ( v24 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)BaseAddress < (*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v27 = *(_QWORD *)v24;
        if ( v26 )
        {
          if ( !v27 )
            goto LABEL_23;
          v27 ^= v24;
        }
        if ( !v27 )
        {
LABEL_23:
          v25 = 0;
          break;
        }
      }
      else
      {
        v27 = *(_QWORD *)(v24 + 8);
        if ( v26 )
        {
          if ( !v27 )
            goto LABEL_17;
          v27 ^= v24;
        }
        if ( !v27 )
        {
LABEL_17:
          v25 = 1;
          break;
        }
      }
      v24 = v27;
    }
  }
  RtlRbInsertNodeEx(v22, (PRTL_BALANCED_NODE)v24, v25, (PRTL_BALANCED_NODE)v11);
  if ( !v21 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v28 = v18 >> 12;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v28 + 1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v28);
  v5 = BaseAddress;
  v11 = 0LL;
  BaseAddress = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v29 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v29 = 2147353480LL;
  if ( *(_BYTE *)v29 )
  {
    sub_1800FC5C4(a1, v5, v32 + 4096);
    goto LABEL_31;
  }
  return v5;
}
