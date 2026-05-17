/*
 * XREFs of sub_18003F2C4 @ 0x18003F2C4
 * Callers:
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 *     sub_18003DF20 @ 0x18003DF20 (sub_18003DF20.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180071C68 @ 0x180071C68 (sub_180071C68.c)
 *     sub_18007B1E4 @ 0x18007B1E4 (sub_18007B1E4.c)
 *     sub_180082D3C @ 0x180082D3C (sub_180082D3C.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D4A10 (RtlNtPathNameToDosPathName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003F2C4(unsigned __int16 *a1)
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
