/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x14045DE44
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404D3B9C (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rdx

  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    HvpLogTypeToLogArrayIndex(1LL, a2, a3, a4);
    result = HvGetEffectiveLogSizeCapForHive(a1, v16, v17);
    if ( *(_QWORD *)(a1 + 8 * v18 + 2976) <= (unsigned __int64)(unsigned int)result )
      return result;
    v19 = 1LL;
    return CmpDoFileSetSizeEx(a1, v19, 0LL, 0);
  }
  HvpLogTypeToLogArrayIndex(4LL, a2, a3, a4);
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1, v5, v6);
  if ( *(_QWORD *)(a1 + 8 * v11 + 2976) > (unsigned __int64)EffectiveLogSizeCapForHive )
    CmpDoFileSetSizeEx(a1, 4LL, 0LL, 0);
  HvpLogTypeToLogArrayIndex(5LL, v8, v9, v10);
  result = HvGetEffectiveLogSizeCapForHive(a1, v12, v13);
  if ( *(_QWORD *)(a1 + 8 * v15 + 2976) > (unsigned __int64)(unsigned int)result )
  {
    v19 = 5LL;
    return CmpDoFileSetSizeEx(a1, v19, 0LL, 0);
  }
  return result;
}
