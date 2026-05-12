/*
 * XREFs of PortQueryInterfaceFdoQdr @ 0x1C00679A0
 * Callers:
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0027010 (RaidAdapterQueryInterfaceIrp.c)
 * Callees:
 *     memmove @ 0x1C0017E00 (memmove.c)
 */

__int64 __fastcall PortQueryInterfaceFdoQdr(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 *v6; // rax
  int v7; // r8d
  _DWORD *v8; // rcx

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
  v8 = v6 + 4;
  if ( *v6 < (unsigned int)(8 * v7 + 16) )
  {
    *v8 = v7;
    return (unsigned int)-2147483643;
  }
  else
  {
    memmove(v8, a3, (unsigned int)(8 * v7 + 8));
  }
  return v4;
}
