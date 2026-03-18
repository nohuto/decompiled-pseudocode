/*
 * XREFs of FormInquiryStandardData @ 0x1C000782C
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C00138B0 (__security_check_cookie.c)
 *     memmove @ 0x1C00139C0 (memmove.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rax
  unsigned int *v6; // r15
  void *v7; // r9
  char v8; // r12
  __int64 v9; // r14
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char v23; // [rsp+30h] [rbp-50h]
  _OWORD Src[4]; // [rsp+38h] [rbp-48h] BYREF

  memset((char *)Src + 1, 0, 0x3BuLL);
  v4 = *(_QWORD *)(a1 + 1080);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(unsigned int *)(a2 + 52);
    v6 = (unsigned int *)(a2 + 60);
    v7 = *(void **)(a2 + 64);
    v8 = *(_BYTE *)(v5 + a2 + 8);
    v9 = *(unsigned __int8 *)(v5 + a2 + 10);
    v23 = *(_BYTE *)(v5 + a2 + 9);
  }
  else
  {
    v6 = (unsigned int *)(a2 + 16);
    v7 = *(void **)(a2 + 24);
    v8 = *(_BYTE *)(a2 + 5);
    v9 = *(unsigned __int8 *)(a2 + 7);
    v23 = *(_BYTE *)(a2 + 6);
  }
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 8 * v9 + 1184);
  LOWORD(Src[0]) &= 0x7F00u;
  BYTE2(Src[0]) = 6;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xF0 | 2;
  if ( *(_BYTE *)(v11 + 66) )
    BYTE5(Src[0]) |= 1u;
  v12 = *(_OWORD *)(v4 + 24);
  BYTE7(Src[0]) |= 2u;
  v13 = 7;
  Src[1] = v12;
  BYTE4(Src[0]) = 55;
  v14 = 0LL;
  LODWORD(Src[2]) = 538976288;
  v15 = 7LL;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  do
  {
    if ( (unsigned __int8)(*(_BYTE *)(v4 + v15 + 64) - 33) <= 0x5Du )
    {
      v14 = (unsigned int)(v14 + 1);
      if ( (_DWORD)v14 == 4 )
        break;
    }
    if ( !v15 )
      break;
    --v13;
    --v15;
  }
  while ( v15 >= 0 );
  v16 = 0LL;
  if ( v13 < 8 )
  {
    v14 = (int)v13 + v4 + 64;
    do
    {
      if ( (unsigned __int8)(*(_BYTE *)v14 - 33) <= 0x5Du )
      {
        v17 = (unsigned int)v16;
        v16 = (unsigned int)(v16 + 1);
        *((_BYTE *)&Src[2] + v17) = *(_BYTE *)v14;
        if ( (unsigned int)v16 >= 4 )
          break;
      }
      ++v13;
      ++v14;
    }
    while ( v13 < 8 );
  }
  if ( (*(_BYTE *)(v4 + 256) & 1) != 0 )
    WORD5(Src[3]) = -16129;
  v18 = 60;
  if ( *v6 < 0x3C )
    v18 = *v6;
  if ( v18 && v7 )
  {
    memmove(v7, Src, v18);
    *v6 = v18;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v16) = 48;
    NVMeSetSenseData(a2, v16, v14, v7);
    v10 = -1056964602;
  }
  LOBYTE(v20) = v23;
  LOBYTE(v21) = v9;
  LOBYTE(v19) = v8;
  StorPortSetDeviceQueueDepth(a1, v19, v20, v21, 4096);
  return v10;
}
