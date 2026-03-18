/*
 * XREFs of MiAdvanceVadHint @ 0x1404345F0
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r10
  __int64 result; // rax
  _DWORD *v6; // r9
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // r11d
  int v10; // eax
  int v11; // r10d
  int v12; // eax
  int v13; // ecx
  int v14; // ecx

  v3 = a1 >> 4;
  v4 = a2 >> 4;
  result = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v6 = (_DWORD *)(result + 40 * ((unsigned __int64)a3 >> 31));
  v7 = 8 * (v6[14] - qword_14036C5C8);
  if ( (unsigned int)v4 >= v7 )
  {
    v8 = v7 + v6[12];
    if ( (unsigned int)v3 < v8 )
    {
      v9 = 0;
      if ( (unsigned int)v3 < v7 )
      {
        LODWORD(v3) = 8 * (v6[14] - qword_14036C5C8);
        v9 = 1;
      }
      if ( (unsigned int)v4 >= v8 )
      {
        LODWORD(v4) = v8 - 1;
        v9 = 1;
      }
      v10 = v4;
      v11 = v4 - v7;
      v12 = v10 - v3;
      v13 = v3 - v7;
      result = (unsigned int)(v12 + 1);
      if ( (_DWORD)result == 1 && !v9 || v13 == v6[16] )
      {
        v14 = v11 + 1;
        if ( v6[18] < (unsigned int)(v11 + 1) )
        {
          v6[18] = v14;
          if ( v6[17] < (unsigned int)result )
            v6[17] = result;
        }
        v6[16] = v14;
      }
      else if ( v9 != 1 )
      {
        v6[17] = result;
        result = (unsigned int)(v11 + 1);
        v6[18] = result;
      }
    }
  }
  return result;
}
