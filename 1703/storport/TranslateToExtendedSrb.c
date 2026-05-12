/*
 * XREFs of TranslateToExtendedSrb @ 0x1C001E534
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C00080D0 (RaidUnitClaimIrp.c)
 * Callees:
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C000DB98 (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C000DD28 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     Template_zx @ 0x1C00387F0 (Template_zx.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  int v10; // esi
  unsigned __int64 v12; // rax
  char v13; // r15
  unsigned int v14; // eax
  int v15; // r13d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // al
  __int64 v19; // rax
  __int64 v20; // rdx
  LARGE_INTEGER v21; // rax
  LARGE_INTEGER v22; // rbx
  unsigned int v23; // eax
  bool v24; // zf
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v26; // rdx
  LARGE_INTEGER v27; // r8
  unsigned __int64 v28; // rtt
  unsigned __int64 v29; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v6) = 0;
  v7 = a3;
  v10 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v21 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v21.QuadPart = KeQueryUnbiasedInterruptTime();
  v22 = v21;
  v23 = *(unsigned __int8 *)(a2 + 2);
  if ( v23 > 0x17 )
  {
    if ( v23 <= 0x1A || v23 == 32 )
      goto LABEL_36;
    switch ( v23 )
    {
      case '$':
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_13;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 97;
        *(_DWORD *)(a1 + 148) = 12;
        break;
      case '%':
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_13;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 98;
        *(_DWORD *)(a1 + 148) = 16;
        break;
      case '&':
        goto LABEL_36;
      default:
        v24 = v23 == 41;
        goto LABEL_48;
    }
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
    goto LABEL_31;
  }
  if ( v23 == 23 )
  {
    if ( (unsigned int)v7 < 0xA8 )
      goto LABEL_13;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 144) = 96;
    *(_DWORD *)(a1 + 148) = 16;
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
    goto LABEL_31;
  }
  if ( v23 <= 9 )
  {
    if ( v23 < 6 )
    {
      if ( !*(_BYTE *)(a2 + 2) )
      {
        v13 = a6;
        v14 = 224;
        if ( a6 != 1 )
          v14 = 184;
        if ( (unsigned int)v7 < v14 )
          goto LABEL_13;
        v15 = 136;
        if ( a6 != 1 )
          v15 = 128;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, a6, v14);
        v16 = (unsigned int)(v15 + 16);
        *(_DWORD *)(a1 + 120) = v16;
        v17 = v7;
        if ( v16 + 40 > v7 )
        {
          v10 = -1073741670;
        }
        else
        {
          *(_DWORD *)(v16 + a1) = 64;
          *(_DWORD *)(v16 + a1 + 4) = 32;
          *(_BYTE *)(v16 + a1 + 10) = *(_BYTE *)(a2 + 10);
          *(_BYTE *)(v16 + a1 + 8) = *(_BYTE *)(a2 + 4);
          *(_BYTE *)(v16 + a1 + 9) = *(_BYTE *)(a2 + 11);
          *(_QWORD *)(v16 + a1 + 16) = *(_QWORD *)(a2 + 32);
          v18 = *(_BYTE *)(a2 + 10);
          if ( v18 )
          {
            memmove((void *)(a1 + v16 + 24), (const void *)(a2 + 72), v18);
            v17 = v7;
          }
          else
          {
            *(_QWORD *)(v16 + a1 + 24) = 0LL;
            *(_QWORD *)(v16 + a1 + 32) = 0LL;
          }
        }
        if ( v13 == 1 && *(_DWORD *)(a1 + 56) > 1u )
        {
          v19 = (unsigned int)(v15 + 56);
          *(_DWORD *)(a1 + 124) = v19;
          if ( v19 + 32 > v17 )
            v10 = -1073741670;
          else
            TranslateScsiRequestBlockToIoInfoSrbExData(a1 + (unsigned int)(v15 + 56), a2, a5);
        }
        goto LABEL_50;
      }
      if ( v23 > 2 )
      {
        v24 = v23 == 4;
        goto LABEL_48;
      }
    }
LABEL_36:
    if ( (unsigned int)v7 < 0x90 )
      goto LABEL_13;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
    goto LABEL_31;
  }
  if ( v23 == 16 )
    goto LABEL_36;
  if ( v23 <= 0x11 )
    goto LABEL_49;
  if ( v23 <= 0x13 )
    goto LABEL_36;
  v24 = v23 == 21;
LABEL_48:
  if ( v24 )
    goto LABEL_36;
LABEL_49:
  v10 = -1073741811;
LABEL_50:
  if ( v10 < 0 )
    goto LABEL_51;
LABEL_31:
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
LABEL_13:
  v10 = -1073741670;
LABEL_51:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart <= 0 || PerformanceCounter.QuadPart >= v22.QuadPart )
    v12 = PerformanceCounter.QuadPart - v22.QuadPart;
  else
    v12 = PerformanceCounter.QuadPart - v22.QuadPart - 1;
  if ( UseQPCTime )
  {
    if ( PerformanceFrequency.QuadPart && v12 )
    {
      v28 = 1000 * (v12 % PerformanceFrequency.QuadPart);
      v27.QuadPart = v28 / PerformanceFrequency.QuadPart + 1000 * (v12 / PerformanceFrequency.QuadPart);
      v29 = 10000 * (v28 % PerformanceFrequency.QuadPart);
      v26.QuadPart = v29 % PerformanceFrequency.QuadPart;
      v6 = v29 / PerformanceFrequency.QuadPart + 10000 * v27.QuadPart;
    }
  }
  else
  {
    LOBYTE(v6) = v12;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40) != 0 )
    Template_zx(WPP_MAIN_CB.Dpc.DpcData, v26.LowPart, v27.LowPart, (unsigned int)L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
