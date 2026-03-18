/*
 * XREFs of MmSetPfnListPriorities @ 0x1400139B0
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405206B0 (PfpPfnPrioRequest.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 */

__int64 __fastcall MmSetPfnListPriorities(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rdi
  unsigned int v4; // r14d
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  char v10; // dl
  char v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // xmm1_8
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v2 = (unsigned __int64)&a2[3 * a1];
  v3 = a2;
  v4 = 0;
  if ( (unsigned __int64)a2 < v2 )
  {
    v5 = 2LL;
    v6 = 0xFFFFFA8000000000uLL;
    do
    {
      if ( (unsigned int)MiIsPfnInline(v3[1], v3[1], v6, v5) )
      {
        v8 = v6 + 48 * v7;
        *((_QWORD *)&v16 + 1) = v7;
        *(_QWORD *)&v16 = 0LL;
        v17 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v5);
        v18 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v18);
          while ( *(__int64 *)(v8 + 24) < 0 );
        }
        MiIdentifyPfn(v8, &v16);
        if ( v17 == v3[2]
          && (((unsigned __int64)v16 ^ *v3) & 0x1FFFFFFFFFFFE00LL) == 0
          && ((v10 = *(_BYTE *)(v8 + 34) & 7, v10 == 6) || (unsigned __int8)(v10 - 2) <= 2u) )
        {
          v11 = *(_BYTE *)(v8 + 35);
          v12 = (*v3 >> 57) & 7LL;
          if ( (v11 & 8) != 0 )
            v13 = 5;
          else
            v13 = v11 & 7;
          if ( (_DWORD)v12 != v13 )
          {
            if ( v10 == 2 )
              MiRelinkStandbyPage(v8, (*v3 >> 57) & 7LL);
            else
              *(_BYTE *)(v8 + 35) = v11 ^ (v12 ^ v11) & 7;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          v17 |= 2uLL;
          v4 = -1073741788;
          v15 = v17;
          *(_OWORD *)v3 = v16;
          v3[2] = v15;
        }
        v5 = 2LL;
        v6 = 0xFFFFFA8000000000uLL;
      }
      else
      {
        v4 = -1073741584;
      }
      v3 += 3;
    }
    while ( (unsigned __int64)v3 < v2 );
  }
  return v4;
}
