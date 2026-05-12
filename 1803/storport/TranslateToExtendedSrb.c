/*
 * XREFs of TranslateToExtendedSrb @ 0x1C0038100
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0009E80 (RaidUnitClaimIrp.c)
 * Callees:
 *     McTemplateK0zx @ 0x1C0037BD0 (McTemplateK0zx.c)
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0037E2C (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C0037F88 (TranslateScsiRequestBlockToScsiCdb16SrbExData.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C0037FE4 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  int v10; // ebp
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rbx
  unsigned int v13; // eax
  char v14; // r12
  unsigned int v15; // eax
  int v16; // r13d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v22; // rdx
  LARGE_INTEGER v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rtt
  unsigned __int64 v26; // rtt
  union _LARGE_INTEGER v28; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v6) = 0;
  v7 = a3;
  v10 = 0;
  v28.QuadPart = 1LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&v28);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  v12 = v11;
  v13 = *(unsigned __int8 *)(a2 + 2);
  if ( v13 <= 0x15 )
  {
    if ( v13 != 21 )
    {
      if ( !*(_BYTE *)(a2 + 2) )
      {
        v14 = a6;
        v15 = 224;
        if ( a6 != 1 )
          v15 = 184;
        if ( (unsigned int)v7 < v15 )
          goto LABEL_50;
        v16 = 136;
        if ( a6 != 1 )
          v16 = 128;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, a6, v15);
        v17 = (unsigned int)(v16 + 16);
        *(_DWORD *)(a1 + 120) = v17;
        v18 = v7;
        if ( v17 + 40 > v7 )
        {
          v10 = -1073741670;
        }
        else
        {
          TranslateScsiRequestBlockToScsiCdb16SrbExData(a1 + v17, a2);
          v18 = v7;
        }
        if ( v14 == 1 && *(_DWORD *)(a1 + 56) > 1u )
        {
          v19 = (unsigned int)(v16 + 56);
          *(_DWORD *)(a1 + 124) = v19;
          if ( v19 + 32 > v18 )
            v10 = -1073741670;
          else
            TranslateScsiRequestBlockToIoInfoSrbExData(a1 + (unsigned int)(v16 + 56), a2, a5);
        }
        if ( v10 < 0 )
          goto LABEL_51;
        goto LABEL_48;
      }
      if ( v13 > 2 && v13 != 4 && (v13 <= 5 || v13 > 9 && v13 != 16 && (v13 <= 0x11 || v13 > 0x13)) )
        goto LABEL_16;
    }
    goto LABEL_39;
  }
  if ( v13 == 23 )
  {
    if ( (unsigned int)v7 < 0xA8 )
      goto LABEL_50;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 144) = 96;
    *(_DWORD *)(a1 + 148) = 16;
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
    goto LABEL_48;
  }
  if ( v13 <= 0x17 )
    goto LABEL_16;
  if ( v13 <= 0x1A || v13 == 32 )
    goto LABEL_39;
  switch ( v13 )
  {
    case '$':
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_50;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 97;
      *(_DWORD *)(a1 + 148) = 12;
LABEL_43:
      *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
      *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
      goto LABEL_48;
    case '%':
      if ( (unsigned int)v7 < 0xA8 )
        goto LABEL_50;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
      *(_DWORD *)(a1 + 120) = 144;
      *(_DWORD *)(a1 + 144) = 98;
      *(_DWORD *)(a1 + 148) = 16;
      goto LABEL_43;
    case '&':
LABEL_39:
      if ( (unsigned int)v7 < 0x90 )
        goto LABEL_50;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
LABEL_48:
      v20 = *(unsigned int *)(a1 + 52);
      if ( v20 + 16 <= v7 )
      {
        *(_DWORD *)(v20 + a1) = 1;
        *(_DWORD *)(v20 + a1 + 4) = 4;
        *(_BYTE *)(v20 + a1 + 8) = *(_BYTE *)(a2 + 5);
        *(_BYTE *)(v20 + a1 + 9) = *(_BYTE *)(a2 + 6);
        *(_BYTE *)(v20 + a1 + 10) = *(_BYTE *)(a2 + 7);
        goto LABEL_51;
      }
LABEL_50:
      v10 = -1073741670;
      goto LABEL_51;
  }
LABEL_16:
  v10 = -1073741811;
LABEL_51:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v12.QuadPart )
    v24 = PerformanceCounter.QuadPart - v12.QuadPart;
  else
    v24 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  if ( UseQPCTime )
  {
    if ( v28.QuadPart && v24 )
    {
      v25 = 1000 * (v24 % v28.QuadPart);
      v23.QuadPart = v25 / v28.QuadPart + 1000 * (v24 / v28.QuadPart);
      v26 = 10000 * (v25 % v28.QuadPart);
      v22.QuadPart = v26 % v28.QuadPart;
      v6 = v26 / v28.QuadPart + 10000 * v23.QuadPart;
    }
  }
  else
  {
    LOBYTE(v6) = v24;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40) != 0 )
    McTemplateK0zx(LODWORD(WPP_MAIN_CB.Dpc.DpcData), v22.QuadPart, v23.QuadPart, L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
