/*
 * XREFs of bMoveDevDragRect @ 0x1C02656C0
 * Callers:
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall bMoveDevDragRect(HDEV a1, int *a2, int a3)
{
  HDEV v4; // r14
  int v6; // r9d
  int v7; // edx
  _DWORD *v8; // rsi
  int v9; // r10d
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // r8
  int *v13; // r9
  unsigned int v14; // r12d
  int v15; // r10d
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ebx
  HDEV v21; // r15
  int *v22; // rdi
  SFMLOGICALSURFACE **v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rbx
  SFMLOGICALSURFACE **v26; // rdi
  HDEV v28; // [rsp+88h] [rbp-49h] BYREF
  struct tagSIZE v29; // [rsp+90h] [rbp-41h] BYREF
  HDEV v30; // [rsp+98h] [rbp-39h]
  _BYTE v31[8]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE v33[8]; // [rsp+B0h] [rbp-21h] BYREF
  int v34; // [rsp+B8h] [rbp-19h] BYREF
  _DWORD v35[15]; // [rsp+BCh] [rbp-15h] BYREF

  v30 = a1;
  v4 = a1;
  v28 = a1;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v33, ghsemDynamicModeChange);
  v32 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v31, (struct PDEVOBJ *)&v28);
  v6 = a2[3];
  v7 = a2[1];
  v8 = v28;
  v9 = *((_DWORD *)v28 + 312);
  v34 = *a2;
  v35[2] = v6;
  v35[6] = v6;
  v35[14] = v6;
  v10 = a2[2] - v9;
  v35[5] = a2[2];
  v35[1] = v34 + v9;
  v35[10] = v7 + v9;
  v11 = v6 - v9;
  v35[7] = v34 + v9;
  v35[11] = v34 + v9;
  v35[0] = v7;
  v12 = v35;
  v35[3] = v10;
  v13 = v35;
  v35[4] = v7;
  v14 = 0;
  v35[9] = v10;
  v15 = 4;
  v35[8] = v7;
  v35[13] = v10;
  v35[12] = v11;
  do
  {
    v16 = v8[313];
    if ( *(v13 - 1) > v16 )
      v16 = *(v13 - 1);
    *(v12 - 1) = v16;
    v17 = v8[315];
    if ( v13[1] < v17 )
      v17 = v13[1];
    v12[1] = v17;
    if ( v16 < v17 )
    {
      v18 = v8[314];
      if ( *v13 > v18 )
        v18 = *v13;
      *v12 = v18;
      v19 = v8[316];
      if ( v13[2] < v19 )
        v19 = v13[2];
      v12[2] = v19;
      if ( v18 < v19 )
      {
        v12 += 4;
        ++v14;
      }
    }
    v13 += 4;
    --v15;
  }
  while ( v15 );
  v20 = 0;
  if ( !v14 )
    goto LABEL_21;
  v21 = v30;
  v22 = &v34;
  v23 = (SFMLOGICALSURFACE **)(v8 + 302);
  do
  {
    v29.cx = v22[2] - *v22;
    v29.cy = v22[3] - v22[1];
    if ( *v23 )
      GreUpdateSprite(
        v21,
        0LL,
        *v23,
        0LL,
        (struct tagPOINT *)&v35[4 * v20 - 1],
        &v29,
        0LL,
        0LL,
        0,
        0LL,
        0x2000000u,
        0LL,
        0LL,
        a3,
        0);
    ++v20;
    ++v23;
    v22 += 4;
  }
  while ( v20 < v14 );
  if ( v20 < 4 )
  {
    v4 = v30;
LABEL_21:
    v24 = v20 + 151LL;
    v25 = 4 - v20;
    v26 = (SFMLOGICALSURFACE **)&v8[2 * v24];
    do
    {
      if ( *v26 )
        GreUpdateSprite(v4, 0LL, *v26, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, a3 != 0 ? 0x2000000 : 0, 0LL, 0LL, a3, 0);
      ++v26;
      --v25;
    }
    while ( v25 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v31);
  SEMOBJ::vUnlock((SEMOBJ *)&v32);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v33);
  return 1LL;
}
