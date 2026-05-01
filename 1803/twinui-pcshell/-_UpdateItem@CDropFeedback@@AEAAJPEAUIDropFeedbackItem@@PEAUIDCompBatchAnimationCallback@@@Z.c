/*
 * XREFs of ?_UpdateItem@CDropFeedback@@AEAAJPEAUIDropFeedbackItem@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EF9E4
 * Callers:
 *     ?UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EF200 (-UpdateDropFeedback@CDropFeedback@@UEAAJPEAUIDropFeedbackArray@@PEAUIDCompBatchAnimationCallback.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z @ 0x1802EF3FC (-_FindItem@CDropFeedback@@AEAAJKPEAPEAUIDropFeedbackItem@@@Z.c)
 */

__int64 __fastcall CDropFeedback::_UpdateItem(
        CDropFeedback *this,
        struct IDropFeedbackItem *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  int v5; // eax
  int Item; // r12d
  bool v7; // si
  int v8; // eax
  int v9; // eax
  struct IDropFeedbackItem *v10; // rbx
  int v11; // r15d
  int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  double v16; // xmm0_8
  int v17; // esi
  unsigned int v18; // edi
  __int64 v19; // rbx
  struct IDCompBatchAnimationCallback *v21; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-48h] BYREF
  struct IDropFeedbackItem *v23; // [rsp+40h] [rbp-40h] BYREF
  RECT rc; // [rsp+48h] [rbp-38h] BYREF
  RECT rc2; // [rsp+58h] [rbp-28h] BYREF

  v21 = a3;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v5 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
  Item = CDropFeedback::_FindItem(this, v5, &v23);
  if ( Item < 0 )
    goto LABEL_24;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 96LL))(a2);
  if ( v8 < 0 )
    goto LABEL_24;
  if ( v8 <= 1 )
  {
LABEL_6:
    v9 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 104LL))(a2);
    v10 = v23;
    v11 = v9;
    v12 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v23 + 104LL))(v23);
    v13 = v12 & 0x1E000 | v11;
    if ( v13 != v12 )
    {
      (*(void (__fastcall **)(struct IDropFeedbackItem *, _QWORD))(*(_QWORD *)v10 + 112LL))(v10, v13);
      v7 = ((v13 ^ v12) & 0xFF9FEECF) != 0;
    }
    v15 = *(_QWORD *)a2;
    *(_QWORD *)&rc.left = 0LL;
    *(_QWORD *)&rc.right = 0LL;
    (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(v15 + 120))(a2, &rc);
    *(_QWORD *)&rc2.left = 0LL;
    *(_QWORD *)&rc2.right = 0LL;
    (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v10 + 120LL))(v10, &rc2);
    if ( !IsRectEmpty(&rc) && !EqualRect(&rc, &rc2) )
    {
      (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v10 + 128LL))(v10, &rc);
      v7 = 1;
    }
    v16 = (*(double (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 144LL))(a2);
    if ( v16 != (*(double (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v10 + 144LL))(v10) )
    {
      (*(void (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)v10 + 136LL))(v10);
      v7 = 1;
    }
    if ( !v7 )
      goto LABEL_24;
    goto LABEL_17;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
      goto LABEL_24;
    goto LABEL_6;
  }
  v14 = *(_QWORD *)a2;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(v14 + 120))(a2, &rc);
  v10 = v23;
  *(_QWORD *)&rc2.left = 0LL;
  *(_QWORD *)&rc2.right = 0LL;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v23 + 120LL))(v23, &rc2);
  if ( IsRectEmpty(&rc) || EqualRect(&rc, &rc2) )
    goto LABEL_24;
  (*(void (__fastcall **)(struct IDropFeedbackItem *, RECT *))(*(_QWORD *)v10 + 128LL))(v10, &rc);
LABEL_17:
  Item = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *, struct IDCompBatchAnimationCallback *))(*(_QWORD *)v10 + 160LL))(
           v10,
           v21);
  if ( ((*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 104LL))(a2) & 8) != 0 )
  {
    v17 = (*(__int64 (__fastcall **)(struct IDropFeedbackItem *))(*(_QWORD *)a2 + 80LL))(a2);
    (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16), &v22);
    v18 = 0;
    if ( v22 )
    {
      while ( 1 )
      {
        v19 = *((_QWORD *)this + 16);
        v21 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IDCompBatchAnimationCallback **))(*(_QWORD *)v19 + 32LL))(
               v19,
               v18,
               &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
               &v21) >= 0
          && (*(unsigned int (__fastcall **)(struct IDCompBatchAnimationCallback *))(*(_QWORD *)v21 + 80LL))(v21) == v17 )
        {
          break;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        if ( ++v18 >= v22 )
          goto LABEL_24;
      }
      (*(void (__fastcall **)(struct IDCompBatchAnimationCallback *))(*(_QWORD *)v21 + 184LL))(v21);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return (unsigned int)Item;
}
