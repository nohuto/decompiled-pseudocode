/*
 * XREFs of MiIoSpaceRunIsConstant @ 0x14013CD70
 * Callers:
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 * Callees:
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiIoSpaceIsConstant @ 0x140139FA8 (MiIoSpaceIsConstant.c)
 */

_QWORD *__fastcall MiIoSpaceRunIsConstant(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // r10
  unsigned __int64 *v8; // r11
  unsigned __int64 v10; // r8
  __int64 v11; // r11

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 1LL;
  if ( !a2 )
    v5 = a3;
  v6 = MiIoSpaceIsConstant(a1, v5);
  if ( v6 && v8 )
  {
    while ( v7 != 1 )
    {
      if ( !MiIsPfnInline(*v8) && v6 != MiIoSpaceIsConstant(v10, 1LL) )
      {
        v6 = 0LL;
        break;
      }
      v8 = (unsigned __int64 *)(v11 + 8);
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
