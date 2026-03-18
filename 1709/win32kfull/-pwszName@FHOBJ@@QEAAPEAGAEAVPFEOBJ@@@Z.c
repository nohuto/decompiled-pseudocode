/*
 * XREFs of ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C0039DA8
 * Callers:
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C003A0F0 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C003A47C (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall FHOBJ::pwszName(FHOBJ *this, struct PFEOBJ *a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 v4; // rax

  v2 = *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( v2 )
    v4 = *(int *)(v3 + 8);
  else
    v4 = *(int *)(v3 + 16);
  return (unsigned __int16 *)(v3 + v4);
}
