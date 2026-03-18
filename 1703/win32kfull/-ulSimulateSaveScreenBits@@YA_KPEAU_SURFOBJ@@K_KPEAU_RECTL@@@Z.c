/*
 * XREFs of ?ulSimulateSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C02857F0
 * Callers:
 *     ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C02828C0 (-MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ulSimulateSaveScreenBits(struct _SURFOBJ *a1, int a2, SURFOBJ *a3, struct _RECTL *a4)
{
  HDEV hdev; // rbx
  int v8; // ebp
  int v9; // r15d
  __int64 (__fastcall *v10)(DHPDEV, unsigned __int64, _QWORD); // rax
  HBITMAP Bitmap; // rax
  SURFOBJ *v12; // rax
  __int64 v13; // rdi
  HSURF hsurf; // rbx
  _DWORD v16[2]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  hdev = a1->hdev;
  if ( a2 )
  {
    v13 = 1LL;
    if ( a2 == 1 )
    {
      v16[0] = 0;
      v16[1] = 0;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE(a1) + 112) & 0x400) != 0 )
        (*((void (__fastcall **)(struct _SURFOBJ *, SURFOBJ *, _QWORD, _QWORD, struct _RECTL *, _DWORD *))hdev + 357))(
          a1,
          a3,
          0LL,
          0LL,
          a4,
          v16);
      else
        ((void (__fastcall *)(struct _SURFOBJ *, SURFOBJ *, _QWORD, _QWORD, struct _RECTL *, _DWORD *))EngCopyBits)(
          a1,
          a3,
          0LL,
          0LL,
          a4,
          v16);
    }
    hsurf = a3->hsurf;
    EngUnlockSurface(a3);
    EngDeleteSurface(hsurf);
  }
  else
  {
    v8 = a4->right - a4->left;
    v9 = a4->bottom - a4->top;
    v10 = (__int64 (__fastcall *)(DHPDEV, unsigned __int64, _QWORD))*((_QWORD *)hdev + 348);
    if ( !v10
      || (Bitmap = (HBITMAP)v10(a1->dhpdev, __PAIR64__(v9, v8), a1->iBitmapFormat)) == 0LL
      || (_DWORD)Bitmap == -1 )
    {
      Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(v9, v8), 0, a1->iBitmapFormat, 1u, 0LL);
    }
    v12 = EngLockSurface((HSURF)Bitmap);
    v13 = (__int64)v12;
    if ( v12 )
    {
      v17[0] = 0;
      v17[1] = 0;
      v17[2] = v8;
      v17[3] = v9;
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE(v12) + 112) & 0x400) != 0 )
        (*((void (__fastcall **)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, _DWORD *, struct _RECTL *))hdev + 357))(
          v13,
          a1,
          0LL,
          0LL,
          v17,
          a4);
      else
        ((void (__fastcall *)(__int64, struct _SURFOBJ *, _QWORD, _QWORD, _DWORD *, struct _RECTL *))EngCopyBits)(
          v13,
          a1,
          0LL,
          0LL,
          v17,
          a4);
    }
  }
  return v13;
}
