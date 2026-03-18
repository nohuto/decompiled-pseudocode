/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C003A0F0
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0038E48 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C0039DA8 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C003A27C (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C003A84C (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  unsigned __int16 *v4; // rax
  struct _UNIVERSAL_FONT_ID *v5; // r9
  unsigned __int16 *v6; // rdx
  struct _HASHBUCKET *v7; // rax
  unsigned __int16 *v8; // rbx
  struct _HASHBUCKET *v10; // rax
  unsigned int v12; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v14[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      v5 = (struct _UNIVERSAL_FONT_ID *)&v13;
      v6 = 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)a2 + 92LL);
    }
    else
    {
      v4 = FHOBJ::pwszName(this, a2);
      cCapString(v14, v4, 32LL);
      v5 = 0LL;
      v6 = v14;
    }
    v7 = FHOBJ::pbktSearch(this, v6, &v12, v5, 0);
    FHOBJ::vDeletePFELink(this, v7, v12, a2);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v8 = FHOBJ::pwszName(this, a2);
      while ( *v8++ )
        ;
      while ( *v8 )
      {
        cCapString(v14, v8, 32LL);
        v10 = FHOBJ::pbktSearch(this, v14, &v12, 0LL, 1);
        FHOBJ::vDeletePFELink(this, v10, v12, a2);
        while ( *v8++ )
          ;
      }
    }
  }
}
