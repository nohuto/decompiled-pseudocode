/*
 * XREFs of ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x1C0273784
 * Callers:
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C0270F28 (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C02728A4 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vUnLockShadow(PANSURFLOCK *this)
{
  __int64 i; // rbx
  __int64 v3; // rdi
  char *v4; // rbp

  for ( i = 87LL; i >= 15; i -= 9LL )
  {
    v3 = 8LL;
    v4 = (char *)this + i;
    do
    {
      if ( v4[v3 + 9] == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (i + v3)));
        v4[v3 + 9] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  ShadowUnLock(*((struct _PANDEV **)this + 2));
}
