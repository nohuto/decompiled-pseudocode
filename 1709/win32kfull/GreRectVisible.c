/*
 * XREFs of GreRectVisible @ 0x1C00F7654
 * Callers:
 *     NtGdiRectVisible @ 0x1C00F7600 (NtGdiRectVisible.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001731C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B860 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v3; // ebx
  struct REGION *v4; // rax
  struct _RECTL v5; // xmm0
  __int64 v6; // rcx
  LONG right; // eax
  LONG left; // edx
  DC *v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct REGION *v11; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+90h] [rbp-70h]
  int v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+9Ch] [rbp-64h]
  char v20[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-38h]
  struct _RECTL v22; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v23; // [rsp+150h] [rbp+50h] BYREF
  struct _POINTL v24; // [rsp+158h] [rbp+58h] BYREF
  LONG v25; // [rsp+160h] [rbp+60h]
  LONG bottom; // [rsp+164h] [rbp+64h]
  LONG v27; // [rsp+168h] [rbp+68h]
  LONG v28; // [rsp+16Ch] [rbp+6Ch]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v17 = 0LL;
    v18 = 0;
    v19 = 0;
    v3 = 1;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v10, 1);
    if ( (v16[24] & 1) == 0 )
    {
LABEL_5:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
      goto LABEL_6;
    }
    v4 = XDCOBJ::prgnEffRao(v10);
    v5 = *a2;
    v11 = v4;
    v22 = v5;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v10, -2147483132);
    if ( (*(_DWORD *)(v12[0] + 32LL) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)v12, &v22);
      EXFORMOBJ::bXform((EXFORMOBJ *)v12, (struct _POINTL *)&v22);
      v6 = *((_DWORD *)v10[0] + 10) & 1LL;
      v22.left += *((_DWORD *)v10[0] + 2 * v6 + 358);
      v22.right += *((_DWORD *)v10[0] + 2 * v6 + 358);
      v22.top += *((_DWORD *)v10[0] + 2 * v6 + 359);
      v22.bottom += *((_DWORD *)v10[0] + 2 * v6 + 359);
      v3 = RGNOBJ::bInside((RGNOBJ *)&v11, &v22) == 2;
      goto LABEL_5;
    }
    right = a2->right;
    left = a2->left;
    v23.y = a2->top;
    v24.x = right;
    v24.y = v23.y;
    v25 = right;
    bottom = a2->bottom;
    v28 = bottom;
    v23.x = left;
    v27 = left;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v20);
    if ( v21 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v20, (struct EXFORMOBJ *)v12, &v23)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v20, (struct EXFORMOBJ *)v12, &v24, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v20) )
      {
        v15 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v20, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
        if ( v14 && v13[0] )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v13, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v14, BYTE1(gafjRgnOp))
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v13) != 1 )
          {
            v3 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v3 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
        goto LABEL_13;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v3 = -1;
LABEL_13:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
    goto LABEL_5;
  }
  EngSetLastError(6u);
  v3 = -1;
LABEL_6:
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v3;
}
