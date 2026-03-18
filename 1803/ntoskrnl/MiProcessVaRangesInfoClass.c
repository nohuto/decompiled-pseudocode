/*
 * XREFs of MiProcessVaRangesInfoClass @ 0x140575908
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x14074D118 (MmSetPriorityVaRanges.c)
 * Callees:
 *     MiIsVadLarge @ 0x14000BFC0 (MiIsVadLarge.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MiProcessVaRangesInfoClass(unsigned __int64 a1, __int128 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r10
  __int64 v19; // r10
  unsigned int v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 2 )
    {
      v21 = *a2;
      v8 = *((_QWORD *)&v21 + 1);
      v9 = v21;
      do
      {
        v10 = v9;
        v11 = MiObtainReferencedVadEx(v9, 0, (int *)&v20);
        v14 = (void *)v11;
        if ( !v11 )
          return v20;
        v22 = 0;
        v15 = *(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32);
        if ( ((v9 + v8 - 1) | 0xFFF) >> 12 > v15 )
        {
          v22 = 1;
          v19 = (v15 << 12) | 0xFFF;
          v8 = v9 - v19 + v8 - 1;
          v9 = v19 + 1;
        }
        v16 = (unsigned int)(1 << (*(_BYTE *)(v11 + 48) & 7));
        if ( (v16 & 0x55) == 0 || (unsigned int)MiIsVadLarge(v11) )
        {
          v4 = 1073741849;
        }
        else if ( a3 == 1 )
        {
          MiWalkVaRange(v10, v17, (__int64)v14, 2u, a4);
        }
        else
        {
          MiMoveDirtyBitsToPfns(v10, v17, 0LL);
        }
        MiUnlockAndDereferenceVad(v14, v16, v12, v13);
      }
      while ( v22 == 1 );
      ++v5;
      ++a2;
      if ( v5 < a1 )
        continue;
      break;
    }
  }
  return v4;
}
