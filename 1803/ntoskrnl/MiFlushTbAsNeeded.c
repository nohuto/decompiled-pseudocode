/*
 * XREFs of MiFlushTbAsNeeded @ 0x140025F90
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400A5A10 (MiAssignNonPagedPoolPtes.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFlushTbAsNeeded(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, int a4)
{
  int v4; // ebx
  ULONG_PTR v7; // rsi
  int v8; // ebp
  unsigned __int64 i; // r14
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  int PteTimeStamp; // edi
  ULONG_PTR v15; // r8
  __int64 v16; // r10
  ULONG_PTR v17; // r9
  unsigned int v18; // eax
  signed __int32 v20[8]; // [rsp+0h] [rbp-148h] BYREF
  _DWORD v21[4]; // [rsp+30h] [rbp-118h] BYREF
  int v22; // [rsp+40h] [rbp-108h] BYREF
  __int16 v23; // [rsp+44h] [rbp-104h]
  __int64 v24; // [rsp+48h] [rbp-100h]
  __int64 v25; // [rsp+50h] [rbp-F8h]
  __int64 v26; // [rsp+58h] [rbp-F0h]

  v24 = 20LL;
  v22 = a3;
  v4 = 0;
  v23 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v7 = BugCheckParameter2;
  v8 = 0;
  for ( i = 0LL; i < a2; v7 += 8LL )
  {
    BugCheckParameter4 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(
                         BugCheckParameter2,
                         BugCheckParameter4,
                         0xFFFFF6FB7DBED7F8uLL,
                         0xFFFFF6FB7DBED000uLL)
      && (BugCheckParameter4 & 1) != 0
      && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
    {
      BugCheckParameter2 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
      v11 = *(_QWORD *)(BugCheckParameter2 + 1544);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * ((v7 >> 3) & 0x1FF));
        v13 = BugCheckParameter4 | 0x20;
        BugCheckParameter2 = (unsigned __int8)v12;
        LOBYTE(BugCheckParameter2) = v12 & 0x20;
        if ( (v12 & 0x20) == 0 )
          v13 = BugCheckParameter4;
        BugCheckParameter4 = v13;
        if ( (v12 & 0x42) != 0 )
          BugCheckParameter4 = v13 | 0x42;
      }
    }
    if ( (BugCheckParameter4 & 0xC01) != 0 || (BugCheckParameter4 & 0x3E0) != 0 )
    {
      if ( !a4 )
        KeBugCheckEx(0x1Au, 0x5100uLL, v7, a2 - i, BugCheckParameter4);
    }
    else
    {
      PteTimeStamp = MiGetPteTimeStamp(BugCheckParameter4);
      *(_QWORD *)v7 = ZeroPte;
      BugCheckParameter2 = v17;
      if ( v7 >= v17 )
      {
        BugCheckParameter2 = v15;
        if ( v7 <= v15 )
          MiWritePteShadow(v7, ZeroPte);
      }
      if ( PteTimeStamp )
      {
        if ( PteTimeStamp == v8 )
        {
          if ( v4 == 1 )
            MiInsertTbFlushEntry(&v22, (__int64)((v7 << 25) - (v16 << 25)) >> 16, 1LL, 0LL);
        }
        else
        {
          _InterlockedOr(v20, 0);
          BugCheckParameter2 = (unsigned int)KiTbFlushTimeStamp;
          v18 = KiTbFlushTimeStamp - PteTimeStamp;
          if ( (unsigned int)(KiTbFlushTimeStamp - PteTimeStamp) <= 2 )
          {
            while ( (PteTimeStamp & 1) != 0 || v18 < 2 )
            {
              if ( (BugCheckParameter2 & 1) == 0 )
              {
                MiInsertTbFlushEntry(&v22, (__int64)(v7 << 25) >> 16, 1LL, 0LL);
                v4 = 1;
                v8 = PteTimeStamp;
                goto LABEL_34;
              }
              v21[0] = 0;
              _InterlockedOr(v20, 0);
              while ( _bittest(&KiTbFlushTimeStamp, 0) )
                KeYieldProcessorEx(v21);
              if ( (PteTimeStamp & 1) != 0 )
              {
                _InterlockedOr(v20, 0);
                BugCheckParameter2 = (unsigned int)KiTbFlushTimeStamp;
                v18 = KiTbFlushTimeStamp - PteTimeStamp;
                if ( (unsigned int)(KiTbFlushTimeStamp - PteTimeStamp) <= 2 )
                  continue;
              }
              break;
            }
          }
          v4 = 0;
          v8 = PteTimeStamp;
        }
      }
      else
      {
        v4 = 0;
        v8 = 0;
      }
    }
LABEL_34:
    ++i;
  }
  return MiFlushTbList(&v22);
}
