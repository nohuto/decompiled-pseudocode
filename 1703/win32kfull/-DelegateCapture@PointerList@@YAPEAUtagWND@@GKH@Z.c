/*
 * XREFs of ?DelegateCapture@PointerList@@YAPEAUtagWND@@GKH@Z @ 0x1C01E9BA4
 * Callers:
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C7014 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

struct tagWND *__fastcall PointerList::DelegateCapture(PointerList *this, int a2)
{
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v4; // edx
  char *v6; // rcx
  char *v7; // rax
  struct tagPOINTERCAPTUREDATA *v8; // r8

  NodeById = FindNodeById((unsigned __int16)this, 0, 0);
  if ( !NodeById )
    return 0LL;
  v6 = (char *)NodeById + 96;
  v7 = (char *)*((_QWORD *)NodeById + 12);
  if ( v7 == v6 )
    return 0LL;
  do
  {
    v8 = (struct tagPOINTERCAPTUREDATA *)v7;
    if ( *((_DWORD *)v7 + 6) == a2 )
      break;
    v7 = *(char **)v7;
  }
  while ( v7 != v6 );
  if ( v7 == v6 )
    return 0LL;
  else
    return DelegateCaptureInt(v8, v4);
}
