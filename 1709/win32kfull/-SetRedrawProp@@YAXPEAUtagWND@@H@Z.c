/*
 * XREFs of ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C0111D00
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 */

void __fastcall SetRedrawProp(struct tagWND *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int16 AtomFromAtomTable; // ax

  v3 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 640LL);
  if ( v4 )
    v4 = *(_QWORD *)(v4 + 136);
  if ( v4 )
  {
    AtomFromAtomTable = UserFindAtomFromAtomTable(v4, L"SysSetRedraw");
    InternalSetProp((__int64)a1, AtomFromAtomTable, v3, 0);
  }
}
