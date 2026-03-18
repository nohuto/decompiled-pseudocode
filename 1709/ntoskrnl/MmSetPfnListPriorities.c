/*
 * XREFs of MmSetPfnListPriorities @ 0x1400010A4
 * Callers:
 *     PfpPfnPrioRequest @ 0x14043D960 (PfpPfnPrioRequest.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 */

__int64 __fastcall MmSetPfnListPriorities(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // r14
  _QWORD *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int8 v7; // r15
  char v8; // r8
  int PfnPriority; // eax
  int v10; // edx
  char v11; // r8
  __int64 v13; // xmm1_8
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]

  v2 = 0;
  v3 = (unsigned __int64)&a2[3 * a1];
  for ( i = a2; (unsigned __int64)i < v3; i += 3 )
  {
    if ( (unsigned int)MiIsPfnInline(i[1]) )
    {
      v6 = 48 * v5 - 0x58000000000LL;
      *((_QWORD *)&v14 + 1) = v5;
      *(_QWORD *)&v14 = 0LL;
      v15 = 0LL;
      v7 = MiLockPageInline(v6);
      MiIdentifyPfn(v6, &v14);
      if ( v15 == i[2]
        && (((unsigned __int64)v14 ^ *i) & 0x1FFFFFFFFFFFE00LL) == 0
        && ((v8 = *(_BYTE *)(v6 + 34) & 7, v8 == 6) || (unsigned __int8)(v8 - 2) <= 2u) )
      {
        PfnPriority = MiGetPfnPriority(v6, (*i >> 57) & 7LL);
        if ( v10 != PfnPriority )
        {
          if ( v11 == 2 )
            MiRelinkStandbyPage();
          else
            *(_BYTE *)(v6 + 35) ^= (v10 ^ *(_BYTE *)(v6 + 35)) & 7;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v7);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v7);
        v15 |= 2uLL;
        v2 = -1073741788;
        v13 = v15;
        *(_OWORD *)i = v14;
        i[2] = v13;
      }
    }
    else
    {
      v2 = -1073741584;
    }
  }
  return v2;
}
