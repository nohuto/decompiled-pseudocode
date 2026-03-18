/*
 * XREFs of bMoveDevDragRect @ 0x1C02664B0
 * Callers:
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0025B2C (GreUpdateSprite.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?cIntersect@@YAKPEAU_RECTL@@0J@Z @ 0x1C025D63C (-cIntersect@@YAKPEAU_RECTL@@0J@Z.c)
 */

__int64 __fastcall bMoveDevDragRect(HDEV a1, LONG *a2, int a3)
{
  LONG v6; // edx
  LONG v7; // r9d
  HDEV v8; // r13
  LONG v9; // eax
  int v10; // r10d
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  void **v14; // r14
  unsigned int v15; // r13d
  struct _RECTL *v16; // rdi
  void **v17; // rdi
  __int64 v18; // rbx
  HDEV v20; // [rsp+90h] [rbp-78h] BYREF
  struct tagSIZE v21; // [rsp+98h] [rbp-70h] BYREF
  HDEV v22; // [rsp+A0h] [rbp-68h]
  char v23[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v25[16]; // [rsp+B8h] [rbp-50h] BYREF
  struct _RECTL v26; // [rsp+C8h] [rbp-40h] BYREF
  int v27; // [rsp+D8h] [rbp-30h]
  LONG v28; // [rsp+DCh] [rbp-2Ch]
  LONG v29; // [rsp+E0h] [rbp-28h]
  LONG v30; // [rsp+E4h] [rbp-24h]
  int v31; // [rsp+E8h] [rbp-20h]
  LONG v32; // [rsp+ECh] [rbp-1Ch]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  int v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+FCh] [rbp-Ch]
  int v37; // [rsp+100h] [rbp-8h]
  LONG v38; // [rsp+104h] [rbp-4h]

  v20 = a1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v25, ghsemDynamicModeChange);
  v24 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v23, (struct PDEVOBJ *)&v20);
  v6 = a2[1];
  v7 = a2[3];
  v8 = v20;
  v9 = *a2;
  v22 = v20;
  v10 = *((_DWORD *)v20 + 312);
  v26.left = v9;
  v26.top = v6;
  v28 = v6;
  v32 = v6;
  v11 = a2[2] - v10;
  v29 = a2[2];
  v27 = v11;
  v34 = v6 + v10;
  v33 = v11;
  v37 = v11;
  v36 = v7 - v10;
  v26.right = v9 + v10;
  v26.bottom = v7;
  v30 = v7;
  v31 = v9 + v10;
  v35 = v9 + v10;
  v38 = v7;
  v12 = cIntersect((struct _RECTL *)(v20 + 313), &v26);
  v13 = 0;
  if ( !v12 )
    goto LABEL_7;
  v14 = (void **)(v8 + 302);
  v15 = v12;
  v16 = &v26;
  do
  {
    v21.cx = v16->right - v16->left;
    v21.cy = v16->bottom - v16->top;
    if ( *v14 )
      GreUpdateSprite(
        a1,
        0LL,
        *v14,
        0LL,
        (struct tagPOINT *)&v26 + 2 * v13,
        &v21,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a3,
        0);
    ++v13;
    ++v14;
    ++v16;
  }
  while ( v13 < v15 );
  v8 = v22;
  if ( v13 < 4 )
  {
LABEL_7:
    v17 = (void **)(v8 + 2 * v13 + 302);
    v18 = 4 - v13;
    do
    {
      if ( *v17 )
        GreUpdateSprite(a1, 0LL, *v17, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, a3 != 0 ? 0x2000000 : 0, 0LL, 0LL, a3, 0);
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v23);
  SEMOBJ::vUnlock((SEMOBJ *)&v24);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v25);
  return 1LL;
}
