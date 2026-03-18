/*
 * XREFs of PspQueryLastCallThread @ 0x14059E56C
 * Callers:
 *     NtQueryInformationThread @ 0x1404CB7E0 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspQueryLastCallThread(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v4; // r11d
  __int64 v5; // rbx
  __int16 v6; // di
  int v7; // esi
  unsigned __int64 v8; // r11
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( ((a3 - 16) & 0xFFFFFFF7) != 0 )
    return 3221225476LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 340);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( *(_BYTE *)(a1 + 388) != 5 )
    return 3221225473LL;
  if ( *(_BYTE *)(a1 + 562) != 1 )
    return 3221225473LL;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(_WORD *)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 436);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( v4 != *(_DWORD *)(a1 + 340) )
    return 3221225473LL;
  v8 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v7) * (unsigned __int64)KeMaximumIncrement;
  *(_QWORD *)a2 = v5;
  *(_WORD *)(a2 + 8) = v6;
  v9 = 16;
  if ( a3 != 16 )
    *(_QWORD *)(a2 + 16) = v8;
  if ( a4 )
  {
    if ( a3 != 16 )
      v9 = 24;
    *a4 = v9;
  }
  return 0LL;
}
