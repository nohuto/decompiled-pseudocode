/*
 * XREFs of IovInitializeIrp @ 0x1407A5084
 * Callers:
 *     IoInitializeIrp @ 0x140113A70 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x1407B0894 (VfIoInitializeIrp.c)
 */

__int64 __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoInitializeIrp(a1, a4, 0LL);
  return result;
}
