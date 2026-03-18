/*
 * XREFs of ACPIPccInitialize @ 0x1C00A0240
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00AC150 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     AcpiTranslateAccessSize @ 0x1C009C558 (AcpiTranslateAccessSize.c)
 *     AcpiPccInitilizeSubspace @ 0x1C00A0590 (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  __int128 *v1; // rdi
  unsigned __int64 v2; // r8
  unsigned int v3; // esi
  unsigned __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // r12
  int v8; // edx
  char *PoolWithTag; // r15
  char *v10; // rbx
  __m128d v11; // xmm3
  __m128i v12; // xmm2
  __int64 v13; // xmm1_8
  char v14; // r8
  char v15; // dl
  unsigned __int8 v16; // cl
  unsigned __int64 v17; // r11
  unsigned int v18; // r10d
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v23; // [rsp+30h] [rbp-40h]
  _BYTE v24[24]; // [rsp+50h] [rbp-20h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+48h]

  v1 = (__int128 *)(a1 + 48);
  v2 = a1 + *(unsigned int *)(a1 + 4);
  v3 = 0;
  v5 = a1 + 48;
  if ( a1 + 50 <= v2 )
  {
    do
    {
      v6 = *(_BYTE *)(v5 + 1);
      if ( v6 < 2u )
        break;
      v5 += v6;
      if ( v5 > v2 )
        break;
      ++v3;
    }
    while ( v5 + 2 <= v2 );
    if ( v3 )
    {
      v7 = v3;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 528LL * v3, 0x4D706341u);
      if ( PoolWithTag )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        memset(PoolWithTag, 0, 528LL * v3);
        v10 = PoolWithTag + 82;
        do
        {
          if ( !*(_BYTE *)v1 && *((_BYTE *)v1 + 1) >= 0x3Eu )
          {
            v11 = (__m128d)v1[1];
            v12 = (__m128i)v1[2];
            v13 = *((_QWORD *)v1 + 6);
            v23 = *v1;
            *(_QWORD *)&v24[16] = v13;
            *(_QWORD *)(v10 - 2) = *(_OWORD *)&_mm_unpackhi_pd(v11, v11);
            *(_DWORD *)(v10 + 6) = _mm_cvtsi128_si32(v12);
            v14 = *v10;
            v15 = *(v10 - 1);
            v16 = v10[1];
            *(__m128i *)v24 = v12;
            v10[1] = AcpiTranslateAccessSize(v16, v15, v14);
            *(_QWORD *)(v10 - 18) = *(_QWORD *)&v24[4];
            *(_QWORD *)(v10 - 26) = *(_QWORD *)&v24[12];
            *(_QWORD *)(v10 + 14) = *((_QWORD *)&v23 + 1);
            *(_DWORD *)(v10 - 78) = *(_DWORD *)&v24[20];
            *(_DWORD *)(v10 + 22) = _mm_cvtsi128_si32((__m128i)v11);
            *(_DWORD *)(v10 - 70) = v17;
            *(_DWORD *)(v10 - 74) = v18 / 0x3C;
            v26 = (v17 * (unsigned __int128)(unsigned __int64)PerformanceFrequency.QuadPart) >> 64;
            if ( is_mul_ok(v17, PerformanceFrequency.QuadPart) )
            {
              v19 = v17 * PerformanceFrequency.QuadPart / 0xF4240;
            }
            else
            {
              *(_QWORD *)(v10 + 94) = -1LL;
              v19 = *(unsigned int *)(v10 - 70) * (PerformanceFrequency.QuadPart / 1000000);
            }
            *(_QWORD *)(v10 + 94) = v19;
            *(_DWORD *)(v10 - 82) ^= (*(_DWORD *)(v10 - 82) ^ (2 * *(_DWORD *)(a1 + 36))) & 2;
            if ( (int)AcpiPccInitilizeSubspace(v10 - 82) >= 0 )
            {
              v20 = *(_QWORD *)(v10 - 50);
              *(_QWORD *)(v10 - 66) = v20 + 8;
              *(_DWORD *)(v10 - 58) = *(_DWORD *)(v10 + 22) - 8;
              *(_QWORD *)(v10 - 42) = v20 + 4;
              *(_QWORD *)(v10 - 34) = v20 + 6;
              *(_DWORD *)(v10 - 82) = *(_DWORD *)(v10 - 82) & 0xFFFFFFC3 | 8;
            }
          }
          v10 += 528;
          v1 = (__int128 *)((char *)v1 + *((unsigned __int8 *)v1 + 1));
          --v7;
        }
        while ( v7 );
        _InterlockedOr(v22, 0);
        AcpiPccSubspaces = (__int64)PoolWithTag;
        AcpiPccSubspaceCount = v3;
      }
      else
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          21,
          11,
          (__int64)&WPP_27c5544e98c530bf6b99fb9ebc6d4fa8_Traceguids);
      }
    }
  }
  return 0LL;
}
