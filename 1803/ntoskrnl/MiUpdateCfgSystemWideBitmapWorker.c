/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1404F18A8 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiLocatePagefileSubsection @ 0x1400E6B80 (MiLocatePagefileSubsection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiEliminateZeroPages @ 0x1404B3970 (MiEliminateZeroPages.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 *     RtlEnumRvaListFirst @ 0x140568540 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // r14d
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  char *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  signed __int32 *v15; // rdi
  unsigned int v16; // r10d
  unsigned __int8 *v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // r11d
  int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // ecx
  char *AnyMultiplexedVm; // rax
  _DWORD *v30; // rax
  unsigned __int64 v31; // [rsp+40h] [rbp-31h] BYREF
  void *v32; // [rsp+48h] [rbp-29h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-21h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+58h] [rbp-19h] BYREF
  unsigned int BugCheckParameter3; // [rsp+68h] [rbp-9h] BYREF
  int BugCheckParameter3_4; // [rsp+6Ch] [rbp-5h]
  unsigned int v37; // [rsp+70h] [rbp-1h]

  v4 = 0;
  v5 = a4;
  if ( !a2 || (v8 = *(_QWORD *)(a2 + 8)) == 0 )
    v8 = 0LL;
  v9 = a3 >> 3;
  v31 = a3 >> 3;
  v32 = (void *)(a4 >> 3);
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  result = MiMapViewInSystemSpace(
             a1,
             (unsigned int)&unk_1403CB5C0,
             (unsigned int)&MappedBase,
             (unsigned int)&v32,
             (__int64)&v31,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v11 = (char *)v32 - (unsigned __int16)v9;
    v32 = (void *)((unsigned __int64)MappedBase | (unsigned __int16)v9);
    v12 = MiSectionControlArea(a1);
    v31 = v9 >> 12;
    v13 = MiLocatePagefileSubsection(v12 + 128, &v31);
    v14 = *(_QWORD *)&BitMapHeader.SizeOfBitMap;
    if ( (unsigned int)MiChargeSegmentCommit(v13, *(_QWORD *)(v13 + 8) + 8 * v31, *(_QWORD *)&BitMapHeader.SizeOfBitMap) )
    {
      if ( a2 && (*(_DWORD *)a2 & 1) != 0 && v8 )
      {
        v15 = (signed __int32 *)v32;
        BitMapHeader.Buffer = (unsigned int *)v32;
        BitMapHeader.SizeOfBitMap = v5;
        RtlClearAllBits(&BitMapHeader);
        v16 = RtlEnumRvaListFirst(v8, &BugCheckParameter3, &v31);
        if ( v16 )
        {
          LOBYTE(v17) = v31;
          do
          {
            if ( ((unsigned __int8)v17 & 1) != 0 )
            {
              v18 = v16 >> 4;
              if ( (v16 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * v18, 2u);
              }
              else
              {
                v19 = 2 * v18;
                if ( ((unsigned __int8)v17 & 4) != 0 )
                  ++v19;
                _bittestandset(v15, v19);
              }
            }
            ++BugCheckParameter3_4;
            v17 = (unsigned __int8 *)(v37 + *(_QWORD *)(v8 + 16));
            v16 = BugCheckParameter3;
            v20 = *(_QWORD *)(v8 + 24) - v37;
            if ( !v20 )
              break;
            do
            {
              if ( !v20 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, v8, (ULONG_PTR)&BugCheckParameter3, v16);
              --v20;
              v21 = *v17 >> 6;
              v22 = *v17++ & 0x3F;
              v16 += v22 * RtlpRvaCompressionTableScales[v21];
            }
            while ( (_DWORD)v21 != 3 );
            BugCheckParameter3 = v16;
            v37 = (_DWORD)v17 - *(_DWORD *)(v8 + 16);
            LOBYTE(v17) = 0;
            v23 = *(_DWORD *)(v8 + 8);
            if ( v23 <= 1 )
            {
              if ( v23 == 1 )
              {
                v30 = *(_DWORD **)(v8 + 48);
                if ( v30 )
                  LODWORD(v17) = *v30;
                else
                  LOBYTE(v17) = 1;
              }
            }
            else
            {
              v24 = 0;
              v25 = 1;
              v26 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v8 + 40), v24 + BugCheckParameter3_4 * v23) )
                {
                  v27 = *(_QWORD *)(v8 + 48);
                  if ( v27 )
                    v28 = *(_DWORD *)(v26 + v27);
                  else
                    LOBYTE(v28) = v25;
                  LOBYTE(v17) = v28 | (unsigned __int8)v17;
                }
                ++v24;
                v25 = __ROL4__(v25, 1);
                v26 += 4LL;
              }
              while ( v24 < v23 );
              v15 = (signed __int32 *)v32;
            }
          }
          while ( v16 );
        }
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        MiEliminateZeroPages((__int64)AnyMultiplexedVm, (unsigned __int64)v15 & 0xFFFFFFFFFFFFF000uLL, v14 << 12);
      }
      else
      {
        memset(v32, 255, (size_t)v11);
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
