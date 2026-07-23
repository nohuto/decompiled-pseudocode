/*
 * XREFs of MiRemoveSystemImagePage @ 0x14013B5D0
 * Callers:
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a2 << 25 >> 16;
  if ( PsNtosImageBase
    && (v4 < PsNtosImageEnd && v4 >= (unsigned __int64)PsNtosImageBase
     || v4 < PsHalImageEnd && v4 >= (unsigned __int64)PsHalImageBase) )
  {
    v5 = (volatile signed __int32 *)&xmmword_1403CB5A0 + 2;
  }
  else
  {
    v5 = (volatile signed __int32 *)&xmmword_1403CB5A0 + 3;
  }
  _InterlockedDecrement(v5);
  MiTerminateWsle(a1, v4, 2, &v7);
  return MiLockPageAtDpcInline(a3);
}
