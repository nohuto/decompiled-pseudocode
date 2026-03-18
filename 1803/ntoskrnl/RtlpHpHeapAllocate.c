/*
 * XREFs of RtlpHpHeapAllocate @ 0x140294D44
 * Callers:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpAllocVA @ 0x1402943E0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataAlloc @ 0x140295B48 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140295D90 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpHeapAllocate(unsigned int a1, unsigned int a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rax
  int v6; // edi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // r10
  int v11; // r15d
  __int64 v12; // rbx
  int v13; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+60h] [rbp-9h] BYREF
  __int128 v19; // [rsp+70h] [rbp+7h] BYREF
  __int128 v20; // [rsp+80h] [rbp+17h] BYREF
  __int128 v21[3]; // [rsp+90h] [rbp+27h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *a3;
  v22 = 0LL;
  v4 = 64LL;
  if ( a2 <= 0x40 )
    v4 = a2;
  v18 = v3;
  v6 = 0;
  v7 = 4096LL;
  v16 = 4096LL;
  v17 = v3;
  v8 = ((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 72 * v4;
  v23 = 129 * v8 + 15192 - ((129 * v8 + 15191) & 0xFFF) + 4095;
  if ( !*(_QWORD *)RtlpHpMetadataHeapCtxGet(&v18, v8, a3, a1)
    || (RtlpHpAppCompatFlags & 8) != 0
    || (v9 & 0x40000000) != 0
    || BYTE2(v17) )
  {
    v6 = BYTE1(v17) < 2u ? 0x1000000 : 0;
    v13 = (v9 & 0x40000000) != 0 ? 64 : 4;
    v19 = v3;
    if ( (int)RtlpHpAllocVA(&v22, (__int64 *)&v23, 0LL, v6 | 0x2000u, v13, &v19, 0LL) < 0
      || (v20 = *a3, (int)RtlpHpAllocVA(&v22, (__int64 *)&v16, 0LL, v6 | 0x1000u, v13, &v20, 0LL) < 0) )
    {
      v12 = 0LL;
      goto LABEL_14;
    }
    v12 = v22;
    v11 = 0;
    v22 = 0LL;
    v7 = v16;
  }
  else
  {
    v11 = 1;
    v17 = v3;
    v12 = RtlpHpMetadataAlloc(v10, 4096LL, 1LL, &v17);
    if ( !v12 )
      goto LABEL_14;
  }
  memset((void *)v12, 0, 0x6F0uLL);
  *(_QWORD *)(v12 + 368) = v12 + 1776;
  *(_QWORD *)(v12 + 376) = v12 + v7;
  v14 = v12 + v23;
  *(_DWORD *)(v12 + 68) = v11 | *(_DWORD *)(v12 + 68) & 0xFFFFFFFE;
  *(_QWORD *)(v12 + 384) = v14;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 24), v23 >> 12);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 32), v16 >> 12);
LABEL_14:
  if ( v22 )
  {
    v21[0] = *a3;
    RtlpHpFreeVA((unsigned __int64 *)&v22, &v23, v6 | 0x8000u, v21);
  }
  return v12;
}
