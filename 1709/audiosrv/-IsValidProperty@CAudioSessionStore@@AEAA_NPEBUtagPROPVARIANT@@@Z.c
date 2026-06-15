/*
 * XREFs of ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x1800851A4
 * Callers:
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800839BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800891C0 (-SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAudioSessionStore::IsValidProperty(CAudioSessionStore *this, const struct tagPROPVARIANT *a2)
{
  unsigned int vt; // eax

  vt = a2->vt;
  if ( vt > 0x1F )
  {
    if ( vt < 0x40 || vt > 0x41 && vt != 70 && vt != 8196 )
      return 0;
  }
  else if ( vt < 0x1E && a2->vt && (vt <= 1 || vt > 8 && (vt <= 9 || vt > 0xB && (vt <= 0xF || vt > 0x17))) )
  {
    return 0;
  }
  return 1;
}
