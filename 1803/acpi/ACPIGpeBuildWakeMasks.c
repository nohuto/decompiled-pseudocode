/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C00276F8
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C00276F8 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C003B3D0 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00276F8 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0027AF4 (ACPIGpeIndexToGpeRegister.c)
 */

char __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  char *i; // rax
  char *v2; // rbx
  char result; // al
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  v9 = 0;
  v6 = a1 + 752;
  v8 = 768LL;
  v7 = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)&v6); ; i = ACPIExtListEnumNext((__int64)&v6) )
  {
    v2 = i;
    result = ACPIExtListTestElement((__int64)&v6, 1);
    if ( !result )
      break;
    ACPIGpeBuildWakeMasks(v2);
    if ( (*((_DWORD *)v2 + 2) & 0x10000) != 0 && (*((_QWORD *)v2 + 119) & 0x500000000LL) == 0 )
    {
      v4 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v2 + 114));
      v5 = 1 << (v2[456] & 7);
      if ( ((unsigned __int8)v5 & *((_BYTE *)GpeEnable + v4)) != 0 )
      {
        if ( (*((_QWORD *)v2 + 1) & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v4) |= v5;
          *((_BYTE *)GpeWakeHandler + v4) &= ~(_BYTE)v5;
        }
        else if ( ((unsigned __int8)v5 & *((_BYTE *)GpeSpecialHandler + v4)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v4) |= v5;
        }
      }
    }
  }
  return result;
}
