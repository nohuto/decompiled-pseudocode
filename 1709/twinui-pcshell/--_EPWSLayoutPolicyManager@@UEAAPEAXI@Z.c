/*
 * XREFs of ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x1800F0380
 * Callers:
 *     <none>
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
PWSLayoutPolicyManager *__fastcall PWSLayoutPolicyManager::`vector deleting destructor'(
        PWSLayoutPolicyManager *this,
        char a2)
{
  OLECHAR *v4; // rcx
  OLECHAR *v5; // rcx
  OLECHAR *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v4 = (OLECHAR *)*((_QWORD *)this + 15);
  if ( v4 )
    SysFreeString(v4);
  v5 = (OLECHAR *)*((_QWORD *)this + 14);
  if ( v5 )
    SysFreeString(v5);
  v6 = (OLECHAR *)*((_QWORD *)this + 13);
  if ( v6 )
    SysFreeString(v6);
  if ( VariantClear((VARIANTARG *)((char *)this + 80)) < 0 )
    _com_issue_error();
  v7 = (void *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    CoTaskMemFree(v7);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CoTaskMemFree(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 7) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
