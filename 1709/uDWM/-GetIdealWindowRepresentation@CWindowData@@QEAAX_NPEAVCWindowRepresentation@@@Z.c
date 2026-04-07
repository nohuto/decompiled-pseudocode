/*
 * XREFs of ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800118F0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x1800112B8 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800113B4 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 */

void __fastcall CWindowData::GetIdealWindowRepresentation(CWindowData *this, char a2, struct CWindowRepresentation *a3)
{
  int HasNonTrivialRepresentation; // ecx
  __int64 v7; // rsi
  CWindowData *v8; // r14
  int IdealWindowRepresentationType; // eax
  int v10; // eax

  *((_DWORD *)a3 + 2) = 0;
  *(_QWORD *)a3 = this;
  if ( (*((_BYTE *)this + 593) & 1) != 0 )
  {
    v10 = *((_DWORD *)a3 + 2);
    if ( !a2 )
      v10 = 3;
    *((_DWORD *)a3 + 2) = v10;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( *((_QWORD *)this + 53) )
      HasNonTrivialRepresentation = 2;
    else
      HasNonTrivialRepresentation = CWindowData::HasNonTrivialRepresentation(this);
    *((_DWORD *)a3 + 2) = HasNonTrivialRepresentation;
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( !a2 && (*((_BYTE *)this + 596) & 8) == 0 && !CWindowData::IsImmersiveWindow(this) )
    {
      v7 = 0LL;
      if ( *((_DWORD *)this + 144) )
      {
        while ( 1 )
        {
          v8 = *(CWindowData **)(*((_QWORD *)this + 69) + 8 * v7);
          IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(v8);
          *((_DWORD *)a3 + 2) = IdealWindowRepresentationType;
          if ( IdealWindowRepresentationType )
            break;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 144) )
            goto LABEL_13;
        }
        *(_QWORD *)a3 = v8;
      }
    }
LABEL_13:
    if ( !*((_DWORD *)a3 + 2) )
      *((_DWORD *)a3 + 2) = 3;
  }
  if ( a2 )
  {
    if ( *((_DWORD *)a3 + 2) == 3 )
      *((_DWORD *)a3 + 2) = 1;
  }
}
