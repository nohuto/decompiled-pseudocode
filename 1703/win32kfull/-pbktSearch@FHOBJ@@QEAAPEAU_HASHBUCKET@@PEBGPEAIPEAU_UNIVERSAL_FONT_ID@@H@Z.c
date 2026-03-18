/*
 * XREFs of ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C002E804
 * Callers:
 *     ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C002C9D0 (-ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C002DD70 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C002E08C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C002E434 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0056630 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C0057AA4 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02861F0 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C0030308 (-iHash@@YAIPEBGI@Z.c)
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
  __int64 *v11; // rdx
  int v12; // eax
  BOOL v13; // ecx
  unsigned __int16 v15; // ax
  const unsigned __int16 *v16; // rcx
  struct _UNIVERSAL_FONT_ID *v17; // rax

  v5 = a4;
  v6 = a3;
  v9 = 0LL;
  if ( a2 )
  {
    v10 = iHash(a2, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
    goto LABEL_3;
  }
  if ( a4 )
  {
    v17 = (struct _UNIVERSAL_FONT_ID *)((char *)a4 + 4);
    if ( *(_DWORD *)a4 != 1 )
      v17 = a4;
    v10 = *(_DWORD *)v17 % *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
LABEL_3:
    if ( v6 )
      *v6 = v10;
    v11 = *(__int64 **)(*((_QWORD *)this + 1) + 8LL * v10 + 40);
    if ( !v11 )
      return (struct _HASHBUCKET *)v9;
    while ( 1 )
    {
      if ( v5 )
      {
        v12 = *((_DWORD *)v11 + 15);
        if ( v12 == 1 && *(_DWORD *)v5 == 1 )
        {
          v13 = *((_DWORD *)v11 + 16) == *((_DWORD *)v5 + 1);
        }
        else
        {
          if ( v12 == *(_DWORD *)v5 )
            return (struct _HASHBUCKET *)v11;
          v13 = 0;
        }
        if ( v13 )
          return (struct _HASHBUCKET *)v11;
      }
      else if ( a2 && (!a5 || (v11[4] & 2) != 0) )
      {
        v15 = *a2;
        v16 = a2;
        if ( *a2 == *((_WORD *)v11 + 30) )
        {
          while ( v15 )
          {
            v15 = *++v16;
            if ( *v16 != *(const unsigned __int16 *)((char *)v16 + (char *)v11 - (char *)a2 + 60) )
              goto LABEL_11;
          }
          if ( a5 || (v11[4] & 2) == 0 )
            return (struct _HASHBUCKET *)v11;
          v9 = v11;
        }
      }
LABEL_11:
      v11 = (__int64 *)*v11;
      if ( !v11 )
        return (struct _HASHBUCKET *)v9;
    }
  }
  return 0LL;
}
