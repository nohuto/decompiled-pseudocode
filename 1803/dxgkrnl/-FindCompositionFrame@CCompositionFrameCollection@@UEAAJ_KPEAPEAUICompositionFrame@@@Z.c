/*
 * XREFs of ?FindCompositionFrame@CCompositionFrameCollection@@UEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1C0010E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrameCollection::FindCompositionFrame(
        CCompositionFrameCollection *this,
        __int64 a2,
        struct ICompositionFrame **a3)
{
  char *v3; // rdi
  unsigned int v5; // esi
  char *v8; // r12
  char *v9; // rbp
  struct ICompositionFrame *v10; // rbx
  unsigned __int64 (__fastcall *v11)(CCompositionFrame *__hidden); // rax
  __int64 v12; // rax

  v3 = (char *)this + 32;
  v5 = -1073741275;
  *a3 = 0LL;
  ExAcquirePushLockSharedEx((char *)this + 32, 0LL);
  v3[8] = 0;
  v8 = (char *)this + 16;
  v9 = (char *)*((_QWORD *)this + 3);
  if ( v9 != (char *)this + 16 )
  {
    while ( 1 )
    {
      v10 = (struct ICompositionFrame *)(v9 - 16);
      v11 = *(unsigned __int64 (__fastcall **)(CCompositionFrame *__hidden))(*((_QWORD *)v9 - 2) + 72LL);
      v12 = v11 == CCompositionFrame::GetFrameId ? *((_QWORD *)v10 + 10) : v11((CCompositionFrame *)(v9 - 16));
      if ( v12 == a2 )
        break;
      v9 = (char *)*((_QWORD *)v9 + 1);
      if ( v9 == v8 )
        goto LABEL_6;
    }
    (**(void (__fastcall ***)(_QWORD *))v10)((_QWORD *)v9 - 2);
    v5 = 0;
    *a3 = v10;
  }
LABEL_6:
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  return v5;
}
