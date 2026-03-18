/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x1404D39B0
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404D3B9C (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // r11
  unsigned __int64 v11; // r8

  result = *(unsigned int *)(a1 + 144);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v5 = *(unsigned int *)(a1 + 148);
    if ( (_DWORD)v5 )
    {
      if ( *(_QWORD *)(a1 + 8 * v5 + 2664) )
      {
        v6 = (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)v5, a2, a3, a4);
        result = HvGetEffectiveLogSizeCapForHive(v9, v7, v8);
        if ( *(_QWORD *)(v10 + 8 * v6 + 2976) > (unsigned __int64)(unsigned int)result )
        {
          v11 = *(unsigned int *)(v10 + 160);
          if ( *(_QWORD *)(v10 + 8 * v6 + 2976) > v11 )
            return CmpDoFileSetSizeEx(v10, (unsigned int)v5, v11, 0);
        }
      }
    }
  }
  return result;
}
