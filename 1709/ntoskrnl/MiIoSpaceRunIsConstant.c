/*
 * XREFs of MiIoSpaceRunIsConstant @ 0x140118B54
 * Callers:
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 * Callees:
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiIoSpaceIsConstant @ 0x140119350 (MiIoSpaceIsConstant.c)
 */

__int64 __fastcall MiIoSpaceRunIsConstant(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  __int64 IsConstant; // rbx
  __int64 v7; // r10
  unsigned __int64 *v8; // r11
  __int64 v10; // r8
  __int64 v11; // r11

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 1LL;
  if ( !a2 )
    v5 = a3;
  IsConstant = MiIoSpaceIsConstant(a1, v5);
  if ( IsConstant && v8 )
  {
    while ( v7 != 1 )
    {
      if ( !MiIsPfnInline(*v8) && IsConstant != MiIoSpaceIsConstant(v10, 1LL) )
      {
        IsConstant = 0LL;
        break;
      }
      v8 = (unsigned __int64 *)(v11 + 8);
    }
  }
  __writecr8(CurrentIrql);
  return IsConstant;
}
