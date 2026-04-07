/*
 * XREFs of ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x180092524
 * Callers:
 *     ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180094240 (-OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall CAnimationScheduler::FindAnimatingTarget(__int64 a1)
{
  CBaseObject *v1; // rbx
  __int64 i; // r8
  __int64 v4; // rcx
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rcx

  v1 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( *(_DWORD *)(v4 + 24) != 4 && *(_DWORD *)(v4 + 72) == 72 )
    {
      v5 = *(_DWORD *)(v4 + 112);
      v6 = 0LL;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v4 + 88);
        while ( 1 )
        {
          v8 = *(_QWORD *)(v7 + 8 * v6);
          if ( (*(_DWORD *)(v8 + 24) & 0xFFF) == 0x28 )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            goto LABEL_12;
        }
        if ( v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
          if ( v1 )
          {
            CBaseObject::Release((CBaseObject *)v8);
            CBaseObject::Release(v1);
            return 0LL;
          }
          v1 = (CBaseObject *)v8;
        }
      }
    }
LABEL_12:
    ;
  }
  return v1;
}
