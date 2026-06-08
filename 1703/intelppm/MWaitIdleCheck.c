/*
 * XREFs of MWaitIdleCheck @ 0x1C0007280
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001374 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013CC (WriteGenAddr.c)
 */

__int64 __fastcall MWaitIdleCheck(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int8 GenAddr; // di
  unsigned __int8 v3; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C0016524);
    v3 = 0;
    if ( qword_1C0016534 )
      v3 = ReadGenAddr((__int64)&dword_1C0016530);
    if ( ((GenAddr | v3) & 0x10) != 0 )
    {
      WriteGenAddr(&dword_1C0016524, 16LL);
      if ( qword_1C0016534 )
        WriteGenAddr(&dword_1C0016530, 16LL);
      return (unsigned int)-1073741823;
    }
  }
  return v1;
}
