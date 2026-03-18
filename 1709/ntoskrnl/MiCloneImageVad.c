/*
 * XREFs of MiCloneImageVad @ 0x140120754
 * Callers:
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiCopyForkedFixupVad @ 0x1406EA818 (MiCopyForkedFixupVad.c)
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiCloneImageVad(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 v5; // rsi
  int v6; // ebx
  __int64 result; // rax
  unsigned int SessionId; // eax

  v4 = *(_DWORD *)(a3 + 48);
  v5 = **(_QWORD **)(a3 + 72);
  if ( (v4 & 7) == 2 && (v4 & 0x10000) != 0 )
  {
    v6 = 1;
    MiCopyForkedFixupVad(a2, a3);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 1296) + 248LL);
  }
  else
  {
    v6 = 0;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0 )
    return 0LL;
  SessionId = MmGetSessionIdEx(a1);
  result = MiCreatePerSessionProtos(v5, SessionId);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 == 1 )
    --*(_QWORD *)(*(_QWORD *)(a1 + 1296) + 248LL);
  return result;
}
