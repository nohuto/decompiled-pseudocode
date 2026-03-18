/*
 * XREFs of ?CitpUTCToMS@@YAI_KI@Z @ 0x1C0083FB4
 * Callers:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0024700 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CitpUTCToMS(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax

  v2 = a2;
  if ( MEMORY[0xFFFFF78000000014] > a1 )
  {
    v3 = MEMORY[0xFFFFF78000000014] - a1;
    v4 = MEMORY[0xFFFFF78000000008] - qword_1C0193760;
    if ( v3 < MEMORY[0xFFFFF78000000008] - qword_1C0193760 )
      v4 = v3;
    v5 = -1;
    if ( v4 / 0x2710 <= 0xFFFFFFFF )
      v5 = v4 / 0x2710;
    return a2 - v5;
  }
  return v2;
}
