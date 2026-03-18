/*
 * XREFs of SglToPrp @ 0x1C00073DC
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000D704 (ProtocolCommandToNVMe.c)
 * Callees:
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall SglToPrp(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // r14d
  __int64 v4; // rbx
  _DWORD *ScatterGatherList; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // rdi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r13
  int v12; // r12d
  _QWORD *v13; // rax
  bool v14; // zf
  _QWORD *v15; // rax
  __int64 PhysicalAddress; // rax
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v19 = a2;
  v2 = 0;
  v3 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v4 + 4253) & 6) == 2 )
  {
    ScatterGatherList = *(_DWORD **)(v4 + 4216);
    if ( !ScatterGatherList )
    {
      ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(a1, a2);
      *(_QWORD *)(v4 + 4216) = ScatterGatherList;
    }
    v20 = 0;
    v6 = (_QWORD *)(v4 + 4120);
    v7 = (_QWORD *)(v4 + 4120);
    if ( *ScatterGatherList )
    {
      v8 = v20;
      do
      {
        if ( v2 )
        {
          memset((void *)v4, 0, 0x1000uLL);
          v2 = 0;
          v6 = (_QWORD *)(v4 + 4120);
        }
        v9 = *(_QWORD *)(v4 + 4216);
        v10 = *(_QWORD *)(v9 + 24LL * v8 + 16);
        v11 = *(unsigned int *)(v9 + 24LL * v8 + 24);
        if ( v11 + v10 % 4096 > 4096 )
        {
          while ( (_DWORD)v11 )
          {
            v12 = v10 & 0xFFF;
            if ( v2 )
            {
              memset((void *)v4, 0, 0x1000uLL);
              v2 = 0;
            }
            *v7 = v10;
            v6 = (_QWORD *)(v4 + 4120);
            if ( (unsigned int)(v12 + v11) <= 0x1000 )
              break;
            LODWORD(v11) = v12 + v11 - 4096;
            v10 += (unsigned int)(4096 - v12);
            v13 = v7 + 1;
            if ( v7 == v6 )
              v2 = 1;
            ++v3;
            v14 = v7 == v6;
            v7 = (_QWORD *)v4;
            if ( !v14 )
              v7 = v13;
          }
        }
        else
        {
          *v7 = v10;
        }
        v15 = v7 + 1;
        if ( v7 == v6 )
          v2 = 1;
        ++v3;
        ++v8;
        v14 = v7 == v6;
        v7 = (_QWORD *)v4;
        if ( !v14 )
          v7 = v15;
      }
      while ( v8 < **(_DWORD **)(v4 + 4216) );
      if ( v3 >= 2 )
      {
        if ( v3 == 2 )
          PhysicalAddress = *(_QWORD *)v4;
        else
          PhysicalAddress = StorPortGetPhysicalAddress(a1, v19, v4, &v19);
        *(_QWORD *)(v4 + 4128) = PhysicalAddress;
      }
    }
  }
  return 0LL;
}
