/*
 * XREFs of FormInquiryStandardData @ 0x1C00073E0
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0007C5C (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 *     memmove @ 0x1C0012040 (memmove.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  char v5; // al
  __int64 v6; // r11
  void *v7; // r9
  unsigned int *v8; // r14
  __int64 v9; // rax
  char v10; // r12
  __int64 v11; // r15
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int128 v14; // xmm0
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v24; // [rsp+30h] [rbp-50h]
  _OWORD Src[4]; // [rsp+38h] [rbp-48h] BYREF

  v4 = 60;
  memset(Src, 0, 0x3CuLL);
  v5 = *(_BYTE *)(a2 + 2);
  v6 = *(_QWORD *)(a1 + 1080);
  if ( v5 == 40 )
  {
    v7 = *(void **)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v7 = *(void **)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
  }
  if ( v5 == 40 )
  {
    v9 = *(unsigned int *)(a2 + 52);
    v10 = *(_BYTE *)(v9 + a2 + 8);
    v11 = *(unsigned __int8 *)(v9 + a2 + 10);
    v24 = *(_BYTE *)(v9 + a2 + 9);
  }
  else
  {
    v10 = *(_BYTE *)(a2 + 5);
    v11 = *(unsigned __int8 *)(a2 + 7);
    v24 = *(_BYTE *)(a2 + 6);
  }
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 8 * v11 + 1184);
  LOWORD(Src[0]) &= 0x7F00u;
  BYTE2(Src[0]) = 6;
  BYTE3(Src[0]) = BYTE3(Src[0]) & 0xF0 | 2;
  if ( *(_BYTE *)(v13 + 66) )
    BYTE5(Src[0]) |= 1u;
  v14 = *(_OWORD *)(v6 + 24);
  BYTE7(Src[0]) |= 2u;
  v15 = 7;
  Src[1] = v14;
  BYTE4(Src[0]) = 55;
  v16 = 0LL;
  LODWORD(Src[2]) = 538976288;
  v17 = 7LL;
  *((_QWORD *)&Src[0] + 1) = 0x20202020654D564ELL;
  do
  {
    if ( (unsigned __int8)(*(_BYTE *)(v6 + v17 + 64) - 33) <= 0x5Du )
    {
      v16 = (unsigned int)(v16 + 1);
      if ( (_DWORD)v16 == 4 )
        break;
    }
    if ( !v17 )
      break;
    --v15;
    --v17;
  }
  while ( v17 >= 0 );
  v18 = 0LL;
  if ( v15 < 8 )
  {
    v16 = (int)v15 + v6 + 64;
    do
    {
      if ( (unsigned __int8)(*(_BYTE *)v16 - 33) <= 0x5Du )
      {
        v19 = (unsigned int)v18;
        v18 = (unsigned int)(v18 + 1);
        *((_BYTE *)&Src[2] + v19) = *(_BYTE *)v16;
        if ( (unsigned int)v18 >= 4 )
          break;
      }
      ++v15;
      ++v16;
    }
    while ( v15 < 8 );
  }
  if ( (*(_BYTE *)(v6 + 256) & 1) != 0 )
    WORD5(Src[3]) = -16129;
  if ( *v8 < 0x3C )
    v4 = *v8;
  if ( v4 && v7 )
  {
    memmove(v7, Src, v4);
    *v8 = v4;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v7) = 36;
    LOBYTE(v18) = 48;
    NVMeSetSenseData(a2, v18, v16, v7);
    v12 = -1056964602;
  }
  LOBYTE(v21) = v24;
  LOBYTE(v22) = v11;
  LOBYTE(v20) = v10;
  StorPortSetDeviceQueueDepth(a1, v20, v21, v22, 4096);
  return v12;
}
