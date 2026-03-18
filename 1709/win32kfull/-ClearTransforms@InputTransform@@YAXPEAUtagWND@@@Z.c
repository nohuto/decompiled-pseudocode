/*
 * XREFs of ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x1C00607A8
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall InputTransform::ClearTransforms(InputTransform *this, struct tagWND *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  CompositionObject *v9; // rcx

  v3 = *((_QWORD *)this + 44);
  if ( v3 )
  {
    v5 = (_QWORD **)(v3 + 8);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      v7 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      Win32FreePool(v6, v7, a3);
    }
    v9 = *(CompositionObject **)(*((_QWORD *)this + 44) + 96LL);
    if ( v9 )
    {
      CompositionObject::Release(v9);
      *(_QWORD *)(*((_QWORD *)this + 44) + 96LL) = 0LL;
    }
    Win32FreePool(*((_QWORD *)this + 44), a2, a3);
    *((_QWORD *)this + 44) = 0LL;
  }
}
