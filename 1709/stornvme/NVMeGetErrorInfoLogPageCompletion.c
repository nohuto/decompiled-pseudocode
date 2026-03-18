/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x1C000D000
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00139C0 (memmove.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 result; // rax
  unsigned int v7; // ecx
  __int64 v8; // r8

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
  result = *(unsigned int *)(v5 + 28);
  v7 = *(_DWORD *)(v4 + 4232);
  if ( (unsigned int)result < v7 )
    v7 = *(_DWORD *)(v5 + 28);
  if ( *(_BYTE *)(a2 + 3) == 1 )
    result = (__int64)memmove((void *)(v5 + *(unsigned int *)(v5 + 44)), *(const void **)(v4 + 4200), v7);
  else
    *(_BYTE *)(a2 + 3) = 1;
  v8 = *(_QWORD *)(v4 + 4200);
  if ( v8 )
    result = StorPortExtendedFunction(25LL, a1, v8, *(unsigned int *)(v4 + 4232));
  *(_QWORD *)(v4 + 4200) = 0LL;
  *(_DWORD *)(v4 + 4232) = 0;
  *(_QWORD *)(v4 + 4224) = 0LL;
  *(_BYTE *)(v4 + 4245) |= 8u;
  return result;
}
