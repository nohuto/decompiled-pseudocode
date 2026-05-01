/*
 * XREFs of ?SetZOrder@CDropFeedbackItem@@UEAAJPEAUIDropFeedbackItem@@_N@Z @ 0x1802F6A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedbackItem::SetZOrder(CDropFeedbackItem *this, struct IDropFeedbackItem *a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // si
  int v7; // edi
  __int64 v8; // rdi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  v11 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v7 = (**(__int64 (__fastcall ***)(struct IDropFeedbackItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36,
         &v10);
  if ( v7 >= 0 )
  {
    v8 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v7 >= 0 )
  {
    v3 = v11;
LABEL_6:
    LOBYTE(a3) = v4;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 23) + 144LL))(
           *((_QWORD *)this + 23),
           v3,
           a3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v7;
}
