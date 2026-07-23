/*
 * XREFs of sub_1800352EC @ 0x1800352EC
 * Callers:
 *     sub_180030D2C @ 0x180030D2C (sub_180030D2C.c)
 *     sub_180032408 @ 0x180032408 (sub_180032408.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800759E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180079D40 (RtlGetUserPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     sub_1800E85D8 @ 0x1800E85D8 (sub_1800E85D8.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     sub_1800E93D0 @ 0x1800E93D0 (sub_1800E93D0.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F25F8 @ 0x1800F25F8 (sub_1800F25F8.c)
 *     sub_1800FBD34 @ 0x1800FBD34 (sub_1800FBD34.c)
 * Callees:
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_1800352EC(__int64 a1, const WCHAR *a2, char a3, _WORD *a4)
{
  char v4; // r15
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v9 = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( (int)sub_1800353C4(a1, a2, 0LL, &Lcid) >= 0 )
  {
    v12 = 0;
    if ( *(_WORD *)(v10 + 6) )
    {
      v13 = *(_QWORD *)(v10 + 16);
      do
      {
        v14 = 28LL * v12;
        if ( *(_WORD *)(v14 + v13 + 6) == (_WORD)Lcid )
        {
          if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 )
          {
            if ( a4 )
            {
              *a4 = v12;
              return 0LL;
            }
          }
          else if ( (*(_WORD *)(v14 + v13) & 0x1000) != 0 )
          {
            v4 = 1;
          }
        }
        ++v12;
      }
      while ( v12 < *(unsigned __int16 *)(v10 + 6) );
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        v9 = sub_1800362CC(a1, (unsigned __int16)Lcid, 0LL, a4);
    }
  }
  if ( v4 && v9 == -1073741772 )
    return 3221225659LL;
  else
    return v9;
}
