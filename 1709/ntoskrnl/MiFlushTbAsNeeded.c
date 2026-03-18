/*
 * XREFs of MiFlushTbAsNeeded @ 0x14009BE70
 * Callers:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 * Callees:
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v4; // al
  int v7; // esi
  int v8; // edi
  __int64 v9; // rcx
  unsigned __int64 v10; // r12
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v12; // rdx
  unsigned __int64 v13; // r9
  int PteTimeStamp; // r14d
  ULONG_PTR v15; // r8
  char v16; // cl
  unsigned int v17; // eax
  unsigned int v18; // edi
  unsigned __int64 v19; // rdx
  _KPROCESS *Process; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-100h] BYREF
  _DWORD v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+44h] [rbp-BCh]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h]
  _QWORD v28[21]; // [rsp+58h] [rbp-A8h] BYREF

  v3 = 0;
  v26 = 20LL;
  v4 = 0;
  v24 = a3;
  v25 = 0;
  v27 = 0LL;
  v28[0] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    do
    {
      BugCheckParameter4 = *(_QWORD *)BugCheckParameter2;
      if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
        BugCheckParameter4 = MiReadPteShadow(BugCheckParameter2, *(_QWORD *)BugCheckParameter2);
      if ( (BugCheckParameter4 & 0xC01) != 0
        || ((BugCheckParameter4 >> 5) & 0x1F) != 0 && ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v10, BugCheckParameter4);
      }
      PteTimeStamp = MiGetPteTimeStamp(BugCheckParameter4);
      *(_QWORD *)BugCheckParameter2 = 0LL;
      if ( BugCheckParameter2 >= v15 && BugCheckParameter2 <= v12 )
      {
        MiWritePteShadow(BugCheckParameter2, 0LL);
        v13 = 0xFFFFF68000000000uLL;
      }
      if ( PteTimeStamp )
      {
        if ( PteTimeStamp == v7 )
        {
          if ( v8 == 1 )
            MiInsertTbFlushEntry(&v24, (__int64)((BugCheckParameter2 << 25) - (v13 << 25)) >> 16, 1LL, 0LL);
        }
        else
        {
          _InterlockedOr(v22, 0);
          v16 = KiTbFlushTimeStamp;
          v17 = KiTbFlushTimeStamp - PteTimeStamp;
          if ( (unsigned int)(KiTbFlushTimeStamp - PteTimeStamp) <= 2 )
          {
            while ( (PteTimeStamp & 1) != 0 || v17 < 2 )
            {
              if ( (v16 & 1) == 0 )
              {
                MiInsertTbFlushEntry(&v24, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0LL);
                v8 = 1;
                goto LABEL_25;
              }
              v23[0] = 0;
              _InterlockedOr(v22, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(v23);
              if ( (PteTimeStamp & 1) != 0 )
              {
                _InterlockedOr(v22, 0);
                v16 = KiTbFlushTimeStamp;
                v17 = KiTbFlushTimeStamp - PteTimeStamp;
                if ( (unsigned int)(KiTbFlushTimeStamp - PteTimeStamp) <= 2 )
                  continue;
              }
              break;
            }
          }
          v8 = 0;
LABEL_25:
          v7 = PteTimeStamp;
        }
      }
      else
      {
        v8 = 0;
        v7 = 0;
      }
      ++v10;
      BugCheckParameter2 += 8LL;
    }
    while ( v10 < a2 );
    v9 = HIDWORD(v26);
    v4 = v25;
    a3 = v24;
  }
  v18 = v9;
  if ( (_DWORD)v9 )
  {
    v19 = qword_140388568;
    if ( (v4 & 2) != 0 )
    {
      if ( (_DWORD)a3 == 1 )
      {
LABEL_38:
        if ( HIBYTE(v25) || v27 > v19 )
        {
          if ( (v4 & 1) != 0 )
            KeFlushCurrentTbOnly((unsigned int)a3, v19, a3);
          else
            KeFlushTb((unsigned int)a3, v3, a3);
        }
        else if ( (v4 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(v9, v28, a3);
        }
        else
        {
          KeFlushMultipleRangeTb(v9, (__int64)v28, a3, v3);
        }
        return v18;
      }
    }
    else if ( (_DWORD)a3 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[16] || Process->SecureState.SecureHandle )
      {
        v9 = HIDWORD(v26);
        v19 = -1LL;
        v4 = v25;
        a3 = v24;
      }
      else
      {
        v9 = HIDWORD(v26);
        v4 = v25;
        a3 = v24;
      }
      goto LABEL_38;
    }
    LOBYTE(v3) = (v4 & 8) != 0;
    ++v3;
    goto LABEL_38;
  }
  return v18;
}
