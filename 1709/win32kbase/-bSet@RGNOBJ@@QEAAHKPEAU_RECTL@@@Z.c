/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 top; // r8
  unsigned int v13; // esi
  int right; // ecx
  LONG bottom; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int16 *v28; // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
  __int16 *v30; // [rsp+30h] [rbp-20h] BYREF
  int v31; // [rsp+38h] [rbp-18h]
  __int16 *v32; // [rsp+40h] [rbp-10h] BYREF
  int v33; // [rsp+48h] [rbp-8h]
  unsigned int v35; // [rsp+88h] [rbp+38h]
  unsigned int v36; // [rsp+88h] [rbp+38h]

  v31 = 0;
  v3 = a2;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30, v5, v6, v7);
  v29 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v28, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v28, v8, v9, v10);
  if ( !v30 || !v28 )
    goto LABEL_21;
  v13 = 1;
  if ( (unsigned int)v3 >= 0x14 )
  {
    v33 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v32, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v32, v19, v20, v21);
    v24 = (unsigned int)v3 >> 1;
    v25 = v3 - ((unsigned int)v3 >> 1);
    v36 = v24;
    if ( v32
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v30, v24, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v28, v25, &a3[v36]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v32, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v30, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v32);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v32, v26, v27);
      goto LABEL_14;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v32, v22, v23);
LABEL_21:
    v13 = 0;
    goto LABEL_14;
  }
  v11 = 0LL;
  v35 = 0;
  if ( (_DWORD)v3 )
  {
    do
    {
      right = a3->right;
      if ( a3->left < right )
      {
        top = (unsigned int)a3->top;
        bottom = a3->bottom;
        if ( (int)top < bottom
          && a3->left >= -134217728
          && right <= 0x7FFFFFF
          && (int)top >= -134217728
          && bottom <= 0x7FFFFFF )
        {
          if ( (_DWORD)v11 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v30, a3);
            RGNOBJ::iCombine((RGNOBJ *)&v28, this, (struct RGNOBJ *)&v30, 2);
            RGNOBJ::vSwap(this, (struct RGNOBJ *)&v28);
            v11 = v35;
          }
          else
          {
            RGNOBJ::vSet(this, a3);
            v11 = 1LL;
            v35 = 1;
          }
        }
      }
      ++a3;
      --v3;
    }
    while ( v3 );
  }
LABEL_14:
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v28, v11, top);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v30, v16, v17);
  return v13;
}
