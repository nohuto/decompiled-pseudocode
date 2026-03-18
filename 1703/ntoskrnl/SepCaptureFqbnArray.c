/*
 * XREFs of SepCaptureFqbnArray @ 0x1406F4890
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14044ADC8 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureFqbnArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rbx
  unsigned __int16 *PoolWithTag; // rdi
  SIZE_T v9; // rdx
  unsigned int i; // r8d
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  char *v17; // rsi
  unsigned int j; // ebx
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx

  v6 = 24LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[(unsigned int)v6] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v6] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(PoolWithTag, Src, (unsigned int)v6);
  if ( (((unsigned int)v6 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225621LL;
  }
  v9 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
  for ( i = 0; ; ++i )
  {
    v11 = v9;
    if ( i >= a2 )
      break;
    v12 = v9 + PoolWithTag[12 * i + 4];
    v13 = -1;
    if ( v12 >= (unsigned int)v9 )
      v13 = v9 + PoolWithTag[12 * i + 4];
    v9 = v13;
    if ( v12 < v11 )
    {
      v14 = -1073741675;
LABEL_21:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v14;
    }
  }
  v15 = ExAllocatePoolWithTag(PagedPool, v9, 0x74416553u);
  v16 = v15;
  if ( !v15 )
  {
    v14 = -1073741670;
    goto LABEL_21;
  }
  memmove(v15, PoolWithTag, v6);
  v17 = (char *)(((unsigned __int64)&v16[v6 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  for ( j = 0; j < a2; ++j )
  {
    v19 = PoolWithTag[12 * j + 4];
    if ( v19 )
    {
      v20 = *(_QWORD *)&PoolWithTag[12 * j + 8];
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = v20 + v19;
      if ( v21 > 0x7FFFFFFF0000LL || v21 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v17, *(const void **)&PoolWithTag[12 * j + 8], PoolWithTag[12 * j + 4]);
    v16[3 * j + 2] = v17;
    v17 += PoolWithTag[12 * j + 4];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v16;
  return 0LL;
}
