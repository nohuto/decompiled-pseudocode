/*
 * XREFs of ?PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0275DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C0275ED4 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PanUnlockDisplayArea(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rsi
  struct DHPDEV__ *v13; // r14
  HSEMAPHORE *v14; // rbx
  __int64 v15; // rdi
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v17[4]; // [rsp+30h] [rbp-10h] BYREF

  v16 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v16);
  v3 = *((_QWORD *)a1 + 8);
  v17[0] = 0;
  v17[1] = 0;
  v17[2] = *(_DWORD *)(v3 + 32);
  v17[3] = *(_DWORD *)(v3 + 36);
  ERECTL::operator*=(&v16, v17);
  if ( !ERECTL::bEmpty((ERECTL *)&v16) )
  {
    v4 = *((_DWORD *)a1 + 192);
    v5 = (int)((unsigned int)v16 / v4);
    v6 = DWORD2(v16) / v4;
    v7 = *((_DWORD *)a1 + 193);
    v8 = v6 + 1;
    v9 = (int)(DWORD1(v16) / v7);
    v10 = (int)(HIDWORD(v16) / v7 + 1);
    if ( v9 < v10 )
    {
      v11 = v5;
      v12 = v10 - v9;
      v13 = a1 + 16 * v9 + 2 * v5 + 2 * v9 + 30;
      do
      {
        if ( v11 < v8 )
        {
          v14 = (HSEMAPHORE *)v13;
          v15 = v8 - v11;
          do
          {
            if ( EngIsSemaphoreOwnedByCurrentThread(*v14) )
              EngReleaseSemaphore(*v14);
            ++v14;
            --v15;
          }
          while ( v15 );
        }
        v13 += 18;
        --v12;
      }
      while ( v12 );
    }
    ShadowUnLock((struct _PANDEV *)a1);
  }
}
