/*
 * XREFs of RtlCreateProcessParametersEx @ 0x180062490
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D8AD0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180062954 @ 0x180062954 (sub_180062954.c)
 *     sub_180062978 @ 0x180062978 (sub_180062978.c)
 *     sub_180063838 @ 0x180063838 (sub_180063838.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D8B40 (RtlDeNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateProcessParametersEx(
        _QWORD *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *Src,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  __int64 v15; // r8
  unsigned __int16 *v16; // r9
  int v17; // eax
  unsigned __int64 v18; // r15
  __int16 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  int v22; // eax
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r14
  _WORD *v32; // rdx
  unsigned __int16 *v33; // rax
  unsigned __int16 *v34; // rdi
  unsigned __int16 *v35; // r10
  unsigned __int16 *v36; // r9
  __int64 v37; // rcx
  unsigned __int64 v38; // r14
  size_t EnvironmentSize; // rsi
  unsigned __int64 v40; // rdi
  __int64 Heap; // rax
  _DWORD *v42; // rbx
  struct _RTL_USER_PROCESS_PARAMETERS *v43; // rdi
  __int64 v44; // r9
  char v46; // [rsp+20h] [rbp-40h]
  _DWORD *v47; // [rsp+28h] [rbp-38h] BYREF
  struct _RTL_USER_PROCESS_PARAMETERS *v48; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v49; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v50; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v51; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v52; // [rsp+50h] [rbp-10h]
  _WORD *v53; // [rsp+58h] [rbp-8h]

  if ( (a11 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v48 = ProcessParameters;
  if ( (int)sub_180062954(a2) < 0 )
    return 3221225485LL;
  v17 = v15 ? sub_180062954(a3) : 0;
  if ( v17 < 0 )
    return 3221225485LL;
  v46 = 0;
  v18 = 0LL;
  if ( a4 )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)sub_180062954(a4) < 0 || !v18 )
      return 3221225485LL;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return 3221225485LL;
    v46 = 1;
  }
LABEL_12:
  v21 = a5;
  if ( a5 )
    v22 = sub_180062954(a5);
  else
    v22 = 0;
  if ( v22 < 0 )
    return 3221225485LL;
  v23 = a7;
  v24 = a7 ? sub_180062954(a7) : 0;
  if ( v24 < 0 )
    return 3221225485LL;
  v25 = a8;
  v26 = a8 ? sub_180062954(a8) : 0;
  if ( v26 < 0 )
    return 3221225485LL;
  v27 = a9;
  v28 = a9 ? sub_180062954(a9) : 0;
  if ( v28 < 0 )
    return 3221225485LL;
  v29 = a10;
  v30 = a10 ? sub_180062954(a10) : 0;
  if ( v30 < 0 )
    return 3221225485LL;
  v31 = *a2;
  v32 = &unk_180110678;
  v33 = (unsigned __int16 *)&unk_180110678;
  v34 = a2;
  if ( v21 )
    v34 = (unsigned __int16 *)v21;
  v49 = v34;
  if ( v23 )
    v33 = (unsigned __int16 *)v23;
  v50 = v33;
  v35 = (unsigned __int16 *)&unk_180110678;
  if ( v25 )
    v35 = (unsigned __int16 *)v25;
  v36 = (unsigned __int16 *)&unk_180110678;
  v51 = v35;
  if ( v27 )
    v36 = (unsigned __int16 *)v27;
  v52 = v36;
  if ( v29 )
    v32 = (_WORD *)v29;
  v37 = v33[1] + 7LL;
  v53 = v32;
  v38 = ((*v34 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v35[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v36[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + (v37 & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v31 + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v32 )
    v38 += ((unsigned __int16)v32[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v38 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    EnvironmentSize = sub_180063838(Src, 1LL);
  else
    EnvironmentSize = ProcessParameters->EnvironmentSize;
  while ( 1 )
  {
    v40 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v40 < EnvironmentSize || v40 + v38 < v38 )
      return 3221225621LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v40 + v38);
    v42 = (_DWORD *)Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((void *)(v38 + Heap), Src, EnvironmentSize);
      goto LABEL_48;
    }
    RtlEnterCriticalSection((__int64)&unk_18015AE60);
    EnvironmentSize = v48->EnvironmentSize;
    if ( EnvironmentSize <= v40 )
      break;
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v42);
  }
  memmove((char *)v42 + v38, v48->Environment, v48->EnvironmentSize);
  RtlLeaveCriticalSection((__int64)&unk_18015AE60);
  v40 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_48:
  memset(v42, 0, 0x410uLL);
  *((_QWORD *)v42 + 126) = v40;
  v43 = v48;
  *((_QWORD *)v42 + 16) = (char *)v42 + v38;
  *v42 = v38;
  v42[1] = v38;
  v47 = v42 + 260;
  *((_QWORD *)v42 + 1) = 1LL;
  *((_QWORD *)v42 + 9) = 0LL;
  v42[6] = v43->ConsoleFlags;
  if ( a4 )
  {
    sub_180062978(&v47, v42 + 14, a4, 520LL);
    if ( v46 )
    {
      *(_WORD *)(*((_QWORD *)v42 + 8) + 2 * v18) = 92;
      *((_WORD *)v42 + 28) += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection((__int64)&unk_18015AE60);
    sub_180062978(&v47, v42 + 14, &v43->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
  }
  if ( a3 )
    sub_180062978(&v47, v42 + 20, a3, *(unsigned __int16 *)(a3 + 2));
  sub_180062978(&v47, v42 + 24, a2, (unsigned int)*a2 + 2);
  if ( *v49 == v49[1] )
    v44 = v49[1];
  else
    v44 = (unsigned int)*v49 + 2;
  sub_180062978(&v47, v42 + 28, v49, v44);
  sub_180062978(&v47, v42 + 44, v50, v50[1]);
  sub_180062978(&v47, v42 + 48, v51, v51[1]);
  sub_180062978(&v47, v42 + 52, v52, v52[1]);
  if ( *v53 )
    sub_180062978(&v47, v42 + 56, v53, (unsigned __int16)v53[1]);
  if ( (a11 & 1) != 0 )
    *a1 = v42;
  else
    *a1 = RtlDeNormalizeProcessParams(v42);
  return 0LL;
}
