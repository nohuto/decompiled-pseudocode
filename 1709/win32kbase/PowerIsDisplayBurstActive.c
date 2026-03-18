/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1C00DD3E0
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C00110B0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1)
{
  unsigned __int128 v2; // rax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  BOOL v6; // r8d
  unsigned __int64 v7; // rax
  int v8; // eax

  v2 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v3 = *((_QWORD *)&v2 + 1) - qword_1C0190F60;
  v4 = *((_QWORD *)&v2 + 1) - qword_1C0190F58;
  v5 = *((_QWORD *)&v2 + 1) - qword_1C0190F50;
  v6 = v3 <= 0x7D0 || v4 <= 0x1388 || v5 <= 0x61A8;
  v7 = v5;
  if ( v4 < v5 )
    v7 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - qword_1C0190F58;
  if ( v3 < v7 )
    goto LABEL_13;
  if ( v4 < v5 )
    v5 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - qword_1C0190F58;
  if ( v5 == v3 )
LABEL_13:
    v8 = 25;
  else
    v8 = (v5 != v4) + 5;
  if ( a1 )
    *a1 = v8;
  return v6;
}
