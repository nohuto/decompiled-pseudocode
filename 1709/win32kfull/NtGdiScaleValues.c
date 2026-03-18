/*
 * XREFs of NtGdiScaleValues @ 0x1C028B400
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GreScaleValues @ 0x1C027A36C (GreScaleValues.c)
 */

__int64 __fastcall NtGdiScaleValues(HDC a1, char *a2, unsigned int a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // edi
  void *v9; // rbx
  char *v10; // rcx
  SIZE_T v11; // r14
  unsigned int v12; // edi

  v6 = 4LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = 4 * a3;
  v9 = (void *)AllocFreeTmpBuffer((unsigned int)v6);
  if ( !v9 )
    return 0LL;
  if ( v7 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = &a2[v7];
    if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = v7;
  memmove(v9, a2, v7);
  v12 = GreScaleValues(a1, (int *)v9, a3);
  if ( v12 )
  {
    ProbeForWrite(a2, v11, 4u);
    memmove(a2, v9, v11);
  }
  FreeTmpBuffer(v9);
  return v12;
}
