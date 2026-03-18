/*
 * XREFs of MiShadowTopLevelPxes @ 0x140070E64
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140070BCC (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x14016B5AC (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 */

_UNKNOWN **__fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a2;
  if ( (MiFlags & 0x1800000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1544);
    if ( v6 )
    {
      result = (_UNKNOWN **)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        v7 = PsInitialSystemProcess[2].Affinity.Bitmap[0];
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        do
        {
          if ( _bittest64(qword_1403CBA84, (unsigned int)(v8 - 256)) )
          {
            v9 = MI_READ_PTE_LOCK_FREE(v7 + 8 * v8);
            v10 = (__int64 *)(v6 + 8 * v8);
            if ( (*(_BYTE *)v10 & 1) != 0 )
            {
              result = (_UNKNOWN **)MiTransformValidPteInPlace(v10, v5, v9, 3LL);
            }
            else
            {
              *v10 = v9;
              result = (_UNKNOWN **)MiPteInShadowRange((unsigned __int64)v10);
              if ( (_DWORD)result )
                result = (_UNKNOWN **)MiWritePteShadow(v12, v11, v13);
            }
          }
          v5 += 8LL;
          v8 = (unsigned int)(v8 + 1);
          --a3;
        }
        while ( a3 );
      }
    }
  }
  return result;
}
