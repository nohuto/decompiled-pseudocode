/*
 * XREFs of FormInquiryStandardData @ 0x1C0007B20
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00084D0 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  _BYTE *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned int *v8; // r15
  void *v9; // r9
  char v10; // r12
  __int64 v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v25; // [rsp+30h] [rbp-50h]
  _OWORD Src[4]; // [rsp+38h] [rbp-48h] BYREF

  v4 = 60;
  memset(Src, 0, 0x3CuLL);
  v6 = *(_QWORD *)(a1 + 1112);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(unsigned int *)(a2 + 52);
    v8 = (unsigned int *)(a2 + 60);
    v9 = *(void **)(a2 + 64);
    v10 = *(_BYTE *)(v7 + a2 + 8);
    v11 = *(unsigned __int8 *)(v7 + a2 + 10);
    v25 = *(_BYTE *)(v7 + a2 + 9);
  }
  else
  {
    v8 = (unsigned int *)(a2 + 16);
    v9 = *(void **)(a2 + 24);
    v10 = *(_BYTE *)(a2 + 5);
    v11 = *(unsigned __int8 *)(a2 + 7);
    v25 = *(_BYTE *)(a2 + 6);
  }
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 8 * v11 + 1224);
  LOWORD(Src[0]) &= 0x7F00u;
  BYTE2(Src[0]) = 6;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xF0 | 2;
  if ( *(_BYTE *)(v13 + 66) )
    BYTE5(Src[0]) |= 1u;
  v14 = *(_OWORD *)(v6 + 24);
  BYTE7(Src[0]) |= 2u;
  v15 = 7;
  LODWORD(Src[2]) = 538976288;
  v16 = 7LL;
  Src[1] = v14;
  BYTE4(Src[0]) = 55;
  v17 = 0;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  do
  {
    v18 = v17;
    LOBYTE(v5) = *(_BYTE *)(v6 + v16 + 64) - 33;
    if ( (unsigned __int8)v5 <= 0x5Du && v17 == 3 )
      break;
    ++v17;
    if ( (unsigned __int8)v5 > 0x5Du )
      v17 = v18;
    if ( !v16 )
      break;
    --v15;
    --v16;
  }
  while ( v16 >= 0 );
  v19 = 0LL;
  if ( v15 < 8 )
  {
    v5 = (_BYTE *)((int)v15 + v6 + 64);
    do
    {
      if ( (unsigned __int8)(*v5 - 33) <= 0x5Du )
      {
        v20 = (unsigned int)v19;
        v19 = (unsigned int)(v19 + 1);
        *((_BYTE *)&Src[2] + v20) = *v5;
        if ( (unsigned int)v19 >= 4 )
          break;
      }
      ++v15;
      ++v5;
    }
    while ( v15 < 8 );
  }
  if ( (*(_BYTE *)(v6 + 256) & 1) != 0 )
    WORD5(Src[3]) = -16129;
  if ( *v8 < 0x3C )
    v4 = *v8;
  if ( v4 && v9 )
  {
    memmove(v9, Src, v4);
    *v8 = v4;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v9) = 36;
    LOBYTE(v19) = 48;
    NVMeSetSenseData(a2, v19, v5, v9);
    v12 = -1056964602;
  }
  LOBYTE(v22) = v25;
  LOBYTE(v23) = v11;
  LOBYTE(v21) = v10;
  StorPortSetDeviceQueueDepth(a1, v21, v22, v23, 4096);
  return v12;
}
