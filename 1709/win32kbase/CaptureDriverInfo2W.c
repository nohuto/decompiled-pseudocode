/*
 * XREFs of CaptureDriverInfo2W @ 0x1C007D7C0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0059EE0 (NtGdiOpenDCW.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C001DE60 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     AllocThreadBufferWithTag @ 0x1C0043A90 (AllocThreadBufferWithTag.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_QWORD *__fastcall CaptureDriverInfo2W(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  size_t v10; // r13
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  void *v14; // rcx
  void *v15; // rcx
  size_t v17; // [rsp+80h] [rbp+8h]
  __int64 Size; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v2 + 2 > MmUserProbeAddress || v2 + 2 < v2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v3 + 2 > MmUserProbeAddress || v3 + 2 < v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(v2 + 2 * v5) );
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v3 + 2 * v6) );
  if ( v5 + 1 < v5 )
    return 0LL;
  if ( v6 + 1 < v6 )
    return 0LL;
  if ( !is_mul_ok(v5 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    return 0LL;
  v17 = 2 * v5;
  v7 = 2 * v5 + 50;
  if ( v7 < 0x30 )
    return 0LL;
  Size = 2 * v6;
  v8 = v7 + 2 * v6 + 2;
  if ( v8 < 2 * v5 + 50 )
    return 0LL;
  if ( (v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > MmUserProbeAddress || v4 + 2 < v4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(v4 + 2 * v9) );
  if ( v9 + 1 < v9 )
    return 0LL;
  if ( !is_mul_ok(v9 + 1, 2uLL) )
    return 0LL;
  v10 = 2 * v9;
  if ( v8 + 2 * v9 + 2 < v8 )
    return 0LL;
  v11 = v8 + 2 * v9 + 2;
  if ( v11 < 0x30 || v11 > 0x2710000 )
    return 0LL;
  v12 = (_QWORD *)AllocThreadBufferWithTag(v11, 0x706D7447u, 0);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, (unsigned int)v11);
  if ( v13 )
  {
    *(_DWORD *)v13 = *(_DWORD *)a1;
    v13[5] = 0LL;
    v13[2] = 0LL;
    v13[1] = v13 + 6;
    v13[3] = (char *)v13 + v17 + 50;
    if ( v17 + v2 < v2 || v17 + v2 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13 + 6, (const void *)v2, v17);
    v14 = (void *)v13[3];
    if ( Size + v3 < v3 || Size + v3 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v14, (const void *)v3, Size);
    v15 = (void *)(v13[3] + Size + 2);
    v13[4] = v15;
    if ( v4 + v10 < v4 || v4 + v10 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, (const void *)v4, v10);
  }
  return v13;
}
