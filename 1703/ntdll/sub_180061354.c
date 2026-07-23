/*
 * XREFs of sub_180061354 @ 0x180061354
 * Callers:
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void *sub_180061354()
{
  char v0; // cl
  unsigned int v1; // ecx
  void *result; // rax
  _BYTE SystemInformation[56]; // [rsp+20h] [rbp-58h] BYREF
  char v4; // [rsp+58h] [rbp-20h]

  qword_18015BFE8 = sub_18000EEA8();
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
  {
    v1 = 1;
  }
  else
  {
    v0 = 0;
    if ( (unsigned int)v4 > 1 )
    {
      do
        ++v0;
      while ( (unsigned int)v4 >> v0 > 1 );
    }
    v1 = ~((1LL << v0) - 1) & ((1LL << v0) + v4 - 1);
    if ( v1 > 0x40 )
      v1 = 64;
  }
  dword_1801593E0 = v1;
  dword_1801593E4 = 0;
  result = memset(&unk_180159B60, 0, 0x30uLL);
  if ( (dword_18015C3B8 & 0x30) != 0 )
  {
    DbgPrint("Enabling heap debug options\n");
    result = (void *)(((unsigned int)dword_18015C3B8 >> 4) & 3);
    dword_180159B6C = ((unsigned int)dword_18015C3B8 >> 4) & 3;
  }
  return result;
}
