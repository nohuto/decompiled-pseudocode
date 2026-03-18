/*
 * XREFs of ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C003A47C
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0038CF4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C0039DA8 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C003A644 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C003A84C (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  unsigned __int16 *v4; // rax
  struct _UNIVERSAL_FONT_ID *v5; // r9
  unsigned __int16 *v6; // rdx
  struct _HASHBUCKET *v7; // rax
  unsigned __int16 *v9; // rbx
  struct _HASHBUCKET *v11; // rax
  unsigned int v13; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v15[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return 1LL;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
  {
    v5 = (struct _UNIVERSAL_FONT_ID *)&v14;
    v6 = 0LL;
    v14 = *(_QWORD *)(*(_QWORD *)a2 + 92LL);
  }
  else
  {
    v4 = FHOBJ::pwszName(this, a2);
    cCapString(v15, v4, 32LL);
    v5 = 0LL;
    v6 = v15;
  }
  v7 = FHOBJ::pbktSearch(this, v6, &v13, v5, 0);
  if ( (unsigned int)FHOBJ::bAddPFELink(this, v7, v13, v15, a2, 0) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v9 = FHOBJ::pwszName(this, a2);
      while ( *v9++ )
        ;
      while ( *v9 )
      {
        cCapString(v15, v9, 32LL);
        v11 = FHOBJ::pbktSearch(this, v15, &v13, 0LL, 1);
        if ( !(unsigned int)FHOBJ::bAddPFELink(this, v11, v13, v15, a2, 1) )
          return 0LL;
        while ( *v9++ )
          ;
      }
    }
    return 1LL;
  }
  return 0LL;
}
