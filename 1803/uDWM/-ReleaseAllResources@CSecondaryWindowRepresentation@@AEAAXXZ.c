/*
 * XREFs of ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18002F2F4
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18002F370 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CSecondaryWindowRepresentation::ReleaseAllResources(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // edi
  char *v2; // rbx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx

  v1 = 0;
  v2 = (char *)this + 208;
  do
  {
    v3 = (CBaseObject *)*((_QWORD *)v2 - 4);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *((_QWORD *)v2 - 4) = 0LL;
    }
    if ( *(_QWORD *)v2 )
    {
      CBaseObject::Release(*(CBaseObject **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    v4 = (CBaseObject *)*((_QWORD *)v2 - 3);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)v2 - 3) = 0LL;
    }
    v5 = (CBaseObject *)*((_QWORD *)v2 - 2);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)v2 - 2) = 0LL;
    }
    v6 = (CBaseObject *)*((_QWORD *)v2 - 1);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *((_QWORD *)v2 - 1) = 0LL;
    }
    v7 = (CBaseObject *)*((_QWORD *)v2 + 1);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)v2 + 1) = 0LL;
    }
    v2[16] = 0;
    ++v1;
    v2 += 56;
  }
  while ( v1 < 5 );
}
