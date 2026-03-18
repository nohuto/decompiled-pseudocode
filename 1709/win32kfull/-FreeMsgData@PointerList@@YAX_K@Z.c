/*
 * XREFs of ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01F5DA8
 * Callers:
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F648C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z @ 0x1C01F5E50 (-FreeMsgDataInt@@YAXPEAUtagPOINTERMSGDATA@@@Z.c)
 *     ?FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F5EF4 (-FreeNode@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01F61C0 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

void __fastcall PointerList::FreeMsgData(PointerList *this)
{
  PointerList *v1; // rdi
  __int64 *v2; // rbx
  PointerList **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v7; // rax
  __int64 **v8; // rcx

  v1 = *(PointerList **)this;
  v2 = (__int64 *)*((_QWORD *)this + 5);
  if ( *(PointerList **)(*(_QWORD *)this + 8LL) != this || (v3 = (PointerList **)*((_QWORD *)this + 1), *v3 != this) )
    __fastfail(3u);
  *v3 = v1;
  *((_QWORD *)v1 + 1) = v3;
  FreeMsgDataInt(this);
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 4) == 1 )
    {
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)(v2 + 4));
      ReleasePointerCaptureInt((struct tagPOINTERCAPTUREINFO *)(v2 + 7));
    }
    if ( (*((_DWORD *)v2 + 4))-- == 1 )
    {
      v7 = (__int64 *)*v2;
      if ( *(__int64 **)(*v2 + 8) != v2 || (v8 = (__int64 **)v2[1], *v8 != v2) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = (__int64)v8;
      Win32FreePool(v2, v4, v5);
    }
  }
  if ( *(PointerList **)v1 == v1 && *((_DWORD *)v1 - 19) == 3 )
    FreeNode((PointerList *)((char *)v1 - 112));
}
