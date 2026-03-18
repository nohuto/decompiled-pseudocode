/*
 * XREFs of ?CitpUTCToMS@@YAI_KI@Z @ 0x1C006B310
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C003BDDC (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CitpUTCToMS(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r8
  int v4; // eax

  v2 = a2;
  if ( MEMORY[0xFFFFF78000000014] > a1 )
  {
    v3 = MEMORY[0xFFFFF78000000014] - a1;
    if ( MEMORY[0xFFFFF78000000014] - a1 >= MEMORY[0xFFFFF78000000008] - qword_1C01A16C0 )
      v3 = MEMORY[0xFFFFF78000000008] - qword_1C01A16C0;
    v4 = -1;
    if ( v3 / 0x2710 <= 0xFFFFFFFF )
      v4 = v3 / 0x2710;
    return a2 - v4;
  }
  return v2;
}
