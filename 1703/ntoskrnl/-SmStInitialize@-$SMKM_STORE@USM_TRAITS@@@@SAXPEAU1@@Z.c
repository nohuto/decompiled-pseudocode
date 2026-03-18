/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14012EA58
 * Callers:
 *     SmProcessCreateRequest @ 0x140567BBC (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14012EB64 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x1A20uLL);
  *(_BYTE *)(a1 + 5988) = 2;
  ST_STORE<SM_TRAITS>::StInitialize(a1);
  *(_QWORD *)(a1 + 6024) = a1 + 6016;
  *(_QWORD *)(a1 + 6016) = 0LL;
  *(_QWORD *)(a1 + 6040) = a1 + 6032;
  *(_QWORD *)(a1 + 6032) = 0LL;
  *(_QWORD *)(a1 + 6056) = a1 + 6048;
  *(_QWORD *)(a1 + 6048) = 0LL;
  *(_QWORD *)(a1 + 6008) = 0LL;
  *(_WORD *)(a1 + 6120) = 0;
  *(_BYTE *)(a1 + 6122) = 6;
  *(_DWORD *)(a1 + 6124) = 0;
  *(_QWORD *)(a1 + 6136) = a1 + 6128;
  *(_QWORD *)(a1 + 6128) = a1 + 6128;
  *(_WORD *)(a1 + 6096) = 0;
  *(_BYTE *)(a1 + 6098) = 6;
  *(_DWORD *)(a1 + 6100) = 0;
  *(_QWORD *)(a1 + 6112) = a1 + 6104;
  *(_QWORD *)(a1 + 6104) = a1 + 6104;
  *(_WORD *)(a1 + 6144) = 1;
  *(_BYTE *)(a1 + 6146) = 6;
  *(_DWORD *)(a1 + 6148) = 0;
  *(_QWORD *)(a1 + 6160) = a1 + 6152;
  *(_QWORD *)(a1 + 6152) = a1 + 6152;
  memset((void *)(a1 + 6560), 0, 0x70uLL);
  result = a1 + 6576;
  *(_WORD *)(a1 + 6568) = 1;
  *(_BYTE *)(a1 + 6570) = 6;
  *(_DWORD *)(a1 + 6572) = 0;
  *(_QWORD *)(a1 + 6584) = a1 + 6576;
  *(_QWORD *)(a1 + 6576) = a1 + 6576;
  return result;
}
