/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x140282200
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140036BE0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x14027F774 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x140280B18 (PpmEventParkNodePreference.c)
 */

char __fastcall PpmParkChooseCoresToUnpark(
        ULONG a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        int a8,
        _DWORD *a9)
{
  char result; // al
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v16; // rax
  __int16 v17; // ax
  __int64 v18; // rdx
  unsigned __int16 v19; // ax
  __int64 v20; // r9
  void (__fastcall *v21)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v22; // r15
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  unsigned int v26; // r8d
  unsigned __int64 v27; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r11
  ULONG v36; // r8d
  __int64 v37; // rdx
  unsigned __int64 v38; // r10
  ULONG v39; // eax
  bool v40; // cf
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // r11d
  unsigned __int64 v44; // rdx
  void (__fastcall *v45)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 v52; // rcx
  ULONG v54; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  ULONG v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  __int64 v58; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v60[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v61; // [rsp+80h] [rbp-80h]
  _DWORD v62[44]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v63[44]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v64[44]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v65[44]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v56 = a1;
  if ( a1 )
  {
    v13 = a3 & a4;
    v59 = v13;
    if ( (unsigned int)((0x101010101010101LL
                       * ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 != a1
      || v13 )
    {
      v58 = a5 & (a3 ^ v13);
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v14 = a6 | a5 & v13;
      }
      else
      {
        v14 = 0LL;
        v61 = a2;
        v60[0] = 0LL;
        v60[1] = (unsigned __int16 *)(a6 | a5 & v13);
        while ( !(unsigned int)KeEnumerateNextProcessor(&v54, v60) )
          v14 |= *(_QWORD *)(KeGetPrcb(v54) + 24920);
      }
      if ( !KiClockTimerPerCpu )
      {
        Prcb = KeGetPrcb(KiClockTimerOwner);
        if ( *(unsigned __int8 *)(Prcb + 208) == a2 && (a3 & *(_QWORD *)(Prcb + 200)) != 0 )
        {
          *a9 |= 0x100u;
          if ( (unsigned __int8)PpmParkGranularity <= 1u )
            v14 |= *(_QWORD *)(Prcb + 200);
          else
            v14 |= *(_QWORD *)(Prcb + 24920);
        }
      }
      v16 = (unsigned __int64)PpmParkPreferenceHandler;
      v55 = (unsigned __int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        v63[0] = 1310721;
        memset(&v63[1], 0, 0xA4uLL);
        v62[0] = 1310721;
        memset(&v62[1], 0, 0xA4uLL);
        v64[0] = 1310721;
        memset(&v64[1], 0, 0xA4uLL);
        v65[0] = 1310721;
        memset(&v65[1], 0, 0xA4uLL);
        v17 = 1;
        v18 = PpmCheckTime;
        if ( a2 )
          v17 = a2 + 1;
        LOWORD(v63[0]) = v17;
        v19 = v62[0];
        *(_QWORD *)&v63[2 * a2 + 2] |= a3;
        if ( v19 <= a2 )
          v19 = a2 + 1;
        LOWORD(v62[0]) = v19;
        *(_QWORD *)&v62[2 * a2 + 2] |= v14;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))v55)(
          0LL,
          v18,
          a1,
          v63,
          v62,
          v64,
          v65);
        if ( a2 >= LOWORD(v64[0]) )
          v21 = 0LL;
        else
          v21 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&v64[2 * a2 + 2];
        v55 = (unsigned __int64)v21;
        if ( a2 >= LOWORD(v65[0]) )
          v22 = 0LL;
        else
          v22 = *(_QWORD *)&v65[2 * a2 + 2];
        v57 = v22;
        PpmEventParkNodePreference(a2, a3, a1, v20, v14, (char)v21, v22);
        v16 = v55;
      }
      else
      {
        v22 = 0LL;
        v57 = 0LL;
      }
      v23 = a3 & ~(v16 | v22);
      v24 = *a7 | a3;
      *a7 = v24;
      v25 = v24 & (v14 | v22);
      if ( !v25 )
      {
        v25 = v24;
        if ( (v23 & v24) != 0 )
          v25 = v23 & v24;
      }
      v26 = v56;
      v55 = v25;
      v54 = v56;
      v27 = v25;
      for ( i = (0x101010101010101LL
               * ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            v26 && v26 > (unsigned int)i;
            LODWORD(i) = v43 )
      {
        if ( (v14 & v27) != 0 )
        {
          *a9 |= 0x200u;
          v27 &= v14;
        }
        v29 = v57 & v27;
        if ( (v57 & v27) != 0 )
        {
          *a9 |= 0x400u;
          v27 = v29;
        }
        if ( (v23 & v27) != 0 )
        {
          *a9 |= 0x800u;
          v27 &= v23;
        }
        if ( (unsigned int)(PopHeteroSystem - 3) <= 1 )
        {
          *a9 |= 0x8000u;
          v27 = PpmHeteroRestrictToFavoredClass(v27, a2);
        }
        v30 = v58 & v27;
        if ( (v58 & v27) != 0 )
        {
          *a9 |= 0x1000u;
          v27 = v30;
        }
        v31 = v27 & ~v59;
        if ( v31 )
        {
          *a9 |= 0x2000u;
          v27 = v31;
        }
        _BitScanForward64(&v32, v27);
        v33 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v32 & 0x3F)]);
        v34 = v33;
        if ( PpmParkCoreMask )
          v35 = *(_QWORD *)(v33 + 24920);
        else
          v35 = *(_QWORD *)(v33 + 200);
        v36 = v54;
        v37 = ~v35;
        v38 = *a7 & ~v35;
        v39 = v54 - (unsigned __int8)PpmParkGranularity;
        v40 = v54 < (unsigned __int8)PpmParkGranularity;
        *a7 = v38;
        if ( v40 )
          v39 = v36;
        v26 = v39;
        v54 = v39;
        v41 = (((v14 & v35) - (((v14 & v35) >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + ((((v14 & v35) - (((v14 & v35) >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
        v42 = (0x101010101010101LL * ((v41 + (v41 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        v43 = i - v42;
        if ( !(_DWORD)v42 )
          v43 = i;
        v44 = v14 & v37;
        if ( !(_DWORD)v42 )
          v44 = v14;
        v27 &= ~*(_QWORD *)(*(_QWORD *)(v34 + 192) + 136LL);
        v14 = v44;
        v45 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(~*(_QWORD *)(v34 + 8LL * *(unsigned __int8 *)(v34 + 208) + 24728) & v55);
        v25 &= ~*(_QWORD *)(v34 + 24920);
        v55 = (unsigned __int64)v45;
        if ( !v27 )
        {
          if ( !v45 )
          {
            if ( !v25 )
            {
              v25 = v38 & (v57 | v14);
              if ( !v25 )
              {
                v25 = v38;
                if ( (v23 & v38) != 0 )
                  v25 = v23 & v38;
              }
            }
            v45 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v25;
            v55 = v25;
          }
          v27 = (unsigned __int64)v45;
        }
      }
      while ( !(a8 ? v26 == 0 : (_DWORD)i == 0) )
      {
        *a9 |= 0x4000u;
        _BitScanForward64(&v47, v14);
        v48 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v47 & 0x3F)]);
        if ( PpmParkCoreMask )
          v49 = *(_QWORD *)(v48 + 24920);
        else
          v49 = *(_QWORD *)(v48 + 200);
        v50 = v49;
        v51 = ~v49;
        *a7 &= v51;
        v52 = v14 & v50;
        v14 &= v51;
        v26 = v54 - (unsigned __int8)PpmParkGranularity;
        v54 = v26;
        LODWORD(i) = i
                   - ((unsigned int)((0x101010101010101LL
                                    * ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                      + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                      + ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      }
      return v56;
    }
    else
    {
      result = a1;
      *a7 &= ~a3;
    }
  }
  else
  {
    *a7 |= a3;
    return 0;
  }
  return result;
}
