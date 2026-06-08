/*
 * XREFs of ReadIoMemRaw @ 0x1C00014D8
 * Callers:
 *     ReadGenAddr @ 0x1C0001374 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00013CC (WriteGenAddr.c)
 *     PerfControlHwp @ 0x1C0006EC0 (PerfControlHwp.c)
 *     PerfControlCpcSingleRegister @ 0x1C0007CF0 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  unsigned __int8 *v2; // rcx
  int v3; // edx
  unsigned int v4; // r11d
  int v5; // edx
  __int64 v6; // r10
  unsigned __int64 result; // rax

  v2 = *(unsigned __int8 **)(a1 + 4);
  v3 = *(unsigned __int8 *)(a1 + 3);
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 1 )
    {
      switch ( v3 )
      {
        case 8:
          LOBYTE(result) = __inbyte((unsigned __int16)v2);
          return (unsigned __int8)result;
        case 16:
          LOWORD(result) = __inword((unsigned __int16)v2);
          return (unsigned __int16)result;
        case 32:
          LODWORD(result) = __indword((unsigned __int16)v2);
          return (unsigned int)result;
      }
      return 0LL;
    }
    if ( *(_BYTE *)a1 != 10 )
    {
      if ( *(_BYTE *)a1 == 127 && v3 == 64 )
        return __readmsr((unsigned int)v2);
      return 0LL;
    }
    v4 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
    if ( v4 <= 8 )
    {
      v5 = 8;
    }
    else if ( v4 <= 0x10 )
    {
      v5 = 16;
    }
    else
    {
      v5 = 64;
      if ( v4 <= 0x20 )
        v5 = 32;
    }
    v6 = *(_QWORD *)(qword_1C0016298 + 72);
    switch ( v5 )
    {
      case 8:
        return v2[v6];
      case 16:
        return *(unsigned __int16 *)&v2[v6];
      case 32:
        return *(unsigned int *)&v2[v6];
    }
    return *(_QWORD *)&v2[v6];
  }
  else
  {
    switch ( v3 )
    {
      case 8:
        return *v2;
      case 16:
        return *(unsigned __int16 *)v2;
      case 32:
        return *(unsigned int *)v2;
      default:
        return 0LL;
    }
  }
}
