/*
 * XREFs of RtlEqualUnicodeString @ 0x18002E610
 * Callers:
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180022430 (LdrpFindLoadedDllByNameLockHeld.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002DC20 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpFindLoadedDllByName @ 0x18002E330 (LdrpFindLoadedDllByName.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180033BC0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlEqualDomainName @ 0x18004DEF0 (RtlEqualDomainName.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180065798 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18006D278 (RtlpDetermineDosPathNameType4.c)
 *     LdrpCheckKnownDllFullPath @ 0x1800744EC (LdrpCheckKnownDllFullPath.c)
 *     RtlpCheckForSameCurdir @ 0x18007A798 (RtlpCheckForSameCurdir.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008DBBC (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D0490 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D09C0 (LdrpFindOrPrepareEnclaveModule.c)
 *     BaseIsThisAConsoleName @ 0x18010EA80 (BaseIsThisAConsoleName.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlEqualUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  char *v4; // rax
  __int64 v5; // r11
  char *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  __int64 v11; // r11

  v3 = *a1;
  if ( (_DWORD)v3 == *a2 )
  {
    v4 = (char *)*((_QWORD *)a1 + 1);
    v5 = *((_QWORD *)a2 + 1);
    v6 = &v4[v3];
    if ( a3 )
    {
      if ( v4 < v6 )
      {
        v7 = v5 - (_QWORD)v4;
        while ( 1 )
        {
          v8 = *(unsigned __int16 *)v4;
          v9 = *(unsigned __int16 *)&v4[v7];
          if ( v8 != v9 )
          {
            if ( v8 >= 0x61 )
            {
              if ( v8 > 0x7A )
                v8 = (unsigned __int16)(v8
                                      + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                 + 2LL
                                                 * ((v8 & 0xF)
                                                  + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                        + 2LL
                                                                        * (((unsigned __int8)v8 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v8)))))));
              else
                v8 -= 32;
            }
            if ( v9 >= 0x61 )
            {
              if ( v9 > 0x7A )
                v9 = (unsigned __int16)(v9
                                      + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                 + 2LL
                                                 * ((v9 & 0xF)
                                                  + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                        + 2LL
                                                                        * (((unsigned __int8)v9 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v9)))))));
              else
                v9 -= 32;
            }
            if ( v8 != v9 )
              break;
          }
          v4 += 2;
          if ( v4 >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v4 < v6 )
    {
      v11 = v5 - (_QWORD)v4;
      while ( *(_WORD *)v4 == *(_WORD *)&v4[v11] )
      {
        v4 += 2;
        if ( v4 >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
