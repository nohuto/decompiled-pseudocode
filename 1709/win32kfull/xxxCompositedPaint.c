/*
 * XREFs of xxxCompositedPaint @ 0x1C020D040
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009FE90 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020CEA0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v7; // rbx
  struct tagRECT *v8; // r14
  BOOL v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edi
  __int64 v14; // rax
  HRGN v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v22; // [rsp+98h] [rbp+10h] BYREF
  struct tagPOINT v23; // [rsp+A0h] [rbp+18h] BYREF
  char v24; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, a1, 0xB10u, 1);
  v5 = xxxCompositedTraverse(a1, v2, v3, v4);
  SetOrClrWF(0, a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, atomLayer, 1);
  v7 = Prop;
  if ( Prop )
  {
    v8 = (struct tagRECT *)&Prop[1];
    v9 = IsRectEmptyInl(Prop + 1);
    v13 = v9;
    if ( !v5 && !v9 )
    {
      if ( !*(_QWORD *)&v7[2].right )
        *(_QWORD *)&v7[2].right = CreateEmptyRgnPublic(v11, v10, v12);
      v14 = *(_QWORD *)&v7[2].right;
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v8);
          GreCombineRgn(*(_QWORD *)&v7[2].right, *(_QWORD *)&v7[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v7[2].right = 1LL;
      }
      v13 = 1;
      *(_QWORD *)&v8->left = 0LL;
      *(_QWORD *)&v8->right = 0LL;
    }
    v15 = *(HRGN *)&v7[2].right;
    if ( v15 )
    {
      xxxInternalInvalidate(a1, v15, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v7[2].right);
      *(_QWORD *)&v7[2].right = 0LL;
    }
    if ( !v13 )
    {
      v16 = *(_QWORD *)&v7->left;
      if ( (*((_BYTE *)a1 + 66) & 8) != 0 )
      {
        v23 = 0LL;
        v17 = GreSelectBitmap(*(_QWORD *)ghdcMem, v16);
        v22.cx = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
        v22.cy = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 32LL),
          a1,
          v18,
          0LL,
          0LL,
          &v22,
          *(HDC *)ghdcMem,
          &v23,
          0,
          0LL,
          0x40000000u,
          v8);
        v19 = v17;
      }
      else
      {
        v20 = GreSelectBitmap(*(_QWORD *)ghdcMem, v16);
        SetOrClrWF(0, a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v8->left,
          v8->top,
          v8->right - v8->left,
          v8->bottom - v8->top,
          *(HDC *)ghdcMem,
          v8->left,
          v8->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, a1, 0xB20u, 1);
        v19 = v20;
      }
      GreSelectBitmap(*(_QWORD *)ghdcMem, v19);
      *(_QWORD *)&v8->left = 0LL;
      *(_QWORD *)&v8->right = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
}
