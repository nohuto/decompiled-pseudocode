/*
 * XREFs of HvpRecoverData @ 0x1406A1A10
 * Callers:
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 * Callees:
 *     RtlClearBits @ 0x140080ED0 (RtlClearBits.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140116B14 (RtlMergeBitMaps.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvApplyLegacyLogFile @ 0x1406A257C (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1406A2770 (HvApplyLogFile.c)
 */

__int64 __fastcall HvpRecoverData(ULONG_PTR a1, int a2, int a3, char a4, int *a5, int *a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  unsigned int v9; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // r13
  ULONG *v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // edi
  __int64 v17; // rdx
  void *v18; // r12
  void *v19; // rbx
  ULONG v20; // edi
  ULONG v21; // eax
  int v22; // ecx
  void *v24; // [rsp+50h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+58h] [rbp-21h] BYREF
  PVOID P; // [rsp+68h] [rbp-11h] BYREF
  int v27; // [rsp+70h] [rbp-9h]
  int v28; // [rsp+74h] [rbp-5h]
  int v29; // [rsp+D0h] [rbp+57h]
  int v30; // [rsp+D8h] [rbp+5Fh] BYREF
  int v31; // [rsp+E0h] [rbp+67h]
  char v32; // [rsp+E8h] [rbp+6Fh]

  v32 = a4;
  v31 = a3;
  v7 = 1;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  P = 0LL;
  v27 = 0;
  v28 = a2;
  v9 = ((v8 >> 12) + 3) & 0xFFFFFFFC;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x38334D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = 2;
    goto LABEL_20;
  }
  memset(PoolWithTag, 0, ((v8 >> 12) + 3) & 0xFFFFFFFC);
  v12 = (ULONG *)(a1 + 72);
  BitMapHeader.SizeOfBitMap = v8 >> 9;
  BitMapHeader.Buffer = v11;
  RtlMergeBitMaps(&BitMapHeader.SizeOfBitMap, a1 + 72);
  if ( v32 )
  {
    v30 = 0;
    v29 = 1;
    v13 = HvApplyLegacyLogFile(a1);
  }
  else
  {
    v13 = HvApplyLogFile(a1, (__int64)&P, (__int64)&BitMapHeader, (__int64)&v24, (__int64)&v30);
    v29 = v30;
    v30 = (int)v24;
  }
  if ( v13 == -1073741801 )
    goto LABEL_7;
  if ( v13 < 0 )
    goto LABEL_19;
  RtlMergeBitMaps((unsigned int *)(a1 + 72), (__int64)&BitMapHeader);
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( v8 >= v15 )
  {
    if ( v8 > v15 )
    {
      v20 = v15 >> 9;
      RtlClearBits((PRTL_BITMAP)(a1 + 72), v20, *v12 - v20);
      *v12 = v20;
      *(_DWORD *)(a1 + 96) = v20;
    }
    goto LABEL_16;
  }
  v16 = v15 >> 9;
  LOBYTE(v14) = 1;
  v9 = ((v16 >> 3) + 3) & 0xFFFFFFFC;
  v18 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v9, v14, 909331779LL);
  if ( v18 )
  {
    LOBYTE(v17) = 1;
    v24 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v9, v17, 909331779LL);
    if ( !v24 )
    {
      v7 = 2;
      goto LABEL_17;
    }
    memset(v18, 0, v9);
    v19 = v24;
    memset(v24, 0, v9);
    BitMapHeader.SizeOfBitMap = v16;
    BitMapHeader.Buffer = (unsigned int *)v18;
    RtlMergeBitMaps(&BitMapHeader.SizeOfBitMap, a1 + 72);
    RtlSetBits(&BitMapHeader, *v12, v16 - *v12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*(_QWORD *)(a1 + 80), *(unsigned int *)(a1 + 92));
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(*(_QWORD *)(a1 + 104), *(unsigned int *)(a1 + 92));
    *v12 = v16;
    *(_QWORD *)(a1 + 80) = v18;
    *(_DWORD *)(a1 + 96) = v16;
    *(_QWORD *)(a1 + 104) = v19;
    *(_DWORD *)(a1 + 92) = v9;
LABEL_16:
    v21 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 72));
    v22 = v30;
    v7 = 3;
    *(_DWORD *)(a1 + 88) = v21;
    v18 = 0LL;
    *a5 = v22;
    *a6 = v29;
LABEL_17:
    if ( v18 )
      (*(void (__fastcall **)(void *, _QWORD))(a1 + 32))(v18, v9);
    goto LABEL_19;
  }
LABEL_7:
  v7 = 2;
LABEL_19:
  ExFreePoolWithTag(v11, 0);
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v7;
}
