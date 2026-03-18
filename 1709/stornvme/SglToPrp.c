/*
 * XREFs of SglToPrp @ 0x1C0007118
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000D250 (ProtocolCommandToNVMe.c)
 * Callees:
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall SglToPrp(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  unsigned int v4; // esi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // r13
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // r14d
  __int64 PhysicalAddress; // rax
  char v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v5 + 4245) & 6) == 2 )
  {
    if ( !*(_QWORD *)(v5 + 4208) )
      *(_QWORD *)(v5 + 4208) = StorPortGetScatterGatherList(a1, a2, a3, 4096LL);
    v6 = (_QWORD *)(v5 + 4120);
    v7 = 0LL;
    v8 = (_QWORD *)(v5 + 4120);
    if ( **(_DWORD **)(v5 + 4208) )
    {
      do
      {
        if ( v3 )
        {
          memset((void *)v5, 0, 0x1000uLL);
          v3 = 0;
          v6 = (_QWORD *)(v5 + 4120);
        }
        v9 = *(_QWORD *)(v5 + 4208);
        v10 = *(_QWORD *)(v9 + 24 * v7 + 16);
        v11 = *(unsigned int *)(v9 + 24 * v7 + 24);
        if ( v11 + v10 % 4096 > 4096 )
        {
          while ( (_DWORD)v11 )
          {
            v12 = v10 & 0xFFF;
            if ( v3 )
            {
              memset((void *)v5, 0, 0x1000uLL);
              v3 = 0;
            }
            *v8 = v10;
            v6 = (_QWORD *)(v5 + 4120);
            if ( (unsigned int)(v12 + v11) <= 0x1000 )
              break;
            LODWORD(v11) = v12 + v11 - 4096;
            v10 += (unsigned int)(4096 - v12);
            if ( v8 == v6 )
            {
              v3 = 1;
              v8 = (_QWORD *)v5;
            }
            else
            {
              ++v8;
            }
            ++v4;
          }
        }
        else
        {
          *v8 = v10;
        }
        if ( v8 == v6 )
        {
          v3 = 1;
          v8 = (_QWORD *)v5;
        }
        else
        {
          ++v8;
        }
        ++v4;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < **(_DWORD **)(v5 + 4208) );
      if ( v4 >= 2 )
      {
        if ( v4 == 2 )
          PhysicalAddress = *(_QWORD *)v5;
        else
          PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v5, &v16);
        *(_QWORD *)(v5 + 4128) = PhysicalAddress;
      }
    }
  }
  return 0LL;
}
