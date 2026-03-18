/*
 * XREFs of ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C02852AC
 * Callers:
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025B22C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 * Callees:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C0285374 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall MULTISURF::bLoadSource(MULTISURF *this, HDEV a2)
{
  unsigned int v3; // r10d
  __int64 ****v4; // r9
  __int64 **i; // rcx

  v3 = 1;
  if ( *((_QWORD *)this + 4) )
  {
    v4 = (__int64 ****)*((_QWORD *)this + 11);
    if ( v4 )
    {
      for ( i = **v4; i; i = (__int64 **)*i )
      {
        if ( i[6] == (__int64 *)a2 )
        {
          *((_QWORD *)this + 12) = v4[1][*((unsigned int *)i + 4)];
          break;
        }
      }
      if ( !*((_QWORD *)this + 12) )
        *((_QWORD *)this + 12) = *(_QWORD *)this + 24LL;
    }
    else
    {
      return (unsigned int)MULTISURF::bLoadSourceNotMetaDEVBITMAP(this, a2);
    }
  }
  return v3;
}
