/*
 * XREFs of DrvDbSuspendDatabase @ 0x14059E34C
 * Callers:
 *     PiDrvDbInit @ 0x14059DF48 (PiDrvDbInit.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     DrvDbFindDatabaseNode @ 0x14044C7CC (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbSuspendDatabase(__int64 a1, const WCHAR *a2, char a3)
{
  __int64 v3; // rsi
  int DatabaseNode; // edi
  __int64 *i; // rax
  const UNICODE_STRING *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = PiDrvDbCtx;
  DatabaseNode = 0;
  v9 = 0LL;
  if ( a2 && wcsicmp(a2, L"*") )
  {
    DatabaseNode = DrvDbFindDatabaseNode(v3, a2, &v9);
    if ( DatabaseNode >= 0 )
    {
      if ( a3 )
        LODWORD(v9[3].Buffer) |= 4u;
      else
        LODWORD(v9[3].Buffer) &= ~4u;
    }
  }
  else
  {
    for ( i = *(__int64 **)(v3 + 16); i != (__int64 *)(v3 + 16); i = (__int64 *)*i )
    {
      if ( a3 )
        *((_DWORD *)i + 14) |= 4u;
      else
        *((_DWORD *)i + 14) &= ~4u;
    }
  }
  return (unsigned int)DatabaseNode;
}
