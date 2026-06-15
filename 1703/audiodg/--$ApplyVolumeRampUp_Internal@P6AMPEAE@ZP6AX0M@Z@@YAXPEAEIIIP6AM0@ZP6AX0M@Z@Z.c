/*
 * XREFs of ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056C74
 * Callers:
 *     ?ApplyVolumeRamp@@YAXPEAEIIIIH@Z @ 0x140056E78 (-ApplyVolumeRamp@@YAXPEAEIIIIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1CFadeWindowLUT@@QEAA@XZ @ 0x140056DE4 (--1CFadeWindowLUT@@QEAA@XZ.c)
 *     ?GetNextEntry@CFadeWindowLUT@@QEAAXAEAM@Z @ 0x14005706C (-GetNextEntry@CFadeWindowLUT@@QEAAXAEAM@Z.c)
 *     ?Initialize@CFadeWindowLUT@@QEAAJIIH@Z @ 0x1400570D4 (-Initialize@CFadeWindowLUT@@QEAAJIIH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void (__fastcall *a5)(__int64),
        void (__fastcall *a6)(__int64))
{
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v10; // rdi
  __int64 v11; // r14
  unsigned int i; // edi
  __int64 v13; // r12
  float v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-2Ch]
  __int128 v21; // [rsp+58h] [rbp-28h]

  v15 = -2LL;
  v6 = a4;
  v7 = a3;
  v16 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( (int)CFadeWindowLUT::Initialize((CFadeWindowLUT *)&v16, a2, a2, 1) < 0 )
  {
    for ( i = 0; i < a2; ++i )
    {
      if ( (_DWORD)v7 )
      {
        v13 = v7;
        do
        {
          a5(a1);
          a6(a1);
          a1 += v6 >> 3;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  else if ( a2 )
  {
    v10 = a2;
    do
    {
      CFadeWindowLUT::GetNextEntry((CFadeWindowLUT *)&v16, &v14);
      v14 = 1.0 - v14;
      if ( (_DWORD)v7 )
      {
        v11 = v7;
        do
        {
          a5(a1);
          a6(a1);
          a1 += v6 >> 3;
          --v11;
        }
        while ( v11 );
      }
      --v10;
    }
    while ( v10 );
  }
  CFadeWindowLUT::~CFadeWindowLUT((CFadeWindowLUT *)&v16);
}
