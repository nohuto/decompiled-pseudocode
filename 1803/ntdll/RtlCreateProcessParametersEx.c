/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18004B3F0
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D1A60 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004B8E4 @ 0x18004B8E4 (sub_18004B8E4.c)
 *     sub_18004B908 @ 0x18004B908 (sub_18004B908.c)
 *     sub_18004C748 @ 0x18004C748 (sub_18004C748.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D1AD0 (RtlDeNormalizeProcessParams.c)
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
  unsigned __int64 v18; // rbp
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
  _WORD *v31; // rdx
  unsigned __int16 *v32; // rax
  unsigned __int16 *v33; // r11
  unsigned __int16 *v34; // r10
  __int64 v35; // rax
  unsigned __int16 *v36; // r9
  __int64 v37; // rcx
  unsigned __int64 v38; // r14
  const void *v39; // r12
  size_t EnvironmentSize; // rdi
  unsigned __int64 v41; // rsi
  __int64 Heap; // rax
  _DWORD *v43; // rbx
  void *v44; // rax
  char *v45; // rdi
  struct _RTL_USER_PROCESS_PARAMETERS *v46; // rsi
  __int64 v47; // r9
  unsigned __int64 v49; // r12
  bool v50; // cf
  char v51; // [rsp+20h] [rbp-78h]
  _DWORD *v52; // [rsp+28h] [rbp-70h] BYREF
  struct _RTL_USER_PROCESS_PARAMETERS *v53; // [rsp+30h] [rbp-68h]
  unsigned __int16 *v54; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v55; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v56; // [rsp+48h] [rbp-50h]
  unsigned __int16 *v57; // [rsp+50h] [rbp-48h]
  _WORD *v58; // [rsp+58h] [rbp-40h]

  if ( (a11 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v53 = ProcessParameters;
  if ( (int)sub_18004B8E4(a2) < 0 )
    return 3221225485LL;
  v17 = v15 ? sub_18004B8E4(a3) : 0;
  if ( v17 < 0 )
    return 3221225485LL;
  v51 = 0;
  v18 = 0LL;
  if ( a4 )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)sub_18004B8E4(a4) < 0 || !v18 )
      return 3221225485LL;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return 3221225485LL;
    v51 = 1;
  }
LABEL_12:
  v21 = a5;
  if ( a5 )
    v22 = sub_18004B8E4(a5);
  else
    v22 = 0;
  if ( v22 < 0 )
    return 3221225485LL;
  v23 = a7;
  v24 = a7 ? sub_18004B8E4(a7) : 0;
  if ( v24 < 0 )
    return 3221225485LL;
  v25 = a8;
  v26 = a8 ? sub_18004B8E4(a8) : 0;
  if ( v26 < 0 )
    return 3221225485LL;
  v27 = a9;
  v28 = a9 ? sub_18004B8E4(a9) : 0;
  if ( v28 < 0 )
    return 3221225485LL;
  v29 = a10;
  v30 = a10 ? sub_18004B8E4(a10) : 0;
  if ( v30 < 0 )
    return 3221225485LL;
  v31 = &unk_180110400;
  v32 = a2;
  if ( v21 )
    v32 = (unsigned __int16 *)v21;
  v54 = v32;
  v33 = (unsigned __int16 *)&unk_180110400;
  if ( v23 )
    v33 = (unsigned __int16 *)v23;
  v34 = (unsigned __int16 *)&unk_180110400;
  v55 = v33;
  v35 = *v32;
  if ( v25 )
    v34 = (unsigned __int16 *)v25;
  v36 = (unsigned __int16 *)&unk_180110400;
  v56 = v34;
  if ( v27 )
    v36 = (unsigned __int16 *)v27;
  v57 = v36;
  if ( v29 )
    v31 = (_WORD *)v29;
  v37 = v34[1];
  v58 = v31;
  v38 = ((v33[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v35 + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v37 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v36[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v31 )
    v38 += ((unsigned __int16)v31[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v38 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v39 = Src;
  if ( Src )
    EnvironmentSize = sub_18004C748(Src, 1LL);
  else
    EnvironmentSize = ProcessParameters->EnvironmentSize;
  v41 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v41 >= EnvironmentSize )
  {
    while ( 1 )
    {
      if ( v41 + v38 < v38 )
        return 3221225621LL;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v41 + v38);
      v43 = (_DWORD *)Heap;
      if ( !Heap )
        return 3221225626LL;
      v44 = (void *)(v38 + Heap);
      if ( v39 )
        break;
      RtlEnterCriticalSection((__int64)&unk_18015BE80);
      EnvironmentSize = v53->EnvironmentSize;
      v49 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( EnvironmentSize <= v41 )
      {
        v45 = (char *)v43 + v38;
        memmove((char *)v43 + v38, v53->Environment, v53->EnvironmentSize);
        RtlLeaveCriticalSection((__int64)&unk_18015BE80);
        v41 = v49;
        goto LABEL_48;
      }
      RtlLeaveCriticalSection((__int64)&unk_18015BE80);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v43);
      v50 = v49 < EnvironmentSize;
      v41 = (EnvironmentSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v39 = Src;
      if ( v50 )
        return 3221225621LL;
    }
    memmove(v44, v39, EnvironmentSize);
    v45 = (char *)v43 + v38;
LABEL_48:
    memset(v43, 0, 0x410uLL);
    *((_QWORD *)v43 + 126) = v41;
    v46 = v53;
    *v43 = v38;
    v43[1] = v38;
    *((_QWORD *)v43 + 16) = v45;
    v52 = v43 + 260;
    *((_QWORD *)v43 + 1) = 1LL;
    *((_QWORD *)v43 + 9) = 0LL;
    v43[6] = v46->ConsoleFlags & 1;
    if ( a4 )
    {
      sub_18004B908(&v52, v43 + 14, a4, 520LL);
      if ( v51 )
      {
        *(_WORD *)(*((_QWORD *)v43 + 8) + 2 * v18) = 92;
        *((_WORD *)v43 + 28) += 2;
      }
    }
    else
    {
      RtlEnterCriticalSection((__int64)&unk_18015BE80);
      sub_18004B908(&v52, v43 + 14, &v46->CurrentDirectory, 520LL);
      RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    }
    if ( a3 )
      sub_18004B908(&v52, v43 + 20, a3, *(unsigned __int16 *)(a3 + 2));
    sub_18004B908(&v52, v43 + 24, a2, (unsigned int)*a2 + 2);
    if ( *v54 == v54[1] )
      v47 = v54[1];
    else
      v47 = (unsigned int)*v54 + 2;
    sub_18004B908(&v52, v43 + 28, v54, v47);
    sub_18004B908(&v52, v43 + 44, v55, v55[1]);
    sub_18004B908(&v52, v43 + 48, v56, v56[1]);
    sub_18004B908(&v52, v43 + 52, v57, v57[1]);
    if ( *v58 )
      sub_18004B908(&v52, v43 + 56, v58, (unsigned __int16)v58[1]);
    if ( (a11 & 1) == 0 )
      v43 = (_DWORD *)RtlDeNormalizeProcessParams(v43);
    *a1 = v43;
    return 0LL;
  }
  return 3221225621LL;
}
