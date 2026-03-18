/*
 * XREFs of ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C01BF740
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::FreeHostHandle(DXGSYNCOBJECT *this, int a2)
{
  struct _KTHREAD **v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *i; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx

  if ( (*((_BYTE *)this + 164) & 1) != 0 )
  {
    v4 = (struct _KTHREAD **)((char *)this + 32);
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v5 = (_QWORD **)((char *)this + 88);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 4) == a2 )
      {
        v7 = (_QWORD *)*i;
        if ( *(_QWORD **)(*i + 8LL) != i || (v8 = (_QWORD *)i[1], (_QWORD *)*v8 != i) )
          __fastfail(3u);
        *v8 = v7;
        v7[1] = v8;
        ExFreePoolWithTag(i, 0);
        break;
      }
    }
    DXGFASTMUTEX::Release(v4);
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
  }
}
