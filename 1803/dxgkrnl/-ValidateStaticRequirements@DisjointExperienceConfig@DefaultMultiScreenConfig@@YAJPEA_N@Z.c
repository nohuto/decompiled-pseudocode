/*
 * XREFs of ?ValidateStaticRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C00357B4
 * Callers:
 *     ?DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities@@@Z @ 0x1C0034D64 (-DetermineMultiScreenCapabilities@DefaultMultiScreenConfig@@YAJPEAW4MultiScreenShellCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z @ 0x1C00352E4 (-RegQueryEnabledForTest@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0035534 (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateStaticRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2)
{
  unsigned int *v3; // rdx
  NTSTATUS SoCName; // edi
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rdx
  unsigned int *v7; // r9
  SIZE_T v8; // rbp
  wchar_t **v9; // rsi
  unsigned int v10; // ebx
  unsigned int v12[4]; // [rsp+30h] [rbp-288h] BYREF
  _BYTE SystemInformation[8]; // [rsp+40h] [rbp-278h] BYREF
  int v14; // [rsp+48h] [rbp-270h]
  int v15; // [rsp+4Ch] [rbp-26Ch]
  WCHAR String1[264]; // [rsp+80h] [rbp-238h] BYREF

  *(_BYTE *)this = 0;
  SoCName = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( SoCName >= 0 )
  {
    v5 = (((unsigned int)(v15 * v14) >> 20) + 256) >> 10;
    v12[0] = 0;
    if ( (int)DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryEnabledForTest(
                (DefaultMultiScreenConfig::DisjointExperienceConfig *)v12,
                v3) >= 0
      && v12[0] )
    {
      *(_BYTE *)this = 1;
    }
    if ( v5 >= 2 )
    {
      SoCName = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQuerySoCName(
                  (DefaultMultiScreenConfig::DisjointExperienceConfig *)String1,
                  v6,
                  v12,
                  v7);
      if ( SoCName >= 0 )
      {
        v8 = (int)v12[0];
        v9 = &off_1C0055DB0;
        v10 = 0;
        while ( RtlCompareUnicodeStrings(String1, v8, *v9, *((int *)v9 + 2), 1u) )
        {
          ++v10;
          v9 += 2;
          if ( v10 >= 8 )
            return (unsigned int)SoCName;
        }
        *(_BYTE *)this = 1;
      }
    }
  }
  return (unsigned int)SoCName;
}
