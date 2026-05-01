/*
 * XREFs of ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18002D720
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18002D540 (-_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackWindow::GetPropertyValue(CFallbackWindow *this, int a2, struct tagVARIANT *a3)
{
  SHORT v6; // ax
  BSTR v7; // rax
  int VisibleApp; // eax
  BSTR v9; // rax
  struct IImmersiveApplication *v10; // rcx
  struct IImmersiveApplication *v12[2]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  v12[1] = (struct IImmersiveApplication *)-2LL;
  VariantInit(a3);
  if ( a2 == 30003 )
  {
    a3->vt = 3;
    a3->lVal = 50000;
    return 0LL;
  }
  if ( a2 == 30010 )
  {
    a3->vt = 11;
    v6 = -(*((_DWORD *)this + 7) != 1);
LABEL_16:
    a3->iVal = v6;
    return 0LL;
  }
  if ( ((a2 - 30009) & 0xFFFFFFF7) == 0 )
  {
    a3->vt = 11;
    v6 = -1;
    goto LABEL_16;
  }
  if ( a2 == 30011 )
  {
    v7 = SysAllocString(L"ImmersiveBackground");
    if ( v7 )
    {
      a3->vt = 8;
      a3->llVal = (LONGLONG)v7;
    }
  }
  else if ( a2 == 30005 )
  {
    v12[0] = 0LL;
    VisibleApp = CFallbackWindow::_GetVisibleApp((CFallbackWindow *)((char *)this - 72), v12);
    if ( LoadStringW(&_ImageBase, (VisibleApp >= 0) + 9102, Buffer, 260) )
    {
      v9 = SysAllocString(Buffer);
      if ( v9 )
      {
        a3->vt = 8;
        a3->llVal = (LONGLONG)v9;
      }
    }
    v10 = v12[0];
    if ( v12[0] )
    {
      v12[0] = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return 0LL;
}
