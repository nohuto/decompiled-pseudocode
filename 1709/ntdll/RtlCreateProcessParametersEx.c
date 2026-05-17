/*
 * XREFs of RtlCreateProcessParametersEx @ 0x18006AFA0
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800D79D0 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     ValidateStringParameter @ 0x18006B45C (ValidateStringParameter.c)
 *     RtlpCopyProcString @ 0x18006B480 (RtlpCopyProcString.c)
 *     RtlpGetBlockSizeEx @ 0x18006B7B4 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800D7A40 (RtlDeNormalizeProcessParams.c)
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
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
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
  _WORD *v31; // rdx
  unsigned __int16 *v32; // rax
  unsigned __int16 *v33; // r11
  unsigned __int16 *v34; // r10
  unsigned __int16 *v35; // r9
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  size_t BlockSize; // rsi
  unsigned __int64 v41; // rdi
  __int64 Heap; // rax
  _DWORD *v43; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v44; // rdi
  __int64 v45; // r9
  char v47; // [rsp+20h] [rbp-40h]
  _DWORD *v48; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *v49; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v50; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v51; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v52; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v53; // [rsp+50h] [rbp-10h]
  _WORD *v54; // [rsp+58h] [rbp-8h]

  if ( (a11 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v49 = ProcessParameters;
  if ( (int)ValidateStringParameter(a2) < 0 )
    return 3221225485LL;
  v17 = v15 ? ValidateStringParameter(a3) : 0;
  if ( v17 < 0 )
    return 3221225485LL;
  v47 = 0;
  v18 = 0LL;
  if ( a4 )
  {
    v18 = (unsigned __int64)*v16 >> 1;
    if ( (int)ValidateStringParameter(a4) < 0 || !v18 )
      return 3221225485LL;
    if ( *(_WORD *)(*(_QWORD *)(v20 + 8) + 2 * v18 - 2) == v19 )
      goto LABEL_12;
    if ( v18 > 0x103 )
      return 3221225485LL;
    v47 = 1;
  }
LABEL_12:
  v21 = a5;
  if ( a5 )
    v22 = ValidateStringParameter(a5);
  else
    v22 = 0;
  if ( v22 < 0 )
    return 3221225485LL;
  v23 = a7;
  v24 = a7 ? ValidateStringParameter(a7) : 0;
  if ( v24 < 0 )
    return 3221225485LL;
  v25 = a8;
  v26 = a8 ? ValidateStringParameter(a8) : 0;
  if ( v26 < 0 )
    return 3221225485LL;
  v27 = a9;
  v28 = a9 ? ValidateStringParameter(a9) : 0;
  if ( v28 < 0 )
    return 3221225485LL;
  v29 = a10;
  v30 = a10 ? ValidateStringParameter(a10) : 0;
  if ( v30 < 0 )
    return 3221225485LL;
  v31 = &RtlpNullString;
  v32 = a2;
  if ( v21 )
    v32 = (unsigned __int16 *)v21;
  v50 = v32;
  v33 = (unsigned __int16 *)&RtlpNullString;
  if ( v23 )
    v33 = (unsigned __int16 *)v23;
  v34 = (unsigned __int16 *)&RtlpNullString;
  v51 = v33;
  if ( v25 )
    v34 = (unsigned __int16 *)v25;
  v35 = (unsigned __int16 *)&RtlpNullString;
  v52 = v34;
  if ( v27 )
    v35 = (unsigned __int16 *)v27;
  v53 = v35;
  v36 = v34[1];
  if ( v29 )
    v31 = (_WORD *)v29;
  v37 = *v32;
  v38 = *a2 + 9LL;
  v54 = v31;
  v39 = ((v35[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v33[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + (v38 & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v37 + 9) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v36 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v31 )
    v39 += ((unsigned __int16)v31[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v39 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = ProcessParameters->EnvironmentSize;
  while ( 1 )
  {
    v41 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v41 < BlockSize || v41 + v39 < v39 )
      return 3221225621LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v41 + v39);
    v43 = (_DWORD *)Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((void *)(v39 + Heap), Src, BlockSize);
      goto LABEL_48;
    }
    RtlEnterCriticalSection((__int64)&FastPebLock);
    BlockSize = v49->EnvironmentSize;
    if ( BlockSize <= v41 )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v43);
  }
  memmove((char *)v43 + v39, v49->Environment, v49->EnvironmentSize);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v41 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_48:
  memset(v43, 0, 0x410uLL);
  *((_QWORD *)v43 + 126) = v41;
  v44 = v49;
  *((_QWORD *)v43 + 16) = (char *)v43 + v39;
  *v43 = v39;
  v43[1] = v39;
  v48 = v43 + 260;
  *((_QWORD *)v43 + 1) = 1LL;
  *((_QWORD *)v43 + 9) = 0LL;
  v43[6] = v44->ConsoleFlags;
  if ( a4 )
  {
    RtlpCopyProcString(&v48, v43 + 14, a4, 520LL);
    if ( v47 )
    {
      *(_WORD *)(*((_QWORD *)v43 + 8) + 2 * v18) = 92;
      *((_WORD *)v43 + 28) += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlpCopyProcString(&v48, v43 + 14, &v44->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v48, v43 + 20, a3, *(unsigned __int16 *)(a3 + 2));
  RtlpCopyProcString(&v48, v43 + 24, a2, (unsigned int)*a2 + 2);
  if ( *v50 == v50[1] )
    v45 = v50[1];
  else
    v45 = (unsigned int)*v50 + 2;
  RtlpCopyProcString(&v48, v43 + 28, v50, v45);
  RtlpCopyProcString(&v48, v43 + 44, v51, v51[1]);
  RtlpCopyProcString(&v48, v43 + 48, v52, v52[1]);
  RtlpCopyProcString(&v48, v43 + 52, v53, v53[1]);
  if ( *v54 )
    RtlpCopyProcString(&v48, v43 + 56, v54, (unsigned __int16)v54[1]);
  if ( (a11 & 1) != 0 )
    *a1 = v43;
  else
    *a1 = RtlDeNormalizeProcessParams(v43);
  return 0LL;
}
