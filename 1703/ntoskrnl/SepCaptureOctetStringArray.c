/*
 * XREFs of SepCaptureOctetStringArray @ 0x1406F4AF4
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14044ADC8 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rdi
  unsigned int v7; // r14d
  unsigned int *PoolWithTag; // rbx
  unsigned int i; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // esi
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  char *v17; // r15
  unsigned int j; // edi
  __int64 v19; // rax
  unsigned __int64 v20; // rcx

  v6 = 16LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  v7 = 16 * a2;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
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
  for ( i = 0; i < a2; ++i )
  {
    v11 = v7;
    v12 = v7 + PoolWithTag[4 * i + 2];
    v13 = -1;
    if ( v12 >= v7 )
      v13 = v7 + PoolWithTag[4 * i + 2];
    v7 = v13;
    v14 = v12 < v11 ? 0xC0000095 : 0;
    if ( v12 < v11 )
      goto LABEL_18;
  }
  v15 = ExAllocatePoolWithTag(PagedPool, v7, 0x74416553u);
  v16 = v15;
  if ( !v15 )
  {
    v14 = -1073741670;
LABEL_18:
    ExFreePoolWithTag(PoolWithTag, 0);
    return v14;
  }
  memmove(v15, PoolWithTag, v6);
  v17 = (char *)&v16[v6 / 8];
  for ( j = 0; j < a2; ++j )
  {
    v19 = PoolWithTag[4 * j + 2];
    if ( (_DWORD)v19 )
    {
      v20 = *(_QWORD *)&PoolWithTag[4 * j];
      if ( v20 + v19 > 0x7FFFFFFF0000LL || v20 + v19 < v20 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v17, *(const void **)&PoolWithTag[4 * j], PoolWithTag[4 * j + 2]);
    v16[2 * j] = v17;
    v17 += PoolWithTag[4 * j + 2];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v16;
  return 0LL;
}
