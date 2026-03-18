/*
 * XREFs of ??_ECDirtyRegion@@UEAAPEAXI@Z @ 0x18009F230
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18009DE60 (-Release@CDirtyRegion@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CDirtyRegion *__fastcall CDirtyRegion::`vector deleting destructor'(CDirtyRegion *this, char a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD **v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax

  *(_QWORD *)this = &CDirtyRegion::`vftable';
  v4 = (_QWORD *)((char *)this + 280);
  v5 = 8LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = (_QWORD **)((char *)this + 1280);
  v7 = *((_QWORD *)this + 161);
  if ( *(CDirtyRegion **)v7 != (CDirtyRegion *)((char *)this + 1280) || (v8 = *(_QWORD **)(v7 + 8), *v8 != v7) )
    __fastfail(3u);
  *((_QWORD *)this + 161) = v8;
  *v8 = v6;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v9[1] != v6 || (v14 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v6 = v14;
    v14[1] = v6;
    operator delete(v9);
  }
  *((_QWORD *)this + 162) = (char *)this + 1280;
  *((_QWORD *)this + 163) = (char *)this + 1280;
  *((_QWORD *)this + 161) = (char *)this + 1296;
  *((_QWORD *)this + 160) = (char *)this + 1296;
  *((_DWORD *)this + 712) = 0;
  v10 = (_QWORD *)*((_QWORD *)this + 161);
  if ( (_QWORD **)*v10 != v6 || (v11 = (_QWORD *)v10[1], (_QWORD *)*v11 != v10) )
    __fastfail(3u);
  *((_QWORD *)this + 161) = v11;
  *v11 = v6;
  while ( 1 )
  {
    v12 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v12[1] != v6 || (v15 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
      __fastfail(3u);
    *v6 = v15;
    v15[1] = v6;
    operator delete(v12);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      HeapFree(WPF::g_processHeap, 0, this);
  }
  return this;
}
