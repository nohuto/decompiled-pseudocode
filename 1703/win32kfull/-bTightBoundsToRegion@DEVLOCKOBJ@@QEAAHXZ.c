/*
 * XREFs of ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C013C3F4
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0092270 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall DEVLOCKOBJ::bTightBoundsToRegion(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-30h]
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v12; // [rsp+48h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 36);
    if ( (v4 & 0x4000) != 0 && (v4 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(v1 + 488) )
      {
        if ( *(_DWORD *)(v1 + 504) )
        {
          v5 = *(_QWORD *)(v1 + 1584);
          v12 = *(struct _RECTL *)(v1 + 1496);
          if ( !ERECTL::bEmpty((ERECTL *)&v12) )
          {
            v3 = 0;
            RGNMEMOBJ::RGNMEMOBJ(&v9, 1LL);
            if ( v9 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v9, &v12);
              *(_OWORD *)(*((_QWORD *)this + 4) + 1496LL) = 0LL;
              if ( v5 )
              {
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
                v6 = *(_QWORD *)(*((_QWORD *)this + 4) + 1584LL);
                v8 = v6;
                if ( v11[0]
                  && v6
                  && RGNOBJ::bMerge((RGNOBJ *)v11, (struct RGNOBJ *)&v8, (struct RGNOBJ *)&v9, BYTE2(gafjRgnOp)) )
                {
                  RGNOBJ::vSwap((RGNOBJ *)v11, (struct RGNOBJ *)&v8);
                  v3 = 1;
                  *(_QWORD *)(*((_QWORD *)this + 4) + 1584LL) = v8;
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)this + 4) + 1584LL) = v9;
                v9 = 0LL;
                v3 = 1;
              }
            }
            if ( v10 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
          }
        }
      }
    }
  }
  return v3;
}
