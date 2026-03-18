/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0272FC8
 * Callers:
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0270DF8 (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0272340 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0272914 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG top; // ecx
  LONG left; // eax
  LONG v7; // eax
  LONG right; // ecx
  LONG v9; // eax
  LONG bottom; // ecx
  LONG v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 i; // r14
  __int64 v23; // rdi
  HSEMAPHORE v24; // rcx
  int v25; // eax
  __int64 j; // rdi
  __int64 v27; // rsi
  char *v28; // r14
  __int128 v29; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v30[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v31; // [rsp+90h] [rbp+40h]
  __int64 v32; // [rsp+A0h] [rbp+50h]

  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v29) = left;
    v7 = a2->top;
    if ( top > v7 )
      v7 = top;
    right = a3->rclBounds.right;
    DWORD1(v29) = v7;
    v9 = a2->right;
    if ( right < v9 )
      v9 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v29) = v9;
    v11 = a2->bottom;
    if ( bottom < v11 )
      v11 = bottom;
    HIDWORD(v29) = v11;
  }
  else
  {
    v29 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v29);
  v12 = *((_QWORD *)this + 2);
  v30[0] = 0;
  v30[1] = 0;
  v13 = *(_QWORD *)(v12 + 64);
  v30[2] = *(_DWORD *)(v13 + 32);
  v30[3] = *(_DWORD *)(v13 + 36);
  ERECTL::operator*=(&v29, v30);
  memset((char *)this + 24, 0, 0x51uLL);
  if ( !ERECTL::bEmpty((ERECTL *)&v29) )
  {
    v14 = *((_QWORD *)this + 2);
    v15 = *(_DWORD *)(v14 + 768);
    v16 = *(_DWORD *)(v14 + 772);
    v17 = (int)((unsigned int)v29 / v15);
    v18 = (int)(DWORD1(v29) / v16);
    v32 = v18;
    v31 = (int)(HIDWORD(v29) / v16 + 1);
    v19 = v18 + 8 * v18 + 15;
    v20 = (int)(DWORD2(v29) / v15 + 1);
    *(_QWORD *)&v29 = v19;
LABEL_15:
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), UserRequest, 0, 0, 0LL);
    v21 = v31;
    for ( i = v18; i < v21; ++i )
    {
      v23 = v17;
      if ( v17 < v20 )
      {
        while ( 1 )
        {
          v24 = *(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (v19 + v23));
          v25 = a4 ? EngAcquireSemaphoreSharedNoWait(v24) : EngAcquireSemaphoreNoWait(v24);
          if ( v25 != 1 )
            break;
          *((_BYTE *)this + v19 + v23++ + 9) = 1;
          if ( v23 >= v20 )
          {
            v21 = v31;
            goto LABEL_24;
          }
        }
        for ( j = 87LL; j >= 15; j -= 9LL )
        {
          v27 = 8LL;
          v28 = (char *)this + j;
          do
          {
            if ( v28[v27 + 9] == 1 )
            {
              EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (j + v27)));
              v28[v27 + 9] = 0;
            }
            --v27;
          }
          while ( v27 >= 0 );
        }
        ShadowUnLockWait(*((struct _PANDEV **)this + 2));
        memset((char *)this + 24, 0, 0x51uLL);
        v18 = v32;
        v19 = v29;
        goto LABEL_15;
      }
LABEL_24:
      v19 += 9LL;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), 0);
  }
}
