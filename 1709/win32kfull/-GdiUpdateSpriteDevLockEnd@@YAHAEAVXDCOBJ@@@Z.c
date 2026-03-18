/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0259A30
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00277E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C0258954 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C025D6E0 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // ebx
  struct _RECTL v8; // xmm0
  unsigned int i; // esi
  struct _RECTL *v10; // r8
  struct REGION *v12; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v13; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h]
  struct _RECTL v17; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[4]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v19; // [rsp+74h] [rbp-8Ch]
  char v20; // [rsp+84h] [rbp-7Ch]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+F0h] [rbp-10h]
  __int64 v25; // [rsp+100h] [rbp+0h]
  unsigned int v26; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v27[20]; // [rsp+114h] [rbp+14h] BYREF

  HDEV = (HDEV)UserGetHDEV(a1);
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v17, 4LL) )
  {
LABEL_28:
    REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1584LL));
    *(_QWORD *)(*(_QWORD *)a1 + 1584LL) = 0LL;
    return 0LL;
  }
  v13 = HDEV;
  if ( ((_DWORD)HDEV[8] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v15, v3, v4, v5);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v14, (struct PDEVOBJ *)&v13);
    v12 = *(struct REGION **)(*(_QWORD *)a1 + 1584LL);
    if ( !v12 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v17);
      goto LABEL_26;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v12) == 1 )
      goto LABEL_26;
    RGNOBJ::bOffset((RGNOBJ *)&v12, (struct _POINTL *)(v6 + 8 * ((*(_DWORD *)(v6 + 40) & 1) + 179LL)));
    v22 = 0LL;
    v23 = 0;
    v25 = 0LL;
    v21 = 0LL;
    v24 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v18, v12, (struct ERECTL *)&v17, 1);
    if ( v20 )
    {
      if ( v20 != 1 )
      {
        if ( v20 == 3 )
        {
          v7 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v18, 0, 0, 4u, 0x14u);
LABEL_13:
          if ( !v7 )
            goto LABEL_15;
          do
          {
            v7 = XCLIPOBJ::bEnum((XCLIPOBJ *)v18, 0x144u, (char *)&v26, 0LL);
LABEL_15:
            for ( i = 0; i < v26; ++i )
            {
              v10 = (struct _RECTL *)&v27[i];
              if ( v10->left < v17.left )
                v10->left = v17.left;
              if ( v10->right > v17.right )
                v10->right = v17.right;
              if ( v10->top < v17.top )
                v10->top = v17.top;
              if ( v10->bottom > v17.bottom )
                v10->bottom = v17.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v10);
            }
          }
          while ( v7 );
        }
LABEL_26:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v14);
        if ( v16 )
          *(_BYTE *)(v16 + 328) = v15[0];
        goto LABEL_28;
      }
      v8 = v19;
    }
    else
    {
      v8 = v17;
    }
    v27[0] = v8;
    v26 = 1;
    v7 = 0;
    goto LABEL_13;
  }
  return 0LL;
}
