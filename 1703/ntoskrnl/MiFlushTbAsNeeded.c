/*
 * XREFs of MiFlushTbAsNeeded @ 0x1400F9A20
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v4; // al
  int v7; // r14d
  int v8; // edi
  _KPROCESS *v9; // rcx
  unsigned __int64 v10; // r12
  ULONG_PTR BugCheckParameter4; // rax
  int PteTimeStamp; // eax
  int v13; // esi
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
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
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
      if ( (BugCheckParameter4 & 0xC01) != 0
        || ((BugCheckParameter4 >> 5) & 0x1F) != 0 && ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
      {
        KeBugCheckEx(0x1Au, 0x5100uLL, BugCheckParameter2, a2 - v10, BugCheckParameter4);
      }
      PteTimeStamp = MiGetPteTimeStamp(BugCheckParameter4);
      *(_QWORD *)BugCheckParameter2 = 0LL;
      v13 = PteTimeStamp;
      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
      {
        MiWritePteShadow(v14);
        v15 = 0xFFFFF68000000000uLL;
      }
      if ( v13 )
      {
        if ( v13 == v7 )
        {
          if ( v8 == 1 )
            MiInsertTbFlushEntry(&v24, (__int64)((BugCheckParameter2 << 25) - (v15 << 25)) >> 16, 1LL, 0LL);
        }
        else
        {
          _InterlockedOr(v22, 0);
          v16 = KiTbFlushTimeStamp;
          v17 = KiTbFlushTimeStamp - v13;
          if ( (unsigned int)(KiTbFlushTimeStamp - v13) <= 2 )
          {
            while ( (v13 & 1) != 0 || v17 < 2 )
            {
              if ( (v16 & 1) == 0 )
              {
                MiInsertTbFlushEntry(&v24, (__int64)(BugCheckParameter2 << 25) >> 16, 1LL, 0LL);
                v8 = 1;
                goto LABEL_21;
              }
              v23[0] = 0;
              _InterlockedOr(v22, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(v23);
              if ( (v13 & 1) != 0 )
              {
                _InterlockedOr(v22, 0);
                v16 = KiTbFlushTimeStamp;
                v17 = KiTbFlushTimeStamp - v13;
                if ( (unsigned int)(KiTbFlushTimeStamp - v13) <= 2 )
                  continue;
              }
              break;
            }
          }
          v8 = 0;
LABEL_21:
          v7 = v13;
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
    v9 = (_KPROCESS *)HIDWORD(v26);
    v4 = v25;
    a3 = v24;
  }
  v18 = (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    v19 = qword_14036C218;
    if ( (v4 & 2) != 0 )
      goto LABEL_33;
    a3 = v24;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[13] )
    {
      if ( !Process->SecurePid )
      {
LABEL_32:
        v4 = v25;
        v9 = (_KPROCESS *)HIDWORD(v26);
LABEL_33:
        if ( (_DWORD)a3 == 1 )
        {
LABEL_35:
          if ( HIBYTE(v25) || v27 > v19 )
          {
            if ( (v4 & 1) != 0 )
              KeFlushCurrentTbOnly((unsigned int)a3, v19, a3);
            else
              KeFlushTb(a3, v3);
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
LABEL_34:
        LOBYTE(v3) = (v4 & 8) != 0;
        ++v3;
        goto LABEL_35;
      }
      if ( v24 != 1 )
      {
        v9 = (_KPROCESS *)HIDWORD(v26);
        v4 = v25;
        goto LABEL_34;
      }
    }
    v19 = -1LL;
    goto LABEL_32;
  }
  return v18;
}
