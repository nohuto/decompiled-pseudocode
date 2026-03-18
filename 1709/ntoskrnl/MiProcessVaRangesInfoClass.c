/*
 * XREFs of MiProcessVaRangesInfoClass @ 0x140584814
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1406E25C4 (MmSetPriorityVaRanges.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiIsVadLarge @ 0x14003D7C0 (MiIsVadLarge.c)
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiDirtypageStateInformationHelper @ 0x14021B9A8 (MiDirtypageStateInformationHelper.c)
 */

__int64 __fastcall MiProcessVaRangesInfoClass(unsigned __int64 a1, __int128 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  __int64 v16; // r10
  unsigned int v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 2 )
    {
      v18 = *a2;
      v8 = *((_QWORD *)&v18 + 1);
      v9 = v18;
      do
      {
        v10 = v9;
        v11 = MiObtainReferencedVad(v9, &v17);
        v12 = (char *)v11;
        if ( !v11 )
          return v17;
        v19 = 0;
        v13 = *(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32);
        if ( ((v9 + v8 - 1) | 0xFFF) >> 12 > v13 )
        {
          v19 = 1;
          v16 = (v13 << 12) | 0xFFF;
          v8 = v9 - v16 + v8 - 1;
          v9 = v16 + 1;
        }
        if ( ((1 << (*(_BYTE *)(v11 + 48) & 7)) & 0x55) == 0 || (unsigned int)MiIsVadLarge(v11) )
        {
          v4 = 1073741849;
        }
        else if ( a3 == 1 )
        {
          MiWalkVaRange(v10, v14, (__int64)v12, 2, a4);
        }
        else
        {
          MiDirtypageStateInformationHelper(v10, v14);
        }
        MiUnlockAndDereferenceVad(v12);
      }
      while ( v19 == 1 );
      ++v5;
      ++a2;
      if ( v5 < a1 )
        continue;
      break;
    }
  }
  return v4;
}
