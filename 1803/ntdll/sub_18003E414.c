/*
 * XREFs of sub_18003E414 @ 0x18003E414
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x180002820 (RtlNtPathNameToDosPathName.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18003CB40 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 *     sub_18006CBE8 @ 0x18006CBE8 (sub_18006CBE8.c)
 *     sub_180076B24 @ 0x180076B24 (sub_180076B24.c)
 *     sub_18007EC68 @ 0x18007EC68 (sub_18007EC68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003E414(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  _WORD *v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ecx

  v1 = *a1;
  v2 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *a1 >= 2u && (*v2 == 92 || *v2 == 47) )
  {
    result = 4LL;
    if ( v1 >= 4u && (v2[1] == 92 || v2[1] == 47) )
    {
      result = 6LL;
      if ( v1 >= 6u && (v2[2] == 46 || v2[2] == 63) )
      {
        if ( v1 < 8u || v2[3] != 92 && v2[3] != 47 )
        {
          v4 = 1;
          if ( v1 == 6 )
            return 7;
          return v4;
        }
      }
      else
      {
        return 1LL;
      }
    }
  }
  else if ( v1 >= 4u && *v2 && v2[1] == 58 )
  {
    if ( v1 >= 6u && (v2[2] == 92 || v2[2] == 47) )
      return 2LL;
    else
      return 3LL;
  }
  else
  {
    return 5LL;
  }
  return result;
}
