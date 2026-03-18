/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x14057B354
 * Callers:
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 * Callees:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140007D3C (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 */

char __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // r15
  WCHAR *v2; // rax
  __int64 v4; // rbx
  char v5; // r12
  char v6; // r13
  unsigned __int64 CurrentSilo; // rax
  PVOID v8; // rbx
  __m128i v9; // xmm6
  void ***CurrentServerSiloGlobals; // rsi
  void *v11; // r14
  __int16 v12; // di
  _QWORD *v13; // xmm0_8
  _WORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  struct _OBJECT_TYPE *v17; // rax
  char v18; // bl
  __int64 v19; // rdi
  unsigned int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  bool v26; // zf
  __m128i v28; // [rsp+38h] [rbp-49h]
  __m128i v29; // [rsp+48h] [rbp-39h] BYREF
  __int64 v30[2]; // [rsp+58h] [rbp-29h] BYREF
  __int16 v31; // [rsp+76h] [rbp-Bh]
  int v32; // [rsp+78h] [rbp-9h]
  int v34; // [rsp+F0h] [rbp+6Fh]
  void *v35; // [rsp+F8h] [rbp+77h]
  PVOID Object; // [rsp+100h] [rbp+7Fh]

  v1 = a1 - 48;
  LOBYTE(v2) = *(_BYTE *)(a1 - 48 + 26);
  v34 = 64;
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
  v31 = 0;
  v5 = 0;
  v32 = -60876;
  *(_DWORD *)(a1 + 24) = (unsigned __int16)v2 - 64;
  v6 = 0;
  v35 = *(void **)v4;
  *(_OWORD *)v30 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  Object = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
  v8 = Object;
  ObfReferenceObject(Object);
  v9 = *(__m128i *)(a1 + 8);
  v28 = v9;
  CurrentServerSiloGlobals = (void ***)PsGetCurrentServerSiloGlobals();
  while ( 1 )
  {
    v11 = v8;
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) & 7) != 0 || !**CurrentServerSiloGlobals )
    {
      v12 = v28.m128i_i16[0];
LABEL_47:
      v14 = (_WORD *)v28.m128i_i64[1];
      goto LABEL_15;
    }
    v12 = _mm_cvtsi128_si32(v9);
    v28.m128i_i16[0] = v12;
    if ( (unsigned __int16)v12 < 8u )
      goto LABEL_47;
    v13 = (_QWORD *)_mm_srli_si128(v9, 8).m128i_u64[0];
    v14 = v13;
    if ( *v13 == ObpDosDevicesShortNamePrefix )
    {
      v14 = v13 + 1;
      v12 -= 8;
      v28.m128i_i64[1] = (__int64)(v13 + 1);
      v28.m128i_i16[0] = v12;
      v11 = **CurrentServerSiloGlobals;
      v9 = v28;
    }
    while ( 1 )
    {
LABEL_15:
      if ( *v14 == 92 )
      {
        ++v14;
        v12 -= 2;
        v28.m128i_i64[1] = (__int64)v14;
        v28.m128i_i16[0] = v12;
        v9 = v28;
      }
      v29 = v9;
      if ( v12 )
      {
        do
        {
          if ( *v14 == 92 )
            break;
          ++v14;
          v26 = v12 == 2;
          v12 -= 2;
          v28.m128i_i16[0] = v12;
        }
        while ( !v26 );
        v28.m128i_i64[1] = (__int64)v14;
        v9 = v28;
      }
      v29.m128i_i16[0] -= v12;
      if ( !v29.m128i_i16[0] )
        goto LABEL_42;
      if ( v11 == v35 )
      {
        v31 = 257;
      }
      else
      {
        v5 = 0;
        v6 = 0;
      }
      v15 = ObpLookupDirectoryEntryEx(v11, (unsigned __int16 *)&v29, 0, 0LL, 0, (__int64)v30);
      v16 = v15;
      if ( v11 == v35 )
      {
        LOBYTE(v31) = v5;
        HIBYTE(v31) = v6;
      }
      else
      {
        v6 = HIBYTE(v31);
        v5 = v31;
      }
      if ( !v15 )
        goto LABEL_30;
      v17 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8)];
      if ( v17 != ObpDirectoryObjectType )
        break;
      v11 = (void *)v16;
    }
    if ( v17 != ObpSymbolicLinkObjectType || *(_DWORD *)(v16 + 24) )
      break;
    if ( !v34 )
    {
      v16 = 0LL;
      break;
    }
    v9 = *(__m128i *)(v16 + 8);
    v8 = Object;
    --v34;
    v28 = v9;
  }
LABEL_30:
  v18 = 1;
  v19 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
  if ( v16
    && ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v16 - 48) >> 8)] == IoDeviceObjectType )
  {
    v20 = *(_DWORD *)(v16 + 72);
    if ( v20 <= 0x13 )
    {
      if ( v20 < 0x12 )
      {
        if ( v20 < 2 )
          goto LABEL_43;
        if ( v20 <= 3 )
        {
          v18 = 5;
          goto LABEL_39;
        }
        if ( v20 <= 6 )
          goto LABEL_43;
        if ( v20 <= 9 )
        {
          v18 = ((*(_BYTE *)(v16 + 52) & 1) == 0) | 2;
          goto LABEL_39;
        }
        v26 = v20 == 16;
LABEL_59:
        if ( v26 )
          goto LABEL_60;
LABEL_43:
        v18 = 0;
        goto LABEL_39;
      }
LABEL_60:
      v18 = 4;
      goto LABEL_39;
    }
    if ( v20 == 20 )
      goto LABEL_60;
    if ( v20 != 36 )
    {
      v26 = v20 == 40;
      goto LABEL_59;
    }
    v18 = 6;
  }
LABEL_39:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  v24 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  v25 = 1 << (*(_BYTE *)(a1 + 24) - 1);
  *(_BYTE *)(v24 + v19 + 32) = v18;
  *(_DWORD *)(v19 + 28) |= v25;
  if ( (void **)v19 == *CurrentServerSiloGlobals )
    *((_DWORD *)CurrentServerSiloGlobals + 2) |= v25;
  else
    ++*((_DWORD *)CurrentServerSiloGlobals + v24 + 3);
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL, v22, v23);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_42:
  ObpReleaseLookupContext((__int64)v30);
  LOBYTE(v2) = ObfDereferenceObject(Object);
  return (char)v2;
}
