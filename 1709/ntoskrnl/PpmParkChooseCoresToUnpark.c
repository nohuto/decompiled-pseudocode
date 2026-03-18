/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x14024C4A4
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14008F400 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1402497AC (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x14024ABA8 (PpmEventParkNodePreference.c)
 */

char __fastcall PpmParkChooseCoresToUnpark(
        ULONG a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        _DWORD *a9)
{
  __int64 v9; // rbx
  char result; // al
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 Prcb; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v21; // r15
  ULONG v22; // edx
  unsigned __int64 v23; // r9
  __int64 v24; // r13
  unsigned int v25; // r8d
  unsigned __int64 v26; // r15
  bool i; // zf
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  ULONG v35; // r8d
  ULONG v36; // eax
  __int64 v37; // r11
  bool v38; // cf
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  void (__fastcall *v41)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  ULONG v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h]
  ULONG v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+68h] [rbp-98h]
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v55[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v56; // [rsp+88h] [rbp-78h]
  _DWORD v57[44]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v58[44]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v59[44]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v60[44]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v9 = a3;
  v50 = a1;
  if ( a1 )
  {
    v13 = a3 & a4;
    v53 = v13;
    if ( (unsigned int)((0x101010101010101LL
                       * ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 != a1
      || v13 )
    {
      v14 = a5 & v13;
      v52 = a5 & (a3 ^ v13);
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v15 = a6 | v14;
      }
      else
      {
        v15 = 0LL;
        v55[0] = 0LL;
        v55[1] = (unsigned __int16 *)(a6 | v14);
        v56 = a2;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v48, v55) )
          v15 |= *(_QWORD *)(KeGetPrcb(v48) + 24920);
      }
      if ( !KiClockTimerPerCpu )
      {
        Prcb = KeGetPrcb(KiClockTimerOwner);
        if ( *(unsigned __int8 *)(Prcb + 208) == a2 && (v9 & *(_QWORD *)(Prcb + 200)) != 0 )
        {
          *a9 |= 0x100u;
          if ( (unsigned __int8)PpmParkGranularity <= 1u )
            v15 |= *(_QWORD *)(Prcb + 200);
          else
            v15 |= *(_QWORD *)(Prcb + 24920);
        }
      }
      v17 = (unsigned __int64)PpmParkPreferenceHandler;
      v49 = (__int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        v58[0] = 1310721;
        memset(&v58[1], 0, 0xA4uLL);
        v57[0] = 1310721;
        memset(&v57[1], 0, 0xA4uLL);
        v59[0] = 1310721;
        memset(&v59[1], 0, 0xA4uLL);
        v60[0] = 1310721;
        memset(&v60[1], 0, 0xA4uLL);
        if ( a2 )
          LOWORD(v58[0]) = a2 + 1;
        *(_QWORD *)&v58[2 * a2 + 2] |= v9;
        if ( LOWORD(v57[0]) <= a2 )
          LOWORD(v57[0]) = a2 + 1;
        v18 = PpmCheckTime;
        *(_QWORD *)&v57[2 * a2 + 2] |= v15;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))v49)(
          0LL,
          v18,
          a1,
          v58,
          v57,
          v59,
          v60);
        if ( a2 >= LOWORD(v59[0]) )
          v20 = 0LL;
        else
          v20 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&v59[2 * a2 + 2];
        v49 = (__int64)v20;
        if ( a2 >= LOWORD(v60[0]) )
          v21 = 0LL;
        else
          v21 = *(_QWORD *)&v60[2 * a2 + 2];
        v51 = v21;
        PpmEventParkNodePreference(a2, v9, a1, v19, v15, (char)v20, v21);
        v17 = v49;
      }
      else
      {
        v21 = 0LL;
        v51 = 0LL;
      }
      v22 = v50;
      *a7 |= v9;
      v49 = v9;
      v48 = v22;
      v23 = v9 & ~(v17 | v21);
      v54 = v23;
      v24 = v9;
      v25 = v22;
      v26 = (0x101010101010101LL
           * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      for ( i = v22 == 0; !i && v25 > (unsigned int)v26; i = v25 == 0 )
      {
        if ( (v15 & v9) != 0 )
        {
          *a9 |= 0x200u;
          v9 &= v15;
        }
        v28 = v51 & v9;
        if ( (v51 & v9) != 0 )
        {
          *a9 |= 0x400u;
          v9 = v28;
        }
        if ( (v23 & v9) != 0 )
        {
          *a9 |= 0x800u;
          v9 &= v23;
        }
        if ( (unsigned int)(PopHeteroSystem - 3) <= 1 )
        {
          *a9 |= 0x8000u;
          v9 = PpmHeteroRestrictToFavoredClass(v9, a2);
        }
        v29 = v52 & v9;
        if ( (v52 & v9) != 0 )
        {
          *a9 |= 0x1000u;
          v9 = v29;
        }
        v30 = v9 & ~v53;
        if ( v30 )
        {
          *a9 |= 0x2000u;
          v9 = v30;
        }
        _BitScanForward64(&v31, v9);
        v32 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v31 & 0x3F)]);
        v33 = v32;
        if ( PpmParkCoreMask )
          v34 = *(_QWORD *)(v32 + 24920);
        else
          v34 = *(_QWORD *)(v32 + 200);
        v35 = v48;
        v36 = v48 - (unsigned __int8)PpmParkGranularity;
        v37 = *a7 & ~v34;
        v38 = v48 < (unsigned __int8)PpmParkGranularity;
        *a7 = v37;
        if ( v38 )
          v36 = v35;
        v25 = v36;
        v48 = v36;
        v39 = (v15 & v34) - (((v15 & v34) >> 1) & 0x5555555555555555LL);
        v40 = (0x101010101010101LL
             * (((v39 & 0x3333333333333333LL)
               + ((v39 >> 2) & 0x3333333333333333LL)
               + (((v39 & 0x3333333333333333LL) + ((v39 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( (_DWORD)v40 )
        {
          v15 &= ~v34;
          LODWORD(v26) = v26 - v40;
        }
        v9 &= ~*(_QWORD *)(*(_QWORD *)(v33 + 192) + 136LL);
        v24 &= ~*(_QWORD *)(v33 + 8LL * *(unsigned __int8 *)(v33 + 208) + 24728);
        v41 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v49 & ~*(_QWORD *)(v33 + 24920));
        v49 = (__int64)v41;
        if ( !v9 )
        {
          if ( !v24 )
          {
            v24 = v37;
            if ( v41 )
              v24 = (__int64)v41;
            v49 = v24;
          }
          v9 = v24;
        }
        v23 = v54;
      }
      while ( !(a8 ? v25 == 0 : (_DWORD)v26 == 0) )
      {
        *a9 |= 0x4000u;
        _BitScanForward64(&v43, v15);
        v44 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v43 & 0x3F)]);
        if ( PpmParkCoreMask )
          v45 = *(_QWORD *)(v44 + 24920);
        else
          v45 = *(_QWORD *)(v44 + 200);
        v46 = v15 & v45;
        v47 = ~v45;
        *a7 &= v47;
        v15 &= v47;
        v25 = v48 - (unsigned __int8)PpmParkGranularity;
        v48 = v25;
        LODWORD(v26) = v26
                     - ((unsigned int)((0x101010101010101LL
                                      * ((((v46 - ((v46 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v46 - ((v46 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                        + ((((v46 - ((v46 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v46 - ((v46 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      }
      return v50;
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
