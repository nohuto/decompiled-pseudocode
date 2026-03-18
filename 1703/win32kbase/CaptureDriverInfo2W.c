/*
 * XREFs of CaptureDriverInfo2W @ 0x1C007C9C0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     AllocThreadBufferWithTag @ 0x1C003B1F0 (AllocThreadBufferWithTag.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_QWORD *__fastcall CaptureDriverInfo2W(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  CTouchProcessor *v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  size_t v11; // r12
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  void *v15; // rcx
  void *v16; // rcx
  __int64 Size; // [rsp+20h] [rbp-58h]
  size_t v19; // [rsp+80h] [rbp+8h]

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
  v5 = W32UserProbeAddress;
  if ( v2 + 2 > (unsigned __int64)W32UserProbeAddress || v2 + 2 < v2 )
  {
    *(_BYTE *)W32UserProbeAddress = 0;
    v5 = W32UserProbeAddress;
  }
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v3 + 2 > (unsigned __int64)v5 || v3 + 2 < v3 )
  {
    *(_BYTE *)v5 = 0;
    v5 = W32UserProbeAddress;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v2 + 2 * v6) );
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v3 + 2 * v7) );
  if ( v6 + 1 < v6 )
    return 0LL;
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( !is_mul_ok(v6 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v7 + 1, 2uLL) )
    return 0LL;
  v19 = 2 * v6;
  if ( 2 * v6 + 50 < 0x30 )
    return 0LL;
  v8 = 2 * v6 + 50;
  Size = 2 * v7;
  if ( v8 + 2 * v7 + 2 < v8 )
    return 0LL;
  v9 = v8 + 2 * v7 + 2;
  if ( (v4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( v4 + 2 > (unsigned __int64)v5 || v4 + 2 < v4 )
    *(_BYTE *)v5 = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(v4 + 2 * v10) );
  if ( v10 + 1 < v10 )
    return 0LL;
  if ( !is_mul_ok(v10 + 1, 2uLL) )
    return 0LL;
  v11 = 2 * v10;
  if ( 2 * v10 + v9 + 2 < v9 )
    return 0LL;
  v12 = 2 * v10 + v9 + 2;
  if ( v12 < 0x30 || v12 > 0x2710000 )
    return 0LL;
  v13 = (_QWORD *)AllocThreadBufferWithTag(v12, 0x706D7447u, 0);
  v14 = v13;
  if ( v13 )
    memset(v13, 0, (unsigned int)v12);
  if ( v14 )
  {
    *(_DWORD *)v14 = *(_DWORD *)a1;
    v14[5] = 0LL;
    v14[2] = 0LL;
    v14[1] = v14 + 6;
    v14[3] = (char *)v14 + v19 + 50;
    if ( v19 + v2 < v2 || v19 + v2 > (unsigned __int64)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v14 + 6, (const void *)v2, v19);
    v15 = (void *)v14[3];
    if ( Size + v3 < v3 || Size + v3 > (unsigned __int64)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v15, (const void *)v3, Size);
    v16 = (void *)(v14[3] + Size + 2);
    v14[4] = v16;
    if ( v11 + v4 < v4 || v11 + v4 > (unsigned __int64)W32UserProbeAddress )
      *(_BYTE *)W32UserProbeAddress = 0;
    memmove(v16, (const void *)v4, v11);
  }
  return v14;
}
