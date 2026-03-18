/*
 * XREFs of SepCaptureInt64Array @ 0x14044B23C
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14044ADC8 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureInt64Array(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  int v7; // ebx
  PVOID PoolWithTag; // rsi

  v6 = 8LL * a2;
  if ( v6 > 0xFFFFFFFF )
  {
    LODWORD(v6) = -1;
    v7 = -1073741675;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
  if ( PoolWithTag )
  {
    if ( (_DWORD)v6 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[(unsigned int)v6] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v6] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src, (unsigned int)v6);
    *a4 = PoolWithTag;
    return (unsigned int)v7;
  }
  return 3221225626LL;
}
