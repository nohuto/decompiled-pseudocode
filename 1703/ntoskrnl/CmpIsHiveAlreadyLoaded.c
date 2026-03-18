/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x140665298
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpIsThisSameFile @ 0x1404D6558 (CmpIsThisSameFile.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpUnfreezeHive @ 0x14066575C (CmpUnfreezeHive.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 **a4, _QWORD *a5)
{
  char v5; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 24);
        LODWORD(v9) = *(_DWORD *)(v9 + 176);
        *a4 = (__int64 *)v10;
        if ( (v9 & 0x40000) != 0 && CmpIsThisSameFile(a2, *(void **)(v10 + 2664)) )
        {
          v11 = *a4;
          if ( ((*a4)[670] & 0x40) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( *((_BYTE *)v11 + 4112) == 1 )
            {
              CmpUnfreezeHive(v11);
              *((_BYTE *)*a4 + 4112) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v14 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v14 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[670] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[333])
          && (v14[670] & 0x40) == 0 )
        {
          v18[0] = 0LL;
          v15 = v14[513];
          *a4 = v14;
          CmpConstructNameWithStatus(v15, v18);
          v16 = v18[0];
          *a5 = v18[0];
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v14 + 347);
          return v16 != 0;
        }
      }
    }
  }
  return v5;
}
