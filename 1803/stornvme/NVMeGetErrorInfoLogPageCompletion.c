/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x1C000D4B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0014040 (memmove.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 result; // rax

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( v2 == 40 )
    v5 = *(_QWORD *)(a2 + 64);
  else
    v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_DWORD *)(v5 + 28);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( v6 >= *(_DWORD *)(v4 + 4240) )
      v6 = *(_DWORD *)(v4 + 4240);
    memmove((void *)(v5 + *(unsigned int *)(v5 + 44)), *(const void **)(v4 + 4200), v6);
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
  }
  v7 = *(_QWORD *)(v4 + 4200);
  result = *(_QWORD *)(v4 + 4208);
  if ( v7 )
    result = StorPortExtendedFunction(83LL, a1, v7, *(unsigned int *)(v4 + 4240));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4240) = 0;
  *(_QWORD *)(v4 + 4232) = 0LL;
  *(_BYTE *)(v4 + 4253) |= 8u;
  return result;
}
