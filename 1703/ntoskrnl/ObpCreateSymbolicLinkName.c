/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x14044E9DC
 * Callers:
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ObpReleaseLookupContext @ 0x140087EE4 (ObpReleaseLookupContext.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x14008BEA8 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

char __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r15
  WCHAR *v2; // rax
  __int64 v4; // rbx
  char v5; // r12
  char v6; // r13
  unsigned __int64 CurrentSilo; // rax
  PVOID v8; // r14
  __m128i v9; // xmm6
  PVOID **CurrentServerSiloGlobals; // rsi
  __int16 v11; // di
  _QWORD *v12; // xmm0_8
  _WORD *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  struct _OBJECT_TYPE *v16; // rax
  char v17; // bl
  __int64 v18; // rdi
  unsigned int v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rcx
  int v22; // eax
  bool v23; // zf
  __m128i v25; // [rsp+38h] [rbp-49h]
  __m128i v26; // [rsp+48h] [rbp-39h] BYREF
  __int128 v27; // [rsp+58h] [rbp-29h] BYREF
  __int16 v28; // [rsp+76h] [rbp-Bh]
  int v29; // [rsp+78h] [rbp-9h]
  int v31; // [rsp+F0h] [rbp+6Fh]
  PVOID v32; // [rsp+F8h] [rbp+77h]
  PVOID Object; // [rsp+100h] [rbp+7Fh]

  v1 = a1 - 48;
  LOBYTE(v2) = *(_BYTE *)(a1 - 48 + 26);
  v31 = 64;
  if ( ((unsigned __int8)v2 & 2) != 0 )
  {
    v2 = (WCHAR *)ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
    v4 = v1 - (_QWORD)v2;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return (char)v2;
  v2 = *(WCHAR **)v4;
  if ( !*(_QWORD *)(*(_QWORD *)v4 + 304LL) )
    return (char)v2;
  LOBYTE(v2) = 4;
  if ( *(_WORD *)(v4 + 8) != 4 )
    return (char)v2;
  v2 = *(WCHAR **)(v4 + 16);
  if ( v2[1] != 58 )
    return (char)v2;
  LOWORD(v2) = RtlUpcaseUnicodeChar(*v2);
  if ( (unsigned __int16)((_WORD)v2 - 65) > 0x19u )
    return (char)v2;
  v28 = 0;
  v5 = 0;
  v29 = -60876;
  *(_DWORD *)(a1 + 24) = (unsigned __int16)v2 - 64;
  v6 = 0;
  v32 = *(PVOID *)v4;
  v27 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
  ObfReferenceObject(v8);
  v9 = *(__m128i *)(a1 + 8);
  Object = v8;
  v25 = v9;
  CurrentServerSiloGlobals = (PVOID **)PsGetCurrentServerSiloGlobals();
  while ( 1 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) & 7) != 0 || !**CurrentServerSiloGlobals )
    {
      v11 = v25.m128i_i16[0];
LABEL_47:
      v13 = (_WORD *)v25.m128i_i64[1];
      goto LABEL_15;
    }
    v11 = _mm_cvtsi128_si32(v9);
    v25.m128i_i16[0] = v11;
    if ( (unsigned __int16)v11 < 8u )
      goto LABEL_47;
    v12 = (_QWORD *)_mm_srli_si128(v9, 8).m128i_u64[0];
    v13 = v12;
    if ( *v12 == ObpDosDevicesShortNamePrefix )
    {
      v13 = v12 + 1;
      v11 -= 8;
      v25.m128i_i64[1] = (__int64)(v12 + 1);
      v25.m128i_i16[0] = v11;
      v8 = **CurrentServerSiloGlobals;
      v9 = v25;
    }
    while ( 1 )
    {
LABEL_15:
      if ( *v13 == 92 )
      {
        ++v13;
        v11 -= 2;
        v25.m128i_i64[1] = (__int64)v13;
        v25.m128i_i16[0] = v11;
        v9 = v25;
      }
      v26 = v9;
      if ( v11 )
      {
        do
        {
          if ( *v13 == 92 )
            break;
          ++v13;
          v23 = v11 == 2;
          v11 -= 2;
          v25.m128i_i16[0] = v11;
        }
        while ( !v23 );
        v25.m128i_i64[1] = (__int64)v13;
        v9 = v25;
      }
      v26.m128i_i16[0] -= v11;
      if ( !v26.m128i_i16[0] )
        goto LABEL_42;
      if ( v8 == v32 )
      {
        v28 = 257;
      }
      else
      {
        v5 = 0;
        v6 = 0;
      }
      v14 = ObpLookupDirectoryEntryEx((_DWORD)v8, (unsigned int)&v26, 0, 0, 0, (__int64)&v27);
      v15 = v14;
      if ( v8 == v32 )
      {
        LOBYTE(v28) = v5;
        HIBYTE(v28) = v6;
      }
      else
      {
        v6 = HIBYTE(v28);
        v5 = v28;
      }
      if ( !v14 )
        goto LABEL_30;
      v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      if ( v16 != ObpDirectoryObjectType )
        break;
      v8 = (PVOID)v15;
    }
    if ( v16 != ObpSymbolicLinkObjectType || *(_DWORD *)(v15 + 24) )
      break;
    if ( !v31 )
    {
      v15 = 0LL;
      break;
    }
    v9 = *(__m128i *)(v15 + 8);
    v8 = Object;
    --v31;
    v25 = v9;
  }
LABEL_30:
  v17 = 1;
  v18 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v15
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8)] == IoDeviceObjectType )
  {
    v19 = *(_DWORD *)(v15 + 72);
    if ( v19 <= 0x13 )
    {
      if ( v19 < 0x12 )
      {
        if ( v19 < 2 )
          goto LABEL_43;
        if ( v19 <= 3 )
        {
          v17 = 5;
          goto LABEL_39;
        }
        if ( v19 <= 6 )
          goto LABEL_43;
        if ( v19 <= 9 )
        {
          v17 = ((*(_BYTE *)(v15 + 52) & 1) == 0) | 2;
          goto LABEL_39;
        }
        v23 = v19 == 16;
LABEL_59:
        if ( v23 )
          goto LABEL_60;
LABEL_43:
        v17 = 0;
        goto LABEL_39;
      }
LABEL_60:
      v17 = 4;
      goto LABEL_39;
    }
    if ( v19 == 20 )
      goto LABEL_60;
    if ( v19 != 36 )
    {
      v23 = v19 == 40;
      goto LABEL_59;
    }
    v17 = 6;
  }
LABEL_39:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  v21 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v22 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v21 + v18 + 32) = v17;
  *(_DWORD *)(v18 + 28) |= v22;
  if ( (PVOID *)v18 == *CurrentServerSiloGlobals )
    *((_DWORD *)CurrentServerSiloGlobals + 2) |= v22;
  else
    ++*((_DWORD *)CurrentServerSiloGlobals + v21 + 3);
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_42:
  ObpReleaseLookupContext((__int64)&v27);
  LOBYTE(v2) = ObfDereferenceObject(Object);
  return (char)v2;
}
