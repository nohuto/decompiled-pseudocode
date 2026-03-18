/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C003A84C
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0039DD0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C003A0F0 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C003A47C (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00AC960 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C00ADD44 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C00B0F78 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0282D40 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C00B0EF4 (-iHash@@YAIPEBGI@Z.c)
 */

struct _HASHBUCKET *__fastcall FHOBJ::pbktSearch(
        FHOBJ *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        struct _UNIVERSAL_FONT_ID *a4,
        int a5)
{
  struct _UNIVERSAL_FONT_ID *v5; // r10
  unsigned int *v6; // r11
  __int64 *v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 *v12; // rdx
  int v13; // eax
  BOOL v14; // ecx
  unsigned __int16 v16; // ax
  const unsigned __int16 *v17; // rcx

  v5 = a4;
  v6 = a3;
  v9 = 0LL;
  if ( a2 )
  {
    v11 = iHash(a2, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
    goto LABEL_6;
  }
  if ( a4 )
  {
    v10 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == 1 )
      v10 = *((_DWORD *)a4 + 1);
    v11 = v10 % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
LABEL_6:
    if ( v6 )
      *v6 = v11;
    v12 = *(__int64 **)(*((_QWORD *)this + 1) + 8LL * v11 + 40);
    if ( !v12 )
      return (struct _HASHBUCKET *)v9;
    while ( 1 )
    {
      if ( v5 )
      {
        v13 = *((_DWORD *)v12 + 15);
        if ( v13 == 1 && *(_DWORD *)v5 == 1 )
        {
          v14 = *((_DWORD *)v12 + 16) == *((_DWORD *)v5 + 1);
        }
        else
        {
          if ( v13 == *(_DWORD *)v5 )
            return (struct _HASHBUCKET *)v12;
          v14 = 0;
        }
        if ( v14 )
          return (struct _HASHBUCKET *)v12;
      }
      else if ( a2 && (!a5 || (v12[4] & 2) != 0) )
      {
        v16 = *a2;
        v17 = a2;
        if ( *a2 == *((_WORD *)v12 + 30) )
        {
          while ( v16 )
          {
            v16 = *++v17;
            if ( *v17 != *(const unsigned __int16 *)((char *)v17 + (char *)v12 - (char *)a2 + 60) )
              goto LABEL_14;
          }
          if ( a5 || (v12[4] & 2) == 0 )
            return (struct _HASHBUCKET *)v12;
          v9 = v12;
        }
      }
LABEL_14:
      v12 = (__int64 *)*v12;
      if ( !v12 )
        return (struct _HASHBUCKET *)v9;
    }
  }
  return 0LL;
}
