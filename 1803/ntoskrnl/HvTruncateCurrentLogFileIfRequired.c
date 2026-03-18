/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x140499B4C
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x140499BCC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140499C3C (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r11
  unsigned __int64 v6; // rdi
  __int64 v7; // r11
  unsigned __int64 v8; // r8

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v3 = *(unsigned int *)(a1 + 164);
    if ( (_DWORD)v3 )
    {
      if ( *(_QWORD *)(a1 + 8 * v3 + 1536) )
      {
        v4 = HvpLogTypeToLogArrayIndex((unsigned int)v3, a2);
        v6 = *(_QWORD *)(v5 + 8LL * v4 + 1800);
        result = HvGetEffectiveLogSizeCapForHive(v5);
        if ( v6 > (unsigned int)result )
        {
          v8 = *(unsigned int *)(v7 + 176);
          if ( v6 > v8 )
            return CmpDoFileSetSizeEx(v7, (unsigned int)v3, v8, 0LL);
        }
      }
    }
  }
  return result;
}
