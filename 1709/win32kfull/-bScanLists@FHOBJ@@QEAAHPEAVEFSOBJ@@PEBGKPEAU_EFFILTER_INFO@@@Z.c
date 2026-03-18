/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0039DD0
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00F81A0 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C003A84C (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C003AD78 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C003BE1C (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     cCapString @ 0x1C00B21B4 (cCapString.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C0124734 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(
        FHOBJ *this,
        struct EFSOBJ *a2,
        const unsigned __int16 *a3,
        int a4,
        struct _EFFILTER_INFO *a5)
{
  unsigned int v7; // r15d
  struct _HASHBUCKET *v9; // rax
  _QWORD *v11; // rdi
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int16 v17[32]; // [rsp+50h] [rbp-88h] BYREF

  v7 = 2;
  if ( a4 != 3 )
    v7 = 0;
  cCapString(v17, a3, 32LL);
  v9 = FHOBJ::pbktSearch(this, v17, 0LL, 0LL, 0);
  if ( !v9 )
    return 1LL;
  v11 = (_QWORD *)*((_QWORD *)v9 + 1);
  v12 = *((_DWORD *)v9 + 6);
  v13 = 0;
  memset(v16, 0, sizeof(v16));
  *((_DWORD *)a5 + 8) = v12;
  while ( 1 )
  {
    v14 = v11[1];
    v15 = v14;
    if ( !(unsigned int)PFEOBJ::bFilteredOut((PFEOBJ *)&v15, a5) )
    {
      if ( a4 != 1 || (v13 = efstyCompute(v16, &v15), v13 != 5) )
      {
        if ( !(unsigned int)EFSOBJ::bAdd(a2, v14, v13, v7, *((_DWORD *)a5 + 9)) )
          break;
      }
    }
    v11 = (_QWORD *)*v11;
    if ( !v11 )
      return 1LL;
  }
  return 0LL;
}
