/*
 * XREFs of sub_180102784 @ 0x180102784
 * Callers:
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void *sub_180102784()
{
  unsigned int v0; // ebx
  char v1; // cl
  unsigned int v2; // ecx
  void *result; // rax
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v5; // [rsp+58h] [rbp-20h]

  v0 = 1;
  qword_18015D458 = sub_18005C774();
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( (unsigned int)v5 > 1 )
    {
      do
        ++v1;
      while ( (unsigned int)v5 >> v1 > 1 );
    }
    v2 = ~((1LL << v1) - 1) & ((1LL << v1) + v5 - 1);
    if ( v2 > 0x40 )
      v2 = 64;
    v0 = v2;
  }
  qword_18015A580[0] = v0;
  result = memset(&unk_18015ABA0, 0, 0x30uLL);
  if ( (dword_18015D42C & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)dword_18015D42C >> 4) & 3);
    dword_18015ABAC = ((unsigned int)dword_18015D42C >> 4) & 3;
  }
  return result;
}
