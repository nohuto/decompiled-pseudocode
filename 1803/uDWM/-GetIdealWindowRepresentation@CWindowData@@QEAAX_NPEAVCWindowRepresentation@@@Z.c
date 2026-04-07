/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001571C
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E97C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800160D0 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800161E0 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int v3; // eax
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r14
  int IdealWindowRepresentationType; // eax

  *((_DWORD *)a3 + 2) = 0;
  v3 = 0;
  *(_QWORD *)a3 = this;
  if ( (*((_BYTE *)this + 593) & 1) != 0 && !a2 )
  {
    *((_DWORD *)a3 + 2) = 3;
    v3 = 3;
  }
  if ( !v3 )
  {
    v7 = *((_QWORD *)this + 53) ? 2 : CWindowData::HasNonTrivialRepresentation(this);
    *((_DWORD *)a3 + 2) = v7;
    if ( !v7 && !a2 && (*((_BYTE *)this + 596) & 4) == 0 && !CWindowData::IsImmersiveWindow(this) )
    {
      v9 = 0LL;
      if ( *((_DWORD *)this + 144) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(*((_QWORD *)this + 69) + 8 * v9);
          IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v10);
          *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
          if ( IdealWindowRepresentationType )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *((_DWORD *)this + 144) )
            goto LABEL_6;
        }
        *(_QWORD *)a3 = v10;
      }
    }
  }
LABEL_6:
  v8 = *((_DWORD *)a3 + 2);
  if ( !v8 )
  {
    *((_DWORD *)a3 + 2) = 3;
    v8 = 3;
  }
  if ( a2 )
  {
    if ( v8 == 3 )
      *((_DWORD *)a3 + 2) = 1;
  }
}
