/*
 * XREFs of ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0021570
 * Callers:
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C00211F0 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0021908 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?bIs16@EFLOAT@@QEAAHXZ @ 0x1C0021928 (-bIs16@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C0021948 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     ?bIs1Over16@EFLOAT@@QEAAHXZ @ 0x1C00E8D88 (-bIs1Over16@EFLOAT@@QEAAHXZ.c)
 */

void __fastcall EXFORMOBJ::vComputeAccelFlags(EXFORMOBJ *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 *v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx

  *(_DWORD *)(*(_QWORD *)this + 32LL) = a2;
  v2 = *(_QWORD *)this;
  if ( !*(_DWORD *)(*(_QWORD *)this + 24LL) && !*(_DWORD *)(v2 + 28) )
    *(_DWORD *)(v2 + 32) |= 0x40u;
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)(*(_QWORD *)this + 4LL))
    && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v3 + 8)) )
  {
    *(_DWORD *)(v5 + 32) |= 1u;
    v7 = *v4;
    if ( v6 == 8 )
    {
      if ( !(unsigned int)EFLOAT::bIs16((EFLOAT *)v7) )
        return;
      v9 = EFLOAT::bIs16((EFLOAT *)(v8 + 12));
    }
    else if ( v6 == 32 )
    {
      if ( !(unsigned int)EFLOAT::bIs1((EFLOAT *)v7) )
        return;
      v9 = EFLOAT::bIs1((EFLOAT *)(v11 + 12));
    }
    else
    {
      if ( *(float *)v7 != 0.0625 )
        return;
      v9 = EFLOAT::bIs1Over16((EFLOAT *)(v7 + 12));
    }
    if ( v9 )
      *(_DWORD *)(v10 + 32) |= 2u;
  }
}
