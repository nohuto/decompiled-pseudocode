/*
 * XREFs of MmWriteUnloadedDriverInformation @ 0x14021B8C8
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x1401F5B40 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall MmWriteUnloadedDriverInformation(unsigned int *a1)
{
  _OWORD *v2; // rsi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  unsigned int i; // ebp
  _QWORD *v6; // rcx
  __int64 result; // rax
  size_t v8; // r8

  if ( MmUnloadedDrivers )
  {
    v2 = a1 + 2;
    v3 = (unsigned int)(MmLastUnloadedDriver - 1);
    v4 = a1 + 6;
    for ( i = 0; i < 0x32; ++i )
    {
      v6 = MmUnloadedDrivers;
      result = 49LL;
      if ( (unsigned int)v3 >= 0x32 )
        v3 = 49LL;
      *v2 = *(_OWORD *)((char *)MmUnloadedDrivers + 40 * v3);
      if ( !v6[5 * v3 + 1] )
        break;
      v4[3] = v6[5 * v3 + 2];
      v4[4] = v6[5 * v3 + 3];
      if ( *(_WORD *)v2 > 0x18u )
        *(_WORD *)v2 = 24;
      if ( *((_WORD *)v4 - 7) > 0x18u )
        *((_WORD *)v4 - 7) = 24;
      v8 = *((unsigned __int16 *)v4 - 7);
      *(v4 - 1) = v4;
      result = (__int64)memmove(v4, (const void *)v6[5 * v3 + 1], v8);
      v2 = (_OWORD *)((char *)v2 + 56);
      v4 += 7;
      v3 = (unsigned int)(v3 - 1);
    }
    *a1 = i;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
