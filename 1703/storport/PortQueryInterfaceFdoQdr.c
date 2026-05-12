/*
 * XREFs of PortQueryInterfaceFdoQdr @ 0x1C0065C34
 * Callers:
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001253C (RaidAdapterQueryInterfaceIrp.c)
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 */

__int64 __fastcall PortQueryInterfaceFdoQdr(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned __int16 *v6; // rdx
  int v7; // r8d

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  v6 = *(unsigned __int16 **)(v3 + 24);
  if ( !v6 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return (unsigned int)-1073741670;
  if ( *(_WORD *)(v3 + 16) < 0x18u )
    return (unsigned int)-1073741811;
  v7 = *a3;
  if ( *v6 < (unsigned int)(8 * v7 + 16) )
  {
    *((_DWORD *)v6 + 2) = v7;
    return (unsigned int)-2147483643;
  }
  else
  {
    memmove(v6 + 4, a3, (unsigned int)(8 * v7 + 8));
  }
  return v4;
}
