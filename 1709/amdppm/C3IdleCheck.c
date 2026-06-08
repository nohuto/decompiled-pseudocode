/*
 * XREFs of C3IdleCheck @ 0x1C0007B00
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0008E0C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0008E5C (WriteGenAddr.c)
 */

__int64 __fastcall C3IdleCheck(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v5; // al

  v2 = 0;
  GenAddr = ReadGenAddr(&dword_1C0011BB4, a2);
  v5 = 0;
  if ( qword_1C0011BC4 )
    v5 = ReadGenAddr(&dword_1C0011BC0, v3);
  if ( ((v5 | GenAddr) & 0x10) != 0 )
  {
    WriteGenAddr(&dword_1C0011BB4, 16LL);
    if ( qword_1C0011BC4 )
      WriteGenAddr(&dword_1C0011BC0, 16LL);
    return (unsigned int)-1073741823;
  }
  return v2;
}
