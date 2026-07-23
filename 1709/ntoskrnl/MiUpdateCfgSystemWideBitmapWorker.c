/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1405043BC (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MiLocatePagefileSubsection @ 0x1400B6DE0 (MiLocatePagefileSubsection.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 *     MiEliminateZeroPages @ 0x1404D4270 (MiEliminateZeroPages.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 *     RtlEnumRvaListFirst @ 0x140579988 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // r14d
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  char *v11; // r15
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r12
  signed __int32 *v15; // rdi
  unsigned int v16; // r10d
  unsigned __int8 *v17; // r9
  unsigned int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // r11d
  int v24; // r8d
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // ecx
  char *AnyMultiplexedVm; // rax
  _DWORD *v29; // rax
  unsigned __int64 v30; // [rsp+40h] [rbp-31h] BYREF
  void *v31; // [rsp+48h] [rbp-29h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-21h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+58h] [rbp-19h] BYREF
  unsigned int BugCheckParameter3; // [rsp+68h] [rbp-9h] BYREF
  int BugCheckParameter3_4; // [rsp+6Ch] [rbp-5h]
  unsigned int v36; // [rsp+70h] [rbp-1h]

  v4 = 0;
  v5 = a4;
  if ( !a2 || (v8 = *(_QWORD *)(a2 + 8)) == 0 )
    v8 = 0LL;
  v9 = a3 >> 3;
  v30 = a3 >> 3;
  v31 = (void *)(a4 >> 3);
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MiMapViewInSystemSpace(
             a1,
             (unsigned int)&unk_140388438,
             (unsigned int)&MappedBase,
             (unsigned int)&v31,
             (__int64)&v30,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v11 = (char *)v31 - (unsigned __int16)v9;
    v31 = (void *)((unsigned __int64)MappedBase | (unsigned __int16)v9);
    v12 = MiSectionControlArea(a1);
    v30 = v9 >> 12;
    v13 = (__int64 *)MiLocatePagefileSubsection(v12 + 128, &v30);
    v14 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    if ( (unsigned int)MiChargeSegmentCommit(v13, (__int64 *)(v13[1] + 8 * v30), *(__int64 *)&BitMapHeader.SizeOfBitMap) )
    {
      if ( a2 && (*(_DWORD *)a2 & 1) != 0 && v8 )
      {
        v15 = (signed __int32 *)v31;
        BitMapHeader.Buffer = (unsigned int *)v31;
        BitMapHeader.SizeOfBitMap = v5;
        RtlClearAllBits(&BitMapHeader);
        v16 = RtlEnumRvaListFirst(v8, &BugCheckParameter3, &v30);
        if ( v16 )
        {
          LOBYTE(v17) = v30;
          do
          {
            if ( ((unsigned __int8)v17 & 1) != 0 )
            {
              if ( (v16 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * (v16 >> 4), 2u);
              }
              else
              {
                v18 = v16 >> 4;
                if ( ((unsigned __int8)v17 & 4) != 0 )
                  _bittestandset(v15, 2 * v18 + 1);
                else
                  _bittestandset(v15, 2 * v18);
              }
            }
            ++BugCheckParameter3_4;
            v17 = (unsigned __int8 *)(v36 + *(_QWORD *)(v8 + 16));
            v16 = BugCheckParameter3;
            v19 = *(_QWORD *)(v8 + 24) - v36;
            if ( !v19 )
              break;
            do
            {
              if ( !v19 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v8, (ULONG_PTR)&BugCheckParameter3, v16);
              --v19;
              v20 = *v17 >> 6;
              v21 = *v17++ & 0x3F;
              v16 += v21 * RtlpRvaCompressionTableScales[v20];
            }
            while ( (_DWORD)v20 != 3 );
            BugCheckParameter3 = v16;
            v36 = (_DWORD)v17 - *(_DWORD *)(v8 + 16);
            LOBYTE(v17) = 0;
            v22 = *(_DWORD *)(v8 + 8);
            if ( v22 <= 1 )
            {
              if ( v22 == 1 )
              {
                v29 = *(_DWORD **)(v8 + 48);
                if ( v29 )
                  LODWORD(v17) = *v29;
                else
                  LOBYTE(v17) = 1;
              }
            }
            else
            {
              v23 = 0;
              v24 = 1;
              v25 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v8 + 40), v23 + BugCheckParameter3_4 * v22) )
                {
                  v26 = *(_QWORD *)(v8 + 48);
                  if ( v26 )
                    v27 = *(_DWORD *)(v25 + v26);
                  else
                    LOBYTE(v27) = v24;
                  LOBYTE(v17) = v27 | (unsigned __int8)v17;
                }
                ++v23;
                v24 = __ROL4__(v24, 1);
                v25 += 4LL;
              }
              while ( v23 < v22 );
              v15 = (signed __int32 *)v31;
            }
          }
          while ( v16 );
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiEliminateZeroPages(AnyMultiplexedVm, (unsigned __int64)v15 & 0xFFFFFFFFFFFFF000uLL, v14 << 12);
      }
      else
      {
        memset(v31, 255, (size_t)v11);
      }
    }
    else
    {
      v4 = -1073741523;
    }
    MmUnmapViewInSystemSpace(MappedBase);
    return v4;
  }
  return result;
}
