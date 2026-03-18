/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC
 * Callers:
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  int v6; // r8d
  LONG *p_top; // rsi
  int v8; // ecx
  struct _RECTL *v9; // rdx
  int v10; // eax
  int v11; // r10d
  unsigned int v13; // esi
  unsigned int v14; // ebx
  __int16 *v15; // [rsp+20h] [rbp-30h] BYREF
  int v16; // [rsp+28h] [rbp-28h]
  __int16 *v17; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+38h] [rbp-18h]
  __int16 *v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+48h] [rbp-8h]
  int v23; // [rsp+88h] [rbp+38h]

  v18 = 0;
  v3 = a2;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
  v16 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
  if ( !v17 || !v15 )
    goto LABEL_22;
  v5 = 1;
  if ( (unsigned int)v3 >= 0x14 )
  {
    v20 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v19, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
    v13 = (unsigned int)v3 >> 1;
    v14 = v3 - ((unsigned int)v3 >> 1);
    if ( v19
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v17, v13, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v15, v14, &a3[v13]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v19, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v17, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v19);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v19);
      goto LABEL_15;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v19);
LABEL_22:
    v5 = 0;
    goto LABEL_15;
  }
  v6 = 0;
  v23 = 0;
  if ( (_DWORD)v3 )
  {
    p_top = &a3->top;
    do
    {
      v8 = p_top[1];
      v9 = (struct _RECTL *)(p_top - 1);
      v10 = *(p_top - 1);
      if ( v10 < v8 )
      {
        v11 = p_top[2];
        if ( *p_top < v11 && v10 >= -134217728 && v8 <= 0x7FFFFFF && *p_top >= -134217728 && v11 <= 0x7FFFFFF )
        {
          if ( v6 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v17, v9);
            RGNOBJ::iCombine((RGNOBJ *)&v15, this, (struct RGNOBJ *)&v17, 2);
            RGNOBJ::vSwap(this, (struct RGNOBJ *)&v15);
            v6 = v23;
          }
          else
          {
            RGNOBJ::vSet(this, v9);
            v6 = 1;
            v23 = 1;
          }
        }
      }
      p_top += 4;
      --v3;
    }
    while ( v3 );
  }
LABEL_15:
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v15);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v17);
  return v5;
}
