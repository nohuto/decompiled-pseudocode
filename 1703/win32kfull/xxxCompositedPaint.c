/*
 * XREFs of xxxCompositedPaint @ 0x1C020BA84
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004D7D0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020B978 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  __int64 v2; // rdx
  int v3; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v5; // rbx
  struct tagRECT *v6; // r14
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int64 v12; // rax
  HRGN v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v20; // [rsp+98h] [rbp+10h] BYREF
  char v21; // [rsp+A0h] [rbp+18h] BYREF
  struct tagPOINT v22; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, a1, 0xB10u, 1);
  v3 = xxxCompositedTraverse(a1, v2);
  SetOrClrWF(0, a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, atomLayer, 1);
  v5 = Prop;
  if ( Prop )
  {
    v6 = (struct tagRECT *)&Prop[1];
    v7 = IsRectEmptyInl(Prop + 1);
    v11 = v7;
    if ( !v3 && !v7 )
    {
      if ( !*(_QWORD *)&v5[2].right )
        *(_QWORD *)&v5[2].right = CreateEmptyRgnPublic(v9, v8, v10);
      v12 = *(_QWORD *)&v5[2].right;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v6);
          GreCombineRgn(*(_QWORD *)&v5[2].right, *(_QWORD *)&v5[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v5[2].right = 1LL;
      }
      v11 = 1;
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
    v13 = *(HRGN *)&v5[2].right;
    if ( v13 )
    {
      xxxInternalInvalidate(a1, v13, 1157LL);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v5[2].right);
      *(_QWORD *)&v5[2].right = 0LL;
    }
    if ( !v11 )
    {
      v14 = *(_QWORD *)&v5->left;
      if ( (*((_BYTE *)a1 + 66) & 8) != 0 )
      {
        v22 = 0LL;
        v15 = GreSelectBitmap(*(_QWORD *)ghdcMem, v14);
        v20.cx = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
        v20.cy = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 32LL),
          a1,
          v16,
          0LL,
          0LL,
          &v20,
          *(HDC *)ghdcMem,
          &v22,
          0,
          0LL,
          0x40000000u,
          v6);
        v17 = v15;
      }
      else
      {
        v18 = GreSelectBitmap(*(_QWORD *)ghdcMem, v14);
        SetOrClrWF(0, a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v6->left,
          v6->top,
          v6->right - v6->left,
          v6->bottom - v6->top,
          *(HDC *)ghdcMem,
          v6->left,
          v6->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, a1, 0xB20u, 1);
        v17 = v18;
      }
      GreSelectBitmap(*(_QWORD *)ghdcMem, v17);
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
  }
  if ( !v21 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v21);
  }
}
